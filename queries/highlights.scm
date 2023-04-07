; Identifier naming conventions

(identifier) @variable

((identifier) @constant
 (#match? @constant "^[A-Z][A-Z_]*$"))

((identifier) @constant
 (#match? @constant "^[A-Z]"))

; Types

(variant_definition
  name: (identifier) @type)

(record_definition
  name: (identifier) @type)

(tuple_definition
  name: (identifier) @type)

(trait_definition
  name: (identifier) @type)

(type_function_definitions
  type: (identifier) @type)

(trait_function_definitions
  trait: (identifier) @type)

(trait_function_definitions
  type: (identifier) @type)

(type_param
  name: (identifier) @type)

(generic_type
  type: (identifier) @type)

(type (identifier) @type)

; Function calls

(call_expression
  function: (identifier) @function)

(call_expression
  function: (proj_expression
    field: (identifier) @function.method))

; Function and method definitions

(function_signature
  name: (identifier) @function)

(type_function_definitions
  (function_definition
    (function_signature
      name: (identifier) @function.method)))

(param
  name: (identifier) @parameter)

(binding
  name: (identifier) @parameter)

(proj_expression field: (identifier) @property)

; Literals
(self) @variable.builtin

(boolean) @boolean
(integer) @number
(float) @float
(string) @string
(escape_sequence) @escape
(comment) @comment
(comment) @spell

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
 "->"
 "=>"
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
 "."
 ","
 ";"
] @punctuation.delimiter

[
 "impl"
 "match"
 "let"
 "type"
 "for"
 "trait"
] @keyword

"fun" @keyword.function
