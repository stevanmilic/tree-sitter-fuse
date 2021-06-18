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
            $.identifier,
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

        function_definition: $ => seq(
            'fun',
            field('name', $.identifier),
            field('type_parameters', optional($.type_param_clause)),
            '(',
            field('parameters', optional($.parameter_list)),
            ')',
            '->',
            field('type', $._type),
            $._indent,
            $.infix_expression,
            $._dedent,
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
        infix_expression: $ => seq(
            $._primary_expression,
            '+',
            $._primary_expression,
        ),

        _primary_expression: $ => choice(
            $.literal,
            $.identifier,
        ),

        // Lexical tokens

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

function commaSep1(rule) {
    return seq(rule, repeat(seq(',', rule)))
}

function sep(delimiter, rule) {
    return optional(sep1(delimiter, rule))
}

function sep1(delimiter, rule) {
    return seq(rule, repeat(seq(delimiter, rule)))
}
