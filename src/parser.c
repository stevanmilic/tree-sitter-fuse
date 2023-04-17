#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 334
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 41

enum {
  sym_identifier = 1,
  anon_sym_type = 2,
  anon_sym_COLON = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_impl = 6,
  anon_sym_for = 7,
  anon_sym_trait = 8,
  anon_sym_SEMI = 9,
  anon_sym_EQ = 10,
  anon_sym_fun = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_LBRACK = 13,
  anon_sym_COMMA = 14,
  anon_sym_RBRACK = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_let = 18,
  anon_sym_EQ_GT = 19,
  anon_sym__ = 20,
  anon_sym_PIPE = 21,
  anon_sym_match = 22,
  anon_sym_LT_DASH = 23,
  anon_sym_do = 24,
  anon_sym_DOT = 25,
  anon_sym_COLON_COLON = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_STAR = 29,
  anon_sym_SLASH = 30,
  anon_sym_PERCENT = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_LT = 33,
  anon_sym_GT = 34,
  anon_sym_GT_EQ = 35,
  anon_sym_EQ_EQ = 36,
  anon_sym_BANG_EQ = 37,
  anon_sym_AMP_AMP = 38,
  anon_sym_PIPE_PIPE = 39,
  sym_self = 40,
  sym_true = 41,
  sym_false = 42,
  sym_integer = 43,
  sym_float = 44,
  anon_sym_DQUOTE = 45,
  aux_sym_string_token1 = 46,
  sym_escape_sequence = 47,
  sym_comment = 48,
  sym__newline = 49,
  sym__indent = 50,
  sym__dedent = 51,
  sym_source_file = 52,
  sym__definition = 53,
  sym_variant_definition = 54,
  sym_variant_type_value = 55,
  sym_variant_type_value_args = 56,
  sym_record_definition = 57,
  sym_record_type_field = 58,
  sym_tuple_definition = 59,
  sym_type_function_definitions = 60,
  sym_trait_function_definitions = 61,
  sym_trait_definition = 62,
  sym_trait_function = 63,
  sym_type_alias_definition = 64,
  sym_function_definition = 65,
  sym_function_signature = 66,
  sym_type_param = 67,
  sym_type_param_clause = 68,
  sym_type_list = 69,
  sym_type_arguments = 70,
  sym_type = 71,
  sym_function_type = 72,
  sym_tuple_type = 73,
  sym__simple_type = 74,
  sym_generic_type = 75,
  sym_param = 76,
  sym_parameter_list = 77,
  sym_block = 78,
  sym_expression = 79,
  sym_inline_block_expression = 80,
  sym_inline_expression = 81,
  sym_let_expression = 82,
  sym_binding = 83,
  sym_bindings = 84,
  sym_lambda_expression = 85,
  sym_pattern = 86,
  sym_patterns = 87,
  sym_case = 88,
  sym_match_expression = 89,
  sym_do_assign = 90,
  sym_do_action = 91,
  sym_do_expression = 92,
  sym__primary_expression = 93,
  sym_arguments = 94,
  sym_call_expression = 95,
  sym_infix_expression = 96,
  sym_proj_expression = 97,
  sym__parenthesized_expression = 98,
  sym_operator_identifier = 99,
  sym_literal = 100,
  sym_boolean = 101,
  sym_string = 102,
  aux_sym_source_file_repeat1 = 103,
  aux_sym_variant_definition_repeat1 = 104,
  aux_sym_record_definition_repeat1 = 105,
  aux_sym_type_function_definitions_repeat1 = 106,
  aux_sym_trait_definition_repeat1 = 107,
  aux_sym_type_param_clause_repeat1 = 108,
  aux_sym_type_list_repeat1 = 109,
  aux_sym_parameter_list_repeat1 = 110,
  aux_sym_block_repeat1 = 111,
  aux_sym_bindings_repeat1 = 112,
  aux_sym_patterns_repeat1 = 113,
  aux_sym_case_repeat1 = 114,
  aux_sym_match_expression_repeat1 = 115,
  aux_sym_do_expression_repeat1 = 116,
  aux_sym_arguments_repeat1 = 117,
  aux_sym_proj_expression_repeat1 = 118,
  aux_sym_string_repeat1 = 119,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_type] = "type",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_impl] = "impl",
  [anon_sym_for] = "for",
  [anon_sym_trait] = "trait",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_do] = "do",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON_COLON] = "::",
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
  [sym_self] = "self",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
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
  [sym_trait_function_definitions] = "trait_function_definitions",
  [sym_trait_definition] = "trait_definition",
  [sym_trait_function] = "trait_function",
  [sym_type_alias_definition] = "type_alias_definition",
  [sym_function_definition] = "function_definition",
  [sym_function_signature] = "function_signature",
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
  [sym_do_assign] = "do_assign",
  [sym_do_action] = "do_action",
  [sym_do_expression] = "do_expression",
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
  [aux_sym_trait_definition_repeat1] = "trait_definition_repeat1",
  [aux_sym_type_param_clause_repeat1] = "type_param_clause_repeat1",
  [aux_sym_type_list_repeat1] = "type_list_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_bindings_repeat1] = "bindings_repeat1",
  [aux_sym_patterns_repeat1] = "patterns_repeat1",
  [aux_sym_case_repeat1] = "case_repeat1",
  [aux_sym_match_expression_repeat1] = "match_expression_repeat1",
  [aux_sym_do_expression_repeat1] = "do_expression_repeat1",
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
  [anon_sym_for] = anon_sym_for,
  [anon_sym_trait] = anon_sym_trait,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
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
  [sym_self] = sym_self,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
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
  [sym_trait_function_definitions] = sym_trait_function_definitions,
  [sym_trait_definition] = sym_trait_definition,
  [sym_trait_function] = sym_trait_function,
  [sym_type_alias_definition] = sym_type_alias_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_function_signature] = sym_function_signature,
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
  [sym_do_assign] = sym_do_assign,
  [sym_do_action] = sym_do_action,
  [sym_do_expression] = sym_do_expression,
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
  [aux_sym_trait_definition_repeat1] = aux_sym_trait_definition_repeat1,
  [aux_sym_type_param_clause_repeat1] = aux_sym_type_param_clause_repeat1,
  [aux_sym_type_list_repeat1] = aux_sym_type_list_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_bindings_repeat1] = aux_sym_bindings_repeat1,
  [aux_sym_patterns_repeat1] = aux_sym_patterns_repeat1,
  [aux_sym_case_repeat1] = aux_sym_case_repeat1,
  [aux_sym_match_expression_repeat1] = aux_sym_match_expression_repeat1,
  [aux_sym_do_expression_repeat1] = aux_sym_do_expression_repeat1,
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
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
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
  [sym_self] = {
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
  [sym_comment] = {
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
  [sym_trait_function_definitions] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_function] = {
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
  [sym_function_signature] = {
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
  [sym_do_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_do_action] = {
    .visible = true,
    .named = true,
  },
  [sym_do_expression] = {
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
  [aux_sym_trait_definition_repeat1] = {
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
  [aux_sym_do_expression_repeat1] = {
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
  field_trait = 15,
  field_type = 16,
  field_type_arguments = 17,
  field_type_parameters = 18,
  field_value = 19,
  field_values = 20,
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
  [field_trait] = "trait",
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
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 1},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 2},
  [15] = {.index = 27, .length = 2},
  [16] = {.index = 29, .length = 2},
  [17] = {.index = 31, .length = 2},
  [18] = {.index = 33, .length = 1},
  [19] = {.index = 34, .length = 2},
  [20] = {.index = 36, .length = 3},
  [21] = {.index = 39, .length = 2},
  [22] = {.index = 41, .length = 2},
  [23] = {.index = 43, .length = 2},
  [24] = {.index = 45, .length = 2},
  [25] = {.index = 47, .length = 1},
  [26] = {.index = 48, .length = 3},
  [27] = {.index = 51, .length = 3},
  [28] = {.index = 54, .length = 3},
  [29] = {.index = 57, .length = 3},
  [30] = {.index = 60, .length = 3},
  [31] = {.index = 63, .length = 3},
  [32] = {.index = 66, .length = 1},
  [33] = {.index = 67, .length = 3},
  [34] = {.index = 70, .length = 4},
  [35] = {.index = 74, .length = 4},
  [36] = {.index = 78, .length = 4},
  [37] = {.index = 82, .length = 1},
  [38] = {.index = 83, .length = 5},
  [39] = {.index = 88, .length = 2},
  [40] = {.index = 90, .length = 2},
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
    {field_arguments, 1},
    {field_function, 0},
  [6] =
    {field_field, 1, .inherited = true},
    {field_value, 0},
  [8] =
    {field_expressions, 1},
  [9] =
    {field_fields, 3},
    {field_name, 1},
  [11] =
    {field_type, 0},
    {field_type, 1, .inherited = true},
  [13] =
    {field_type, 0},
    {field_type_arguments, 1},
  [15] =
    {field_name, 1},
    {field_type, 4},
    {field_type_parameters, 2},
  [18] =
    {field_field, 1},
  [19] =
    {field_arguments, 2},
    {field_function, 0},
    {field_type_arguments, 1},
  [22] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [25] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [27] =
    {field_name, 1},
    {field_values, 4},
  [29] =
    {field_fields, 4},
    {field_name, 1},
  [31] =
    {field_parameter_types, 0},
    {field_return_type, 2},
  [33] =
    {field_type, 1},
  [34] =
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [36] =
    {field_fields, 4},
    {field_name, 1},
    {field_type_parameters, 2},
  [39] =
    {field_methods, 4},
    {field_type, 1},
  [41] =
    {field_methods, 4},
    {field_name, 1},
  [43] =
    {field_name, 1},
    {field_type, 5},
  [45] =
    {field_name, 0},
    {field_type, 2},
  [47] =
    {field_name, 1},
  [48] =
    {field_name, 1},
    {field_type_parameters, 2},
    {field_values, 5},
  [51] =
    {field_fields, 5},
    {field_name, 1},
    {field_type_parameters, 2},
  [54] =
    {field_methods, 5},
    {field_type, 1},
    {field_type_parameters, 2},
  [57] =
    {field_methods, 5},
    {field_name, 1},
    {field_type_parameters, 2},
  [60] =
    {field_name, 1},
    {field_parameters, 3},
    {field_type, 6},
  [63] =
    {field_name, 1},
    {field_type, 6},
    {field_type_parameters, 2},
  [66] =
    {field_type, 2},
  [67] =
    {field_methods, 6},
    {field_trait, 1},
    {field_type, 3},
  [70] =
    {field_name, 1},
    {field_parameters, 4},
    {field_type, 7},
    {field_type_parameters, 2},
  [74] =
    {field_methods, 7},
    {field_trait, 1},
    {field_type, 3},
    {field_type_parameters, 4},
  [78] =
    {field_methods, 7},
    {field_trait, 1},
    {field_type, 4},
    {field_type_parameters, 2},
  [82] =
    {field_pattern, 1},
  [83] =
    {field_methods, 8},
    {field_trait, 1},
    {field_type, 4},
    {field_type_parameters, 2},
    {field_type_parameters, 5},
  [88] =
    {field_pattern, 1},
    {field_pattern, 2, .inherited = true},
  [90] =
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
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(58);
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
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 14:
      if (lookahead == '{') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == '|') ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
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
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(44);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(59);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
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
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'm') ADVANCE(6);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_impl);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_self);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_trait);
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
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 1, .external_lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 23},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 23},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 23},
  [99] = {.lex_state = 23},
  [100] = {.lex_state = 23},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
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
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0, .external_lex_state = 3},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0, .external_lex_state = 3},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0, .external_lex_state = 3},
  [210] = {.lex_state = 0, .external_lex_state = 3},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0, .external_lex_state = 3},
  [213] = {.lex_state = 0, .external_lex_state = 3},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0, .external_lex_state = 3},
  [225] = {.lex_state = 0, .external_lex_state = 3},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 3},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0, .external_lex_state = 3},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 0, .external_lex_state = 3},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 0, .external_lex_state = 3},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 0, .external_lex_state = 3},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0, .external_lex_state = 3},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 0, .external_lex_state = 2},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0, .external_lex_state = 2},
  [288] = {.lex_state = 0, .external_lex_state = 3},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0, .external_lex_state = 3},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0, .external_lex_state = 3},
  [296] = {.lex_state = 0, .external_lex_state = 3},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0, .external_lex_state = 3},
  [300] = {.lex_state = 0, .external_lex_state = 3},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0, .external_lex_state = 3},
  [310] = {.lex_state = 0, .external_lex_state = 3},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0, .external_lex_state = 3},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0, .external_lex_state = 3},
  [331] = {.lex_state = 0, .external_lex_state = 3},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0, .external_lex_state = 3},
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
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_trait] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
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
    [sym_self] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(318),
    [sym__definition] = STATE(74),
    [sym_variant_definition] = STATE(74),
    [sym_record_definition] = STATE(74),
    [sym_tuple_definition] = STATE(74),
    [sym_type_function_definitions] = STATE(74),
    [sym_trait_function_definitions] = STATE(74),
    [sym_trait_definition] = STATE(74),
    [sym_type_alias_definition] = STATE(74),
    [sym_function_definition] = STATE(74),
    [sym_function_signature] = STATE(263),
    [aux_sym_source_file_repeat1] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_type] = ACTIONS(7),
    [anon_sym_impl] = ACTIONS(9),
    [anon_sym_trait] = ACTIONS(11),
    [anon_sym_fun] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      aux_sym_proj_expression_repeat1,
    STATE(19), 1,
      sym_arguments,
    STATE(70), 1,
      sym_operator_identifier,
    STATE(275), 1,
      sym_type_arguments,
    ACTIONS(21), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(15), 11,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(23), 14,
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
  [55] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      aux_sym_proj_expression_repeat1,
    STATE(19), 1,
      sym_arguments,
    STATE(70), 1,
      sym_operator_identifier,
    STATE(275), 1,
      sym_type_arguments,
    ACTIONS(21), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 3,
      sym__dedent,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(25), 9,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(27), 11,
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
  [114] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      aux_sym_proj_expression_repeat1,
    STATE(19), 1,
      sym_arguments,
    STATE(70), 1,
      sym_operator_identifier,
    STATE(275), 1,
      sym_type_arguments,
    ACTIONS(21), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 3,
      sym__dedent,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(33), 8,
      anon_sym_let,
      anon_sym_match,
      anon_sym_do,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(27), 11,
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
  [172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_EQ_GT,
    ACTIONS(37), 12,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(39), 17,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [215] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_proj_expression_repeat1,
    ACTIONS(49), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(45), 11,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
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
  [257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_proj_expression_repeat1,
    ACTIONS(52), 11,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(54), 18,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 11,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(58), 18,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 11,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(62), 18,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 11,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(66), 18,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 11,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(70), 18,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 11,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(74), 18,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 11,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(78), 18,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 11,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(82), 18,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 11,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(86), 18,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 11,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(90), 18,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 11,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(94), 18,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [667] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      aux_sym_proj_expression_repeat1,
    STATE(19), 1,
      sym_arguments,
    STATE(70), 1,
      sym_operator_identifier,
    STATE(275), 1,
      sym_type_arguments,
    ACTIONS(21), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(98), 3,
      sym__dedent,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(96), 5,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(27), 11,
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
  [722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 11,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(102), 18,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [759] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_let,
    ACTIONS(113), 1,
      anon_sym_match,
    ACTIONS(116), 1,
      anon_sym_do,
    ACTIONS(119), 1,
      sym_self,
    ACTIONS(125), 1,
      sym_integer,
    ACTIONS(128), 1,
      sym_float,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      sym__dedent,
    STATE(262), 1,
      sym_bindings,
    ACTIONS(122), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(20), 2,
      sym_expression,
      aux_sym_block_repeat1,
    STATE(92), 4,
      sym_let_expression,
      sym_lambda_expression,
      sym_match_expression,
      sym_do_expression,
    STATE(4), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [822] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_let,
    ACTIONS(142), 1,
      anon_sym_match,
    ACTIONS(144), 1,
      anon_sym_do,
    ACTIONS(146), 1,
      sym_self,
    ACTIONS(150), 1,
      sym_integer,
    ACTIONS(152), 1,
      sym_float,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym__dedent,
    STATE(262), 1,
      sym_bindings,
    ACTIONS(148), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(20), 2,
      sym_expression,
      aux_sym_block_repeat1,
    STATE(92), 4,
      sym_let_expression,
      sym_lambda_expression,
      sym_match_expression,
      sym_do_expression,
    STATE(4), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [885] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_let,
    ACTIONS(142), 1,
      anon_sym_match,
    ACTIONS(144), 1,
      anon_sym_do,
    ACTIONS(146), 1,
      sym_self,
    ACTIONS(150), 1,
      sym_integer,
    ACTIONS(152), 1,
      sym_float,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      sym__dedent,
    STATE(262), 1,
      sym_bindings,
    ACTIONS(148), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(20), 2,
      sym_expression,
      aux_sym_block_repeat1,
    STATE(92), 4,
      sym_let_expression,
      sym_lambda_expression,
      sym_match_expression,
      sym_do_expression,
    STATE(4), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LT_DASH,
    ACTIONS(37), 7,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(39), 18,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [984] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_let,
    ACTIONS(142), 1,
      anon_sym_match,
    ACTIONS(144), 1,
      anon_sym_do,
    ACTIONS(146), 1,
      sym_self,
    ACTIONS(150), 1,
      sym_integer,
    ACTIONS(152), 1,
      sym_float,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      sym_bindings,
    ACTIONS(148), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(21), 2,
      sym_expression,
      aux_sym_block_repeat1,
    STATE(92), 4,
      sym_let_expression,
      sym_lambda_expression,
      sym_match_expression,
      sym_do_expression,
    STATE(4), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1044] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_let,
    ACTIONS(142), 1,
      anon_sym_match,
    ACTIONS(144), 1,
      anon_sym_do,
    ACTIONS(146), 1,
      sym_self,
    ACTIONS(150), 1,
      sym_integer,
    ACTIONS(152), 1,
      sym_float,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      sym_bindings,
    ACTIONS(148), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(22), 2,
      sym_expression,
      aux_sym_block_repeat1,
    STATE(92), 4,
      sym_let_expression,
      sym_lambda_expression,
      sym_match_expression,
      sym_do_expression,
    STATE(4), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1104] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      aux_sym_proj_expression_repeat1,
    STATE(63), 1,
      sym_arguments,
    STATE(73), 1,
      sym_operator_identifier,
    STATE(261), 1,
      sym_type_arguments,
    ACTIONS(164), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(15), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 13,
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
  [1150] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_proj_expression_repeat1,
    STATE(63), 1,
      sym_arguments,
    STATE(73), 1,
      sym_operator_identifier,
    STATE(218), 1,
      aux_sym_arguments_repeat1,
    STATE(261), 1,
      sym_type_arguments,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(164), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(27), 11,
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
  [1202] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_proj_expression_repeat1,
    STATE(63), 1,
      sym_arguments,
    STATE(73), 1,
      sym_operator_identifier,
    STATE(240), 1,
      aux_sym_arguments_repeat1,
    STATE(261), 1,
      sym_type_arguments,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(164), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(27), 11,
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
  [1254] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      aux_sym_proj_expression_repeat1,
    STATE(63), 1,
      sym_arguments,
    STATE(73), 1,
      sym_operator_identifier,
    STATE(261), 1,
      sym_type_arguments,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(164), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(27), 11,
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
  [1301] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      aux_sym_proj_expression_repeat1,
    STATE(63), 1,
      sym_arguments,
    STATE(73), 1,
      sym_operator_identifier,
    STATE(261), 1,
      sym_type_arguments,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(164), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(172), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(27), 11,
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
  [1348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(78), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [1378] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_COLON,
    STATE(39), 1,
      aux_sym_proj_expression_repeat1,
    STATE(63), 1,
      sym_arguments,
    STATE(73), 1,
      sym_operator_identifier,
    STATE(261), 1,
      sym_type_arguments,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(164), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(27), 11,
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
  [1424] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_proj_expression_repeat1,
    STATE(63), 1,
      sym_arguments,
    STATE(73), 1,
      sym_operator_identifier,
    STATE(261), 1,
      sym_type_arguments,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(164), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(27), 11,
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
  [1470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(94), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [1500] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_proj_expression_repeat1,
    STATE(63), 1,
      sym_arguments,
    STATE(73), 1,
      sym_operator_identifier,
    STATE(261), 1,
      sym_type_arguments,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(164), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(27), 11,
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
  [1546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [1576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(74), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [1606] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym_integer,
    ACTIONS(152), 1,
      sym_float,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      sym_self,
    STATE(101), 1,
      sym_inline_expression,
    STATE(262), 1,
      sym_bindings,
    ACTIONS(148), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(89), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_proj_expression_repeat1,
    ACTIONS(52), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(54), 17,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [1688] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym_integer,
    ACTIONS(152), 1,
      sym_float,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      sym_self,
    STATE(84), 1,
      sym_inline_expression,
    STATE(262), 1,
      sym_bindings,
    ACTIONS(148), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(89), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1739] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(186), 1,
      anon_sym_EQ_GT,
    ACTIONS(37), 3,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 16,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [1772] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym_integer,
    ACTIONS(152), 1,
      sym_float,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      sym_self,
    STATE(102), 1,
      sym_inline_expression,
    STATE(262), 1,
      sym_bindings,
    ACTIONS(148), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(89), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1823] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      sym_self,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    STATE(266), 1,
      sym_bindings,
    STATE(280), 1,
      sym_inline_expression,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(276), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(29), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1874] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym_integer,
    ACTIONS(152), 1,
      sym_float,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      sym_self,
    STATE(88), 1,
      sym_inline_expression,
    STATE(262), 1,
      sym_bindings,
    ACTIONS(148), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(89), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1925] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym_integer,
    ACTIONS(152), 1,
      sym_float,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      sym_self,
    STATE(93), 1,
      sym_inline_expression,
    STATE(262), 1,
      sym_bindings,
    ACTIONS(148), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(89), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1976] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym_integer,
    ACTIONS(152), 1,
      sym_float,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      sym_self,
    STATE(82), 1,
      sym_inline_expression,
    STATE(262), 1,
      sym_bindings,
    ACTIONS(148), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(89), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2027] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      sym_self,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    STATE(266), 1,
      sym_bindings,
    STATE(279), 1,
      sym_inline_expression,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(276), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(29), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2078] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      sym_self,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    STATE(266), 1,
      sym_bindings,
    STATE(282), 1,
      sym_inline_expression,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(276), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(29), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2129] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym_integer,
    ACTIONS(152), 1,
      sym_float,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      sym_self,
    STATE(91), 1,
      sym_inline_expression,
    STATE(262), 1,
      sym_bindings,
    ACTIONS(148), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(89), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2180] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_proj_expression_repeat1,
    ACTIONS(204), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(45), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 15,
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
  [2213] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym_integer,
    ACTIONS(152), 1,
      sym_float,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      sym_self,
    STATE(104), 1,
      sym_inline_expression,
    STATE(262), 1,
      sym_bindings,
    ACTIONS(148), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(89), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2264] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym_integer,
    ACTIONS(152), 1,
      sym_float,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      sym_self,
    STATE(87), 1,
      sym_inline_expression,
    STATE(262), 1,
      sym_bindings,
    ACTIONS(148), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(89), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2315] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      sym_self,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    STATE(247), 1,
      sym_inline_expression,
    STATE(266), 1,
      sym_bindings,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(276), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(29), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(70), 17,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [2394] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      sym_self,
    ACTIONS(219), 1,
      sym_integer,
    ACTIONS(222), 1,
      sym_float,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      sym__dedent,
    STATE(103), 1,
      sym_do_assign,
    ACTIONS(216), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(55), 2,
      sym_do_action,
      aux_sym_do_expression_repeat1,
    STATE(18), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(82), 17,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [2470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 17,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [2498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(90), 17,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [2526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 17,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [2554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(62), 17,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [2582] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym_integer,
    ACTIONS(152), 1,
      sym_float,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      sym_self,
    ACTIONS(236), 1,
      sym__dedent,
    STATE(103), 1,
      sym_do_assign,
    ACTIONS(148), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(55), 2,
      sym_do_action,
      aux_sym_do_expression_repeat1,
    STATE(18), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2630] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_COLON,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(240), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(39), 15,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [2662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(102), 17,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [2690] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    ACTIONS(244), 1,
      sym_self,
    STATE(236), 1,
      sym_lambda_expression,
    STATE(266), 1,
      sym_bindings,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(27), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2737] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    ACTIONS(248), 1,
      sym_self,
    STATE(239), 1,
      sym_lambda_expression,
    STATE(266), 1,
      sym_bindings,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(28), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2784] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym_integer,
    ACTIONS(152), 1,
      sym_float,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      sym_self,
    STATE(103), 1,
      sym_do_assign,
    ACTIONS(148), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(61), 2,
      sym_do_action,
      aux_sym_do_expression_repeat1,
    STATE(18), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2829] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym_self,
    STATE(254), 1,
      sym_lambda_expression,
    STATE(266), 1,
      sym_bindings,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(30), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2873] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    ACTIONS(258), 1,
      sym_self,
    STATE(215), 1,
      sym_binding,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(33), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2917] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    ACTIONS(260), 1,
      sym_self,
    STATE(215), 1,
      sym_binding,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(35), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2961] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym_integer,
    ACTIONS(152), 1,
      sym_float,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      sym_identifier,
      sym_self,
    STATE(10), 2,
      sym_boolean,
      sym_string,
    STATE(2), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2997] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      sym_identifier,
      sym_self,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(32), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [3033] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    ACTIONS(260), 2,
      sym_identifier,
      sym_self,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(35), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [3069] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    ACTIONS(266), 2,
      sym_identifier,
      sym_self,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(26), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [3105] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_type,
    ACTIONS(9), 1,
      anon_sym_impl,
    ACTIONS(11), 1,
      anon_sym_trait,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    STATE(263), 1,
      sym_function_signature,
    STATE(77), 10,
      sym__definition,
      sym_variant_definition,
      sym_record_definition,
      sym_tuple_definition,
      sym_type_function_definitions,
      sym_trait_function_definitions,
      sym_trait_definition,
      sym_type_alias_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [3139] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym__,
    ACTIONS(282), 1,
      sym_integer,
    ACTIONS(285), 1,
      sym_float,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      sym__dedent,
    STATE(216), 1,
      sym_pattern,
    ACTIONS(279), 2,
      sym_true,
      sym_false,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(75), 2,
      sym_case,
      aux_sym_match_expression_repeat1,
    STATE(203), 2,
      sym_patterns,
      sym_literal,
  [3183] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym__,
    ACTIONS(299), 1,
      sym__dedent,
    STATE(216), 1,
      sym_pattern,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(75), 2,
      sym_case,
      aux_sym_match_expression_repeat1,
    STATE(203), 2,
      sym_patterns,
      sym_literal,
  [3227] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    ACTIONS(303), 1,
      anon_sym_type,
    ACTIONS(306), 1,
      anon_sym_impl,
    ACTIONS(309), 1,
      anon_sym_trait,
    ACTIONS(312), 1,
      anon_sym_fun,
    STATE(263), 1,
      sym_function_signature,
    STATE(77), 10,
      sym__definition,
      sym_variant_definition,
      sym_record_definition,
      sym_tuple_definition,
      sym_type_function_definitions,
      sym_trait_function_definitions,
      sym_trait_definition,
      sym_type_alias_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [3261] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    ACTIONS(258), 2,
      sym_identifier,
      sym_self,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(33), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [3297] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym__,
    STATE(216), 1,
      sym_pattern,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(76), 2,
      sym_case,
      aux_sym_match_expression_repeat1,
    STATE(203), 2,
      sym_patterns,
      sym_literal,
  [3338] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym__,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(230), 1,
      sym_pattern,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(203), 2,
      sym_patterns,
      sym_literal,
  [3378] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(319), 1,
      anon_sym_EQ,
    STATE(96), 1,
      sym_type_arguments,
    ACTIONS(317), 10,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_RPAREN,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [3403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(321), 9,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(325), 9,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(329), 9,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_EQ,
    ACTIONS(333), 12,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [3487] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym__,
    STATE(251), 1,
      sym_pattern,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(203), 2,
      sym_patterns,
      sym_literal,
  [3524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(337), 9,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(341), 9,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(25), 9,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_do,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3587] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(200), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym__,
    STATE(255), 1,
      sym_pattern,
    ACTIONS(196), 2,
      sym_true,
      sym_false,
    STATE(36), 2,
      sym_boolean,
      sym_string,
    STATE(203), 2,
      sym_patterns,
      sym_literal,
  [3624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(345), 8,
      anon_sym_let,
      anon_sym_match,
      anon_sym_do,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(33), 8,
      anon_sym_let,
      anon_sym_match,
      anon_sym_do,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(349), 8,
      anon_sym_let,
      anon_sym_match,
      anon_sym_do,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(353), 8,
      anon_sym_let,
      anon_sym_match,
      anon_sym_do,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(357), 8,
      anon_sym_let,
      anon_sym_match,
      anon_sym_do,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_EQ,
    ACTIONS(361), 11,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_RPAREN,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [3744] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_identifier,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_self,
    STATE(175), 1,
      sym_type,
    STATE(217), 1,
      sym_param,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
    STATE(304), 2,
      sym_type_list,
      sym_parameter_list,
  [3775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_EQ,
    ACTIONS(371), 10,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_RPAREN,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [3794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_EQ,
    ACTIONS(379), 1,
      anon_sym_DASH_GT,
    ACTIONS(375), 9,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_RPAREN,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [3815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_EQ,
    ACTIONS(317), 10,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_RPAREN,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [3834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(381), 5,
      anon_sym__,
      sym_identifier,
      sym_true,
      sym_false,
      sym_integer,
  [3851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(385), 5,
      anon_sym__,
      sym_identifier,
      sym_true,
      sym_false,
      sym_integer,
  [3868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(96), 5,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(389), 5,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3902] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(175), 1,
      sym_type,
    STATE(314), 1,
      sym_type_list,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [3926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 3,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(395), 5,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3942] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(175), 1,
      sym_type,
    STATE(323), 1,
      sym_type_list,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [3966] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(175), 1,
      sym_type,
    STATE(293), 1,
      sym_type_list,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [3990] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(175), 1,
      sym_type,
    STATE(322), 1,
      sym_type_list,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [4014] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(175), 1,
      sym_type,
    STATE(319), 1,
      sym_type_list,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [4038] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(175), 1,
      sym_type,
    STATE(301), 1,
      sym_type_list,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [4062] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(175), 1,
      sym_type,
    STATE(316), 1,
      sym_type_list,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [4086] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(175), 1,
      sym_type,
    STATE(302), 1,
      sym_type_list,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [4110] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(99), 1,
      sym_type,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [4131] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(258), 1,
      sym_type,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [4152] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    STATE(224), 1,
      sym_type,
    STATE(157), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(212), 2,
      sym_function_type,
      sym_tuple_type,
  [4173] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(187), 1,
      sym_type,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [4194] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    STATE(225), 1,
      sym_type,
    STATE(157), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(212), 2,
      sym_function_type,
      sym_tuple_type,
  [4215] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(206), 1,
      sym_type,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [4236] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(136), 1,
      sym_type,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [4257] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    STATE(226), 1,
      sym_type,
    STATE(146), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(232), 2,
      sym_function_type,
      sym_tuple_type,
  [4278] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(260), 1,
      sym_type,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [4299] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(264), 1,
      sym_type,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [4320] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(214), 1,
      sym_type,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [4341] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_type,
    STATE(157), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(212), 2,
      sym_function_type,
      sym_tuple_type,
  [4362] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    STATE(227), 1,
      sym_type,
    STATE(157), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(212), 2,
      sym_function_type,
      sym_tuple_type,
  [4383] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      sym_type,
    STATE(157), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(212), 2,
      sym_function_type,
      sym_tuple_type,
  [4404] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(284), 1,
      sym_type,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [4425] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(269), 1,
      sym_type,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [4446] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    STATE(237), 1,
      sym_type,
    STATE(146), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(232), 2,
      sym_function_type,
      sym_tuple_type,
  [4467] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(138), 1,
      sym_type,
    STATE(81), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(100), 2,
      sym_function_type,
      sym_tuple_type,
  [4488] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_fun,
    ACTIONS(410), 1,
      sym__dedent,
    STATE(245), 1,
      sym_function_signature,
    STATE(253), 1,
      sym_function_definition,
    STATE(132), 2,
      sym_trait_function,
      aux_sym_trait_definition_repeat1,
  [4508] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(412), 1,
      sym__dedent,
    STATE(245), 1,
      sym_function_signature,
    STATE(253), 1,
      sym_function_definition,
    STATE(132), 2,
      sym_trait_function,
      aux_sym_trait_definition_repeat1,
  [4528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_patterns,
    ACTIONS(414), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [4544] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_identifier,
    STATE(270), 1,
      sym_param,
    STATE(143), 2,
      sym_record_type_field,
      aux_sym_record_definition_repeat1,
    STATE(193), 2,
      sym_variant_type_value,
      aux_sym_variant_definition_repeat1,
  [4562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DASH_GT,
    ACTIONS(418), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 6,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
      anon_sym_RBRACE,
  [4588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DASH_GT,
    ACTIONS(422), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4602] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(424), 1,
      sym__dedent,
    STATE(245), 1,
      sym_function_signature,
    STATE(253), 1,
      sym_function_definition,
    STATE(132), 2,
      sym_trait_function,
      aux_sym_trait_definition_repeat1,
  [4622] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_identifier,
    STATE(270), 1,
      sym_param,
    STATE(142), 2,
      sym_record_type_field,
      aux_sym_record_definition_repeat1,
    STATE(179), 2,
      sym_variant_type_value,
      aux_sym_variant_definition_repeat1,
  [4640] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_COLON,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    STATE(274), 1,
      sym_variant_type_value_args,
    ACTIONS(426), 2,
      sym__dedent,
      sym_identifier,
  [4657] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(434), 1,
      sym__dedent,
    STATE(270), 1,
      sym_param,
    STATE(151), 2,
      sym_record_type_field,
      aux_sym_record_definition_repeat1,
  [4674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(436), 1,
      sym__dedent,
    STATE(270), 1,
      sym_param,
    STATE(151), 2,
      sym_record_type_field,
      aux_sym_record_definition_repeat1,
  [4691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_COLON,
    ACTIONS(440), 4,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [4704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_LBRACK,
    STATE(194), 1,
      sym_type_arguments,
    ACTIONS(317), 3,
      sym__dedent,
      anon_sym_DASH_GT,
      sym_identifier,
  [4730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4741] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_self,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      sym_param,
    STATE(313), 1,
      sym_parameter_list,
  [4760] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    STATE(245), 1,
      sym_function_signature,
    STATE(253), 1,
      sym_function_definition,
    STATE(133), 2,
      sym_trait_function,
      aux_sym_trait_definition_repeat1,
  [4777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4788] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(457), 1,
      sym__dedent,
    STATE(270), 1,
      sym_param,
    STATE(151), 2,
      sym_record_type_field,
      aux_sym_record_definition_repeat1,
  [4805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4838] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(465), 1,
      sym__dedent,
    STATE(268), 1,
      sym_function_signature,
    STATE(161), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LBRACK,
    STATE(188), 1,
      sym_type_arguments,
    ACTIONS(317), 3,
      sym__indent,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [4881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4914] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_fun,
    ACTIONS(480), 1,
      sym__dedent,
    STATE(268), 1,
      sym_function_signature,
    STATE(161), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4931] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(482), 1,
      sym__dedent,
    STATE(268), 1,
      sym_function_signature,
    STATE(161), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4959] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(486), 1,
      sym__dedent,
    STATE(268), 1,
      sym_function_signature,
    STATE(161), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4987] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_self,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      sym_param,
    STATE(326), 1,
      sym_parameter_list,
  [5006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [5017] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(494), 1,
      sym__dedent,
    STATE(268), 1,
      sym_function_signature,
    STATE(161), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [5034] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    STATE(245), 1,
      sym_function_signature,
    STATE(253), 1,
      sym_function_definition,
    STATE(139), 2,
      sym_trait_function,
      aux_sym_trait_definition_repeat1,
  [5051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [5062] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_COLON,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_EQ,
    ACTIONS(504), 1,
      anon_sym_LBRACK,
    STATE(207), 1,
      sym_type_param_clause,
  [5081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [5092] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(508), 1,
      sym__dedent,
    STATE(268), 1,
      sym_function_signature,
    STATE(161), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [5109] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(510), 1,
      sym__dedent,
    STATE(268), 1,
      sym_function_signature,
    STATE(161), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [5126] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DASH_GT,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(512), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5143] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      anon_sym_COLON,
    ACTIONS(518), 1,
      anon_sym_for,
    STATE(278), 1,
      sym_type_param_clause,
  [5159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 4,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_for,
      anon_sym_EQ,
  [5169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    STATE(268), 1,
      sym_function_signature,
    STATE(174), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [5183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym__dedent,
    STATE(190), 2,
      sym_variant_type_value,
      aux_sym_variant_definition_repeat1,
  [5197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    STATE(268), 1,
      sym_function_signature,
    STATE(155), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [5211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 4,
      sym__indent,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [5221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    STATE(268), 1,
      sym_function_signature,
    STATE(173), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [5235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    STATE(268), 1,
      sym_function_signature,
    STATE(162), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [5249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [5259] = 4,
    ACTIONS(528), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      sym_comment,
    STATE(195), 1,
      aux_sym_string_repeat1,
    ACTIONS(530), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [5273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(534), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DASH_GT,
    ACTIONS(539), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 4,
      sym__indent,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [5309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [5319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym_identifier,
    ACTIONS(546), 1,
      sym__dedent,
    STATE(190), 2,
      sym_variant_type_value,
      aux_sym_variant_definition_repeat1,
  [5333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    STATE(274), 1,
      sym_variant_type_value_args,
    ACTIONS(426), 2,
      sym__dedent,
      sym_identifier,
  [5347] = 4,
    ACTIONS(532), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      aux_sym_string_repeat1,
    ACTIONS(550), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [5361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_identifier,
    ACTIONS(552), 1,
      sym__dedent,
    STATE(190), 2,
      sym_variant_type_value,
      aux_sym_variant_definition_repeat1,
  [5375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 4,
      sym__dedent,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [5385] = 4,
    ACTIONS(532), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      aux_sym_string_repeat1,
    ACTIONS(556), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [5399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    STATE(268), 1,
      sym_function_signature,
    STATE(168), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [5413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(559), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    STATE(268), 1,
      sym_function_signature,
    STATE(164), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [5441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 4,
      sym__dedent,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [5451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 4,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_for,
      anon_sym_EQ,
  [5461] = 4,
    ACTIONS(532), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_DQUOTE,
    STATE(202), 1,
      aux_sym_string_repeat1,
    ACTIONS(565), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [5475] = 4,
    ACTIONS(532), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      aux_sym_string_repeat1,
    ACTIONS(530), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [5489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [5499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [5509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [5519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DASH_GT,
    ACTIONS(573), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_EQ,
  [5543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_COLON,
    ACTIONS(240), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_DASH_GT,
    ACTIONS(583), 2,
      sym__indent,
      anon_sym_SEMI,
  [5565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_DASH_GT,
    ACTIONS(587), 2,
      sym__indent,
      anon_sym_SEMI,
  [5576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      aux_sym_type_param_clause_repeat1,
  [5589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 3,
      sym__indent,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [5598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 3,
      sym__indent,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [5607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DASH_GT,
    ACTIONS(593), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_bindings_repeat1,
  [5631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_EQ_GT,
    ACTIONS(601), 1,
      anon_sym_PIPE,
    STATE(233), 1,
      aux_sym_case_repeat1,
  [5644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym_parameter_list_repeat1,
  [5657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_arguments_repeat1,
  [5670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_bindings_repeat1,
  [5683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LBRACK,
    ACTIONS(614), 1,
      anon_sym_COLON,
    STATE(332), 1,
      sym_type_param_clause,
  [5696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LBRACK,
    ACTIONS(616), 1,
      anon_sym_COLON,
    STATE(291), 1,
      sym_type_param_clause,
  [5709] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      aux_sym_arguments_repeat1,
  [5722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    ACTIONS(623), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_parameter_list_repeat1,
  [5735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_DASH_GT,
    ACTIONS(375), 2,
      sym__indent,
      anon_sym_SEMI,
  [5746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_DASH_GT,
    ACTIONS(626), 2,
      sym__indent,
      anon_sym_SEMI,
  [5757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_DASH_GT,
    ACTIONS(573), 2,
      sym__dedent,
      sym_identifier,
  [5768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_DASH_GT,
    ACTIONS(630), 2,
      sym__indent,
      anon_sym_SEMI,
  [5779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LBRACK,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym_type_param_clause,
  [5792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      aux_sym_type_param_clause_repeat1,
  [5805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym_patterns_repeat1,
  [5818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LBRACK,
    ACTIONS(643), 1,
      anon_sym_COLON,
    STATE(303), 1,
      sym_type_param_clause,
  [5831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 3,
      sym__dedent,
      anon_sym_DASH_GT,
      sym_identifier,
  [5840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_PIPE,
    ACTIONS(645), 1,
      anon_sym_EQ_GT,
    STATE(243), 1,
      aux_sym_case_repeat1,
  [5853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_RBRACK,
    STATE(211), 1,
      aux_sym_type_param_clause_repeat1,
  [5866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 3,
      sym__dedent,
      anon_sym_DASH_GT,
      sym_identifier,
  [5875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_arguments_repeat1,
  [5888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_DASH_GT,
    ACTIONS(375), 2,
      sym__dedent,
      sym_identifier,
  [5899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      aux_sym_bindings_repeat1,
  [5912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym_arguments_repeat1,
  [5925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_arguments_repeat1,
  [5938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_patterns_repeat1,
  [5951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_parameter_list_repeat1,
  [5964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_EQ_GT,
    ACTIONS(659), 1,
      anon_sym_PIPE,
    STATE(243), 1,
      aux_sym_case_repeat1,
  [5977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(662), 1,
      sym_self,
    STATE(248), 1,
      sym_param,
  [5990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    ACTIONS(666), 1,
      sym__indent,
    STATE(259), 1,
      sym_block,
  [6003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym_patterns_repeat1,
  [6016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 2,
      sym__dedent,
      sym_identifier,
  [6040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 2,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [6056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym__indent,
    STATE(320), 1,
      sym_block,
  [6066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 2,
      sym__dedent,
      anon_sym_fun,
  [6074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      sym_identifier,
    STATE(286), 1,
      sym_binding,
  [6108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DASH_GT,
    ACTIONS(687), 1,
      anon_sym_EQ_GT,
  [6118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      sym__dedent,
      anon_sym_fun,
  [6126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DASH_GT,
    ACTIONS(689), 1,
      anon_sym_EQ_GT,
  [6136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_arguments,
  [6146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_DASH_GT,
    ACTIONS(693), 1,
      anon_sym_EQ_GT,
  [6156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym__indent,
    STATE(163), 1,
      sym_block,
  [6166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DASH_GT,
    ACTIONS(695), 1,
      anon_sym_EQ_GT,
  [6176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym__indent,
    STATE(298), 1,
      sym_block,
  [6186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_DASH_GT,
    ACTIONS(699), 1,
      anon_sym_EQ_GT,
  [6196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym_identifier,
    STATE(277), 1,
      sym_type_param,
  [6206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym__indent,
    STATE(259), 1,
      sym_block,
  [6216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DASH_GT,
    ACTIONS(703), 1,
      anon_sym_EQ_GT,
  [6226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 2,
      sym__dedent,
      sym_identifier,
  [6234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 2,
      sym__dedent,
      anon_sym_fun,
  [6242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_COLON,
    ACTIONS(711), 1,
      anon_sym_EQ,
  [6260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 2,
      sym__dedent,
      sym_identifier,
  [6268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_arguments,
  [6278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_COLON,
    ACTIONS(717), 1,
      anon_sym_for,
  [6304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym_identifier,
    STATE(234), 1,
      sym_type_param,
  [6346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DASH_GT,
    ACTIONS(719), 1,
      anon_sym_EQ,
  [6356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [6364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 2,
      sym__dedent,
      anon_sym_fun,
  [6380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      sym__indent,
  [6387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_identifier,
  [6394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_identifier,
  [6401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_COLON,
  [6408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym__indent,
  [6415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
  [6422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_identifier,
  [6429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym__indent,
  [6436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym__indent,
  [6443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_identifier,
  [6450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
  [6457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__indent,
  [6464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym__indent,
  [6471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
  [6478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_RBRACK,
  [6485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_COLON,
  [6492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
  [6499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
  [6506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym_identifier,
  [6513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_COLON,
  [6520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_COLON,
  [6527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      sym__indent,
  [6534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym__indent,
  [6541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DASH_GT,
  [6548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      sym_identifier,
  [6555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
  [6562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
  [6569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_COLON,
  [6576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
  [6583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym__indent,
  [6590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      ts_builtin_sym_end,
  [6597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_RBRACK,
  [6604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
  [6611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_DASH_GT,
  [6618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
  [6625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_RBRACK,
  [6632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym_identifier,
  [6639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym_identifier,
  [6646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
  [6653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_identifier,
  [6660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_DASH_GT,
  [6667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_DASH_GT,
  [6674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      sym__indent,
  [6681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      sym__indent,
  [6688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_COLON,
  [6695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      sym__indent,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 172,
  [SMALL_STATE(6)] = 215,
  [SMALL_STATE(7)] = 257,
  [SMALL_STATE(8)] = 297,
  [SMALL_STATE(9)] = 334,
  [SMALL_STATE(10)] = 371,
  [SMALL_STATE(11)] = 408,
  [SMALL_STATE(12)] = 445,
  [SMALL_STATE(13)] = 482,
  [SMALL_STATE(14)] = 519,
  [SMALL_STATE(15)] = 556,
  [SMALL_STATE(16)] = 593,
  [SMALL_STATE(17)] = 630,
  [SMALL_STATE(18)] = 667,
  [SMALL_STATE(19)] = 722,
  [SMALL_STATE(20)] = 759,
  [SMALL_STATE(21)] = 822,
  [SMALL_STATE(22)] = 885,
  [SMALL_STATE(23)] = 948,
  [SMALL_STATE(24)] = 984,
  [SMALL_STATE(25)] = 1044,
  [SMALL_STATE(26)] = 1104,
  [SMALL_STATE(27)] = 1150,
  [SMALL_STATE(28)] = 1202,
  [SMALL_STATE(29)] = 1254,
  [SMALL_STATE(30)] = 1301,
  [SMALL_STATE(31)] = 1348,
  [SMALL_STATE(32)] = 1378,
  [SMALL_STATE(33)] = 1424,
  [SMALL_STATE(34)] = 1470,
  [SMALL_STATE(35)] = 1500,
  [SMALL_STATE(36)] = 1546,
  [SMALL_STATE(37)] = 1576,
  [SMALL_STATE(38)] = 1606,
  [SMALL_STATE(39)] = 1657,
  [SMALL_STATE(40)] = 1688,
  [SMALL_STATE(41)] = 1739,
  [SMALL_STATE(42)] = 1772,
  [SMALL_STATE(43)] = 1823,
  [SMALL_STATE(44)] = 1874,
  [SMALL_STATE(45)] = 1925,
  [SMALL_STATE(46)] = 1976,
  [SMALL_STATE(47)] = 2027,
  [SMALL_STATE(48)] = 2078,
  [SMALL_STATE(49)] = 2129,
  [SMALL_STATE(50)] = 2180,
  [SMALL_STATE(51)] = 2213,
  [SMALL_STATE(52)] = 2264,
  [SMALL_STATE(53)] = 2315,
  [SMALL_STATE(54)] = 2366,
  [SMALL_STATE(55)] = 2394,
  [SMALL_STATE(56)] = 2442,
  [SMALL_STATE(57)] = 2470,
  [SMALL_STATE(58)] = 2498,
  [SMALL_STATE(59)] = 2526,
  [SMALL_STATE(60)] = 2554,
  [SMALL_STATE(61)] = 2582,
  [SMALL_STATE(62)] = 2630,
  [SMALL_STATE(63)] = 2662,
  [SMALL_STATE(64)] = 2690,
  [SMALL_STATE(65)] = 2737,
  [SMALL_STATE(66)] = 2784,
  [SMALL_STATE(67)] = 2829,
  [SMALL_STATE(68)] = 2873,
  [SMALL_STATE(69)] = 2917,
  [SMALL_STATE(70)] = 2961,
  [SMALL_STATE(71)] = 2997,
  [SMALL_STATE(72)] = 3033,
  [SMALL_STATE(73)] = 3069,
  [SMALL_STATE(74)] = 3105,
  [SMALL_STATE(75)] = 3139,
  [SMALL_STATE(76)] = 3183,
  [SMALL_STATE(77)] = 3227,
  [SMALL_STATE(78)] = 3261,
  [SMALL_STATE(79)] = 3297,
  [SMALL_STATE(80)] = 3338,
  [SMALL_STATE(81)] = 3378,
  [SMALL_STATE(82)] = 3403,
  [SMALL_STATE(83)] = 3424,
  [SMALL_STATE(84)] = 3445,
  [SMALL_STATE(85)] = 3466,
  [SMALL_STATE(86)] = 3487,
  [SMALL_STATE(87)] = 3524,
  [SMALL_STATE(88)] = 3545,
  [SMALL_STATE(89)] = 3566,
  [SMALL_STATE(90)] = 3587,
  [SMALL_STATE(91)] = 3624,
  [SMALL_STATE(92)] = 3644,
  [SMALL_STATE(93)] = 3664,
  [SMALL_STATE(94)] = 3684,
  [SMALL_STATE(95)] = 3704,
  [SMALL_STATE(96)] = 3724,
  [SMALL_STATE(97)] = 3744,
  [SMALL_STATE(98)] = 3775,
  [SMALL_STATE(99)] = 3794,
  [SMALL_STATE(100)] = 3815,
  [SMALL_STATE(101)] = 3834,
  [SMALL_STATE(102)] = 3851,
  [SMALL_STATE(103)] = 3868,
  [SMALL_STATE(104)] = 3885,
  [SMALL_STATE(105)] = 3902,
  [SMALL_STATE(106)] = 3926,
  [SMALL_STATE(107)] = 3942,
  [SMALL_STATE(108)] = 3966,
  [SMALL_STATE(109)] = 3990,
  [SMALL_STATE(110)] = 4014,
  [SMALL_STATE(111)] = 4038,
  [SMALL_STATE(112)] = 4062,
  [SMALL_STATE(113)] = 4086,
  [SMALL_STATE(114)] = 4110,
  [SMALL_STATE(115)] = 4131,
  [SMALL_STATE(116)] = 4152,
  [SMALL_STATE(117)] = 4173,
  [SMALL_STATE(118)] = 4194,
  [SMALL_STATE(119)] = 4215,
  [SMALL_STATE(120)] = 4236,
  [SMALL_STATE(121)] = 4257,
  [SMALL_STATE(122)] = 4278,
  [SMALL_STATE(123)] = 4299,
  [SMALL_STATE(124)] = 4320,
  [SMALL_STATE(125)] = 4341,
  [SMALL_STATE(126)] = 4362,
  [SMALL_STATE(127)] = 4383,
  [SMALL_STATE(128)] = 4404,
  [SMALL_STATE(129)] = 4425,
  [SMALL_STATE(130)] = 4446,
  [SMALL_STATE(131)] = 4467,
  [SMALL_STATE(132)] = 4488,
  [SMALL_STATE(133)] = 4508,
  [SMALL_STATE(134)] = 4528,
  [SMALL_STATE(135)] = 4544,
  [SMALL_STATE(136)] = 4562,
  [SMALL_STATE(137)] = 4576,
  [SMALL_STATE(138)] = 4588,
  [SMALL_STATE(139)] = 4602,
  [SMALL_STATE(140)] = 4622,
  [SMALL_STATE(141)] = 4640,
  [SMALL_STATE(142)] = 4657,
  [SMALL_STATE(143)] = 4674,
  [SMALL_STATE(144)] = 4691,
  [SMALL_STATE(145)] = 4704,
  [SMALL_STATE(146)] = 4715,
  [SMALL_STATE(147)] = 4730,
  [SMALL_STATE(148)] = 4741,
  [SMALL_STATE(149)] = 4760,
  [SMALL_STATE(150)] = 4777,
  [SMALL_STATE(151)] = 4788,
  [SMALL_STATE(152)] = 4805,
  [SMALL_STATE(153)] = 4816,
  [SMALL_STATE(154)] = 4827,
  [SMALL_STATE(155)] = 4838,
  [SMALL_STATE(156)] = 4855,
  [SMALL_STATE(157)] = 4866,
  [SMALL_STATE(158)] = 4881,
  [SMALL_STATE(159)] = 4892,
  [SMALL_STATE(160)] = 4903,
  [SMALL_STATE(161)] = 4914,
  [SMALL_STATE(162)] = 4931,
  [SMALL_STATE(163)] = 4948,
  [SMALL_STATE(164)] = 4959,
  [SMALL_STATE(165)] = 4976,
  [SMALL_STATE(166)] = 4987,
  [SMALL_STATE(167)] = 5006,
  [SMALL_STATE(168)] = 5017,
  [SMALL_STATE(169)] = 5034,
  [SMALL_STATE(170)] = 5051,
  [SMALL_STATE(171)] = 5062,
  [SMALL_STATE(172)] = 5081,
  [SMALL_STATE(173)] = 5092,
  [SMALL_STATE(174)] = 5109,
  [SMALL_STATE(175)] = 5126,
  [SMALL_STATE(176)] = 5143,
  [SMALL_STATE(177)] = 5159,
  [SMALL_STATE(178)] = 5169,
  [SMALL_STATE(179)] = 5183,
  [SMALL_STATE(180)] = 5197,
  [SMALL_STATE(181)] = 5211,
  [SMALL_STATE(182)] = 5221,
  [SMALL_STATE(183)] = 5235,
  [SMALL_STATE(184)] = 5249,
  [SMALL_STATE(185)] = 5259,
  [SMALL_STATE(186)] = 5273,
  [SMALL_STATE(187)] = 5287,
  [SMALL_STATE(188)] = 5299,
  [SMALL_STATE(189)] = 5309,
  [SMALL_STATE(190)] = 5319,
  [SMALL_STATE(191)] = 5333,
  [SMALL_STATE(192)] = 5347,
  [SMALL_STATE(193)] = 5361,
  [SMALL_STATE(194)] = 5375,
  [SMALL_STATE(195)] = 5385,
  [SMALL_STATE(196)] = 5399,
  [SMALL_STATE(197)] = 5413,
  [SMALL_STATE(198)] = 5427,
  [SMALL_STATE(199)] = 5441,
  [SMALL_STATE(200)] = 5451,
  [SMALL_STATE(201)] = 5461,
  [SMALL_STATE(202)] = 5475,
  [SMALL_STATE(203)] = 5489,
  [SMALL_STATE(204)] = 5499,
  [SMALL_STATE(205)] = 5509,
  [SMALL_STATE(206)] = 5519,
  [SMALL_STATE(207)] = 5530,
  [SMALL_STATE(208)] = 5543,
  [SMALL_STATE(209)] = 5554,
  [SMALL_STATE(210)] = 5565,
  [SMALL_STATE(211)] = 5576,
  [SMALL_STATE(212)] = 5589,
  [SMALL_STATE(213)] = 5598,
  [SMALL_STATE(214)] = 5607,
  [SMALL_STATE(215)] = 5618,
  [SMALL_STATE(216)] = 5631,
  [SMALL_STATE(217)] = 5644,
  [SMALL_STATE(218)] = 5657,
  [SMALL_STATE(219)] = 5670,
  [SMALL_STATE(220)] = 5683,
  [SMALL_STATE(221)] = 5696,
  [SMALL_STATE(222)] = 5709,
  [SMALL_STATE(223)] = 5722,
  [SMALL_STATE(224)] = 5735,
  [SMALL_STATE(225)] = 5746,
  [SMALL_STATE(226)] = 5757,
  [SMALL_STATE(227)] = 5768,
  [SMALL_STATE(228)] = 5779,
  [SMALL_STATE(229)] = 5792,
  [SMALL_STATE(230)] = 5805,
  [SMALL_STATE(231)] = 5818,
  [SMALL_STATE(232)] = 5831,
  [SMALL_STATE(233)] = 5840,
  [SMALL_STATE(234)] = 5853,
  [SMALL_STATE(235)] = 5866,
  [SMALL_STATE(236)] = 5875,
  [SMALL_STATE(237)] = 5888,
  [SMALL_STATE(238)] = 5899,
  [SMALL_STATE(239)] = 5912,
  [SMALL_STATE(240)] = 5925,
  [SMALL_STATE(241)] = 5938,
  [SMALL_STATE(242)] = 5951,
  [SMALL_STATE(243)] = 5964,
  [SMALL_STATE(244)] = 5977,
  [SMALL_STATE(245)] = 5990,
  [SMALL_STATE(246)] = 6003,
  [SMALL_STATE(247)] = 6016,
  [SMALL_STATE(248)] = 6024,
  [SMALL_STATE(249)] = 6032,
  [SMALL_STATE(250)] = 6040,
  [SMALL_STATE(251)] = 6048,
  [SMALL_STATE(252)] = 6056,
  [SMALL_STATE(253)] = 6066,
  [SMALL_STATE(254)] = 6074,
  [SMALL_STATE(255)] = 6082,
  [SMALL_STATE(256)] = 6090,
  [SMALL_STATE(257)] = 6098,
  [SMALL_STATE(258)] = 6108,
  [SMALL_STATE(259)] = 6118,
  [SMALL_STATE(260)] = 6126,
  [SMALL_STATE(261)] = 6136,
  [SMALL_STATE(262)] = 6146,
  [SMALL_STATE(263)] = 6156,
  [SMALL_STATE(264)] = 6166,
  [SMALL_STATE(265)] = 6176,
  [SMALL_STATE(266)] = 6186,
  [SMALL_STATE(267)] = 6196,
  [SMALL_STATE(268)] = 6206,
  [SMALL_STATE(269)] = 6216,
  [SMALL_STATE(270)] = 6226,
  [SMALL_STATE(271)] = 6234,
  [SMALL_STATE(272)] = 6242,
  [SMALL_STATE(273)] = 6250,
  [SMALL_STATE(274)] = 6260,
  [SMALL_STATE(275)] = 6268,
  [SMALL_STATE(276)] = 6278,
  [SMALL_STATE(277)] = 6286,
  [SMALL_STATE(278)] = 6294,
  [SMALL_STATE(279)] = 6304,
  [SMALL_STATE(280)] = 6312,
  [SMALL_STATE(281)] = 6320,
  [SMALL_STATE(282)] = 6328,
  [SMALL_STATE(283)] = 6336,
  [SMALL_STATE(284)] = 6346,
  [SMALL_STATE(285)] = 6356,
  [SMALL_STATE(286)] = 6364,
  [SMALL_STATE(287)] = 6372,
  [SMALL_STATE(288)] = 6380,
  [SMALL_STATE(289)] = 6387,
  [SMALL_STATE(290)] = 6394,
  [SMALL_STATE(291)] = 6401,
  [SMALL_STATE(292)] = 6408,
  [SMALL_STATE(293)] = 6415,
  [SMALL_STATE(294)] = 6422,
  [SMALL_STATE(295)] = 6429,
  [SMALL_STATE(296)] = 6436,
  [SMALL_STATE(297)] = 6443,
  [SMALL_STATE(298)] = 6450,
  [SMALL_STATE(299)] = 6457,
  [SMALL_STATE(300)] = 6464,
  [SMALL_STATE(301)] = 6471,
  [SMALL_STATE(302)] = 6478,
  [SMALL_STATE(303)] = 6485,
  [SMALL_STATE(304)] = 6492,
  [SMALL_STATE(305)] = 6499,
  [SMALL_STATE(306)] = 6506,
  [SMALL_STATE(307)] = 6513,
  [SMALL_STATE(308)] = 6520,
  [SMALL_STATE(309)] = 6527,
  [SMALL_STATE(310)] = 6534,
  [SMALL_STATE(311)] = 6541,
  [SMALL_STATE(312)] = 6548,
  [SMALL_STATE(313)] = 6555,
  [SMALL_STATE(314)] = 6562,
  [SMALL_STATE(315)] = 6569,
  [SMALL_STATE(316)] = 6576,
  [SMALL_STATE(317)] = 6583,
  [SMALL_STATE(318)] = 6590,
  [SMALL_STATE(319)] = 6597,
  [SMALL_STATE(320)] = 6604,
  [SMALL_STATE(321)] = 6611,
  [SMALL_STATE(322)] = 6618,
  [SMALL_STATE(323)] = 6625,
  [SMALL_STATE(324)] = 6632,
  [SMALL_STATE(325)] = 6639,
  [SMALL_STATE(326)] = 6646,
  [SMALL_STATE(327)] = 6653,
  [SMALL_STATE(328)] = 6660,
  [SMALL_STATE(329)] = 6667,
  [SMALL_STATE(330)] = 6674,
  [SMALL_STATE(331)] = 6681,
  [SMALL_STATE(332)] = 6688,
  [SMALL_STATE(333)] = 6695,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_expression, 3, .production_id = 13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_expression, 3, .production_id = 13),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_expression, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_expression, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expression, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expression, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 14),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 14),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 14), SHIFT_REPEAT(294),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proj_expression, 2, .production_id = 5),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proj_expression, 2, .production_id = 5),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 11),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 11),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 3, .production_id = 12),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, .production_id = 12),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_action, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_action, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(306),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(71),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(307),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(192),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 14), SHIFT_REPEAT(312),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_do_expression_repeat1, 2), SHIFT_REPEAT(23),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_expression_repeat1, 2), SHIFT_REPEAT(78),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_do_expression_repeat1, 2), SHIFT_REPEAT(18),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_do_expression_repeat1, 2), SHIFT_REPEAT(12),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_do_expression_repeat1, 2), SHIFT_REPEAT(10),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_expression_repeat1, 2), SHIFT_REPEAT(10),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_expression_repeat1, 2), SHIFT_REPEAT(192),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_expression_repeat1, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 1, .production_id = 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(134),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(80),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(203),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(37),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(36),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(36),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(201),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(289),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(327),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(325),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(324),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 5, .production_id = 24),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 5, .production_id = 24),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_block_expression, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_block_expression, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 5, .production_id = 32),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 5, .production_id = 32),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 3, .production_id = 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 3, .production_id = 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 4, .production_id = 25),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 4, .production_id = 25),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 6, .production_id = 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 6, .production_id = 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 6),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 6),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_expression, 5),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_expression, 5),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .production_id = 9),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .production_id = 9),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3, .production_id = 17),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 3, .production_id = 17),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 4),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_assign, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_assign, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_identifier, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_identifier, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2), SHIFT_REPEAT(324),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_definition, 4, .production_id = 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 6),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_definition, 5, .production_id = 10),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_type_value, 1, .production_id = 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_function_definitions, 10, .production_id = 38),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_definition, 6, .production_id = 15),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_definition, 6, .production_id = 16),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_definition_repeat1, 2), SHIFT_REPEAT(308),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_definition_repeat1, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_definition, 5, .production_id = 7),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_function_definitions, 9, .production_id = 35),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_definition, 7, .production_id = 27),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function_definitions, 7, .production_id = 28),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_definition, 7, .production_id = 26),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_definition, 6, .production_id = 20),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function_definitions, 6, .production_id = 21),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_function_definitions_repeat1, 2), SHIFT_REPEAT(324),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_function_definitions_repeat1, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 6, .production_id = 22),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 7, .production_id = 29),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_function_definitions, 8, .production_id = 33),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_function_definitions, 9, .production_id = 36),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 1, .production_id = 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_param_clause, 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patterns, 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2, .production_id = 19),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2, .production_id = 19), SHIFT_REPEAT(117),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2, .production_id = 18),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 1),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_definition_repeat1, 2), SHIFT_REPEAT(191),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variant_definition_repeat1, 2),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(195),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 2, .production_id = 8),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_param_clause, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patterns, 3, .production_id = 37),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patterns, 4, .production_id = 39),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, .production_id = 24),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 7, .production_id = 30),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 7, .production_id = 31),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, .production_id = 24),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bindings_repeat1, 2),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bindings_repeat1, 2), SHIFT_REPEAT(257),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(67),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(244),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 6, .production_id = 23),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 8, .production_id = 34),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_param_clause_repeat1, 2), SHIFT_REPEAT(267),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_param_clause_repeat1, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(86),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_patterns_repeat1, 2, .production_id = 40),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_patterns_repeat1, 2, .production_id = 40), SHIFT_REPEAT(90),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_type_value_args, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_param, 1, .production_id = 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_function, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_patterns_repeat1, 2, .production_id = 37),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindings, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_field, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindings, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_type_value, 2, .production_id = 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindings, 4),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_function, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [781] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
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
