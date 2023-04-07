const PREC = {
  lambda_binding: 1,
  infix: 2,
  call: 3,
  field: 3,
};

module.exports = grammar({
  name: "fuse",

  externals: ($) => [$._newline, $._indent, $._dedent],

  extras: ($) => [/\s/, $.comment],

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice(
        $.function_definition,
        $.variant_definition,
        $.record_definition,
        $.tuple_definition,
        $.type_function_definitions,
        $.type_alias_definition,
        $.trait_definition,
        $.trait_function_definitions
      ),

    variant_definition: ($) =>
      seq(
        "type",
        field("name", $.identifier),
        field("type_parameters", optional($.type_param_clause)),
        ":",
        $._indent,
        field("values", repeat1($.variant_type_value)),
        $._dedent
      ),

    variant_type_value: ($) =>
      seq(field("name", $.identifier), optional($.variant_type_value_args)),

    variant_type_value_args: ($) =>
      seq("(", choice($.type_list, $.parameter_list), ")"),

    record_definition: ($) =>
      seq(
        "type",
        field("name", $.identifier),
        field("type_parameters", optional($.type_param_clause)),
        ":",
        $._indent,
        field("fields", repeat1($.record_type_field)),
        $._dedent
      ),

    record_type_field: ($) => $.param,

    tuple_definition: ($) =>
      seq(
        "type",
        field("name", $.identifier),
        field("type_parameters", optional($.type_param_clause)),
        "(",
        field("fields", $.type_list),
        ")"
      ),

    type_function_definitions: ($) =>
      seq(
        "impl",
        field("type", $.identifier),
        field("type_parameters", optional($.type_param_clause)),
        ":",
        $._indent,
        field("methods", repeat1($.function_definition)),
        $._dedent
      ),

    trait_function_definitions: ($) =>
      seq(
        "impl",
        field("trait", $.identifier),
        field("type_parameters", optional($.type_param_clause)),
        "for",
        field("type", $.identifier),
        field("type_parameters", optional($.type_param_clause)),
        ":",
        $._indent,
        field("methods", repeat1($.function_definition)),
        $._dedent
      ),

    trait_definition: ($) =>
      seq(
        "trait",
        field("name", $.identifier),
        field("type_parameters", optional($.type_param_clause)),
        ":",
        $._indent,
        field("methods", repeat1($.trait_function)),
        $._dedent
      ),

    trait_function: ($) =>
      choice(seq($.function_signature, ";"), $.function_definition),

    type_alias_definition: ($) =>
      seq(
        "type",
        field("name", $.identifier),
        field("type_parameters", optional($.type_param_clause)),
        "=",
        field("type", $.type)
      ),

    function_definition: ($) => seq($.function_signature, $.block),

    function_signature: ($) =>
      seq(
        "fun",
        field("name", $.identifier),
        field("type_parameters", optional($.type_param_clause)),
        "(",
        field("parameters", optional($.parameter_list)),
        ")",
        "->",
        field("type", $.type)
      ),

    // Types

    type_param: ($) => field("name", $.identifier),
    type_param_clause: ($) => seq("[", commaSep1($.type_param), "]"),

    type_list: ($) => commaSep1(field("type", $.type)),
    type_arguments: ($) => seq("[", $.type_list, "]"),

    type: ($) => choice($.function_type, $.tuple_type, $._simple_type),

    function_type: ($) =>
      prec.right(
        seq(
          field("parameter_types", $.type),
          "->",
          field("return_type", $.type)
        )
      ),

    tuple_type: ($) => seq("(", $.type_list, ")"),

    _simple_type: ($) => choice($.generic_type, $.identifier),

    generic_type: ($) =>
      seq(
        field("type", $._simple_type),
        field("type_arguments", $.type_arguments)
      ),

    param: ($) => seq(field("name", $.identifier), ":", field("type", $.type)),

    parameter_list: ($) => commaSep1($.param),

    // Expressions
    block: ($) =>
      seq($._indent, field("expressions", repeat1($.expression)), $._dedent),

    expression: ($) =>
      choice(
        $.let_expression,
        $.match_expression,
        $.lambda_expression,
        $._primary_expression
      ),

    inline_block_expression: ($) => seq("{", $.block, "}"),

    inline_expression: ($) =>
      choice(
        $.lambda_expression,
        $._primary_expression,
        $.inline_block_expression
      ),

    let_expression: ($) =>
      seq(
        "let",
        field("name", $.identifier),
        optional(seq(":", field("type", $.type))),
        "=",
        $.inline_expression
      ),

    binding: ($) =>
      prec(
        PREC.lambda_binding,
        seq(
          field("name", $.identifier),
          optional(seq(":", field("type", $.type)))
        )
      ),

    bindings: ($) => seq("(", commaSep($.binding), ")"),

    lambda_expression: ($) =>
      seq(
        choice($.bindings, field("name", $.identifier)),
        optional(seq("->", field("type", $.type))),
        "=>",
        $.inline_expression
      ),

    pattern: ($) =>
      choice(
        seq(field("type", $.identifier), $.patterns),
        $.patterns,
        $.literal,
        $.identifier,
        "_"
      ),

    patterns: ($) => seq("(", commaSep(field("pattern", $.pattern)), ")"),

    case: ($) => seq(sep1("|", $.pattern), "=>", $.inline_expression),

    match_expression: ($) =>
      seq(
        "match",
        $._primary_expression,
        ":",
        $._indent,
        repeat1($.case),
        $._dedent
      ),

    _primary_expression: ($) =>
      choice(
        $.literal,
        $.identifier,
        $.self,
        $.call_expression,
        $.proj_expression,
        $._parenthesized_expression,
        $.infix_expression
      ),

    arguments: ($) =>
      seq(
        "(",
        commaSep(choice($._primary_expression, $.lambda_expression)),
        ")"
      ),

    call_expression: ($) =>
      prec(
        PREC.call,
        seq(
          field("function", $._primary_expression),
          field("type_arguments", optional($.type_arguments)),
          field("arguments", $.arguments)
        )
      ),

    infix_expression: ($) =>
      prec.left(
        PREC.infix,
        seq(
          field("left", $._primary_expression),
          field("operator", $.operator_identifier),
          field("right", $._primary_expression)
        )
      ),

    proj_expression: ($) =>
      prec(
        PREC.field,
        seq(
          field("value", $._primary_expression),
          repeat1(seq(".", field("field", $.identifier)))
        )
      ),

    _parenthesized_expression: ($) => seq("(", $._primary_expression, ")"),

    // Lexical tokens

    operator_identifier: ($) =>
      choice(
        "+",
        "-",
        "*",
        "/",
        "%",
        "<=",
        "<",
        ">",
        ">=",
        "==",
        "!=",
        "&&",
        "||"
      ),

    identifier: ($) => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

    literal: ($) => choice($.boolean, $.integer, $.float, $.string),

    self: ($) => "self",

    boolean: ($) => choice($.true, $.false),
    true: ($) => "true",
    false: ($) => "false",
    integer: ($) => token(repeat1(/[0-9]+/)),
    float: ($) => {
      const digits = repeat1(/[0-9]+_?/);
      return token(seq(digits, ".", digits));
    },
    string: ($) =>
      seq(
        '"',
        repeat(choice(token.immediate(prec(1, /[^"\\]+/)), $.escape_sequence)),
        '"'
      ),

    escape_sequence: ($) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xu0-7]/,
            /[0-7]{1,3}/,
            /x[0-9a-fA-F]{2}/,
            /u[0-9a-fA-F]{4}/,
            /u{[0-9a-fA-F]+}/
          )
        )
      ),

    comment: ($) => token(seq("#", /.*/)),
  },
});

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function sep(delimiter, rule) {
  return optional(sep1(delimiter, rule));
}

function sep1(delimiter, rule) {
  return seq(rule, repeat(seq(delimiter, rule)));
}
