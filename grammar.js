const PREC = {
  lambda_binding: 1,
  infix: 2,
  call: 3,
  field: 3,
};

module.exports = grammar({
    name: 'fuse',

    externals: $ => [
        $._newline,
        $._indent,
        $._dedent,
    ],

    word: $ => $.identifier,

    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.function_definition,
            $.variant_definition,
            $.record_definition,
            $.tuple_definition,
            $.type_function_definitions,
        ),

        variant_definition: $ => seq(
            'type',
            field('name', $.identifier),
            field('type_parameters', optional($.type_param_clause)),
            ':',
            $._indent,
            field('values', repeat1($.variant_type_value)),
            $._dedent,
        ),

        variant_type_value: $ => seq(
            field('name', $.identifier),
            optional($.variant_type_value_args)
        ),

        variant_type_value_args: $ => seq(
            '(',
            choice(
                $.type_list,
                $.parameter_list,
            ),
            ')',
        ),

        record_definition: $ => seq(
            'type',
            field('name', $.identifier),
            field('type_parameters', optional($.type_param_clause)),
            ':',
            $._indent,
            field('fields', repeat1($.record_type_field)),
            $._dedent,
        ),

        record_type_field: $ => $.param,

        tuple_definition: $ => seq(
            'type',
            field('name', $.identifier),
            field('type_parameters', optional($.type_param_clause)),
            '(',
            field('fields', $.type_list),
            ')',
        ),

        type_function_definitions: $ => seq(
            'impl',
            field('type', $.identifier),
            field('type_parameters', optional($.type_param_clause)),
            ':',
            $._indent,
            field('methods', repeat1($.function_definition)),
            $._dedent,
        ),

        function_definition: $ => seq(
            'fun',
            field('name', $.identifier),
            field('type_parameters', optional($.type_param_clause)),
            '(',
            field('parameters', optional($.parameter_list)),
            ')',
            '->',
            field('type', $._type),
            $.block,
        ),

        // Types 

        type_param: $ => field('name', $.identifier),
        type_param_clause: $ => seq(
            '[',
            commaSep1($.type_param),
            ']',
        ),


        type_list: $ => commaSep1(field('type', $._type)),
        type_arguments: $ => seq(
            '[',
            $.type_list,
            ']'
        ),

        _type: $ => choice(
            $.function_type,
            $.tuple_type,
            $._simple_type,
        ),

        function_type: $ => prec.right(seq(
            field('parameter_types', $._type),
            '->',
            field('return_type', $._type)
        )),

        tuple_type: $ => seq(
            '(',
            $.type_list,
            ')',
        ),

        _simple_type: $ => choice(
            $.generic_type,
            $.identifier,
        ),

        generic_type: $ => seq(
            field('type', $._simple_type),
            field('type_arguments', $.type_arguments)
        ),

        param: $ => seq(
            field('name', $.identifier),
            ':',
            field('type', $._type),
        ),

        parameter_list: $ => commaSep1($.param),

        // Expressions
        block: $ => seq(
            $._indent,
            field('expressions', repeat1($.expression)),
            $._dedent,
        ),

        expression: $ => choice(
            $.let_expression,
            $.match_expression,
            $.lambda_expression,
            $.primary_expression,
        ),

        inline_block_expression: $ => seq(
            '{',
            $.block,
            '}',
        ),

        inline_expression: $ => choice(
            $.lambda_expression,
            $.primary_expression,
            $.inline_block_expression,
        ),

        let_expression: $ => seq(
            'let',
            field('name', $.identifier),
            optional(seq(':', field('type', $._type))),
            '=',
            $.inline_expression,
        ),

        binding: $ => prec(PREC.lambda_binding, seq(
            field('name', $.identifier),
            optional(seq(':', field('type', $._type))),
        )),

        bindings: $ => seq(
            '(',
            commaSep($.binding),
            ')',
        ),

        lambda_expression: $ => seq(
            choice(
                $.bindings,
                field('name', $.identifier),
            ),
            optional(
                seq(
                    '->',
                    field('type', $._type),
                )
            ),
            '=>',
            $.inline_expression,
        ),

        pattern: $ => choice(
            seq(field('type', $.identifier), $.patterns),
            $.patterns,
            $.literal,
            $.identifier,
            '_',
        ),

        patterns: $ => seq('(', commaSep(field('pattern', $.pattern)), ')'),

        case: $ => seq(
            sep1('|', $.pattern),
            '=>',
            $.inline_expression,
        ),

        match_expression: $ => seq(
            'match',
            $.primary_expression,
            ':',
            $._indent,
            repeat1($.case),
            $._dedent,
        ),

        primary_expression: $ => choice(
            $.literal,
            $.identifier,
            $._call_expression,
            $._proj_expression,
            $._parenthesized_expression,
            $.infix_expression,
        ),

        arguments: $ => seq(
            '(',
            commaSep(choice($.primary_expression, $.lambda_expression)),
            ')'
        ),

        _call_expression: $ => prec(PREC.call, seq(
            field('function', $.primary_expression),
            field('type_arguments', optional($.type_arguments)),
            field('arguments', $.arguments),
        )),

        infix_expression: $ => prec.left(PREC.infix, seq(
          field('left', $.primary_expression),
          field('operator', $.operator_identifier),
          field('right', $.primary_expression)
        )),

        _proj_expression: $ => prec(PREC.field, seq(
            field('value', $.primary_expression),
            repeat1(seq('.', field('field', $.identifier)))
        )),

        _parenthesized_expression: $ => seq(
          '(',
          $.primary_expression,
          ')'
        ),

        // Lexical tokens

        operator_identifier: $ => choice(
            '+',
            '-',
            '*',
            '/',
            '%',
            '<=',
            '<',
            '>',
            '>=',
            '==',
            '!=',
            '&&',
            '||',
        ),

        identifier: $ => /[a-zA-Z0-9_]+/,

        literal: $ => choice(
            $.boolean,
            $.integer,
            $.string,
        ),

        boolean: $ => choice('true', 'false'),
        integer: $ => /[\d\.]+/,
        string: $ => seq(
            '"',
            repeat(choice(
                token.immediate(prec(1, /[^"\\]+/)),
                $.escape_sequence
            )),
            '"'
        ),

        escape_sequence: $ => token.immediate(seq(
            '\\',
            choice(
                /[^xu0-7]/,
                /[0-7]{1,3}/,
                /x[0-9a-fA-F]{2}/,
                /u[0-9a-fA-F]{4}/,
                /u{[0-9a-fA-F]+}/
            )
        )),
    }

});

function commaSep(rule) {
    return optional(commaSep1(rule))
}

function commaSep1(rule) {
    return seq(rule, repeat(seq(',', rule)))
}

function sep(delimiter, rule) {
    return optional(sep1(delimiter, rule))
}

function sep1(delimiter, rule) {
    return seq(rule, repeat(seq(delimiter, rule)))
}
