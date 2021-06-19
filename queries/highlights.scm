; Identifier naming conventions

((identifier) @constructor
 (#match? @constructor "^[A-Z]"))
;
((identifier) @constant
 (#match? @constant "^[A-Z][A-Z_]*$"))

; Function calls

(call_expression
  function: (identifier) @function)

(call_expression
  function: (proj_expression
    field: (identifier) @function.method))

; Function and method definitions
;--------------------------------

(function_definition
  name: (identifier) @function)

(type_function_definitions
    (function_definition
      name: (identifier) @function.method))

(identifier) @variable

(proj_expression field: (identifier) @property)

(type (identifier) @type)

; Literals
(this) @variable.builtin

[
  (true)
  (false)
] @constant.builtin

[
  (integer)
  ; (float)
] @number

(string) @string
(escape_sequence) @escape

[
 "+"
 "-"
 "*"
 "/"
 "%"
 "<="
 "<"
 ">"
 ">="
 "=="
 "!="
 "&&"
 "||"
] @operator

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
]  @punctuation.bracket

[
 "fun"
 "impl"
 "match"
 "let"
 "type"
] @keyword
