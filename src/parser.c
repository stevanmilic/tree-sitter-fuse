#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 323
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
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
  anon_sym_DOT = 23,
  anon_sym_COLON_COLON = 24,
  anon_sym_PLUS = 25,
  anon_sym_DASH = 26,
  anon_sym_STAR = 27,
  anon_sym_SLASH = 28,
  anon_sym_PERCENT = 29,
  anon_sym_LT_EQ = 30,
  anon_sym_LT = 31,
  anon_sym_GT = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_EQ_EQ = 34,
  anon_sym_BANG_EQ = 35,
  anon_sym_AMP_AMP = 36,
  anon_sym_PIPE_PIPE = 37,
  sym_self = 38,
  sym_true = 39,
  sym_false = 40,
  sym_integer = 41,
  sym_float = 42,
  anon_sym_DQUOTE = 43,
  aux_sym_string_token1 = 44,
  sym_escape_sequence = 45,
  sym_comment = 46,
  sym__newline = 47,
  sym__indent = 48,
  sym__dedent = 49,
  sym_source_file = 50,
  sym__definition = 51,
  sym_variant_definition = 52,
  sym_variant_type_value = 53,
  sym_variant_type_value_args = 54,
  sym_record_definition = 55,
  sym_record_type_field = 56,
  sym_tuple_definition = 57,
  sym_type_function_definitions = 58,
  sym_trait_function_definitions = 59,
  sym_trait_definition = 60,
  sym_trait_function = 61,
  sym_type_alias_definition = 62,
  sym_function_definition = 63,
  sym_function_signature = 64,
  sym_type_param = 65,
  sym_type_param_clause = 66,
  sym_type_list = 67,
  sym_type_arguments = 68,
  sym_type = 69,
  sym_function_type = 70,
  sym_tuple_type = 71,
  sym__simple_type = 72,
  sym_generic_type = 73,
  sym_param = 74,
  sym_parameter_list = 75,
  sym_block = 76,
  sym_expression = 77,
  sym_inline_block_expression = 78,
  sym_inline_expression = 79,
  sym_let_expression = 80,
  sym_binding = 81,
  sym_bindings = 82,
  sym_lambda_expression = 83,
  sym_pattern = 84,
  sym_patterns = 85,
  sym_case = 86,
  sym_match_expression = 87,
  sym__primary_expression = 88,
  sym_arguments = 89,
  sym_call_expression = 90,
  sym_infix_expression = 91,
  sym_proj_expression = 92,
  sym__parenthesized_expression = 93,
  sym_operator_identifier = 94,
  sym_literal = 95,
  sym_boolean = 96,
  sym_string = 97,
  aux_sym_source_file_repeat1 = 98,
  aux_sym_variant_definition_repeat1 = 99,
  aux_sym_record_definition_repeat1 = 100,
  aux_sym_type_function_definitions_repeat1 = 101,
  aux_sym_trait_definition_repeat1 = 102,
  aux_sym_type_param_clause_repeat1 = 103,
  aux_sym_type_list_repeat1 = 104,
  aux_sym_parameter_list_repeat1 = 105,
  aux_sym_block_repeat1 = 106,
  aux_sym_bindings_repeat1 = 107,
  aux_sym_patterns_repeat1 = 108,
  aux_sym_case_repeat1 = 109,
  aux_sym_match_expression_repeat1 = 110,
  aux_sym_arguments_repeat1 = 111,
  aux_sym_proj_expression_repeat1 = 112,
  aux_sym_string_repeat1 = 113,
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
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '%') ADVANCE(49);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(52);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '%') ADVANCE(49);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(58);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '%') ADVANCE(49);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(69);
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
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(56);
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
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(54);
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
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == '{') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == '|') ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
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
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '%') ADVANCE(49);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(58);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '#') ADVANCE(69);
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
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(58);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(43);
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
      if (lookahead == '=') ADVANCE(54);
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
      if (lookahead == '|') ADVANCE(57);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
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
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_impl);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_self);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 36:
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
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 23},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 23},
  [91] = {.lex_state = 23},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
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
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0, .external_lex_state = 3},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 0, .external_lex_state = 3},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0, .external_lex_state = 3},
  [205] = {.lex_state = 0, .external_lex_state = 3},
  [206] = {.lex_state = 0, .external_lex_state = 3},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 3},
  [220] = {.lex_state = 0, .external_lex_state = 3},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0, .external_lex_state = 3},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0, .external_lex_state = 3},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0, .external_lex_state = 3},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0, .external_lex_state = 3},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0, .external_lex_state = 3},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 0, .external_lex_state = 3},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 0, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0, .external_lex_state = 3},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0, .external_lex_state = 2},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0, .external_lex_state = 3},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0, .external_lex_state = 3},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0, .external_lex_state = 3},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0, .external_lex_state = 3},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0, .external_lex_state = 3},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
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
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0, .external_lex_state = 3},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0, .external_lex_state = 3},
  [320] = {.lex_state = 0, .external_lex_state = 3},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0, .external_lex_state = 3},
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
    [sym_source_file] = STATE(307),
    [sym__definition] = STATE(69),
    [sym_variant_definition] = STATE(69),
    [sym_record_definition] = STATE(69),
    [sym_tuple_definition] = STATE(69),
    [sym_type_function_definitions] = STATE(69),
    [sym_trait_function_definitions] = STATE(69),
    [sym_trait_definition] = STATE(69),
    [sym_type_alias_definition] = STATE(69),
    [sym_function_definition] = STATE(69),
    [sym_function_signature] = STATE(253),
    [aux_sym_source_file_repeat1] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_type] = ACTIONS(7),
    [anon_sym_impl] = ACTIONS(9),
    [anon_sym_trait] = ACTIONS(11),
    [anon_sym_fun] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      aux_sym_proj_expression_repeat1,
    STATE(11), 1,
      sym_arguments,
    STATE(72), 1,
      sym_operator_identifier,
    STATE(255), 1,
      sym_type_arguments,
    ACTIONS(21), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 3,
      sym__dedent,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(15), 8,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      sym_identifier,
      sym_self,
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
  [58] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      aux_sym_proj_expression_repeat1,
    STATE(11), 1,
      sym_arguments,
    STATE(72), 1,
      sym_operator_identifier,
    STATE(255), 1,
      sym_type_arguments,
    ACTIONS(21), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(29), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(31), 14,
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
  [112] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      aux_sym_proj_expression_repeat1,
    STATE(11), 1,
      sym_arguments,
    STATE(72), 1,
      sym_operator_identifier,
    STATE(255), 1,
      sym_type_arguments,
    ACTIONS(21), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 3,
      sym__dedent,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(33), 7,
      anon_sym_let,
      anon_sym_match,
      sym_identifier,
      sym_self,
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
  [169] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 1,
      anon_sym_EQ_GT,
    ACTIONS(37), 11,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
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
  [211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_proj_expression_repeat1,
    ACTIONS(45), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(47), 18,
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
  [250] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_proj_expression_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(49), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(51), 16,
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
  [291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
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
  [327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
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
  [363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
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
  [399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
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
  [435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
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
  [471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
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
  [507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
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
  [543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
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
  [579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
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
  [615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
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
  [651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 10,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
    ACTIONS(98), 18,
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
  [687] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_let,
    ACTIONS(106), 1,
      anon_sym_match,
    ACTIONS(108), 1,
      sym_self,
    ACTIONS(112), 1,
      sym_integer,
    ACTIONS(114), 1,
      sym_float,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      sym__dedent,
    STATE(254), 1,
      sym_bindings,
    ACTIONS(110), 2,
      sym_true,
      sym_false,
    STATE(15), 2,
      sym_boolean,
      sym_string,
    STATE(21), 2,
      sym_expression,
      aux_sym_block_repeat1,
    STATE(93), 3,
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
  [746] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_let,
    ACTIONS(106), 1,
      anon_sym_match,
    ACTIONS(108), 1,
      sym_self,
    ACTIONS(112), 1,
      sym_integer,
    ACTIONS(114), 1,
      sym_float,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      sym__dedent,
    STATE(254), 1,
      sym_bindings,
    ACTIONS(110), 2,
      sym_true,
      sym_false,
    STATE(15), 2,
      sym_boolean,
      sym_string,
    STATE(21), 2,
      sym_expression,
      aux_sym_block_repeat1,
    STATE(93), 3,
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
  [805] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_match,
    ACTIONS(134), 1,
      sym_self,
    ACTIONS(140), 1,
      sym_integer,
    ACTIONS(143), 1,
      sym_float,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym__dedent,
    STATE(254), 1,
      sym_bindings,
    ACTIONS(137), 2,
      sym_true,
      sym_false,
    STATE(15), 2,
      sym_boolean,
      sym_string,
    STATE(21), 2,
      sym_expression,
      aux_sym_block_repeat1,
    STATE(93), 3,
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
  [864] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_proj_expression_repeat1,
    STATE(57), 1,
      sym_arguments,
    STATE(67), 1,
      sym_operator_identifier,
    STATE(201), 1,
      aux_sym_arguments_repeat1,
    STATE(249), 1,
      sym_type_arguments,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [916] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_let,
    ACTIONS(106), 1,
      anon_sym_match,
    ACTIONS(108), 1,
      sym_self,
    ACTIONS(112), 1,
      sym_integer,
    ACTIONS(114), 1,
      sym_float,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    STATE(254), 1,
      sym_bindings,
    ACTIONS(110), 2,
      sym_true,
      sym_false,
    STATE(15), 2,
      sym_boolean,
      sym_string,
    STATE(19), 2,
      sym_expression,
      aux_sym_block_repeat1,
    STATE(93), 3,
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
  [972] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      aux_sym_proj_expression_repeat1,
    STATE(57), 1,
      sym_arguments,
    STATE(67), 1,
      sym_operator_identifier,
    STATE(249), 1,
      sym_type_arguments,
    ACTIONS(157), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(29), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 13,
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
  [1018] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_let,
    ACTIONS(106), 1,
      anon_sym_match,
    ACTIONS(108), 1,
      sym_self,
    ACTIONS(112), 1,
      sym_integer,
    ACTIONS(114), 1,
      sym_float,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    STATE(254), 1,
      sym_bindings,
    ACTIONS(110), 2,
      sym_true,
      sym_false,
    STATE(15), 2,
      sym_boolean,
      sym_string,
    STATE(20), 2,
      sym_expression,
      aux_sym_block_repeat1,
    STATE(93), 3,
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
  [1074] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_proj_expression_repeat1,
    STATE(57), 1,
      sym_arguments,
    STATE(67), 1,
      sym_operator_identifier,
    STATE(202), 1,
      aux_sym_arguments_repeat1,
    STATE(249), 1,
      sym_type_arguments,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [1126] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      aux_sym_proj_expression_repeat1,
    STATE(57), 1,
      sym_arguments,
    STATE(67), 1,
      sym_operator_identifier,
    STATE(249), 1,
      sym_type_arguments,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(157), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [1173] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      aux_sym_proj_expression_repeat1,
    STATE(57), 1,
      sym_arguments,
    STATE(67), 1,
      sym_operator_identifier,
    STATE(249), 1,
      sym_type_arguments,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(161), 2,
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
  [1220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(98), 18,
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
  [1250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(82), 18,
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
  [1280] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_proj_expression_repeat1,
    STATE(57), 1,
      sym_arguments,
    STATE(67), 1,
      sym_operator_identifier,
    STATE(249), 1,
      sym_type_arguments,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [1326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 18,
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
  [1356] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_proj_expression_repeat1,
    STATE(57), 1,
      sym_arguments,
    STATE(67), 1,
      sym_operator_identifier,
    STATE(249), 1,
      sym_type_arguments,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [1402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(90), 18,
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
  [1432] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_COLON,
    STATE(46), 1,
      aux_sym_proj_expression_repeat1,
    STATE(57), 1,
      sym_arguments,
    STATE(67), 1,
      sym_operator_identifier,
    STATE(249), 1,
      sym_type_arguments,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
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
  [1478] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      sym_integer,
    ACTIONS(114), 1,
      sym_float,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_self,
    STATE(83), 1,
      sym_inline_expression,
    STATE(254), 1,
      sym_bindings,
    ACTIONS(110), 2,
      sym_true,
      sym_false,
    STATE(15), 2,
      sym_boolean,
      sym_string,
    STATE(85), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(2), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1529] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      sym_integer,
    ACTIONS(114), 1,
      sym_float,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_self,
    STATE(88), 1,
      sym_inline_expression,
    STATE(254), 1,
      sym_bindings,
    ACTIONS(110), 2,
      sym_true,
      sym_false,
    STATE(15), 2,
      sym_boolean,
      sym_string,
    STATE(85), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(2), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1580] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      sym_integer,
    ACTIONS(114), 1,
      sym_float,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_self,
    STATE(92), 1,
      sym_inline_expression,
    STATE(254), 1,
      sym_bindings,
    ACTIONS(110), 2,
      sym_true,
      sym_false,
    STATE(15), 2,
      sym_boolean,
      sym_string,
    STATE(85), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(2), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1631] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      sym_self,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      sym_bindings,
    STATE(266), 1,
      sym_inline_expression,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(265), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(27), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1682] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      sym_self,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      sym_bindings,
    STATE(270), 1,
      sym_inline_expression,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(265), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(27), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1733] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_DASH_GT,
    ACTIONS(191), 1,
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
  [1766] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      sym_integer,
    ACTIONS(114), 1,
      sym_float,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_self,
    STATE(95), 1,
      sym_inline_expression,
    STATE(254), 1,
      sym_bindings,
    ACTIONS(110), 2,
      sym_true,
      sym_false,
    STATE(15), 2,
      sym_boolean,
      sym_string,
    STATE(85), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(2), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1817] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      sym_self,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      sym_bindings,
    STATE(278), 1,
      sym_inline_expression,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(265), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(27), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1868] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_proj_expression_repeat1,
    ACTIONS(193), 2,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
    ACTIONS(49), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 15,
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
  [1901] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      sym_integer,
    ACTIONS(114), 1,
      sym_float,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_self,
    STATE(81), 1,
      sym_inline_expression,
    STATE(254), 1,
      sym_bindings,
    ACTIONS(110), 2,
      sym_true,
      sym_false,
    STATE(15), 2,
      sym_boolean,
      sym_string,
    STATE(85), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(2), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [1952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_proj_expression_repeat1,
    ACTIONS(45), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 17,
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
  [1983] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      sym_integer,
    ACTIONS(114), 1,
      sym_float,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_self,
    STATE(80), 1,
      sym_inline_expression,
    STATE(254), 1,
      sym_bindings,
    ACTIONS(110), 2,
      sym_true,
      sym_false,
    STATE(15), 2,
      sym_boolean,
      sym_string,
    STATE(85), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(2), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2034] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      sym_self,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      sym_bindings,
    STATE(269), 1,
      sym_inline_expression,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(265), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(27), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2085] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      sym_integer,
    ACTIONS(114), 1,
      sym_float,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_self,
    STATE(94), 1,
      sym_inline_expression,
    STATE(254), 1,
      sym_bindings,
    ACTIONS(110), 2,
      sym_true,
      sym_false,
    STATE(15), 2,
      sym_boolean,
      sym_string,
    STATE(85), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(2), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2136] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      sym_integer,
    ACTIONS(114), 1,
      sym_float,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_self,
    STATE(84), 1,
      sym_inline_expression,
    STATE(254), 1,
      sym_bindings,
    ACTIONS(110), 2,
      sym_true,
      sym_false,
    STATE(15), 2,
      sym_boolean,
      sym_string,
    STATE(85), 2,
      sym_inline_block_expression,
      sym_lambda_expression,
    STATE(2), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 17,
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
  [2215] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_COLON,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(198), 2,
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
  [2247] = 3,
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
  [2275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(94), 17,
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
  [2303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(74), 17,
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
  [2331] = 3,
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
  [2359] = 3,
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
  [2387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(78), 17,
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
  [2415] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(202), 1,
      sym_self,
    STATE(203), 1,
      sym_lambda_expression,
    STATE(256), 1,
      sym_bindings,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(26), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2462] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    ACTIONS(206), 1,
      sym_self,
    STATE(224), 1,
      sym_lambda_expression,
    STATE(256), 1,
      sym_bindings,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(22), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2509] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(214), 1,
      sym_self,
    STATE(210), 1,
      sym_binding,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(31), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2553] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(216), 1,
      sym_self,
    STATE(210), 1,
      sym_binding,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(33), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2597] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      sym_self,
    STATE(238), 1,
      sym_lambda_expression,
    STATE(256), 1,
      sym_bindings,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(28), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2641] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 1,
      anon_sym_type,
    ACTIONS(225), 1,
      anon_sym_impl,
    ACTIONS(228), 1,
      anon_sym_trait,
    ACTIONS(231), 1,
      anon_sym_fun,
    STATE(253), 1,
      sym_function_signature,
    STATE(64), 10,
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
  [2675] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      sym__dedent,
    STATE(197), 1,
      sym_pattern,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(71), 2,
      sym_case,
      aux_sym_match_expression_repeat1,
    STATE(191), 2,
      sym_patterns,
      sym_literal,
  [2719] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    ACTIONS(242), 2,
      sym_identifier,
      sym_self,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(35), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2755] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    ACTIONS(244), 2,
      sym_identifier,
      sym_self,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(24), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2791] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    ACTIONS(216), 2,
      sym_identifier,
      sym_self,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(33), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2827] = 8,
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
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    STATE(253), 1,
      sym_function_signature,
    STATE(64), 10,
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
  [2861] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    ACTIONS(214), 2,
      sym_identifier,
      sym_self,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(31), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2897] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym__,
    ACTIONS(260), 1,
      sym_integer,
    ACTIONS(263), 1,
      sym_float,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__dedent,
    STATE(197), 1,
      sym_pattern,
    ACTIONS(257), 2,
      sym_true,
      sym_false,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(71), 2,
      sym_case,
      aux_sym_match_expression_repeat1,
    STATE(191), 2,
      sym_patterns,
      sym_literal,
  [2941] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_integer,
    ACTIONS(114), 1,
      sym_float,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 2,
      sym_true,
      sym_false,
    ACTIONS(271), 2,
      sym_identifier,
      sym_self,
    STATE(15), 2,
      sym_boolean,
      sym_string,
    STATE(3), 6,
      sym__primary_expression,
      sym_call_expression,
      sym_infix_expression,
      sym_proj_expression,
      sym__parenthesized_expression,
      sym_literal,
  [2977] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym__,
    STATE(197), 1,
      sym_pattern,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(65), 2,
      sym_case,
      aux_sym_match_expression_repeat1,
    STATE(191), 2,
      sym_patterns,
      sym_literal,
  [3018] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      sym_pattern,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(191), 2,
      sym_patterns,
      sym_literal,
  [3058] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_EQ,
    STATE(82), 1,
      sym_type_arguments,
    ACTIONS(277), 10,
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
  [3083] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym__,
    STATE(240), 1,
      sym_pattern,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(191), 2,
      sym_patterns,
      sym_literal,
  [3120] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(185), 1,
      sym_float,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym__,
    STATE(244), 1,
      sym_pattern,
    ACTIONS(181), 2,
      sym_true,
      sym_false,
    STATE(32), 2,
      sym_boolean,
      sym_string,
    STATE(191), 2,
      sym_patterns,
      sym_literal,
  [3157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_EQ,
    ACTIONS(281), 12,
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
  [3178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(285), 8,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(289), 8,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(293), 8,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(297), 11,
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
  [3258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(301), 8,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(305), 8,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(15), 8,
      anon_sym_let,
      anon_sym__,
      anon_sym_match,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(309), 7,
      anon_sym_let,
      anon_sym_match,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3337] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      sym_self,
    STATE(158), 1,
      sym_type,
    STATE(207), 1,
      sym_param,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
    STATE(306), 2,
      sym_type_list,
      sym_parameter_list,
  [3368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(319), 7,
      anon_sym_let,
      anon_sym_match,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_EQ,
    ACTIONS(323), 10,
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
  [3406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(277), 10,
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
  [3425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(331), 1,
      anon_sym_DASH_GT,
    ACTIONS(327), 9,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_RPAREN,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [3446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(333), 7,
      anon_sym_let,
      anon_sym_match,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(33), 7,
      anon_sym_let,
      anon_sym_match,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(337), 5,
      anon_sym__,
      sym_identifier,
      sym_true,
      sym_false,
      sym_integer,
  [3501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 4,
      sym__dedent,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(341), 5,
      anon_sym__,
      sym_identifier,
      sym_true,
      sym_false,
      sym_integer,
  [3518] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(158), 1,
      sym_type,
    STATE(321), 1,
      sym_type_list,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3542] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(158), 1,
      sym_type,
    STATE(304), 1,
      sym_type_list,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(347), 5,
      sym_identifier,
      sym_self,
      sym_true,
      sym_false,
      sym_integer,
  [3582] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(158), 1,
      sym_type,
    STATE(296), 1,
      sym_type_list,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3606] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(158), 1,
      sym_type,
    STATE(312), 1,
      sym_type_list,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3630] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(158), 1,
      sym_type,
    STATE(279), 1,
      sym_type_list,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3654] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(158), 1,
      sym_type,
    STATE(311), 1,
      sym_type_list,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3678] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(158), 1,
      sym_type,
    STATE(303), 1,
      sym_type_list,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3702] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(158), 1,
      sym_type,
    STATE(308), 1,
      sym_type_list,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3726] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(228), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3747] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym_type,
    STATE(140), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(225), 2,
      sym_function_type,
      sym_tuple_type,
  [3768] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(274), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3789] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_identifier,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    STATE(218), 1,
      sym_type,
    STATE(145), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(212), 2,
      sym_function_type,
      sym_tuple_type,
  [3810] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(246), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3831] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(247), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3852] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(129), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3873] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym_type,
    STATE(140), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(225), 2,
      sym_function_type,
      sym_tuple_type,
  [3894] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(171), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3915] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(263), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3936] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    STATE(236), 1,
      sym_type,
    STATE(140), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(225), 2,
      sym_function_type,
      sym_tuple_type,
  [3957] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3978] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(91), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [3999] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(271), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [4020] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    STATE(223), 1,
      sym_type,
    STATE(140), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(225), 2,
      sym_function_type,
      sym_tuple_type,
  [4041] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(131), 1,
      sym_type,
    STATE(75), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(90), 2,
      sym_function_type,
      sym_tuple_type,
  [4062] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_identifier,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    STATE(198), 1,
      sym_type,
    STATE(145), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(212), 2,
      sym_function_type,
      sym_tuple_type,
  [4083] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    STATE(219), 1,
      sym_type,
    STATE(140), 2,
      sym__simple_type,
      sym_generic_type,
    STATE(225), 2,
      sym_function_type,
      sym_tuple_type,
  [4104] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_fun,
    ACTIONS(362), 1,
      sym__dedent,
    STATE(204), 1,
      sym_function_signature,
    STATE(245), 1,
      sym_function_definition,
    STATE(123), 2,
      sym_trait_function,
      aux_sym_trait_definition_repeat1,
  [4124] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_identifier,
    STATE(261), 1,
      sym_param,
    STATE(133), 2,
      sym_record_type_field,
      aux_sym_record_definition_repeat1,
    STATE(184), 2,
      sym_variant_type_value,
      aux_sym_variant_definition_repeat1,
  [4142] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(366), 1,
      sym__dedent,
    STATE(204), 1,
      sym_function_signature,
    STATE(245), 1,
      sym_function_definition,
    STATE(123), 2,
      sym_trait_function,
      aux_sym_trait_definition_repeat1,
  [4162] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_identifier,
    STATE(261), 1,
      sym_param,
    STATE(152), 2,
      sym_record_type_field,
      aux_sym_record_definition_repeat1,
    STATE(169), 2,
      sym_variant_type_value,
      aux_sym_variant_definition_repeat1,
  [4180] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(368), 1,
      sym__dedent,
    STATE(204), 1,
      sym_function_signature,
    STATE(245), 1,
      sym_function_definition,
    STATE(123), 2,
      sym_trait_function,
      aux_sym_trait_definition_repeat1,
  [4200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_patterns,
    ACTIONS(370), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [4216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DASH_GT,
    ACTIONS(372), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 6,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
      anon_sym_RBRACE,
  [4242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DASH_GT,
    ACTIONS(376), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4256] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COLON,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_EQ,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    STATE(221), 1,
      sym_type_param_clause,
  [4275] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_identifier,
    ACTIONS(388), 1,
      sym__dedent,
    STATE(261), 1,
      sym_param,
    STATE(148), 2,
      sym_record_type_field,
      aux_sym_record_definition_repeat1,
  [4292] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(390), 1,
      sym__dedent,
    STATE(257), 1,
      sym_function_signature,
    STATE(155), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4320] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_self,
    ACTIONS(394), 1,
      sym_identifier,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_param,
    STATE(310), 1,
      sym_parameter_list,
  [4339] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(398), 1,
      sym__dedent,
    STATE(257), 1,
      sym_function_signature,
    STATE(155), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_COLON,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    STATE(251), 1,
      sym_variant_type_value_args,
    ACTIONS(400), 2,
      sym__dedent,
      sym_identifier,
  [4373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LBRACK,
    STATE(185), 1,
      sym_type_arguments,
    ACTIONS(277), 3,
      sym__indent,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [4399] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_self,
    ACTIONS(394), 1,
      sym_identifier,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_param,
    STATE(289), 1,
      sym_parameter_list,
  [4418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4429] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    STATE(204), 1,
      sym_function_signature,
    STATE(245), 1,
      sym_function_definition,
    STATE(127), 2,
      sym_trait_function,
      aux_sym_trait_definition_repeat1,
  [4446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    STATE(189), 1,
      sym_type_arguments,
    ACTIONS(277), 3,
      sym__dedent,
      anon_sym_DASH_GT,
      sym_identifier,
  [4472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4494] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_identifier,
    ACTIONS(425), 1,
      sym__dedent,
    STATE(261), 1,
      sym_param,
    STATE(148), 2,
      sym_record_type_field,
      aux_sym_record_definition_repeat1,
  [4511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COLON,
    ACTIONS(431), 4,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [4535] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    STATE(204), 1,
      sym_function_signature,
    STATE(245), 1,
      sym_function_definition,
    STATE(125), 2,
      sym_trait_function,
      aux_sym_trait_definition_repeat1,
  [4552] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_identifier,
    ACTIONS(433), 1,
      sym__dedent,
    STATE(261), 1,
      sym_param,
    STATE(148), 2,
      sym_record_type_field,
      aux_sym_record_definition_repeat1,
  [4569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_fun,
    ACTIONS(442), 1,
      sym__dedent,
    STATE(257), 1,
      sym_function_signature,
    STATE(155), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4619] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(446), 1,
      sym__dedent,
    STATE(257), 1,
      sym_function_signature,
    STATE(155), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4636] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DASH_GT,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(448), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(456), 1,
      sym__dedent,
    STATE(257), 1,
      sym_function_signature,
    STATE(155), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4703] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(460), 1,
      sym__dedent,
    STATE(257), 1,
      sym_function_signature,
    STATE(155), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 5,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_impl,
      anon_sym_trait,
      anon_sym_fun,
  [4742] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    ACTIONS(466), 1,
      sym__dedent,
    STATE(257), 1,
      sym_function_signature,
    STATE(155), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 4,
      sym__dedent,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [4769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    STATE(257), 1,
      sym_function_signature,
    STATE(166), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(470), 1,
      sym__dedent,
    STATE(176), 2,
      sym_variant_type_value,
      aux_sym_variant_definition_repeat1,
  [4797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(472), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DASH_GT,
    ACTIONS(477), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 4,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_for,
      anon_sym_EQ,
  [4833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [4843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [4853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(485), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(490), 1,
      sym__dedent,
    STATE(176), 2,
      sym_variant_type_value,
      aux_sym_variant_definition_repeat1,
  [4881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [4891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [4901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    STATE(257), 1,
      sym_function_signature,
    STATE(161), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    STATE(257), 1,
      sym_function_signature,
    STATE(163), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [4929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    STATE(251), 1,
      sym_variant_type_value_args,
    ACTIONS(400), 2,
      sym__dedent,
      sym_identifier,
  [4943] = 4,
    ACTIONS(496), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      sym_comment,
    STATE(183), 1,
      aux_sym_string_repeat1,
    ACTIONS(498), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4957] = 4,
    ACTIONS(500), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      aux_sym_string_repeat1,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(506), 1,
      sym__dedent,
    STATE(176), 2,
      sym_variant_type_value,
      aux_sym_variant_definition_repeat1,
  [4985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 4,
      sym__indent,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [4995] = 4,
    ACTIONS(500), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      aux_sym_string_repeat1,
    ACTIONS(510), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [5009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 4,
      sym__indent,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [5019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    STATE(257), 1,
      sym_function_signature,
    STATE(137), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [5033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 4,
      sym__dedent,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      sym_identifier,
  [5043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    STATE(257), 1,
      sym_function_signature,
    STATE(134), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [5057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [5067] = 4,
    ACTIONS(500), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      aux_sym_string_repeat1,
    ACTIONS(515), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [5081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(517), 1,
      anon_sym_COLON,
    ACTIONS(519), 1,
      anon_sym_for,
    STATE(267), 1,
      sym_type_param_clause,
  [5097] = 4,
    ACTIONS(500), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      aux_sym_string_repeat1,
    ACTIONS(504), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [5111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_fun,
    STATE(257), 1,
      sym_function_signature,
    STATE(157), 2,
      sym_function_definition,
      aux_sym_type_function_definitions_repeat1,
  [5125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 4,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_for,
      anon_sym_EQ,
  [5135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_EQ_GT,
    ACTIONS(527), 1,
      anon_sym_PIPE,
    STATE(230), 1,
      aux_sym_case_repeat1,
  [5148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_DASH_GT,
    ACTIONS(327), 2,
      sym__dedent,
      sym_identifier,
  [5159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(533), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      aux_sym_type_param_clause_repeat1,
  [5172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(535), 1,
      anon_sym_COLON,
    STATE(282), 1,
      sym_type_param_clause,
  [5185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym_arguments_repeat1,
  [5198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym_arguments_repeat1,
  [5211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      aux_sym_arguments_repeat1,
  [5224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_SEMI,
    ACTIONS(543), 1,
      sym__indent,
    STATE(248), 1,
      sym_block,
  [5237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_DASH_GT,
    ACTIONS(545), 2,
      sym__indent,
      anon_sym_SEMI,
  [5248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_DASH_GT,
    ACTIONS(549), 2,
      sym__indent,
      anon_sym_SEMI,
  [5259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_parameter_list_repeat1,
  [5272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym_identifier,
    ACTIONS(555), 1,
      sym_self,
    STATE(242), 1,
      sym_param,
  [5285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      aux_sym_parameter_list_repeat1,
  [5298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_bindings_repeat1,
  [5311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 3,
      sym__dedent,
      anon_sym_DASH_GT,
      sym_identifier,
  [5320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 3,
      sym__dedent,
      anon_sym_DASH_GT,
      sym_identifier,
  [5329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 1,
      anon_sym_COLON,
    STATE(293), 1,
      sym_type_param_clause,
  [5342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_bindings_repeat1,
  [5355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym_type_param_clause,
  [5368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(569), 1,
      anon_sym_COLON,
    STATE(318), 1,
      sym_type_param_clause,
  [5381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_arguments_repeat1,
  [5394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_DASH_GT,
    ACTIONS(574), 2,
      sym__dedent,
      sym_identifier,
  [5405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_DASH_GT,
    ACTIONS(327), 2,
      sym__indent,
      anon_sym_SEMI,
  [5416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 3,
      sym__indent,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [5425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COLON,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      anon_sym_EQ,
  [5438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      aux_sym_bindings_repeat1,
  [5451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_DASH_GT,
    ACTIONS(587), 2,
      sym__indent,
      anon_sym_SEMI,
  [5462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_arguments_repeat1,
  [5475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 3,
      sym__indent,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [5484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_patterns_repeat1,
  [5497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_COLON,
    ACTIONS(198), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DASH_GT,
    ACTIONS(595), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(600), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      aux_sym_type_param_clause_repeat1,
  [5532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_PIPE,
    ACTIONS(602), 1,
      anon_sym_EQ_GT,
    STATE(234), 1,
      aux_sym_case_repeat1,
  [5545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_patterns_repeat1,
  [5558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(609), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      aux_sym_type_param_clause_repeat1,
  [5571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym_parameter_list_repeat1,
  [5584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_EQ_GT,
    ACTIONS(618), 1,
      anon_sym_PIPE,
    STATE(234), 1,
      aux_sym_case_repeat1,
  [5597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DASH_GT,
    ACTIONS(574), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_DASH_GT,
    ACTIONS(621), 2,
      sym__indent,
      anon_sym_SEMI,
  [5619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_patterns_repeat1,
  [5632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 2,
      sym__dedent,
      anon_sym_fun,
  [5648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 2,
      anon_sym_EQ_GT,
      anon_sym_PIPE,
  [5656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym__indent,
    STATE(309), 1,
      sym_block,
  [5682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 2,
      sym__dedent,
      anon_sym_fun,
  [5698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DASH_GT,
    ACTIONS(635), 1,
      anon_sym_EQ_GT,
  [5708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DASH_GT,
    ACTIONS(637), 1,
      anon_sym_EQ_GT,
  [5718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 2,
      sym__dedent,
      anon_sym_fun,
  [5726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_arguments,
  [5736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 2,
      sym__dedent,
      sym_identifier,
  [5752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym__indent,
    STATE(142), 1,
      sym_block,
  [5770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_DASH_GT,
    ACTIONS(643), 1,
      anon_sym_EQ_GT,
  [5780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_arguments,
  [5790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_DASH_GT,
    ACTIONS(647), 1,
      anon_sym_EQ_GT,
  [5800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym__indent,
    STATE(248), 1,
      sym_block,
  [5810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 2,
      sym__dedent,
      anon_sym_fun,
  [5834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 2,
      sym__dedent,
      sym_identifier,
  [5842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [5850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DASH_GT,
    ACTIONS(657), 1,
      anon_sym_EQ_GT,
  [5860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym_identifier,
    STATE(252), 1,
      sym_binding,
  [5870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_COLON,
    ACTIONS(663), 1,
      anon_sym_for,
  [5896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_identifier,
    STATE(250), 1,
      sym_type_param,
  [5906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DASH_GT,
    ACTIONS(667), 1,
      anon_sym_EQ,
  [5932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_identifier,
    STATE(232), 1,
      sym_type_param,
  [5942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym__indent,
    STATE(284), 1,
      sym_block,
  [5952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DASH_GT,
    ACTIONS(669), 1,
      anon_sym_EQ_GT,
  [5962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_COLON,
    ACTIONS(673), 1,
      anon_sym_EQ,
  [5972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 2,
      sym__dedent,
      sym_identifier,
  [5988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_RBRACK,
  [6003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      sym_identifier,
  [6010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym__indent,
  [6017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_COLON,
  [6024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      sym__indent,
  [6031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
  [6038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      sym_identifier,
  [6045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      sym__indent,
  [6052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      sym_identifier,
  [6059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      sym__indent,
  [6066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
  [6073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      sym__indent,
  [6080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DASH_GT,
  [6087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_DASH_GT,
  [6094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_COLON,
  [6101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_DASH_GT,
  [6108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_LPAREN,
  [6115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
  [6122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_COLON,
  [6129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COLON,
  [6136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      sym__indent,
  [6143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      sym__indent,
  [6150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_identifier,
  [6157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_identifier,
  [6164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
  [6171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
  [6178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_DASH_GT,
  [6185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
  [6192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      ts_builtin_sym_end,
  [6199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_RBRACK,
  [6206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
  [6213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
  [6220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
  [6227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_RBRACK,
  [6234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_identifier,
  [6241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_identifier,
  [6248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym__indent,
  [6255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym_identifier,
  [6262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_identifier,
  [6269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COLON,
  [6276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      sym__indent,
  [6283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym__indent,
  [6290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
  [6297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym__indent,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 169,
  [SMALL_STATE(6)] = 211,
  [SMALL_STATE(7)] = 250,
  [SMALL_STATE(8)] = 291,
  [SMALL_STATE(9)] = 327,
  [SMALL_STATE(10)] = 363,
  [SMALL_STATE(11)] = 399,
  [SMALL_STATE(12)] = 435,
  [SMALL_STATE(13)] = 471,
  [SMALL_STATE(14)] = 507,
  [SMALL_STATE(15)] = 543,
  [SMALL_STATE(16)] = 579,
  [SMALL_STATE(17)] = 615,
  [SMALL_STATE(18)] = 651,
  [SMALL_STATE(19)] = 687,
  [SMALL_STATE(20)] = 746,
  [SMALL_STATE(21)] = 805,
  [SMALL_STATE(22)] = 864,
  [SMALL_STATE(23)] = 916,
  [SMALL_STATE(24)] = 972,
  [SMALL_STATE(25)] = 1018,
  [SMALL_STATE(26)] = 1074,
  [SMALL_STATE(27)] = 1126,
  [SMALL_STATE(28)] = 1173,
  [SMALL_STATE(29)] = 1220,
  [SMALL_STATE(30)] = 1250,
  [SMALL_STATE(31)] = 1280,
  [SMALL_STATE(32)] = 1326,
  [SMALL_STATE(33)] = 1356,
  [SMALL_STATE(34)] = 1402,
  [SMALL_STATE(35)] = 1432,
  [SMALL_STATE(36)] = 1478,
  [SMALL_STATE(37)] = 1529,
  [SMALL_STATE(38)] = 1580,
  [SMALL_STATE(39)] = 1631,
  [SMALL_STATE(40)] = 1682,
  [SMALL_STATE(41)] = 1733,
  [SMALL_STATE(42)] = 1766,
  [SMALL_STATE(43)] = 1817,
  [SMALL_STATE(44)] = 1868,
  [SMALL_STATE(45)] = 1901,
  [SMALL_STATE(46)] = 1952,
  [SMALL_STATE(47)] = 1983,
  [SMALL_STATE(48)] = 2034,
  [SMALL_STATE(49)] = 2085,
  [SMALL_STATE(50)] = 2136,
  [SMALL_STATE(51)] = 2187,
  [SMALL_STATE(52)] = 2215,
  [SMALL_STATE(53)] = 2247,
  [SMALL_STATE(54)] = 2275,
  [SMALL_STATE(55)] = 2303,
  [SMALL_STATE(56)] = 2331,
  [SMALL_STATE(57)] = 2359,
  [SMALL_STATE(58)] = 2387,
  [SMALL_STATE(59)] = 2415,
  [SMALL_STATE(60)] = 2462,
  [SMALL_STATE(61)] = 2509,
  [SMALL_STATE(62)] = 2553,
  [SMALL_STATE(63)] = 2597,
  [SMALL_STATE(64)] = 2641,
  [SMALL_STATE(65)] = 2675,
  [SMALL_STATE(66)] = 2719,
  [SMALL_STATE(67)] = 2755,
  [SMALL_STATE(68)] = 2791,
  [SMALL_STATE(69)] = 2827,
  [SMALL_STATE(70)] = 2861,
  [SMALL_STATE(71)] = 2897,
  [SMALL_STATE(72)] = 2941,
  [SMALL_STATE(73)] = 2977,
  [SMALL_STATE(74)] = 3018,
  [SMALL_STATE(75)] = 3058,
  [SMALL_STATE(76)] = 3083,
  [SMALL_STATE(77)] = 3120,
  [SMALL_STATE(78)] = 3157,
  [SMALL_STATE(79)] = 3178,
  [SMALL_STATE(80)] = 3198,
  [SMALL_STATE(81)] = 3218,
  [SMALL_STATE(82)] = 3238,
  [SMALL_STATE(83)] = 3258,
  [SMALL_STATE(84)] = 3278,
  [SMALL_STATE(85)] = 3298,
  [SMALL_STATE(86)] = 3318,
  [SMALL_STATE(87)] = 3337,
  [SMALL_STATE(88)] = 3368,
  [SMALL_STATE(89)] = 3387,
  [SMALL_STATE(90)] = 3406,
  [SMALL_STATE(91)] = 3425,
  [SMALL_STATE(92)] = 3446,
  [SMALL_STATE(93)] = 3465,
  [SMALL_STATE(94)] = 3484,
  [SMALL_STATE(95)] = 3501,
  [SMALL_STATE(96)] = 3518,
  [SMALL_STATE(97)] = 3542,
  [SMALL_STATE(98)] = 3566,
  [SMALL_STATE(99)] = 3582,
  [SMALL_STATE(100)] = 3606,
  [SMALL_STATE(101)] = 3630,
  [SMALL_STATE(102)] = 3654,
  [SMALL_STATE(103)] = 3678,
  [SMALL_STATE(104)] = 3702,
  [SMALL_STATE(105)] = 3726,
  [SMALL_STATE(106)] = 3747,
  [SMALL_STATE(107)] = 3768,
  [SMALL_STATE(108)] = 3789,
  [SMALL_STATE(109)] = 3810,
  [SMALL_STATE(110)] = 3831,
  [SMALL_STATE(111)] = 3852,
  [SMALL_STATE(112)] = 3873,
  [SMALL_STATE(113)] = 3894,
  [SMALL_STATE(114)] = 3915,
  [SMALL_STATE(115)] = 3936,
  [SMALL_STATE(116)] = 3957,
  [SMALL_STATE(117)] = 3978,
  [SMALL_STATE(118)] = 3999,
  [SMALL_STATE(119)] = 4020,
  [SMALL_STATE(120)] = 4041,
  [SMALL_STATE(121)] = 4062,
  [SMALL_STATE(122)] = 4083,
  [SMALL_STATE(123)] = 4104,
  [SMALL_STATE(124)] = 4124,
  [SMALL_STATE(125)] = 4142,
  [SMALL_STATE(126)] = 4162,
  [SMALL_STATE(127)] = 4180,
  [SMALL_STATE(128)] = 4200,
  [SMALL_STATE(129)] = 4216,
  [SMALL_STATE(130)] = 4230,
  [SMALL_STATE(131)] = 4242,
  [SMALL_STATE(132)] = 4256,
  [SMALL_STATE(133)] = 4275,
  [SMALL_STATE(134)] = 4292,
  [SMALL_STATE(135)] = 4309,
  [SMALL_STATE(136)] = 4320,
  [SMALL_STATE(137)] = 4339,
  [SMALL_STATE(138)] = 4356,
  [SMALL_STATE(139)] = 4373,
  [SMALL_STATE(140)] = 4384,
  [SMALL_STATE(141)] = 4399,
  [SMALL_STATE(142)] = 4418,
  [SMALL_STATE(143)] = 4429,
  [SMALL_STATE(144)] = 4446,
  [SMALL_STATE(145)] = 4457,
  [SMALL_STATE(146)] = 4472,
  [SMALL_STATE(147)] = 4483,
  [SMALL_STATE(148)] = 4494,
  [SMALL_STATE(149)] = 4511,
  [SMALL_STATE(150)] = 4522,
  [SMALL_STATE(151)] = 4535,
  [SMALL_STATE(152)] = 4552,
  [SMALL_STATE(153)] = 4569,
  [SMALL_STATE(154)] = 4580,
  [SMALL_STATE(155)] = 4591,
  [SMALL_STATE(156)] = 4608,
  [SMALL_STATE(157)] = 4619,
  [SMALL_STATE(158)] = 4636,
  [SMALL_STATE(159)] = 4653,
  [SMALL_STATE(160)] = 4664,
  [SMALL_STATE(161)] = 4675,
  [SMALL_STATE(162)] = 4692,
  [SMALL_STATE(163)] = 4703,
  [SMALL_STATE(164)] = 4720,
  [SMALL_STATE(165)] = 4731,
  [SMALL_STATE(166)] = 4742,
  [SMALL_STATE(167)] = 4759,
  [SMALL_STATE(168)] = 4769,
  [SMALL_STATE(169)] = 4783,
  [SMALL_STATE(170)] = 4797,
  [SMALL_STATE(171)] = 4811,
  [SMALL_STATE(172)] = 4823,
  [SMALL_STATE(173)] = 4833,
  [SMALL_STATE(174)] = 4843,
  [SMALL_STATE(175)] = 4853,
  [SMALL_STATE(176)] = 4867,
  [SMALL_STATE(177)] = 4881,
  [SMALL_STATE(178)] = 4891,
  [SMALL_STATE(179)] = 4901,
  [SMALL_STATE(180)] = 4915,
  [SMALL_STATE(181)] = 4929,
  [SMALL_STATE(182)] = 4943,
  [SMALL_STATE(183)] = 4957,
  [SMALL_STATE(184)] = 4971,
  [SMALL_STATE(185)] = 4985,
  [SMALL_STATE(186)] = 4995,
  [SMALL_STATE(187)] = 5009,
  [SMALL_STATE(188)] = 5019,
  [SMALL_STATE(189)] = 5033,
  [SMALL_STATE(190)] = 5043,
  [SMALL_STATE(191)] = 5057,
  [SMALL_STATE(192)] = 5067,
  [SMALL_STATE(193)] = 5081,
  [SMALL_STATE(194)] = 5097,
  [SMALL_STATE(195)] = 5111,
  [SMALL_STATE(196)] = 5125,
  [SMALL_STATE(197)] = 5135,
  [SMALL_STATE(198)] = 5148,
  [SMALL_STATE(199)] = 5159,
  [SMALL_STATE(200)] = 5172,
  [SMALL_STATE(201)] = 5185,
  [SMALL_STATE(202)] = 5198,
  [SMALL_STATE(203)] = 5211,
  [SMALL_STATE(204)] = 5224,
  [SMALL_STATE(205)] = 5237,
  [SMALL_STATE(206)] = 5248,
  [SMALL_STATE(207)] = 5259,
  [SMALL_STATE(208)] = 5272,
  [SMALL_STATE(209)] = 5285,
  [SMALL_STATE(210)] = 5298,
  [SMALL_STATE(211)] = 5311,
  [SMALL_STATE(212)] = 5320,
  [SMALL_STATE(213)] = 5329,
  [SMALL_STATE(214)] = 5342,
  [SMALL_STATE(215)] = 5355,
  [SMALL_STATE(216)] = 5368,
  [SMALL_STATE(217)] = 5381,
  [SMALL_STATE(218)] = 5394,
  [SMALL_STATE(219)] = 5405,
  [SMALL_STATE(220)] = 5416,
  [SMALL_STATE(221)] = 5425,
  [SMALL_STATE(222)] = 5438,
  [SMALL_STATE(223)] = 5451,
  [SMALL_STATE(224)] = 5462,
  [SMALL_STATE(225)] = 5475,
  [SMALL_STATE(226)] = 5484,
  [SMALL_STATE(227)] = 5497,
  [SMALL_STATE(228)] = 5508,
  [SMALL_STATE(229)] = 5519,
  [SMALL_STATE(230)] = 5532,
  [SMALL_STATE(231)] = 5545,
  [SMALL_STATE(232)] = 5558,
  [SMALL_STATE(233)] = 5571,
  [SMALL_STATE(234)] = 5584,
  [SMALL_STATE(235)] = 5597,
  [SMALL_STATE(236)] = 5608,
  [SMALL_STATE(237)] = 5619,
  [SMALL_STATE(238)] = 5632,
  [SMALL_STATE(239)] = 5640,
  [SMALL_STATE(240)] = 5648,
  [SMALL_STATE(241)] = 5656,
  [SMALL_STATE(242)] = 5664,
  [SMALL_STATE(243)] = 5672,
  [SMALL_STATE(244)] = 5682,
  [SMALL_STATE(245)] = 5690,
  [SMALL_STATE(246)] = 5698,
  [SMALL_STATE(247)] = 5708,
  [SMALL_STATE(248)] = 5718,
  [SMALL_STATE(249)] = 5726,
  [SMALL_STATE(250)] = 5736,
  [SMALL_STATE(251)] = 5744,
  [SMALL_STATE(252)] = 5752,
  [SMALL_STATE(253)] = 5760,
  [SMALL_STATE(254)] = 5770,
  [SMALL_STATE(255)] = 5780,
  [SMALL_STATE(256)] = 5790,
  [SMALL_STATE(257)] = 5800,
  [SMALL_STATE(258)] = 5810,
  [SMALL_STATE(259)] = 5818,
  [SMALL_STATE(260)] = 5826,
  [SMALL_STATE(261)] = 5834,
  [SMALL_STATE(262)] = 5842,
  [SMALL_STATE(263)] = 5850,
  [SMALL_STATE(264)] = 5860,
  [SMALL_STATE(265)] = 5870,
  [SMALL_STATE(266)] = 5878,
  [SMALL_STATE(267)] = 5886,
  [SMALL_STATE(268)] = 5896,
  [SMALL_STATE(269)] = 5906,
  [SMALL_STATE(270)] = 5914,
  [SMALL_STATE(271)] = 5922,
  [SMALL_STATE(272)] = 5932,
  [SMALL_STATE(273)] = 5942,
  [SMALL_STATE(274)] = 5952,
  [SMALL_STATE(275)] = 5962,
  [SMALL_STATE(276)] = 5972,
  [SMALL_STATE(277)] = 5980,
  [SMALL_STATE(278)] = 5988,
  [SMALL_STATE(279)] = 5996,
  [SMALL_STATE(280)] = 6003,
  [SMALL_STATE(281)] = 6010,
  [SMALL_STATE(282)] = 6017,
  [SMALL_STATE(283)] = 6024,
  [SMALL_STATE(284)] = 6031,
  [SMALL_STATE(285)] = 6038,
  [SMALL_STATE(286)] = 6045,
  [SMALL_STATE(287)] = 6052,
  [SMALL_STATE(288)] = 6059,
  [SMALL_STATE(289)] = 6066,
  [SMALL_STATE(290)] = 6073,
  [SMALL_STATE(291)] = 6080,
  [SMALL_STATE(292)] = 6087,
  [SMALL_STATE(293)] = 6094,
  [SMALL_STATE(294)] = 6101,
  [SMALL_STATE(295)] = 6108,
  [SMALL_STATE(296)] = 6115,
  [SMALL_STATE(297)] = 6122,
  [SMALL_STATE(298)] = 6129,
  [SMALL_STATE(299)] = 6136,
  [SMALL_STATE(300)] = 6143,
  [SMALL_STATE(301)] = 6150,
  [SMALL_STATE(302)] = 6157,
  [SMALL_STATE(303)] = 6164,
  [SMALL_STATE(304)] = 6171,
  [SMALL_STATE(305)] = 6178,
  [SMALL_STATE(306)] = 6185,
  [SMALL_STATE(307)] = 6192,
  [SMALL_STATE(308)] = 6199,
  [SMALL_STATE(309)] = 6206,
  [SMALL_STATE(310)] = 6213,
  [SMALL_STATE(311)] = 6220,
  [SMALL_STATE(312)] = 6227,
  [SMALL_STATE(313)] = 6234,
  [SMALL_STATE(314)] = 6241,
  [SMALL_STATE(315)] = 6248,
  [SMALL_STATE(316)] = 6255,
  [SMALL_STATE(317)] = 6262,
  [SMALL_STATE(318)] = 6269,
  [SMALL_STATE(319)] = 6276,
  [SMALL_STATE(320)] = 6283,
  [SMALL_STATE(321)] = 6290,
  [SMALL_STATE(322)] = 6297,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_expression, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_expression, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_expression, 3, .production_id = 13),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_expression, 3, .production_id = 13),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expression, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expression, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proj_expression, 2, .production_id = 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proj_expression, 2, .production_id = 5),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 14),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 14),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 14), SHIFT_REPEAT(302),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 11),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 11),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 3, .production_id = 12),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, .production_id = 12),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(280),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(16),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(182),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proj_expression_repeat1, 2, .production_id = 14), SHIFT_REPEAT(301),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 1, .production_id = 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(317),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(316),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(314),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(313),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(128),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(74),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(191),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(34),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(32),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(32),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(192),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_block_expression, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_block_expression, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 5, .production_id = 24),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 5, .production_id = 24),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .production_id = 9),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .production_id = 9),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 3, .production_id = 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 3, .production_id = 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 5, .production_id = 32),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 5, .production_id = 32),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 6),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 6),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 6, .production_id = 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 6, .production_id = 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3, .production_id = 17),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 3, .production_id = 17),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 4, .production_id = 25),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 4, .production_id = 25),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_identifier, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_identifier, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2), SHIFT_REPEAT(313),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_definition, 4, .production_id = 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 6),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_definition, 5, .production_id = 10),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_function_definitions, 8, .production_id = 33),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_type_value, 1, .production_id = 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_definition, 5, .production_id = 7),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_definition, 6, .production_id = 15),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function_definitions, 7, .production_id = 28),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_definition, 6, .production_id = 16),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_definition_repeat1, 2), SHIFT_REPEAT(297),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_definition_repeat1, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 7, .production_id = 29),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_definition, 6, .production_id = 20),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function_definitions, 6, .production_id = 21),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_function_definitions_repeat1, 2), SHIFT_REPEAT(313),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_function_definitions_repeat1, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_function_definitions, 10, .production_id = 38),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 1, .production_id = 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_definition, 7, .production_id = 26),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 6, .production_id = 22),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_definition, 7, .production_id = 27),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_function_definitions, 9, .production_id = 36),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_function_definitions, 9, .production_id = 35),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2, .production_id = 19),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2, .production_id = 19), SHIFT_REPEAT(113),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2, .production_id = 18),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_param_clause, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patterns, 3, .production_id = 37),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patterns, 4, .production_id = 39),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 2, .production_id = 8),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_definition_repeat1, 2), SHIFT_REPEAT(181),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variant_definition_repeat1, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patterns, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(186),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_param_clause, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 7, .production_id = 30),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 7, .production_id = 31),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(63),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, .production_id = 24),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bindings_repeat1, 2),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bindings_repeat1, 2), SHIFT_REPEAT(264),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 8, .production_id = 34),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, .production_id = 24),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_param_clause_repeat1, 2), SHIFT_REPEAT(268),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_param_clause_repeat1, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_patterns_repeat1, 2, .production_id = 40),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_patterns_repeat1, 2, .production_id = 40), SHIFT_REPEAT(77),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(208),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(76),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 6, .production_id = 23),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_function, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindings, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_patterns_repeat1, 2, .production_id = 37),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_function, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_type_value, 2, .production_id = 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_param, 1, .production_id = 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindings, 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_field, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindings, 4),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_type_value_args, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [729] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
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
