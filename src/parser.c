#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 309
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 35

enum {
  sym_identifier = 1,
  anon_sym_type = 2,
  anon_sym_COLON = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_impl = 6,
  anon_sym_EQ = 7,
  anon_sym_fun = 8,
  anon_sym_DASH_GT = 9,
  anon_sym_LBRACK = 10,
  anon_sym_COMMA = 11,
  anon_sym_RBRACK = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_let = 15,
  anon_sym_EQ_GT = 16,
  anon_sym__ = 17,
  anon_sym_PIPE = 18,
  anon_sym_match = 19,
  anon_sym_DOT = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  anon_sym_STAR = 23,
  anon_sym_SLASH = 24,
  anon_sym_PERCENT = 25,
  anon_sym_LT_EQ = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_GT_EQ = 29,
  anon_sym_EQ_EQ = 30,
  anon_sym_BANG_EQ = 31,
  anon_sym_AMP_AMP = 32,
  anon_sym_PIPE_PIPE = 33,
  sym_this = 34,
  sym_true = 35,
  sym_false = 36,
  sym_integer = 37,
  sym_float = 38,
  anon_sym_DQUOTE = 39,
  aux_sym_string_token1 = 40,
  sym_escape_sequence = 41,
  sym__newline = 42,
  sym__indent = 43,
  sym__dedent = 44,
  sym_source_file = 45,
  sym__definition = 46,
  sym_variant_definition = 47,
  sym_variant_type_value = 48,
  sym_variant_type_value_args = 49,
  sym_record_definition = 50,
  sym_record_type_field = 51,
  sym_tuple_definition = 52,
  sym_type_function_definitions = 53,
  sym_type_alias_definition = 54,
  sym_function_definition = 55,
  sym_type_param = 56,
  sym_type_param_clause = 57,
  sym_type_list = 58,
  sym_type_arguments = 59,
  sym_type = 60,
  sym_function_type = 61,
  sym_tuple_type = 62,
  sym__simple_type = 63,
  sym_generic_type = 64,
  sym_param = 65,
  sym_parameter_list = 66,
  sym_block = 67,
  sym_expression = 68,
  sym_inline_block_expression = 69,
  sym_inline_expression = 70,
  sym_let_expression = 71,
  sym_binding = 72,
  sym_bindings = 73,
  sym_lambda_expression = 74,
  sym_pattern = 75,
  sym_patterns = 76,
  sym_case = 77,
  sym_match_expression = 78,
  sym__primary_expression = 79,
  sym_arguments = 80,
  sym_call_expression = 81,
  sym_infix_expression = 82,
  sym_proj_expression = 83,
  sym__parenthesized_expression = 84,
  sym_operator_identifier = 85,
  sym_literal = 86,
  sym_boolean = 87,
  sym_string = 88,
  aux_sym_source_file_repeat1 = 89,
  aux_sym_variant_definition_repeat1 = 90,
  aux_sym_record_definition_repeat1 = 91,
  aux_sym_type_function_definitions_repeat1 = 92,
  aux_sym_type_param_clause_repeat1 = 93,
  aux_sym_type_list_repeat1 = 94,
  aux_sym_parameter_list_repeat1 = 95,
  aux_sym_block_repeat1 = 96,
  aux_sym_bindings_repeat1 = 97,
  aux_sym_patterns_repeat1 = 98,
  aux_sym_case_repeat1 = 99,
  aux_sym_match_expression_repeat1 = 100,
  aux_sym_arguments_repeat1 = 101,
  aux_sym_proj_expression_repeat1 = 102,
  aux_sym_string_repeat1 = 103,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_type] = "type",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_impl] = "impl",
  [anon_sym_EQ] = "=",
  [anon_sym_fun] = "fun",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym__] = "_",
  [anon_sym_PIPE] = "|",
  [anon_sym_match] = "match",
  [anon_sym_DOT] = ".",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [sym_this] = "this",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_variant_definition] = "variant_definition",
  [sym_variant_type_value] = "variant_type_value",
  [sym_variant_type_value_args] = "variant_type_value_args",
  [sym_record_definition] = "record_definition",
  [sym_record_type_field] = "record_type_field",
  [sym_tuple_definition] = "tuple_definition",
  [sym_type_function_definitions] = "type_function_definitions",
  [sym_type_alias_definition] = "type_alias_definition",
  [sym_function_definition] = "function_definition",
  [sym_type_param] = "type_param",
  [sym_type_param_clause] = "type_param_clause",
  [sym_type_list] = "type_list",
  [sym_type_arguments] = "type_arguments",
  [sym_type] = "type",
  [sym_function_type] = "function_type",
  [sym_tuple_type] = "tuple_type",
  [sym__simple_type] = "_simple_type",
  [sym_generic_type] = "generic_type",
  [sym_param] = "param",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [sym_expression] = "expression",
  [sym_inline_block_expression] = "inline_block_expression",
  [sym_inline_expression] = "inline_expression",
  [sym_let_expression] = "let_expression",
  [sym_binding] = "binding",
  [sym_bindings] = "bindings",
  [sym_lambda_expression] = "lambda_expression",
  [sym_pattern] = "pattern",
  [sym_patterns] = "patterns",
  [sym_case] = "case",
  [sym_match_expression] = "match_expression",
  [sym__primary_expression] = "_primary_expression",
  [sym_arguments] = "arguments",
  [sym_call_expression] = "call_expression",
  [sym_infix_expression] = "infix_expression",
  [sym_proj_expression] = "proj_expression",
  [sym__parenthesized_expression] = "_parenthesized_expression",
  [sym_operator_identifier] = "operator_identifier",
  [sym_literal] = "literal",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variant_definition_repeat1] = "variant_definition_repeat1",
  [aux_sym_record_definition_repeat1] = "record_definition_repeat1",
  [aux_sym_type_function_definitions_repeat1] = "type_function_definitions_repeat1",
  [aux_sym_type_param_clause_repeat1] = "type_param_clause_repeat1",
  [aux_sym_type_list_repeat1] = "type_list_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_bindings_repeat1] = "bindings_repeat1",
  [aux_sym_patterns_repeat1] = "patterns_repeat1",
  [aux_sym_case_repeat1] = "case_repeat1",
  [aux_sym_match_expression_repeat1] = "match_expression_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_proj_expression_repeat1] = "proj_expression_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_impl] = anon_sym_impl,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym__] = anon_sym__,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [sym_this] = sym_this,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_variant_definition] = sym_variant_definition,
  [sym_variant_type_value] = sym_variant_type_value,
  [sym_variant_type_value_args] = sym_variant_type_value_args,
  [sym_record_definition] = sym_record_definition,
  [sym_record_type_field] = sym_record_type_field,
  [sym_tuple_definition] = sym_tuple_definition,
  [sym_type_function_definitions] = sym_type_function_definitions,
  [sym_type_alias_definition] = sym_type_alias_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_type_param] = sym_type_param,
  [sym_type_param_clause] = sym_type_param_clause,
  [sym_type_list] = sym_type_list,
  [sym_type_arguments] = sym_type_arguments,
  [sym_type] = sym_type,
  [sym_function_type] = sym_function_type,
  [sym_tuple_type] = sym_tuple_type,
  [sym__simple_type] = sym__simple_type,
  [sym_generic_type] = sym_generic_type,
  [sym_param] = sym_param,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [sym_expression] = sym_expression,
  [sym_inline_block_expression] = sym_inline_block_expression,
  [sym_inline_expression] = sym_inline_expression,
  [sym_let_expression] = sym_let_expression,
  [sym_binding] = sym_binding,
  [sym_bindings] = sym_bindings,
  [sym_lambda_expression] = sym_lambda_expression,
  [sym_pattern] = sym_pattern,
  [sym_patterns] = sym_patterns,
  [sym_case] = sym_case,
  [sym_match_expression] = sym_match_expression,
  [sym__primary_expression] = sym__primary_expression,
  [sym_arguments] = sym_arguments,
  [sym_call_expression] = sym_call_expression,
  [sym_infix_expression] = sym_infix_expression,
  [sym_proj_expression] = sym_proj_expression,
  [sym__parenthesized_expression] = sym__parenthesized_expression,
  [sym_operator_identifier] = sym_operator_identifier,
  [sym_literal] = sym_literal,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variant_definition_repeat1] = aux_sym_variant_definition_repeat1,
  [aux_sym_record_definition_repeat1] = aux_sym_record_definition_repeat1,
  [aux_sym_type_function_definitions_repeat1] = aux_sym_type_function_definitions_repeat1,
  [aux_sym_type_param_clause_repeat1] = aux_sym_type_param_clause_repeat1,
  [aux_sym_type_list_repeat1] = aux_sym_type_list_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_bindings_repeat1] = aux_sym_bindings_repeat1,
  [aux_sym_patterns_repeat1] = aux_sym_patterns_repeat1,
  [aux_sym_case_repeat1] = aux_sym_case_repeat1,
  [aux_sym_match_expression_repeat1] = aux_sym_match_expression_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_proj_expression_repeat1] = aux_sym_proj_expression_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_impl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_this] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_variant_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_type_value] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_type_value_args] = {
    .visible = true,
    .named = true,
  },
  [sym_record_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_record_type_field] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_function_definitions] = {
    .visible = true,
    .named = true,
  },
  [sym_type_alias_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_param] = {
    .visible = true,
    .named = true,
  },
  [sym_type_param_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_type] = {
    .visible = false,
    .named = true,
  },
  [sym_generic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_bindings] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_patterns] = {
    .visible = true,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [sym_match_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__primary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_infix_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_proj_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__parenthesized_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_operator_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variant_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_function_definitions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_param_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bindings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_patterns_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proj_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arguments = 1,
  field_expressions = 2,
  field_field = 3,
  field_fields = 4,
  field_function = 5,
  field_left = 6,
  field_methods = 7,
  field_name = 8,
  field_operator = 9,
  field_parameter_types = 10,
  field_parameters = 11,
  field_pattern = 12,
  field_return_type = 13,
  field_right = 14,
  field_type = 15,
  field_type_arguments = 16,
  field_type_parameters = 17,
  field_value = 18,
  field_values = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_expressions] = "expressions",
  [field_field] = "field",
  [field_fields] = "fields",
  [field_function] = "function",
  [field_left] = "left",
  [field_methods] = "methods",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameter_types] = "parameter_types",
  [field_parameters] = "parameters",
  [field_pattern] = "pattern",
  [field_return_type] = "return_type",
  [field_right] = "right",
  [field_type] = "type",
  [field_type_arguments] = "type_arguments",
  [field_type_parameters] = "type_parameters",
  [field_value] = "value",
  [field_values] = "values",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 1},
  [12] = {.index = 20, .length = 2},
  [13] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 2},
  [15] = {.index = 27, .length = 2},
  [16] = {.index = 29, .length = 3},
  [17] = {.index = 32, .length = 3},
  [18] = {.index = 35, .length = 3},
  [19] = {.index = 38, .length = 2},
  [20] = {.index = 40, .length = 3},
  [21] = {.index = 43, .length = 3},
  [22] = {.index = 46, .length = 2},
  [23] = {.index = 48, .length = 2},
  [24] = {.index = 50, .length = 1},
  [25] = {.index = 51, .length = 4},
  [26] = {.index = 55, .length = 1},
  [27] = {.index = 56, .length = 3},
  [28] = {.index = 59, .length = 3},
  [29] = {.index = 62, .length = 2},
  [30] = {.index = 64, .length = 1},
  [31] = {.index = 65, .length = 1},
  [32] = {.index = 66, .length = 1},
  [33] = {.index = 67, .length = 2},
  [34] = {.index = 69, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type, 0},
  [1] =
    {field_name, 1},
    {field_type, 3},
  [3] =
    {field_name, 0},
  [4] =
    {field_fields, 3},
    {field_name, 1},
  [6] =
    {field_type, 0},
    {field_type, 1, .inherited = true},
  [8] =
    {field_type, 0},
    {field_type_arguments, 1},
  [10] =
    {field_name, 1},
    {field_type, 4},
    {field_type_parameters, 2},
  [13] =
    {field_name, 1},
    {field_values, 4},
  [15] =
    {field_fields, 4},
    {field_name, 1},
  [17] =
    {field_parameter_types, 0},
    {field_return_type, 2},
  [19] =
    {field_type, 1},
  [20] =
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [22] =
    {field_fields, 4},
    {field_name, 1},
    {field_type_parameters, 2},
  [25] =
    {field_methods, 4},
    {field_type, 1},
  [27] =
    {field_name, 0},
    {field_type, 2},
  [29] =
    {field_name, 1},
    {field_type_parameters, 2},
    {field_values, 5},
  [32] =
    {field_fields, 5},
    {field_name, 1},
    {field_type_parameters, 2},
  [35] =
    {field_methods, 5},
    {field_type, 1},
    {field_type_parameters, 2},
  [38] =
    {field_name, 1},
    {field_type, 5},
  [40] =
    {field_name, 1},
    {field_parameters, 3},
    {field_type, 6},
  [43] =
    {field_name, 1},
    {field_type, 6},
    {field_type_parameters, 2},
  [46] =
    {field_arguments, 1},
    {field_function, 0},
  [48] =
    {field_field, 1, .inherited = true},
    {field_value, 0},
  [50] =
    {field_expressions, 1},
  [51] =
    {field_name, 1},
    {field_parameters, 4},
    {field_type, 7},
    {field_type_parameters, 2},
  [55] =
    {field_field, 1},
  [56] =
    {field_arguments, 2},
    {field_function, 0},
    {field_type_arguments, 1},
  [59] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [62] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [64] =
    {field_name, 1},
  [65] =
    {field_type, 2},
  [66] =
    {field_pattern, 1},
  [67] =
    {field_pattern, 1},
    {field_pattern, 2, .inherited = true},
  [69] =
    {field_pattern, 0, .inherited = true},
    {field_pattern, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43020
    ? (c < 3976
      ? (c < 2674
        ? (c < 1869
          ? (c < 908
            ? (c < 710
              ? (c < 181
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))))
            : (c <= 908 || (c < 1568
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1488
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1610 || (c < 1774
                ? (c < 1749
                  ? (c < 1649
                    ? (c >= 1646 && c <= 1647)
                    : c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1775 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1786 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))))))))
          : (c <= 1957 || (c < 2451
            ? (c < 2144
              ? (c < 2048
                ? (c < 2036
                  ? (c < 1994
                    ? c == 1969
                    : c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2088
                  ? (c < 2084
                    ? c == 2074
                    : c <= 2084)
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))))
              : (c <= 2154 || (c < 2384
                ? (c < 2308
                  ? (c < 2230
                    ? (c >= 2208 && c <= 2228)
                    : c <= 2247)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2437
                  ? (c < 2417
                    ? (c >= 2392 && c <= 2401)
                    : c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))))))
            : (c <= 2472 || (c < 2565
              ? (c < 2510
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2544
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2529)
                  : (c <= 2545 || c == 2556))))
              : (c <= 2570 || (c < 2613
                ? (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))))))))))
        : (c <= 2676 || (c < 3205
          ? (c < 2929
            ? (c < 2809
              ? (c < 2738
                ? (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2809 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))))))
            : (c <= 2929 || (c < 2990
              ? (c < 2969
                ? (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3114
                ? (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3168
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3169 || c == 3200))))))))
          : (c <= 3212 || (c < 3517
            ? (c < 3342
              ? (c < 3261
                ? (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3313
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3423
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3751
              ? (c < 3713
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3760 || (c < 3804
                ? (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))))))))))))
      : (c <= 3980 || (c < 8016
        ? (c < 5920
          ? (c < 4746
            ? (c < 4256
              ? (c < 4193
                ? (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || c == 4238))))
              : (c <= 4293 || (c < 4682
                ? (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))))))
            : (c <= 4749 || (c < 4992
              ? (c < 4802
                ? (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))
              : (c <= 5007 || (c < 5761
                ? (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))))))))
          : (c <= 5937 || (c < 6981
            ? (c < 6320
              ? (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5969)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6272
                  ? (c < 6176
                    ? c == 6108
                    : c <= 6264)
                  : (c <= 6312 || c == 6314))))
              : (c <= 6389 || (c < 6576
                ? (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))))
            : (c <= 6987 || (c < 7401
              ? (c < 7245
                ? (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7247 || (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))))
              : (c <= 7404 || (c < 7680
                ? (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))))))))
        : (c <= 8023 || (c < 11631
          ? (c < 8458
            ? (c < 8144
              ? (c < 8064
                ? (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))
              : (c <= 8147 || (c < 8305
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))))
            : (c <= 8467 || (c < 8544
              ? (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))
              : (c <= 8584 || (c < 11506
                ? (c < 11360
                  ? (c < 11312
                    ? (c >= 11264 && c <= 11310)
                    : c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))))
          : (c <= 11631 || (c < 12704
            ? (c < 12293
              ? (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))
              : (c <= 12295 || (c < 12445
                ? (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12735 || (c < 42623
              ? (c < 42192
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 40956 || (c >= 40960 && c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))
              : (c <= 42653 || (c < 42946
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42943)))
                : (c <= 42954 || (c < 43011
                  ? (c >= 42997 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))))))))))))
    : (c <= 43042 || (c < 70453
      ? (c < 66176
        ? (c < 64112
          ? (c < 43697
            ? (c < 43471
              ? (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43471 || (c < 43584
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43642
                  ? (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))))))
            : (c <= 43697 || (c < 43793
              ? (c < 43739
                ? (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))
              : (c <= 43798 || (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))))))
          : (c <= 64217 || (c < 65147
            ? (c < 64326
              ? (c < 64298
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65017 || (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || c == 65145))))))
            : (c <= 65147 || (c < 65498
              ? (c < 65382
                ? (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))
                : (c <= 65437 || (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))))
              : (c <= 65500 || (c < 65599
                ? (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65856 && c <= 65908)))))))))))
        : (c <= 66204 || (c < 68416
          ? (c < 67639
            ? (c < 66736
              ? (c < 66432
                ? (c < 66349
                  ? (c < 66304
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66335)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))
              : (c <= 66771 || (c < 67392
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))))))
            : (c <= 67640 || (c < 68030
              ? (c < 67808
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c >= 67712 && c <= 67742)))
                : (c <= 67826 || (c < 67872
                  ? (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))))
              : (c <= 68031 || (c < 68192
                ? (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))))))))
          : (c <= 68437 || (c < 69968
            ? (c < 69415
              ? (c < 68800
                ? (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))
                : (c <= 68850 || (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))))
              : (c <= 69415 || (c < 69763
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))
                : (c <= 69807 || (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))))))
            : (c <= 70002 || (c < 70282
              ? (c < 70108
                ? (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))
                : (c <= 70108 || (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))))
              : (c <= 70285 || (c < 70415
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))
                : (c <= 70416 || (c < 70442
                  ? (c >= 70419 && c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))))))))))))
      : (c <= 70457 || (c < 113808
        ? (c < 72818
          ? (c < 71945
            ? (c < 71040
              ? (c < 70727
                ? (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))
                : (c <= 70730 || (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || c == 70855))))
              : (c <= 71086 || (c < 71352
                ? (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))
                : (c <= 71352 || (c < 71840
                  ? (c < 71680
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))))))
            : (c <= 71945 || (c < 72192
              ? (c < 72001
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))
                : (c <= 72001 || (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))))
              : (c <= 72192 || (c < 72349
                ? (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))))))))
          : (c <= 72847 || (c < 92992
            ? (c < 73648
              ? (c < 73056
                ? (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))
                : (c <= 73061 || (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c >= 73440 && c <= 73458)))))
              : (c <= 73648 || (c < 82944
                ? (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c >= 77824 && c <= 78894)))
                : (c <= 83526 || (c < 92880
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))))))
            : (c <= 92995 || (c < 100352
              ? (c < 94032
                ? (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))
                : (c <= 94032 || (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))))
              : (c <= 101589 || (c < 110960
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110878)
                  : (c <= 110930 || (c >= 110948 && c <= 110951)))
                : (c <= 111355 || (c < 113776
                  ? (c >= 113664 && c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))))))))))
        : (c <= 113817 || (c < 126469
          ? (c < 120488
            ? (c < 120005
              ? (c < 119973
                ? (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))
                : (c <= 119974 || (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c >= 119997 && c <= 120003)))))
              : (c <= 120069 || (c < 120123
                ? (c < 120086
                  ? (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)
                  : (c <= 120092 || (c >= 120094 && c <= 120121)))
                : (c <= 120126 || (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c >= 120146 && c <= 120485)))))))
            : (c <= 120512 || (c < 120772
              ? (c < 120630
                ? (c < 120572
                  ? (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)
                  : (c <= 120596 || (c >= 120598 && c <= 120628)))
                : (c <= 120654 || (c < 120714
                  ? (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : c <= 120712)
                  : (c <= 120744 || (c >= 120746 && c <= 120770)))))
              : (c <= 120779 || (c < 124928
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c >= 123584 && c <= 123627)))
                : (c <= 125124 || (c < 125259
                  ? (c >= 125184 && c <= 125251)
                  : (c <= 125259 || (c >= 126464 && c <= 126467)))))))))
          : (c <= 126495 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c >= 126505 && c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173789)
                  : (c <= 177972 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 194560
                  ? (c >= 183984 && c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43052
    ? (c < 3718
      ? (c < 2730
        ? (c < 2042
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2037)))))))))
          : (c <= 2042 || (c < 2534
            ? (c < 2447
              ? (c < 2230
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)))
                : (c <= 2247 || (c < 2406
                  ? (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)))))
              : (c <= 2448 || (c < 2503
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)))
                : (c <= 2504 || (c < 2524
                  ? (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)
                  : (c <= 2525 || (c >= 2527 && c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3142
          ? (c < 2918
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c >= 2911 && c <= 2915)))))))
            : (c <= 2927 || (c < 3006
              ? (c < 2969
                ? (c < 2949
                  ? (c < 2946
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)))))
              : (c <= 3010 || (c < 3072
                ? (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)
                  : (c <= 3024 || (c < 3046
                    ? c == 3031
                    : c <= 3055)))
                : (c <= 3084 || (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || (c >= 3133 && c <= 3140)))))))))
          : (c <= 3144 || (c < 3398
            ? (c < 3260
              ? (c < 3200
                ? (c < 3160
                  ? (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)
                  : (c <= 3162 || (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)))
                : (c <= 3203 || (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))))
              : (c <= 3268 || (c < 3302
                ? (c < 3285
                  ? (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)
                  : (c <= 3286 || (c < 3296
                    ? c == 3294
                    : c <= 3299)))
                : (c <= 3311 || (c < 3342
                  ? (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))))))
            : (c <= 3400 || (c < 3530
              ? (c < 3457
                ? (c < 3423
                  ? (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)
                  : (c <= 3427 || (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)))
                : (c <= 3459 || (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || (c < 3520
                    ? c == 3517
                    : c <= 3526)))))
              : (c <= 3530 || (c < 3585
                ? (c < 3544
                  ? (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)
                  : (c <= 3551 || (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)))
                : (c <= 3642 || (c < 3713
                  ? (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)
                  : (c <= 3714 || c == 3716))))))))))))
      : (c <= 3722 || (c < 7296
        ? (c < 5024
          ? (c < 4256
            ? (c < 3893
              ? (c < 3784
                ? (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)))
                : (c <= 3789 || (c < 3840
                  ? (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)
                  : (c <= 3840 || (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)))))
              : (c <= 3893 || (c < 3974
                ? (c < 3902
                  ? (c < 3897
                    ? c == 3895
                    : c <= 3897)
                  : (c <= 3911 || (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)))
                : (c <= 3991 || (c < 4096
                  ? (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)
                  : (c <= 4169 || (c >= 4176 && c <= 4253)))))))
            : (c <= 4293 || (c < 4786
              ? (c < 4688
                ? (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))
                : (c <= 4694 || (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))))
              : (c <= 4789 || (c < 4882
                ? (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))
                : (c <= 4885 || (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c >= 4992 && c <= 5007)))))))))
          : (c <= 5109 || (c < 6400
            ? (c < 5998
              ? (c < 5870
                ? (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)))
                : (c <= 5880 || (c < 5920
                  ? (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)
                  : (c <= 5940 || (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)))))
              : (c <= 6000 || (c < 6155
                ? (c < 6103
                  ? (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)
                  : (c <= 6103 || (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)))
                : (c <= 6157 || (c < 6272
                  ? (c < 6176
                    ? (c >= 6160 && c <= 6169)
                    : c <= 6264)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))))))
            : (c <= 6430 || (c < 6800
              ? (c < 6576
                ? (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))
                : (c <= 6601 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))))
              : (c <= 6809 || (c < 7019
                ? (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6848 || (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)))
                : (c <= 7027 || (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))))))))))
        : (c <= 7304 || (c < 11264
          ? (c < 8178
            ? (c < 8027
              ? (c < 7675
                ? (c < 7376
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7378 || (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)))
                : (c <= 7957 || (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)))))
              : (c <= 8027 || (c < 8130
                ? (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))))
            : (c <= 8180 || (c < 8458
              ? (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))
              : (c <= 8467 || (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))))))))
          : (c <= 11310 || (c < 12353
            ? (c < 11696
              ? (c < 11565
                ? (c < 11499
                  ? (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)
                  : (c <= 11507 || (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)))
                : (c <= 11565 || (c < 11647
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)))))
              : (c <= 11702 || (c < 11744
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)))
                : (c <= 11775 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))))
            : (c <= 12438 || (c < 42192
              ? (c < 12593
                ? (c < 12449
                  ? (c < 12445
                    ? (c >= 12441 && c <= 12442)
                    : c <= 12447)
                  : (c <= 12538 || (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)))
                : (c <= 12686 || (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)))))
              : (c <= 42237 || (c < 42775
                ? (c < 42560
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)
                  : (c <= 42607 || (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)))
                : (c <= 42783 || (c < 42946
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42943)
                  : (c <= 42954 || (c >= 42997 && c <= 43047)))))))))))))))
    : (c <= 43052 || (c < 71096
      ? (c < 66864
        ? (c < 64914
          ? (c < 43816
            ? (c < 43520
              ? (c < 43261
                ? (c < 43216
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)
                  : (c <= 43225 || (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)))
                : (c <= 43309 || (c < 43392
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)
                  : (c <= 43456 || (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)))))
              : (c <= 43574 || (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))))
            : (c <= 43822 || (c < 64275
              ? (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))
              : (c <= 64279 || (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65549
            ? (c < 65151
              ? (c < 65137
                ? (c < 65056
                  ? (c < 65024
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65039)
                  : (c <= 65071 || (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)))
                : (c <= 65137 || (c < 65145
                  ? (c < 65143
                    ? c == 65139
                    : c <= 65143)
                  : (c <= 65145 || (c < 65149
                    ? c == 65147
                    : c <= 65149)))))
              : (c <= 65276 || (c < 65474
                ? (c < 65343
                  ? (c < 65313
                    ? (c >= 65296 && c <= 65305)
                    : c <= 65338)
                  : (c <= 65343 || (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))))
            : (c <= 65574 || (c < 66349
              ? (c < 65856
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)))
                : (c <= 65908 || (c < 66208
                  ? (c < 66176
                    ? c == 66045
                    : c <= 66204)
                  : (c <= 66256 || (c < 66304
                    ? c == 66272
                    : c <= 66335)))))
              : (c <= 66378 || (c < 66560
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))
                : (c <= 66717 || (c < 66776
                  ? (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))))))))))
        : (c <= 66915 || (c < 69632
          ? (c < 68152
            ? (c < 67808
              ? (c < 67594
                ? (c < 67424
                  ? (c < 67392
                    ? (c >= 67072 && c <= 67382)
                    : c <= 67413)
                  : (c <= 67431 || (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)))))
              : (c <= 67826 || (c < 68096
                ? (c < 67872
                  ? (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)
                  : (c <= 67897 || (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)))
                : (c <= 68099 || (c < 68117
                  ? (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))))
            : (c <= 68154 || (c < 68800
              ? (c < 68352
                ? (c < 68224
                  ? (c < 68192
                    ? c == 68159
                    : c <= 68220)
                  : (c <= 68252 || (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68326)))
                : (c <= 68405 || (c < 68480
                  ? (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)
                  : (c <= 68497 || (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)))))
              : (c <= 68850 || (c < 69376
                ? (c < 69248
                  ? (c < 68912
                    ? (c >= 68864 && c <= 68903)
                    : c <= 68921)
                  : (c <= 69289 || (c < 69296
                    ? (c >= 69291 && c <= 69292)
                    : c <= 69297)))
                : (c <= 69404 || (c < 69552
                  ? (c < 69424
                    ? c == 69415
                    : c <= 69456)
                  : (c <= 69572 || (c >= 69600 && c <= 69622)))))))))
          : (c <= 69702 || (c < 70384
            ? (c < 70094
              ? (c < 69942
                ? (c < 69840
                  ? (c < 69759
                    ? (c >= 69734 && c <= 69743)
                    : c <= 69818)
                  : (c <= 69864 || (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)))
                : (c <= 69951 || (c < 70006
                  ? (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)
                  : (c <= 70006 || (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)))))
              : (c <= 70106 || (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70199 || (c < 70272
                    ? c == 70206
                    : c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70378)))))))
            : (c <= 70393 || (c < 70487
              ? (c < 70450
                ? (c < 70415
                  ? (c < 70405
                    ? (c >= 70400 && c <= 70403)
                    : c <= 70412)
                  : (c <= 70416 || (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)))
                : (c <= 70451 || (c < 70471
                  ? (c < 70459
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70468)
                  : (c <= 70472 || (c < 70480
                    ? (c >= 70475 && c <= 70477)
                    : c <= 70480)))))
              : (c <= 70487 || (c < 70750
                ? (c < 70512
                  ? (c < 70502
                    ? (c >= 70493 && c <= 70499)
                    : c <= 70508)
                  : (c <= 70516 || (c < 70736
                    ? (c >= 70656 && c <= 70730)
                    : c <= 70745)))
                : (c <= 70753 || (c < 70864
                  ? (c < 70855
                    ? (c >= 70784 && c <= 70853)
                    : c <= 70855)
                  : (c <= 70873 || (c >= 71040 && c <= 71093)))))))))))))
      : (c <= 71104 || (c < 119894
        ? (c < 73104
          ? (c < 72163
            ? (c < 71935
              ? (c < 71360
                ? (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)
                  : (c <= 71236 || (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)))
                : (c <= 71369 || (c < 71472
                  ? (c < 71453
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71467)
                  : (c <= 71481 || (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)))))
              : (c <= 71942 || (c < 71995
                ? (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)))
                : (c <= 72003 || (c < 72106
                  ? (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)
                  : (c <= 72151 || (c >= 72154 && c <= 72161)))))))
            : (c <= 72164 || (c < 72873
              ? (c < 72704
                ? (c < 72272
                  ? (c < 72263
                    ? (c >= 72192 && c <= 72254)
                    : c <= 72263)
                  : (c <= 72345 || (c < 72384
                    ? c == 72349
                    : c <= 72440)))
                : (c <= 72712 || (c < 72784
                  ? (c < 72760
                    ? (c >= 72714 && c <= 72758)
                    : c <= 72768)
                  : (c <= 72793 || (c < 72850
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72871)))))
              : (c <= 72886 || (c < 73023
                ? (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73014 || (c < 73020
                    ? c == 73018
                    : c <= 73021)))
                : (c <= 73031 || (c < 73063
                  ? (c < 73056
                    ? (c >= 73040 && c <= 73049)
                    : c <= 73061)
                  : (c <= 73064 || (c >= 73066 && c <= 73102)))))))))
          : (c <= 73105 || (c < 94095
            ? (c < 92768
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)
                  : (c <= 73462 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 82944
                  ? (c < 77824
                    ? (c >= 74880 && c <= 75075)
                    : c <= 78894)
                  : (c <= 83526 || (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)))))
              : (c <= 92777 || (c < 93027
                ? (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))
                : (c <= 93047 || (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c >= 94031 && c <= 94087)))))))
            : (c <= 94111 || (c < 113776
              ? (c < 101632
                ? (c < 94192
                  ? (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)
                  : (c <= 94193 || (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)))
                : (c <= 101640 || (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110878)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))))
              : (c <= 113788 || (c < 119163
                ? (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 119149
                    ? (c >= 119141 && c <= 119145)
                    : c <= 119154)))
                : (c <= 119170 || (c < 119362
                  ? (c < 119210
                    ? (c >= 119173 && c <= 119179)
                    : c <= 119213)
                  : (c <= 119364 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 124928
          ? (c < 120630
            ? (c < 120094
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)))))
              : (c <= 120121 || (c < 120488
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)))
                : (c <= 120512 || (c < 120572
                  ? (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)
                  : (c <= 120596 || (c >= 120598 && c <= 120628)))))))
            : (c <= 120654 || (c < 121505
              ? (c < 120782
                ? (c < 120714
                  ? (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : c <= 120712)
                  : (c <= 120744 || (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)))
                : (c <= 120831 || (c < 121461
                  ? (c < 121403
                    ? (c >= 121344 && c <= 121398)
                    : c <= 121452)
                  : (c <= 121461 || (c < 121499
                    ? c == 121476
                    : c <= 121503)))))
              : (c <= 121519 || (c < 123136
                ? (c < 122907
                  ? (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)
                  : (c <= 122913 || (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)))
                : (c <= 123180 || (c < 123214
                  ? (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)
                  : (c <= 123214 || (c >= 123584 && c <= 123641)))))))))
          : (c <= 125124 || (c < 126557
            ? (c < 126523
              ? (c < 126497
                ? (c < 125264
                  ? (c < 125184
                    ? (c >= 125136 && c <= 125142)
                    : c <= 125259)
                  : (c <= 125273 || (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)))
                : (c <= 126498 || (c < 126505
                  ? (c < 126503
                    ? c == 126500
                    : c <= 126503)
                  : (c <= 126514 || (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)))))
              : (c <= 126523 || (c < 126545
                ? (c < 126537
                  ? (c < 126535
                    ? c == 126530
                    : c <= 126535)
                  : (c <= 126537 || (c < 126541
                    ? c == 126539
                    : c <= 126543)))
                : (c <= 126546 || (c < 126553
                  ? (c < 126551
                    ? c == 126548
                    : c <= 126551)
                  : (c <= 126553 || c == 126555))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(64);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == '{') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == '|') ADVANCE(54);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 22:
      if (eof) ADVANCE(24);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(55);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(55);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(54);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '_') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'm') ADVANCE(5);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_impl);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_this);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1, .external_lex_state = 2},
  [3] = {.lex_state = 1, .external_lex_state = 2},
  [4] = {.lex_state = 1, .external_lex_state = 2},
  [5] = {.lex_state = 1, .external_lex_state = 2},
  [6] = {.lex_state = 1, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 1, .external_lex_state = 2},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 23},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 23},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 23},
  [91] = {.lex_state = 23},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 0, .external_lex_state = 3},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0, .external_lex_state = 3},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0, .external_lex_state = 3},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0, .external_lex_state = 3},
  [201] = {.lex_state = 0, .external_lex_state = 3},
  [202] = {.lex_state = 0, .external_lex_state = 3},
  [203] = {.lex_state = 0, .external_lex_state = 3},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0, .external_lex_state = 3},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 3},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0, .external_lex_state = 3},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 3},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 3},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0, .external_lex_state = 3},
  [247] = {.lex_state = 0, .external_lex_state = 3},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 0, .external_lex_state = 3},
  [255] = {.lex_state = 0, .external_lex_state = 3},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 0, .external_lex_state = 3},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0, .external_lex_state = 3},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0, .external_lex_state = 3},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0, .external_lex_state = 3},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0, .external_lex_state = 3},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_impl] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [sym_this] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(271),
    [sym__definition] = STATE(80),
    [sym_variant_definition] = STATE(80),
    [sym_record_definition] = STATE(80),
    [sym_tuple_definition] = STATE(80),
    [sym_type_function_definitions] = STATE(80),
    [sym_type_alias_definition] = STATE(80),
    [sym_function_definition] = STATE(80),
    [aux_sym_source_file_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_type] = ACTIONS(5),
    [anon_sym_impl] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_proj_expression_repeat1,
    STATE(10), 1,
      sym_arguments,
    STATE(69), 1,
      sym_operator_identifier,
    STATE(245), 1,
      sym_type_arguments,
    ACTIONS(11), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(19), 14,
      sym__dedent,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_float,
      anon_sym_DQUOTE,
  [50] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_proj_expression_repeat1,
    STATE(10), 1,
      sym_arguments,
    STATE(69), 1,
      sym_operator_identifier,
    STATE(245), 1,
      sym_type_arguments,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 3,
      sym__dedent,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(21), 8,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(23), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [104] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_proj_expression_repeat1,
    STATE(10), 1,
      sym_arguments,
    STATE(69), 1,
      sym_operator_identifier,
    STATE(245), 1,
      sym_type_arguments,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 3,
      sym__dedent,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(29), 7,
      anon_sym_let,
      anon_sym_match,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(23), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [157] = 4,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(39), 1,
      anon_sym_EQ_GT,
    ACTIONS(33), 11,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(35), 16,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_float,
      anon_sym_DQUOTE,
  [195] = 3,
    STATE(7), 1,
      aux_sym_proj_expression_repeat1,
    ACTIONS(41), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(43), 17,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_float,
      anon_sym_DQUOTE,
  [230] = 4,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_proj_expression_repeat1,
    ACTIONS(45), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(47), 16,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_float,
      anon_sym_DQUOTE,
  [267] = 2,
    ACTIONS(52), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(54), 17,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_float,
      anon_sym_DQUOTE,
  [299] = 2,
    ACTIONS(56), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(58), 17,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_float,
      anon_sym_DQUOTE,
  [331] = 2,
    ACTIONS(60), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(62), 17,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_float,
      anon_sym_DQUOTE,
  [363] = 2,
    ACTIONS(64), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(66), 17,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_float,
      anon_sym_DQUOTE,
  [395] = 2,
    ACTIONS(68), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(70), 17,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_float,
      anon_sym_DQUOTE,
  [427] = 2,
    ACTIONS(72), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(74), 17,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_float,
      anon_sym_DQUOTE,
  [459] = 2,
    ACTIONS(76), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(78), 17,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_float,
      anon_sym_DQUOTE,
  [491] = 2,
    ACTIONS(80), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(82), 17,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_float,
      anon_sym_DQUOTE,
  [523] = 2,
    ACTIONS(84), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(86), 17,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_float,
      anon_sym_DQUOTE,
  [555] = 2,
    ACTIONS(88), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(90), 17,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_float,
      anon_sym_DQUOTE,
  [587] = 2,
    ACTIONS(92), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(94), 17,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_float,
      anon_sym_DQUOTE,
  [619] = 15,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_let,
    ACTIONS(102), 1,
      anon_sym_match,
    ACTIONS(104), 1,
      sym_this,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym_float,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      sym__dedent,
    STATE(260), 1,
      sym_bindings,
    ACTIONS(106), 2,
      sym_true,
      sym_false,
    STATE(9), 2,
      sym_boolean,
      sym_string,
    STATE(21), 2,
      sym_expression,
      aux_sym_block_repeat1,
    STATE(89), 3,
      sym_let_expression,
      sym_lambda_expression,
      sym_match_expression,
    STATE(4), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [675] = 15,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_let,
    ACTIONS(102), 1,
      anon_sym_match,
    ACTIONS(104), 1,
      sym_this,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym_float,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym__dedent,
    STATE(260), 1,
      sym_bindings,
    ACTIONS(106), 2,
      sym_true,
      sym_false,
    STATE(9), 2,
      sym_boolean,
      sym_string,
    STATE(21), 2,
      sym_expression,
      aux_sym_block_repeat1,
    STATE(89), 3,
      sym_let_expression,
      sym_lambda_expression,
      sym_match_expression,
    STATE(4), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [731] = 15,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_match,
    ACTIONS(130), 1,
      sym_this,
    ACTIONS(136), 1,
      sym_integer,
    ACTIONS(139), 1,
      sym_float,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      sym__dedent,
    STATE(260), 1,
      sym_bindings,
    ACTIONS(133), 2,
      sym_true,
      sym_false,
    STATE(9), 2,
      sym_boolean,
      sym_string,
    STATE(21), 2,
      sym_expression,
      aux_sym_block_repeat1,
    STATE(89), 3,
      sym_let_expression,
      sym_lambda_expression,
      sym_match_expression,
    STATE(4), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [787] = 14,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_let,
    ACTIONS(102), 1,
      anon_sym_match,
    ACTIONS(104), 1,
      sym_this,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym_float,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      sym_bindings,
    ACTIONS(106), 2,
      sym_true,
      sym_false,
    STATE(9), 2,
      sym_boolean,
      sym_string,
    STATE(20), 2,
      sym_expression,
      aux_sym_block_repeat1,
    STATE(89), 3,
      sym_let_expression,
      sym_lambda_expression,
      sym_match_expression,
    STATE(4), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [840] = 14,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_let,
    ACTIONS(102), 1,
      anon_sym_match,
    ACTIONS(104), 1,
      sym_this,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym_float,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      sym_bindings,
    ACTIONS(106), 2,
      sym_true,
      sym_false,
    STATE(9), 2,
      sym_boolean,
      sym_string,
    STATE(19), 2,
      sym_expression,
      aux_sym_block_repeat1,
    STATE(89), 3,
      sym_let_expression,
      sym_lambda_expression,
      sym_match_expression,
    STATE(4), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [893] = 9,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym_proj_expression_repeat1,
    STATE(51), 1,
      sym_arguments,
    STATE(64), 1,
      sym_operator_identifier,
    STATE(264), 1,
      sym_type_arguments,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 14,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [935] = 12,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_proj_expression_repeat1,
    STATE(51), 1,
      sym_arguments,
    STATE(64), 1,
      sym_operator_identifier,
    STATE(187), 1,
      aux_sym_arguments_repeat1,
    STATE(264), 1,
      sym_type_arguments,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [983] = 12,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_proj_expression_repeat1,
    STATE(51), 1,
      sym_arguments,
    STATE(64), 1,
      sym_operator_identifier,
    STATE(194), 1,
      aux_sym_arguments_repeat1,
    STATE(264), 1,
      sym_type_arguments,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1031] = 10,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym_proj_expression_repeat1,
    STATE(51), 1,
      sym_arguments,
    STATE(64), 1,
      sym_operator_identifier,
    STATE(264), 1,
      sym_type_arguments,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(23), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1074] = 10,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym_proj_expression_repeat1,
    STATE(51), 1,
      sym_arguments,
    STATE(64), 1,
      sym_operator_identifier,
    STATE(264), 1,
      sym_type_arguments,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(23), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1117] = 2,
    ACTIONS(56), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 18,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1143] = 13,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym_float,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      sym_this,
    STATE(76), 1,
      sym_inline_expression,
    STATE(260), 1,
      sym_bindings,
    ACTIONS(106), 2,
      sym_true,
      sym_false,
    STATE(9), 2,
      sym_boolean,
      sym_string,
    STATE(82), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1191] = 13,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      sym_this,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(239), 1,
      sym_inline_expression,
    STATE(267), 1,
      sym_bindings,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(238), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(27), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1239] = 10,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_proj_expression_repeat1,
    STATE(51), 1,
      sym_arguments,
    STATE(64), 1,
      sym_operator_identifier,
    STATE(264), 1,
      sym_type_arguments,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1281] = 13,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym_float,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      sym_this,
    STATE(94), 1,
      sym_inline_expression,
    STATE(260), 1,
      sym_bindings,
    ACTIONS(106), 2,
      sym_true,
      sym_false,
    STATE(9), 2,
      sym_boolean,
      sym_string,
    STATE(82), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1329] = 2,
    ACTIONS(52), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(54), 18,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1355] = 13,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym_float,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      sym_this,
    STATE(83), 1,
      sym_inline_expression,
    STATE(260), 1,
      sym_bindings,
    ACTIONS(106), 2,
      sym_true,
      sym_false,
    STATE(9), 2,
      sym_boolean,
      sym_string,
    STATE(82), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1403] = 13,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym_float,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      sym_this,
    STATE(86), 1,
      sym_inline_expression,
    STATE(260), 1,
      sym_bindings,
    ACTIONS(106), 2,
      sym_true,
      sym_false,
    STATE(9), 2,
      sym_boolean,
      sym_string,
    STATE(82), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1451] = 2,
    ACTIONS(68), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(70), 18,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1477] = 13,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym_float,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      sym_this,
    STATE(78), 1,
      sym_inline_expression,
    STATE(260), 1,
      sym_bindings,
    ACTIONS(106), 2,
      sym_true,
      sym_false,
    STATE(9), 2,
      sym_boolean,
      sym_string,
    STATE(82), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1525] = 13,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym_float,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      sym_this,
    STATE(88), 1,
      sym_inline_expression,
    STATE(260), 1,
      sym_bindings,
    ACTIONS(106), 2,
      sym_true,
      sym_false,
    STATE(9), 2,
      sym_boolean,
      sym_string,
    STATE(82), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1573] = 13,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym_float,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      sym_this,
    STATE(95), 1,
      sym_inline_expression,
    STATE(260), 1,
      sym_bindings,
    ACTIONS(106), 2,
      sym_true,
      sym_false,
    STATE(9), 2,
      sym_boolean,
      sym_string,
    STATE(82), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1621] = 13,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      sym_this,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(250), 1,
      sym_inline_expression,
    STATE(267), 1,
      sym_bindings,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(238), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(27), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1669] = 10,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      anon_sym_COLON,
    STATE(50), 1,
      aux_sym_proj_expression_repeat1,
    STATE(51), 1,
      sym_arguments,
    STATE(64), 1,
      sym_operator_identifier,
    STATE(264), 1,
      sym_type_arguments,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1711] = 13,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      sym_this,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(242), 1,
      sym_inline_expression,
    STATE(267), 1,
      sym_bindings,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(238), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(27), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1759] = 10,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_proj_expression_repeat1,
    STATE(51), 1,
      sym_arguments,
    STATE(64), 1,
      sym_operator_identifier,
    STATE(264), 1,
      sym_type_arguments,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1801] = 13,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      sym_this,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(252), 1,
      sym_inline_expression,
    STATE(267), 1,
      sym_bindings,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(238), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(27), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1849] = 2,
    ACTIONS(72), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(74), 18,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1875] = 13,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym_float,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      sym_this,
    STATE(84), 1,
      sym_inline_expression,
    STATE(260), 1,
      sym_bindings,
    ACTIONS(106), 2,
      sym_true,
      sym_false,
    STATE(9), 2,
      sym_boolean,
      sym_string,
    STATE(82), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1923] = 4,
    ACTIONS(185), 1,
      anon_sym_DASH_GT,
    ACTIONS(187), 1,
      anon_sym_EQ_GT,
    ACTIONS(33), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1952] = 4,
    ACTIONS(189), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_proj_expression_repeat1,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 16,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1981] = 3,
    STATE(49), 1,
      aux_sym_proj_expression_repeat1,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 17,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2008] = 2,
    ACTIONS(60), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(62), 17,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2032] = 12,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 1,
      sym_this,
    STATE(205), 1,
      sym_lambda_expression,
    STATE(267), 1,
      sym_bindings,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(25), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2076] = 12,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(198), 1,
      sym_this,
    STATE(196), 1,
      sym_lambda_expression,
    STATE(267), 1,
      sym_bindings,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(26), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2120] = 2,
    ACTIONS(80), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(82), 17,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2144] = 2,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(94), 17,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2168] = 2,
    ACTIONS(88), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(90), 17,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2192] = 2,
    ACTIONS(84), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 17,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2216] = 2,
    ACTIONS(76), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(78), 17,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2240] = 2,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 17,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2264] = 4,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(202), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(35), 14,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2292] = 11,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 1,
      sym_this,
    STATE(212), 1,
      sym_binding,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(44), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2333] = 11,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(212), 1,
      sym_this,
    STATE(212), 1,
      sym_binding,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(32), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2374] = 11,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      sym_this,
    STATE(233), 1,
      sym_lambda_expression,
    STATE(267), 1,
      sym_bindings,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(28), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2415] = 8,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    ACTIONS(216), 2,
      sym_identifier,
      sym_this,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(24), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2448] = 12,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym__,
    ACTIONS(224), 1,
      sym__dedent,
    STATE(188), 1,
      sym_pattern,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(66), 2,
      sym_case,
      aux_sym_match_expression_repeat1,
    STATE(171), 2,
      sym_patterns,
      sym_literal,
  [2489] = 12,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym__,
    ACTIONS(238), 1,
      sym_integer,
    ACTIONS(241), 1,
      sym_float,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      sym__dedent,
    STATE(188), 1,
      sym_pattern,
    ACTIONS(235), 2,
      sym_true,
      sym_false,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(66), 2,
      sym_case,
      aux_sym_match_expression_repeat1,
    STATE(171), 2,
      sym_patterns,
      sym_literal,
  [2530] = 8,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    ACTIONS(212), 2,
      sym_identifier,
      sym_this,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(32), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2563] = 8,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    ACTIONS(210), 2,
      sym_identifier,
      sym_this,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(44), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2596] = 8,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym_float,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 2,
      sym_true,
      sym_false,
    ACTIONS(249), 2,
      sym_identifier,
      sym_this,
    STATE(9), 2,
      sym_boolean,
      sym_string,
    STATE(2), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2629] = 8,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    ACTIONS(253), 2,
      sym_identifier,
      sym_this,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(42), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2662] = 11,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym__,
    STATE(188), 1,
      sym_pattern,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(65), 2,
      sym_case,
      aux_sym_match_expression_repeat1,
    STATE(171), 2,
      sym_patterns,
      sym_literal,
  [2700] = 11,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym__,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      sym_pattern,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(171), 2,
      sym_patterns,
      sym_literal,
  [2737] = 10,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym__,
    STATE(265), 1,
      sym_pattern,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(171), 2,
      sym_patterns,
      sym_literal,
  [2771] = 10,
    ACTIONS(173), 1,
      sym_integer,
    ACTIONS(175), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym__,
    STATE(259), 1,
      sym_pattern,
    ACTIONS(171), 2,
      sym_true,
      sym_false,
    STATE(29), 2,
      sym_boolean,
      sym_string,
    STATE(171), 2,
      sym_patterns,
      sym_literal,
  [2805] = 4,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(259), 1,
      anon_sym_EQ,
    STATE(87), 1,
      sym_type_arguments,
    ACTIONS(257), 9,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_RPAREN,
      anon_sym_impl,
      anon_sym_fun,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [2826] = 2,
    ACTIONS(263), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(261), 8,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
  [2843] = 2,
    ACTIONS(267), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(265), 8,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
  [2860] = 2,
    ACTIONS(271), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(269), 8,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
  [2877] = 2,
    ACTIONS(275), 1,
      anon_sym_EQ,
    ACTIONS(273), 11,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_impl,
      anon_sym_fun,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [2894] = 5,
    ACTIONS(5), 1,
      anon_sym_type,
    ACTIONS(7), 1,
      anon_sym_impl,
    ACTIONS(9), 1,
      anon_sym_fun,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    STATE(81), 8,
      sym__definition,
      sym_variant_definition,
      sym_record_definition,
      sym_tuple_definition,
      sym_type_function_definitions,
      sym_type_alias_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [2917] = 5,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 1,
      anon_sym_type,
    ACTIONS(284), 1,
      anon_sym_impl,
    ACTIONS(287), 1,
      anon_sym_fun,
    STATE(81), 8,
      sym__definition,
      sym_variant_definition,
      sym_record_definition,
      sym_tuple_definition,
      sym_type_function_definitions,
      sym_type_alias_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [2940] = 2,
    ACTIONS(27), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(21), 8,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
  [2957] = 2,
    ACTIONS(292), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(290), 8,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
  [2974] = 2,
    ACTIONS(296), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(294), 8,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
  [2991] = 2,
    ACTIONS(300), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(298), 7,
      anon_sym_let,
      anon_sym_match,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
  [3007] = 2,
    ACTIONS(304), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(302), 7,
      anon_sym_let,
      anon_sym_match,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
  [3023] = 2,
    ACTIONS(308), 1,
      anon_sym_EQ,
    ACTIONS(306), 10,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_RPAREN,
      anon_sym_impl,
      anon_sym_fun,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [3039] = 2,
    ACTIONS(312), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(310), 7,
      anon_sym_let,
      anon_sym_match,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
  [3055] = 2,
    ACTIONS(31), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(29), 7,
      anon_sym_let,
      anon_sym_match,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
  [3071] = 2,
    ACTIONS(316), 1,
      anon_sym_EQ,
    ACTIONS(314), 9,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_RPAREN,
      anon_sym_impl,
      anon_sym_fun,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [3086] = 3,
    ACTIONS(320), 1,
      anon_sym_EQ,
    ACTIONS(322), 1,
      anon_sym_DASH_GT,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_RPAREN,
      anon_sym_impl,
      anon_sym_fun,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [3103] = 2,
    ACTIONS(259), 1,
      anon_sym_EQ,
    ACTIONS(257), 9,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_RPAREN,
      anon_sym_impl,
      anon_sym_fun,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [3118] = 7,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      sym_type,
    STATE(214), 1,
      sym_param,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
    STATE(284), 2,
      sym_type_list,
      sym_parameter_list,
  [3143] = 2,
    ACTIONS(330), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(328), 5,
      anon_sym__,
      sym_identifier,
      sym_true,
      sym_false,
      sym_integer,
  [3157] = 2,
    ACTIONS(334), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(332), 5,
      anon_sym__,
      sym_identifier,
      sym_true,
      sym_false,
      sym_integer,
  [3171] = 6,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(137), 1,
      sym_type,
    STATE(289), 1,
      sym_type_list,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3192] = 6,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(137), 1,
      sym_type,
    STATE(277), 1,
      sym_type_list,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3213] = 6,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(137), 1,
      sym_type,
    STATE(306), 1,
      sym_type_list,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3234] = 6,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(137), 1,
      sym_type,
    STATE(278), 1,
      sym_type_list,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3255] = 2,
    ACTIONS(340), 3,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(338), 5,
      sym_identifier,
      sym_this,
      sym_true,
      sym_false,
      sym_integer,
  [3268] = 6,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(137), 1,
      sym_type,
    STATE(294), 1,
      sym_type_list,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3289] = 6,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(137), 1,
      sym_type,
    STATE(282), 1,
      sym_type_list,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3310] = 6,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(137), 1,
      sym_type,
    STATE(283), 1,
      sym_type_list,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3331] = 6,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(137), 1,
      sym_type,
    STATE(276), 1,
      sym_type_list,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3352] = 5,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_type,
    STATE(151), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(255), 2,
      sym_function_type,
      sym_tuple_type,
  [3370] = 5,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(263), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3388] = 5,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(190), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3406] = 5,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(202), 1,
      sym_type,
    STATE(151), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(255), 2,
      sym_function_type,
      sym_tuple_type,
  [3424] = 5,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(130), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3442] = 5,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_type,
    STATE(151), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(255), 2,
      sym_function_type,
      sym_tuple_type,
  [3460] = 5,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym_type,
    STATE(151), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(255), 2,
      sym_function_type,
      sym_tuple_type,
  [3478] = 5,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(249), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3496] = 5,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(159), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3514] = 5,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(199), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3532] = 5,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(262), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3550] = 5,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(246), 1,
      sym_type,
    STATE(151), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(255), 2,
      sym_function_type,
      sym_tuple_type,
  [3568] = 5,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_type,
    STATE(151), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(255), 2,
      sym_function_type,
      sym_tuple_type,
  [3586] = 5,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym_type,
    STATE(151), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(255), 2,
      sym_function_type,
      sym_tuple_type,
  [3604] = 5,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_type,
    STATE(151), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(255), 2,
      sym_function_type,
      sym_tuple_type,
  [3622] = 5,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(244), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3640] = 5,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(134), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3658] = 5,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(201), 1,
      sym_type,
    STATE(151), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(255), 2,
      sym_function_type,
      sym_tuple_type,
  [3676] = 5,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(258), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3694] = 5,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    STATE(220), 1,
      sym_type,
    STATE(131), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(213), 2,
      sym_function_type,
      sym_tuple_type,
  [3712] = 5,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(91), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(92), 2,
      sym_function_type,
      sym_tuple_type,
  [3730] = 5,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym_type,
    STATE(131), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(213), 2,
      sym_function_type,
      sym_tuple_type,
  [3748] = 4,
    ACTIONS(350), 1,
      sym_identifier,
    STATE(225), 1,
      sym_param,
    STATE(132), 2,
      sym_record_type_field,
      aux_sym_record_definition_repeat1,
    STATE(147), 2,
      sym_variant_type_value,
      aux_sym_variant_definition_repeat1,
  [3763] = 3,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_patterns,
    ACTIONS(352), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [3776] = 4,
    ACTIONS(350), 1,
      sym_identifier,
    STATE(225), 1,
      sym_param,
    STATE(136), 2,
      sym_record_type_field,
      aux_sym_record_definition_repeat1,
    STATE(144), 2,
      sym_variant_type_value,
      aux_sym_variant_definition_repeat1,
  [3791] = 2,
    ACTIONS(322), 1,
      anon_sym_DASH_GT,
    ACTIONS(354), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_fun,
  [3801] = 3,
    ACTIONS(356), 1,
      anon_sym_LBRACK,
    STATE(162), 1,
      sym_type_arguments,
    ACTIONS(257), 3,
      sym__dedent,
      anon_sym_DASH_GT,
      sym_identifier,
  [3813] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(360), 1,
      sym__dedent,
    STATE(225), 1,
      sym_param,
    STATE(135), 2,
      sym_record_type_field,
      aux_sym_record_definition_repeat1,
  [3827] = 5,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    STATE(222), 1,
      sym_type_param_clause,
  [3843] = 2,
    ACTIONS(322), 1,
      anon_sym_DASH_GT,
    ACTIONS(370), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_fun,
  [3853] = 4,
    ACTIONS(372), 1,
      sym_identifier,
    ACTIONS(375), 1,
      sym__dedent,
    STATE(225), 1,
      sym_param,
    STATE(135), 2,
      sym_record_type_field,
      aux_sym_record_definition_repeat1,
  [3867] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(377), 1,
      sym__dedent,
    STATE(225), 1,
      sym_param,
    STATE(135), 2,
      sym_record_type_field,
      aux_sym_record_definition_repeat1,
  [3881] = 4,
    ACTIONS(322), 1,
      anon_sym_DASH_GT,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(379), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3895] = 2,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 4,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [3905] = 1,
    ACTIONS(387), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_fun,
      anon_sym_RBRACE,
  [3913] = 4,
    ACTIONS(391), 1,
      anon_sym_COLON,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    STATE(227), 1,
      sym_variant_type_value_args,
    ACTIONS(389), 2,
      sym__dedent,
      sym_identifier,
  [3927] = 1,
    ACTIONS(395), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_fun,
  [3934] = 1,
    ACTIONS(397), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [3941] = 3,
    ACTIONS(399), 1,
      anon_sym_fun,
    ACTIONS(401), 1,
      sym__dedent,
    STATE(161), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [3952] = 3,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(405), 1,
      sym__dedent,
    STATE(172), 2,
      sym_variant_type_value,
      aux_sym_variant_definition_repeat1,
  [3963] = 4,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_param,
    STATE(293), 1,
      sym_parameter_list,
  [3976] = 4,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_param,
    STATE(297), 1,
      sym_parameter_list,
  [3989] = 3,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(413), 1,
      sym__dedent,
    STATE(172), 2,
      sym_variant_type_value,
      aux_sym_variant_definition_repeat1,
  [4000] = 1,
    ACTIONS(415), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_fun,
  [4007] = 1,
    ACTIONS(417), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_fun,
  [4014] = 3,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      aux_sym_string_repeat1,
    ACTIONS(421), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4025] = 3,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    STATE(216), 1,
      sym_type_arguments,
    ACTIONS(257), 2,
      sym__indent,
      anon_sym_DASH_GT,
  [4036] = 4,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_param,
    STATE(305), 1,
      sym_parameter_list,
  [4049] = 3,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(427), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4060] = 1,
    ACTIONS(429), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_fun,
  [4067] = 1,
    ACTIONS(431), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [4074] = 3,
    ACTIONS(433), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      aux_sym_string_repeat1,
    ACTIONS(435), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4085] = 1,
    ACTIONS(438), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_fun,
  [4092] = 3,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(440), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4103] = 2,
    ACTIONS(322), 1,
      anon_sym_DASH_GT,
    ACTIONS(445), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4112] = 1,
    ACTIONS(447), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_fun,
  [4119] = 3,
    ACTIONS(449), 1,
      anon_sym_fun,
    ACTIONS(452), 1,
      sym__dedent,
    STATE(161), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4130] = 1,
    ACTIONS(306), 4,
      sym__dedent,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [4137] = 3,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      aux_sym_string_repeat1,
    ACTIONS(456), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4148] = 1,
    ACTIONS(458), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_fun,
  [4155] = 1,
    ACTIONS(273), 4,
      sym__dedent,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [4162] = 3,
    ACTIONS(399), 1,
      anon_sym_fun,
    ACTIONS(460), 1,
      sym__dedent,
    STATE(161), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4173] = 1,
    ACTIONS(462), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [4180] = 1,
    ACTIONS(464), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [4187] = 3,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      aux_sym_string_repeat1,
    ACTIONS(468), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4198] = 3,
    ACTIONS(470), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      aux_sym_string_repeat1,
    ACTIONS(421), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4209] = 1,
    ACTIONS(352), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [4216] = 3,
    ACTIONS(472), 1,
      sym_identifier,
    ACTIONS(475), 1,
      sym__dedent,
    STATE(172), 2,
      sym_variant_type_value,
      aux_sym_variant_definition_repeat1,
  [4227] = 1,
    ACTIONS(477), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_fun,
  [4234] = 3,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    STATE(227), 1,
      sym_variant_type_value_args,
    ACTIONS(389), 2,
      sym__dedent,
      sym_identifier,
  [4245] = 1,
    ACTIONS(479), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_fun,
  [4252] = 1,
    ACTIONS(481), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_fun,
  [4259] = 1,
    ACTIONS(483), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_fun,
  [4266] = 1,
    ACTIONS(485), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_fun,
  [4273] = 4,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_param,
    STATE(303), 1,
      sym_parameter_list,
  [4286] = 3,
    ACTIONS(489), 1,
      anon_sym_EQ_GT,
    ACTIONS(491), 1,
      anon_sym_PIPE,
    STATE(208), 1,
      aux_sym_case_repeat1,
  [4296] = 1,
    ACTIONS(493), 3,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [4302] = 3,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(307), 1,
      sym_type_param_clause,
  [4312] = 1,
    ACTIONS(497), 3,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [4318] = 3,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      aux_sym_type_param_clause_repeat1,
  [4328] = 3,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      anon_sym_RBRACK,
    STATE(185), 1,
      aux_sym_type_param_clause_repeat1,
  [4338] = 3,
    ACTIONS(508), 1,
      anon_sym_DASH_GT,
    ACTIONS(510), 1,
      sym__indent,
    STATE(173), 1,
      sym_block,
  [4348] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      aux_sym_arguments_repeat1,
  [4358] = 3,
    ACTIONS(491), 1,
      anon_sym_PIPE,
    ACTIONS(514), 1,
      anon_sym_EQ_GT,
    STATE(180), 1,
      aux_sym_case_repeat1,
  [4368] = 2,
    ACTIONS(399), 1,
      anon_sym_fun,
    STATE(143), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4376] = 2,
    ACTIONS(322), 1,
      anon_sym_DASH_GT,
    ACTIONS(516), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4384] = 3,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_arguments_repeat1,
  [4394] = 3,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_parameter_list_repeat1,
  [4404] = 3,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_parameter_list_repeat1,
  [4414] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      aux_sym_arguments_repeat1,
  [4424] = 3,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_patterns_repeat1,
  [4434] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      aux_sym_arguments_repeat1,
  [4444] = 3,
    ACTIONS(508), 1,
      anon_sym_DASH_GT,
    ACTIONS(510), 1,
      sym__indent,
    STATE(141), 1,
      sym_block,
  [4454] = 2,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(202), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4462] = 2,
    ACTIONS(322), 1,
      anon_sym_DASH_GT,
    ACTIONS(536), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4470] = 3,
    ACTIONS(508), 1,
      anon_sym_DASH_GT,
    ACTIONS(510), 1,
      sym__indent,
    STATE(157), 1,
      sym_block,
  [4480] = 3,
    ACTIONS(508), 1,
      anon_sym_DASH_GT,
    ACTIONS(538), 1,
      sym__indent,
    STATE(237), 1,
      sym_block,
  [4490] = 3,
    ACTIONS(508), 1,
      anon_sym_DASH_GT,
    ACTIONS(538), 1,
      sym__indent,
    STATE(231), 1,
      sym_block,
  [4500] = 3,
    ACTIONS(508), 1,
      anon_sym_DASH_GT,
    ACTIONS(538), 1,
      sym__indent,
    STATE(230), 1,
      sym_block,
  [4510] = 3,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym_patterns_repeat1,
  [4520] = 3,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_arguments_repeat1,
  [4530] = 3,
    ACTIONS(508), 1,
      anon_sym_DASH_GT,
    ACTIONS(538), 1,
      sym__indent,
    STATE(248), 1,
      sym_block,
  [4540] = 2,
    ACTIONS(542), 1,
      anon_sym_DASH_GT,
    ACTIONS(318), 2,
      sym__dedent,
      sym_identifier,
  [4548] = 3,
    ACTIONS(544), 1,
      anon_sym_EQ_GT,
    ACTIONS(546), 1,
      anon_sym_PIPE,
    STATE(208), 1,
      aux_sym_case_repeat1,
  [4558] = 1,
    ACTIONS(314), 3,
      sym__dedent,
      anon_sym_DASH_GT,
      sym_identifier,
  [4564] = 3,
    ACTIONS(508), 1,
      anon_sym_DASH_GT,
    ACTIONS(510), 1,
      sym__indent,
    STATE(160), 1,
      sym_block,
  [4574] = 3,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_patterns_repeat1,
  [4584] = 3,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym_bindings_repeat1,
  [4594] = 1,
    ACTIONS(257), 3,
      sym__dedent,
      anon_sym_DASH_GT,
      sym_identifier,
  [4600] = 3,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      aux_sym_parameter_list_repeat1,
  [4610] = 2,
    ACTIONS(399), 1,
      anon_sym_fun,
    STATE(166), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4618] = 1,
    ACTIONS(306), 3,
      sym__indent,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [4624] = 3,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      anon_sym_COLON,
    STATE(291), 1,
      sym_type_param_clause,
  [4634] = 3,
    ACTIONS(368), 1,
      anon_sym_LBRACK,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym_type_param_clause,
  [4644] = 3,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_bindings_repeat1,
  [4654] = 2,
    ACTIONS(542), 1,
      anon_sym_DASH_GT,
    ACTIONS(516), 2,
      sym__dedent,
      sym_identifier,
  [4662] = 1,
    ACTIONS(273), 3,
      sym__indent,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [4668] = 3,
    ACTIONS(569), 1,
      anon_sym_COLON,
    ACTIONS(571), 1,
      anon_sym_LPAREN,
    ACTIONS(573), 1,
      anon_sym_EQ,
  [4678] = 3,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_RBRACK,
    STATE(185), 1,
      aux_sym_type_param_clause_repeat1,
  [4688] = 3,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      aux_sym_bindings_repeat1,
  [4698] = 1,
    ACTIONS(579), 2,
      sym__dedent,
      sym_identifier,
  [4703] = 1,
    ACTIONS(525), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4708] = 1,
    ACTIONS(581), 2,
      sym__dedent,
      sym_identifier,
  [4713] = 2,
    ACTIONS(510), 1,
      sym__indent,
    STATE(280), 1,
      sym_block,
  [4720] = 1,
    ACTIONS(506), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4725] = 1,
    ACTIONS(395), 2,
      sym__dedent,
      anon_sym_fun,
  [4730] = 1,
    ACTIONS(438), 2,
      sym__dedent,
      anon_sym_fun,
  [4735] = 1,
    ACTIONS(583), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4740] = 1,
    ACTIONS(157), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4745] = 2,
    ACTIONS(585), 1,
      sym_identifier,
    STATE(184), 1,
      sym_type_param,
  [4752] = 2,
    ACTIONS(587), 1,
      sym_identifier,
    STATE(261), 1,
      sym_binding,
  [4759] = 1,
    ACTIONS(387), 2,
      sym__dedent,
      anon_sym_fun,
  [4764] = 1,
    ACTIONS(447), 2,
      sym__dedent,
      anon_sym_fun,
  [4769] = 1,
    ACTIONS(27), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4774] = 1,
    ACTIONS(296), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4779] = 1,
    ACTIONS(589), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [4784] = 2,
    ACTIONS(407), 1,
      sym_identifier,
    STATE(226), 1,
      sym_param,
  [4791] = 1,
    ACTIONS(263), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4796] = 2,
    ACTIONS(585), 1,
      sym_identifier,
    STATE(229), 1,
      sym_type_param,
  [4803] = 2,
    ACTIONS(322), 1,
      anon_sym_DASH_GT,
    ACTIONS(591), 1,
      anon_sym_EQ,
  [4810] = 2,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_arguments,
  [4817] = 2,
    ACTIONS(318), 1,
      sym__indent,
    ACTIONS(508), 1,
      anon_sym_DASH_GT,
  [4824] = 1,
    ACTIONS(314), 2,
      sym__indent,
      anon_sym_DASH_GT,
  [4829] = 1,
    ACTIONS(477), 2,
      sym__dedent,
      anon_sym_fun,
  [4834] = 2,
    ACTIONS(322), 1,
      anon_sym_DASH_GT,
    ACTIONS(593), 1,
      anon_sym_EQ_GT,
  [4841] = 1,
    ACTIONS(271), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4846] = 1,
    ACTIONS(267), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4851] = 1,
    ACTIONS(292), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4856] = 2,
    ACTIONS(595), 1,
      anon_sym_COLON,
    ACTIONS(597), 1,
      anon_sym_EQ,
  [4863] = 2,
    ACTIONS(510), 1,
      sym__indent,
    STATE(292), 1,
      sym_block,
  [4870] = 1,
    ACTIONS(257), 2,
      sym__indent,
      anon_sym_DASH_GT,
  [4875] = 1,
    ACTIONS(599), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [4880] = 1,
    ACTIONS(601), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [4885] = 2,
    ACTIONS(322), 1,
      anon_sym_DASH_GT,
    ACTIONS(603), 1,
      anon_sym_EQ_GT,
  [4892] = 1,
    ACTIONS(605), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4897] = 2,
    ACTIONS(607), 1,
      anon_sym_DASH_GT,
    ACTIONS(609), 1,
      anon_sym_EQ_GT,
  [4904] = 1,
    ACTIONS(564), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4909] = 2,
    ACTIONS(322), 1,
      anon_sym_DASH_GT,
    ACTIONS(611), 1,
      anon_sym_EQ_GT,
  [4916] = 2,
    ACTIONS(322), 1,
      anon_sym_DASH_GT,
    ACTIONS(613), 1,
      anon_sym_EQ_GT,
  [4923] = 2,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_arguments,
  [4930] = 1,
    ACTIONS(544), 2,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [4935] = 1,
    ACTIONS(615), 2,
      sym__dedent,
      sym_identifier,
  [4940] = 2,
    ACTIONS(617), 1,
      anon_sym_DASH_GT,
    ACTIONS(619), 1,
      anon_sym_EQ_GT,
  [4947] = 1,
    ACTIONS(621), 1,
      sym__indent,
  [4951] = 1,
    ACTIONS(623), 1,
      sym_identifier,
  [4955] = 1,
    ACTIONS(625), 1,
      sym__indent,
  [4959] = 1,
    ACTIONS(627), 1,
      ts_builtin_sym_end,
  [4963] = 1,
    ACTIONS(629), 1,
      sym_identifier,
  [4967] = 1,
    ACTIONS(631), 1,
      sym__indent,
  [4971] = 1,
    ACTIONS(633), 1,
      sym_identifier,
  [4975] = 1,
    ACTIONS(635), 1,
      sym_identifier,
  [4979] = 1,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
  [4983] = 1,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
  [4987] = 1,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
  [4991] = 1,
    ACTIONS(643), 1,
      sym_identifier,
  [4995] = 1,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
  [4999] = 1,
    ACTIONS(391), 1,
      anon_sym_COLON,
  [5003] = 1,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
  [5007] = 1,
    ACTIONS(649), 1,
      anon_sym_RBRACK,
  [5011] = 1,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
  [5015] = 1,
    ACTIONS(383), 1,
      anon_sym_COLON,
  [5019] = 1,
    ACTIONS(653), 1,
      anon_sym_DASH_GT,
  [5023] = 1,
    ACTIONS(655), 1,
      sym_identifier,
  [5027] = 1,
    ACTIONS(657), 1,
      anon_sym_DASH_GT,
  [5031] = 1,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
  [5035] = 1,
    ACTIONS(661), 1,
      sym__indent,
  [5039] = 1,
    ACTIONS(663), 1,
      anon_sym_COLON,
  [5043] = 1,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
  [5047] = 1,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
  [5051] = 1,
    ACTIONS(669), 1,
      anon_sym_RBRACK,
  [5055] = 1,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
  [5059] = 1,
    ACTIONS(673), 1,
      sym__indent,
  [5063] = 1,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
  [5067] = 1,
    ACTIONS(677), 1,
      anon_sym_DASH_GT,
  [5071] = 1,
    ACTIONS(679), 1,
      anon_sym_DASH_GT,
  [5075] = 1,
    ACTIONS(681), 1,
      anon_sym_DASH_GT,
  [5079] = 1,
    ACTIONS(683), 1,
      anon_sym_DASH_GT,
  [5083] = 1,
    ACTIONS(685), 1,
      anon_sym_DASH_GT,
  [5087] = 1,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
  [5091] = 1,
    ACTIONS(689), 1,
      anon_sym_DASH_GT,
  [5095] = 1,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
  [5099] = 1,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
  [5103] = 1,
    ACTIONS(695), 1,
      anon_sym_LPAREN,
  [5107] = 1,
    ACTIONS(697), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 157,
  [SMALL_STATE(6)] = 195,
  [SMALL_STATE(7)] = 230,
  [SMALL_STATE(8)] = 267,
  [SMALL_STATE(9)] = 299,
  [SMALL_STATE(10)] = 331,
  [SMALL_STATE(11)] = 363,
  [SMALL_STATE(12)] = 395,
  [SMALL_STATE(13)] = 427,
  [SMALL_STATE(14)] = 459,
  [SMALL_STATE(15)] = 491,
  [SMALL_STATE(16)] = 523,
  [SMALL_STATE(17)] = 555,
  [SMALL_STATE(18)] = 587,
  [SMALL_STATE(19)] = 619,
  [SMALL_STATE(20)] = 675,
  [SMALL_STATE(21)] = 731,
  [SMALL_STATE(22)] = 787,
  [SMALL_STATE(23)] = 840,
  [SMALL_STATE(24)] = 893,
  [SMALL_STATE(25)] = 935,
  [SMALL_STATE(26)] = 983,
  [SMALL_STATE(27)] = 1031,
  [SMALL_STATE(28)] = 1074,
  [SMALL_STATE(29)] = 1117,
  [SMALL_STATE(30)] = 1143,
  [SMALL_STATE(31)] = 1191,
  [SMALL_STATE(32)] = 1239,
  [SMALL_STATE(33)] = 1281,
  [SMALL_STATE(34)] = 1329,
  [SMALL_STATE(35)] = 1355,
  [SMALL_STATE(36)] = 1403,
  [SMALL_STATE(37)] = 1451,
  [SMALL_STATE(38)] = 1477,
  [SMALL_STATE(39)] = 1525,
  [SMALL_STATE(40)] = 1573,
  [SMALL_STATE(41)] = 1621,
  [SMALL_STATE(42)] = 1669,
  [SMALL_STATE(43)] = 1711,
  [SMALL_STATE(44)] = 1759,
  [SMALL_STATE(45)] = 1801,
  [SMALL_STATE(46)] = 1849,
  [SMALL_STATE(47)] = 1875,
  [SMALL_STATE(48)] = 1923,
  [SMALL_STATE(49)] = 1952,
  [SMALL_STATE(50)] = 1981,
  [SMALL_STATE(51)] = 2008,
  [SMALL_STATE(52)] = 2032,
  [SMALL_STATE(53)] = 2076,
  [SMALL_STATE(54)] = 2120,
  [SMALL_STATE(55)] = 2144,
  [SMALL_STATE(56)] = 2168,
  [SMALL_STATE(57)] = 2192,
  [SMALL_STATE(58)] = 2216,
  [SMALL_STATE(59)] = 2240,
  [SMALL_STATE(60)] = 2264,
  [SMALL_STATE(61)] = 2292,
  [SMALL_STATE(62)] = 2333,
  [SMALL_STATE(63)] = 2374,
  [SMALL_STATE(64)] = 2415,
  [SMALL_STATE(65)] = 2448,
  [SMALL_STATE(66)] = 2489,
  [SMALL_STATE(67)] = 2530,
  [SMALL_STATE(68)] = 2563,
  [SMALL_STATE(69)] = 2596,
  [SMALL_STATE(70)] = 2629,
  [SMALL_STATE(71)] = 2662,
  [SMALL_STATE(72)] = 2700,
  [SMALL_STATE(73)] = 2737,
  [SMALL_STATE(74)] = 2771,
  [SMALL_STATE(75)] = 2805,
  [SMALL_STATE(76)] = 2826,
  [SMALL_STATE(77)] = 2843,
  [SMALL_STATE(78)] = 2860,
  [SMALL_STATE(79)] = 2877,
  [SMALL_STATE(80)] = 2894,
  [SMALL_STATE(81)] = 2917,
  [SMALL_STATE(82)] = 2940,
  [SMALL_STATE(83)] = 2957,
  [SMALL_STATE(84)] = 2974,
  [SMALL_STATE(85)] = 2991,
  [SMALL_STATE(86)] = 3007,
  [SMALL_STATE(87)] = 3023,
  [SMALL_STATE(88)] = 3039,
  [SMALL_STATE(89)] = 3055,
  [SMALL_STATE(90)] = 3071,
  [SMALL_STATE(91)] = 3086,
  [SMALL_STATE(92)] = 3103,
  [SMALL_STATE(93)] = 3118,
  [SMALL_STATE(94)] = 3143,
  [SMALL_STATE(95)] = 3157,
  [SMALL_STATE(96)] = 3171,
  [SMALL_STATE(97)] = 3192,
  [SMALL_STATE(98)] = 3213,
  [SMALL_STATE(99)] = 3234,
  [SMALL_STATE(100)] = 3255,
  [SMALL_STATE(101)] = 3268,
  [SMALL_STATE(102)] = 3289,
  [SMALL_STATE(103)] = 3310,
  [SMALL_STATE(104)] = 3331,
  [SMALL_STATE(105)] = 3352,
  [SMALL_STATE(106)] = 3370,
  [SMALL_STATE(107)] = 3388,
  [SMALL_STATE(108)] = 3406,
  [SMALL_STATE(109)] = 3424,
  [SMALL_STATE(110)] = 3442,
  [SMALL_STATE(111)] = 3460,
  [SMALL_STATE(112)] = 3478,
  [SMALL_STATE(113)] = 3496,
  [SMALL_STATE(114)] = 3514,
  [SMALL_STATE(115)] = 3532,
  [SMALL_STATE(116)] = 3550,
  [SMALL_STATE(117)] = 3568,
  [SMALL_STATE(118)] = 3586,
  [SMALL_STATE(119)] = 3604,
  [SMALL_STATE(120)] = 3622,
  [SMALL_STATE(121)] = 3640,
  [SMALL_STATE(122)] = 3658,
  [SMALL_STATE(123)] = 3676,
  [SMALL_STATE(124)] = 3694,
  [SMALL_STATE(125)] = 3712,
  [SMALL_STATE(126)] = 3730,
  [SMALL_STATE(127)] = 3748,
  [SMALL_STATE(128)] = 3763,
  [SMALL_STATE(129)] = 3776,
  [SMALL_STATE(130)] = 3791,
  [SMALL_STATE(131)] = 3801,
  [SMALL_STATE(132)] = 3813,
  [SMALL_STATE(133)] = 3827,
  [SMALL_STATE(134)] = 3843,
  [SMALL_STATE(135)] = 3853,
  [SMALL_STATE(136)] = 3867,
  [SMALL_STATE(137)] = 3881,
  [SMALL_STATE(138)] = 3895,
  [SMALL_STATE(139)] = 3905,
  [SMALL_STATE(140)] = 3913,
  [SMALL_STATE(141)] = 3927,
  [SMALL_STATE(142)] = 3934,
  [SMALL_STATE(143)] = 3941,
  [SMALL_STATE(144)] = 3952,
  [SMALL_STATE(145)] = 3963,
  [SMALL_STATE(146)] = 3976,
  [SMALL_STATE(147)] = 3989,
  [SMALL_STATE(148)] = 4000,
  [SMALL_STATE(149)] = 4007,
  [SMALL_STATE(150)] = 4014,
  [SMALL_STATE(151)] = 4025,
  [SMALL_STATE(152)] = 4036,
  [SMALL_STATE(153)] = 4049,
  [SMALL_STATE(154)] = 4060,
  [SMALL_STATE(155)] = 4067,
  [SMALL_STATE(156)] = 4074,
  [SMALL_STATE(157)] = 4085,
  [SMALL_STATE(158)] = 4092,
  [SMALL_STATE(159)] = 4103,
  [SMALL_STATE(160)] = 4112,
  [SMALL_STATE(161)] = 4119,
  [SMALL_STATE(162)] = 4130,
  [SMALL_STATE(163)] = 4137,
  [SMALL_STATE(164)] = 4148,
  [SMALL_STATE(165)] = 4155,
  [SMALL_STATE(166)] = 4162,
  [SMALL_STATE(167)] = 4173,
  [SMALL_STATE(168)] = 4180,
  [SMALL_STATE(169)] = 4187,
  [SMALL_STATE(170)] = 4198,
  [SMALL_STATE(171)] = 4209,
  [SMALL_STATE(172)] = 4216,
  [SMALL_STATE(173)] = 4227,
  [SMALL_STATE(174)] = 4234,
  [SMALL_STATE(175)] = 4245,
  [SMALL_STATE(176)] = 4252,
  [SMALL_STATE(177)] = 4259,
  [SMALL_STATE(178)] = 4266,
  [SMALL_STATE(179)] = 4273,
  [SMALL_STATE(180)] = 4286,
  [SMALL_STATE(181)] = 4296,
  [SMALL_STATE(182)] = 4302,
  [SMALL_STATE(183)] = 4312,
  [SMALL_STATE(184)] = 4318,
  [SMALL_STATE(185)] = 4328,
  [SMALL_STATE(186)] = 4338,
  [SMALL_STATE(187)] = 4348,
  [SMALL_STATE(188)] = 4358,
  [SMALL_STATE(189)] = 4368,
  [SMALL_STATE(190)] = 4376,
  [SMALL_STATE(191)] = 4384,
  [SMALL_STATE(192)] = 4394,
  [SMALL_STATE(193)] = 4404,
  [SMALL_STATE(194)] = 4414,
  [SMALL_STATE(195)] = 4424,
  [SMALL_STATE(196)] = 4434,
  [SMALL_STATE(197)] = 4444,
  [SMALL_STATE(198)] = 4454,
  [SMALL_STATE(199)] = 4462,
  [SMALL_STATE(200)] = 4470,
  [SMALL_STATE(201)] = 4480,
  [SMALL_STATE(202)] = 4490,
  [SMALL_STATE(203)] = 4500,
  [SMALL_STATE(204)] = 4510,
  [SMALL_STATE(205)] = 4520,
  [SMALL_STATE(206)] = 4530,
  [SMALL_STATE(207)] = 4540,
  [SMALL_STATE(208)] = 4548,
  [SMALL_STATE(209)] = 4558,
  [SMALL_STATE(210)] = 4564,
  [SMALL_STATE(211)] = 4574,
  [SMALL_STATE(212)] = 4584,
  [SMALL_STATE(213)] = 4594,
  [SMALL_STATE(214)] = 4600,
  [SMALL_STATE(215)] = 4610,
  [SMALL_STATE(216)] = 4618,
  [SMALL_STATE(217)] = 4624,
  [SMALL_STATE(218)] = 4634,
  [SMALL_STATE(219)] = 4644,
  [SMALL_STATE(220)] = 4654,
  [SMALL_STATE(221)] = 4662,
  [SMALL_STATE(222)] = 4668,
  [SMALL_STATE(223)] = 4678,
  [SMALL_STATE(224)] = 4688,
  [SMALL_STATE(225)] = 4698,
  [SMALL_STATE(226)] = 4703,
  [SMALL_STATE(227)] = 4708,
  [SMALL_STATE(228)] = 4713,
  [SMALL_STATE(229)] = 4720,
  [SMALL_STATE(230)] = 4725,
  [SMALL_STATE(231)] = 4730,
  [SMALL_STATE(232)] = 4735,
  [SMALL_STATE(233)] = 4740,
  [SMALL_STATE(234)] = 4745,
  [SMALL_STATE(235)] = 4752,
  [SMALL_STATE(236)] = 4759,
  [SMALL_STATE(237)] = 4764,
  [SMALL_STATE(238)] = 4769,
  [SMALL_STATE(239)] = 4774,
  [SMALL_STATE(240)] = 4779,
  [SMALL_STATE(241)] = 4784,
  [SMALL_STATE(242)] = 4791,
  [SMALL_STATE(243)] = 4796,
  [SMALL_STATE(244)] = 4803,
  [SMALL_STATE(245)] = 4810,
  [SMALL_STATE(246)] = 4817,
  [SMALL_STATE(247)] = 4824,
  [SMALL_STATE(248)] = 4829,
  [SMALL_STATE(249)] = 4834,
  [SMALL_STATE(250)] = 4841,
  [SMALL_STATE(251)] = 4846,
  [SMALL_STATE(252)] = 4851,
  [SMALL_STATE(253)] = 4856,
  [SMALL_STATE(254)] = 4863,
  [SMALL_STATE(255)] = 4870,
  [SMALL_STATE(256)] = 4875,
  [SMALL_STATE(257)] = 4880,
  [SMALL_STATE(258)] = 4885,
  [SMALL_STATE(259)] = 4892,
  [SMALL_STATE(260)] = 4897,
  [SMALL_STATE(261)] = 4904,
  [SMALL_STATE(262)] = 4909,
  [SMALL_STATE(263)] = 4916,
  [SMALL_STATE(264)] = 4923,
  [SMALL_STATE(265)] = 4930,
  [SMALL_STATE(266)] = 4935,
  [SMALL_STATE(267)] = 4940,
  [SMALL_STATE(268)] = 4947,
  [SMALL_STATE(269)] = 4951,
  [SMALL_STATE(270)] = 4955,
  [SMALL_STATE(271)] = 4959,
  [SMALL_STATE(272)] = 4963,
  [SMALL_STATE(273)] = 4967,
  [SMALL_STATE(274)] = 4971,
  [SMALL_STATE(275)] = 4975,
  [SMALL_STATE(276)] = 4979,
  [SMALL_STATE(277)] = 4983,
  [SMALL_STATE(278)] = 4987,
  [SMALL_STATE(279)] = 4991,
  [SMALL_STATE(280)] = 4995,
  [SMALL_STATE(281)] = 4999,
  [SMALL_STATE(282)] = 5003,
  [SMALL_STATE(283)] = 5007,
  [SMALL_STATE(284)] = 5011,
  [SMALL_STATE(285)] = 5015,
  [SMALL_STATE(286)] = 5019,
  [SMALL_STATE(287)] = 5023,
  [SMALL_STATE(288)] = 5027,
  [SMALL_STATE(289)] = 5031,
  [SMALL_STATE(290)] = 5035,
  [SMALL_STATE(291)] = 5039,
  [SMALL_STATE(292)] = 5043,
  [SMALL_STATE(293)] = 5047,
  [SMALL_STATE(294)] = 5051,
  [SMALL_STATE(295)] = 5055,
  [SMALL_STATE(296)] = 5059,
  [SMALL_STATE(297)] = 5063,
  [SMALL_STATE(298)] = 5067,
  [SMALL_STATE(299)] = 5071,
  [SMALL_STATE(300)] = 5075,
  [SMALL_STATE(301)] = 5079,
  [SMALL_STATE(302)] = 5083,
  [SMALL_STATE(303)] = 5087,
  [SMALL_STATE(304)] = 5091,
  [SMALL_STATE(305)] = 5095,
  [SMALL_STATE(306)] = 5099,
  [SMALL_STATE(307)] = 5103,
  [SMALL_STATE(308)] = 5107,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_expression, 3, .production_id = 28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_expression, 3, .production_id = 28),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_expression, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_expression, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expression, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expression, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proj_expression, 2, .production_id = 23),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proj_expression, 2, .production_id = 23),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 29),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 29),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 29), SHIFT_REPEAT(287),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 22),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 22),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 26),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 26),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 3, .production_id = 27),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, .production_id = 27),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(269),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(163),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 29), SHIFT_REPEAT(274),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 1, .production_id = 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(128),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(72),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(171),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(37),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(29),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(29),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(169),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_block_expression, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_block_expression, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 5, .production_id = 15),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 5, .production_id = 15),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(272),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(275),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(279),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 5, .production_id = 31),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 5, .production_id = 31),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 3, .production_id = 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 3, .production_id = 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 6),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 6),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 4, .production_id = 30),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 4, .production_id = 30),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .production_id = 6),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .production_id = 6),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 6, .production_id = 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 6, .production_id = 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3, .production_id = 10),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 3, .production_id = 10),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 4),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_identifier, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_identifier, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_definition, 4, .production_id = 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_definition, 5, .production_id = 7),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_definition_repeat1, 2), SHIFT_REPEAT(281),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_definition_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 1, .production_id = 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 24),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_type_value, 1, .production_id = 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 20),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patterns, 3, .production_id = 32),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_definition, 6, .production_id = 13),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function_definitions, 6, .production_id = 14),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 2, .production_id = 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_definition, 5, .production_id = 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patterns, 4, .production_id = 33),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(156),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 21),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2, .production_id = 12),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2, .production_id = 12), SHIFT_REPEAT(113),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2, .production_id = 11),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 25),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_function_definitions_repeat1, 2), SHIFT_REPEAT(308),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_function_definitions_repeat1, 2),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_definition, 6, .production_id = 9),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patterns, 2),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_definition_repeat1, 2), SHIFT_REPEAT(174),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variant_definition_repeat1, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 19),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_definition, 6, .production_id = 8),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function_definitions, 7, .production_id = 18),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_definition, 7, .production_id = 17),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_definition, 7, .production_id = 16),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_param_clause, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_param_clause, 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_param_clause_repeat1, 2), SHIFT_REPEAT(243),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_param_clause_repeat1, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, .production_id = 15),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(63),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(241),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, .production_id = 15),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(73),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_patterns_repeat1, 2, .production_id = 34),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_patterns_repeat1, 2, .production_id = 34), SHIFT_REPEAT(74),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bindings_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bindings_repeat1, 2), SHIFT_REPEAT(235),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_field, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_type_value, 2, .production_id = 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_param, 1, .production_id = 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindings, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindings, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindings, 4),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_patterns_repeat1, 2, .production_id = 32),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_type_value_args, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [627] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_fuse_external_scanner_create(void);
void tree_sitter_fuse_external_scanner_destroy(void *);
bool tree_sitter_fuse_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_fuse_external_scanner_serialize(void *, char *);
void tree_sitter_fuse_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fuse(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_fuse_external_scanner_create,
      tree_sitter_fuse_external_scanner_destroy,
      tree_sitter_fuse_external_scanner_scan,
      tree_sitter_fuse_external_scanner_serialize,
      tree_sitter_fuse_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
