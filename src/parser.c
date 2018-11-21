#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 243
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 11
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym__descendant_operator = 1,
  anon_sym_ATimport = 2,
  anon_sym_COMMA = 3,
  anon_sym_SEMI = 4,
  anon_sym_ATmedia = 5,
  anon_sym_ATcharset = 6,
  anon_sym_ATnamespace = 7,
  anon_sym_ATkeyframes = 8,
  aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  sym_from = 12,
  sym_to = 13,
  anon_sym_ATsupports = 14,
  sym_nesting_selector = 15,
  anon_sym_STAR = 16,
  anon_sym_DOT = 17,
  anon_sym_COLON = 18,
  anon_sym_COLON_COLON = 19,
  anon_sym_POUND = 20,
  anon_sym_LBRACK = 21,
  anon_sym_EQ = 22,
  anon_sym_TILDE_EQ = 23,
  anon_sym_CARET_EQ = 24,
  anon_sym_PIPE_EQ = 25,
  anon_sym_STAR_EQ = 26,
  anon_sym_DOLLAR_EQ = 27,
  anon_sym_RBRACK = 28,
  anon_sym_GT = 29,
  anon_sym_TILDE = 30,
  anon_sym_PLUS = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  sym_important = 34,
  anon_sym_LPAREN2 = 35,
  anon_sym_and = 36,
  anon_sym_or = 37,
  anon_sym_not = 38,
  anon_sym_only = 39,
  anon_sym_selector = 40,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH = 41,
  anon_sym_SQUOTE = 42,
  aux_sym_SLASH_LPAREN_LBRACK_CARET_SQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH = 43,
  anon_sym_DQUOTE = 44,
  aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH = 45,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH = 46,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH = 47,
  sym_unit = 48,
  anon_sym_DASH = 49,
  anon_sym_SLASH = 50,
  sym_identifier = 51,
  sym_at_keyword = 52,
  sym_comment = 53,
  sym_plain_value = 54,
  sym_stylesheet = 55,
  sym_import_statement = 56,
  sym_media_statement = 57,
  sym_charset_statement = 58,
  sym_namespace_statement = 59,
  sym_keyframes_statement = 60,
  sym_keyframe_block_list = 61,
  sym_keyframe_block = 62,
  sym_supports_statement = 63,
  sym_at_rule = 64,
  sym_rule_set = 65,
  sym_selectors = 66,
  sym_block = 67,
  sym__selector = 68,
  sym_universal_selector = 69,
  sym_class_selector = 70,
  sym_pseudo_class_selector = 71,
  sym_pseudo_element_selector = 72,
  sym_id_selector = 73,
  sym_attribute_selector = 74,
  sym_child_selector = 75,
  sym_descendant_selector = 76,
  sym_sibling_selector = 77,
  sym_adjacent_sibling_selector = 78,
  sym_pseudo_class_arguments = 79,
  sym_declaration = 80,
  sym_last_declaration = 81,
  sym__query = 82,
  sym_feature_query = 83,
  sym_parenthesized_query = 84,
  sym_binary_query = 85,
  sym_unary_query = 86,
  sym_selector_query = 87,
  sym__value = 88,
  sym_parenthesized_value = 89,
  sym_color_value = 90,
  sym_string_value = 91,
  sym_integer_value = 92,
  sym_float_value = 93,
  sym_call_expression = 94,
  sym_binary_expression = 95,
  sym_arguments = 96,
  aux_sym_stylesheet_repeat1 = 97,
  aux_sym_import_statement_repeat1 = 98,
  aux_sym_keyframe_block_list_repeat1 = 99,
  aux_sym_selectors_repeat1 = 100,
  aux_sym_block_repeat1 = 101,
  aux_sym_pseudo_class_arguments_repeat1 = 102,
  aux_sym_pseudo_class_arguments_repeat2 = 103,
  aux_sym_declaration_repeat1 = 104,
  aux_sym_arguments_repeat1 = 105,
  alias_sym_attribute_name = 106,
  alias_sym_class_name = 107,
  alias_sym_feature_name = 108,
  alias_sym_function_name = 109,
  alias_sym_id_name = 110,
  alias_sym_keyframes_name = 111,
  alias_sym_keyword_query = 112,
  alias_sym_namespace_name = 113,
  alias_sym_plain_value = 114,
  alias_sym_property_name = 115,
  alias_sym_tag_name = 116,
};

static const char *ts_symbol_names[] = {
  [sym__descendant_operator] = "_descendant_operator",
  [ts_builtin_sym_end] = "END",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = "at_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = "/[0-9a-fA-F]{3,8}/",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LPAREN_LBRACK_CARET_SQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH] = "/([^'\\n]|\\\\(.|\\n))*/",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH] = "/([^\"\\n]|\\\\(.|\\n))*/",
  [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = "/(+|-|)\\d+/",
  [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = "/(+|-|)\\d*(.\\d+|[eE](-|)\\d+|.\\d+[eE](-|)\\d+)/",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_plain_value] = "plain_value",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_supports_statement] = "supports_statement",
  [sym_at_rule] = "at_rule",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_string_value] = "string_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_pseudo_class_arguments_repeat2] = "pseudo_class_arguments_repeat2",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_class_name] = "class_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_plain_value] = "plain_value",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LPAREN_LBRACK_CARET_SQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_media_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[17][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [0] = alias_sym_plain_value,
  },
  [3] = {
    [0] = alias_sym_keyword_query,
  },
  [4] = {
    [1] = alias_sym_class_name,
  },
  [5] = {
    [1] = alias_sym_tag_name,
  },
  [6] = {
    [1] = alias_sym_id_name,
  },
  [7] = {
    [0] = alias_sym_function_name,
  },
  [8] = {
    [1] = alias_sym_keyframes_name,
  },
  [9] = {
    [1] = alias_sym_attribute_name,
  },
  [10] = {
    [2] = alias_sym_class_name,
  },
  [11] = {
    [2] = alias_sym_tag_name,
  },
  [12] = {
    [2] = alias_sym_id_name,
  },
  [13] = {
    [1] = alias_sym_namespace_name,
  },
  [14] = {
    [0] = alias_sym_property_name,
  },
  [15] = {
    [2] = alias_sym_attribute_name,
  },
  [16] = {
    [1] = alias_sym_feature_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == '$')
        ADVANCE(14);
      if (lookahead == '&')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '-')
        ADVANCE(30);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '@')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == ']')
        ADVANCE(98);
      if (lookahead == '^')
        ADVANCE(99);
      if (lookahead == 'a')
        ADVANCE(101);
      if (lookahead == 'f')
        ADVANCE(111);
      if (lookahead == 'n')
        ADVANCE(115);
      if (lookahead == 'o')
        ADVANCE(118);
      if (lookahead == 's')
        ADVANCE(123);
      if (lookahead == 't')
        ADVANCE(131);
      if (lookahead == '{')
        ADVANCE(133);
      if (lookahead == '|')
        ADVANCE(134);
      if (lookahead == '}')
        ADVANCE(136);
      if (lookahead == '~')
        ADVANCE(137);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(147);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd'))
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(152);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 'i')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'm')
        ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'p')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'o')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'r')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 't')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'a')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'n')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 't')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 14:
      if (lookahead == '=')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '-')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '*')
        ADVANCE(34);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '*')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 41:
      if (lookahead == 'c')
        ADVANCE(42);
      if (lookahead == 'i')
        ADVANCE(60);
      if (lookahead == 'k')
        ADVANCE(66);
      if (lookahead == 'm')
        ADVANCE(75);
      if (lookahead == 'n')
        ADVANCE(80);
      if (lookahead == 's')
        ADVANCE(89);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h')
        ADVANCE(43);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(44);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'r')
        ADVANCE(56);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(46);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'y')
        ADVANCE(47);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f')
        ADVANCE(48);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'r')
        ADVANCE(49);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(50);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'm')
        ADVANCE(51);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(52);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 's')
        ADVANCE(53);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 's')
        ADVANCE(57);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(58);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 't')
        ADVANCE(59);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'm')
        ADVANCE(61);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'p')
        ADVANCE(62);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'o')
        ADVANCE(63);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'r')
        ADVANCE(64);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(67);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'y')
        ADVANCE(68);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f')
        ADVANCE(69);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'r')
        ADVANCE(70);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'm')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(73);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 's')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(76);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd')
        ADVANCE(77);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i')
        ADVANCE(78);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(79);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'm')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(83);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 's')
        ADVANCE(84);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'p')
        ADVANCE(85);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(86);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c')
        ADVANCE(87);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(88);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'u')
        ADVANCE(90);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'p')
        ADVANCE(91);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'p')
        ADVANCE(92);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'o')
        ADVANCE(93);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 'r')
        ADVANCE(94);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 't')
        ADVANCE(95);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == 's')
        ADVANCE(96);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k')
        ADVANCE(45);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(55);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 99:
      if (lookahead == '=')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 101:
      if (lookahead == 'n')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(104);
      END_STATE();
    case 102:
      if (lookahead == 'd')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      END_STATE();
    case 111:
      if (lookahead == 'r')
        ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(104);
      END_STATE();
    case 112:
      if (lookahead == 'o')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'm')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 115:
      if (lookahead == 'o')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 't')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 118:
      if (lookahead == 'n')
        ADVANCE(119);
      if (lookahead == 'r')
        ADVANCE(122);
      END_STATE();
    case 119:
      if (lookahead == 'l')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'y')
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 123:
      if (lookahead == 'e')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'l')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'e')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'c')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 't')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'o')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'r')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 131:
      if (lookahead == 'o')
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 134:
      if (lookahead == '=')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=')
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 139:
      if (lookahead == '-')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(104);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(105);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(106);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(107);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(108);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(109);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(110);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 147:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == '$')
        ADVANCE(14);
      if (lookahead == '&')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '(')
        ADVANCE(148);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '-')
        ADVANCE(30);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '@')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == ']')
        ADVANCE(98);
      if (lookahead == '^')
        ADVANCE(99);
      if (lookahead == 'a')
        ADVANCE(149);
      if (lookahead == 'f')
        ADVANCE(150);
      if (lookahead == 'n')
        ADVANCE(115);
      if (lookahead == 'o')
        ADVANCE(118);
      if (lookahead == 's')
        ADVANCE(123);
      if (lookahead == 't')
        ADVANCE(131);
      if (lookahead == '{')
        ADVANCE(133);
      if (lookahead == '|')
        ADVANCE(134);
      if (lookahead == '}')
        ADVANCE(136);
      if (lookahead == '~')
        ADVANCE(137);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(147);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 149:
      if (lookahead == 'n')
        ADVANCE(102);
      END_STATE();
    case 150:
      if (lookahead == 'r')
        ADVANCE(112);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(104);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(104);
      END_STATE();
    case 153:
      if (lookahead == '-')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(105);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(105);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(106);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(106);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(107);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(107);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(108);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(108);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(109);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(109);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(110);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(110);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 167:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '.')
        ADVANCE(169);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(167);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 170:
      if (lookahead == '*')
        ADVANCE(33);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 172:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '(')
        ADVANCE(148);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '+')
        ADVANCE(173);
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '-')
        ADVANCE(174);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(188);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(172);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 173:
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 175:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < '(' || lookahead > '*') &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/')
        ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(177);
      END_STATE();
    case 178:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < '(' || lookahead > '*') &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']' &&
          (lookahead < 'a' || lookahead > '{') &&
          lookahead != '}')
        ADVANCE(177);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '/')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']' &&
          (lookahead < 'a' || lookahead > '{') &&
          lookahead != '}')
        ADVANCE(177);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(183);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']' &&
          (lookahead < 'a' || lookahead > '{') &&
          lookahead != '}')
        ADVANCE(177);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (lookahead == '/')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(183);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']' &&
          (lookahead < 'a' || lookahead > '{') &&
          lookahead != '}')
        ADVANCE(177);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(184);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(187);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(187);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 188:
      if (lookahead == '*')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < '(' || lookahead > '*') &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(176);
      END_STATE();
    case 189:
      if (lookahead == '(')
        ADVANCE(148);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == 'n')
        ADVANCE(190);
      if (lookahead == 'o')
        ADVANCE(193);
      if (lookahead == 's')
        ADVANCE(197);
      if (lookahead == '{')
        ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(189);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
        ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 205:
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '+')
        ADVANCE(206);
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '.')
        ADVANCE(169);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '{')
        ADVANCE(133);
      if (lookahead == '~')
        ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_SQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(208);
      if (lookahead == '/')
        ADVANCE(209);
      if (lookahead == '\\')
        ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_SQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'')
        ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_SQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(211);
      if (lookahead == '\\')
        ADVANCE(214);
      if (lookahead == '\n' ||
          lookahead == '\'')
        ADVANCE(33);
      if (lookahead != 0)
        ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_SQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(212);
      if (lookahead == '\\')
        ADVANCE(214);
      if (lookahead == '\n' ||
          lookahead == '\'')
        ADVANCE(33);
      if (lookahead != 0)
        ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_SQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'')
        ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_SQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(212);
      if (lookahead == '\'')
        ADVANCE(212);
      if (lookahead == '\\')
        ADVANCE(213);
      if (lookahead != 0)
        ADVANCE(212);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_SQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(210);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == '*')
        ADVANCE(211);
      if (lookahead == '\\')
        ADVANCE(214);
      if (lookahead != 0)
        ADVANCE(210);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_SQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(209);
      if (lookahead == '\\')
        ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\'')
        ADVANCE(212);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(216);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(220);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(218);
      if (lookahead == '\\')
        ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\"')
        ADVANCE(220);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(219);
      if (lookahead == '\\')
        ADVANCE(222);
      if (lookahead == '\n' ||
          lookahead == '\"')
        ADVANCE(33);
      if (lookahead != 0)
        ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH);
      if (lookahead == '*')
        ADVANCE(219);
      if (lookahead == '/')
        ADVANCE(220);
      if (lookahead == '\\')
        ADVANCE(222);
      if (lookahead == '\n' ||
          lookahead == '\"')
        ADVANCE(33);
      if (lookahead != 0)
        ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\"')
        ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(220);
      if (lookahead == '\"')
        ADVANCE(220);
      if (lookahead == '\\')
        ADVANCE(221);
      if (lookahead != 0)
        ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(218);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '*')
        ADVANCE(219);
      if (lookahead == '\\')
        ADVANCE(222);
      if (lookahead != 0)
        ADVANCE(218);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\"')
        ADVANCE(220);
      END_STATE();
    case 224:
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == '+')
        ADVANCE(206);
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '.')
        ADVANCE(169);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '{')
        ADVANCE(133);
      if (lookahead == '~')
        ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(224);
      END_STATE();
    case 225:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(225);
      END_STATE();
    case 226:
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(151);
      END_STATE();
    case 227:
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(227);
      END_STATE();
    case 228:
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == '(')
        ADVANCE(148);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(230);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(171);
      if (lookahead == 'n')
        ADVANCE(231);
      if (lookahead == 'o')
        ADVANCE(235);
      if (lookahead == 's')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == 'o')
        ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == 't')
        ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == 'n')
        ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == 'l')
        ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == 'y')
        ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == 'e')
        ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == 'l')
        ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == 'e')
        ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == 'c')
        ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == 't')
        ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == 'o')
        ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == 'r')
        ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      END_STATE();
    case 247:
      if (lookahead == '(')
        ADVANCE(148);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(230);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == 'n')
        ADVANCE(190);
      if (lookahead == 'o')
        ADVANCE(193);
      if (lookahead == 's')
        ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 248:
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(230);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == ']')
        ADVANCE(98);
      if (lookahead == 'n')
        ADVANCE(190);
      if (lookahead == 'o')
        ADVANCE(193);
      if (lookahead == 's')
        ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 249:
      if (lookahead == '(')
        ADVANCE(148);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(230);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == ']')
        ADVANCE(98);
      if (lookahead == 'n')
        ADVANCE(190);
      if (lookahead == 'o')
        ADVANCE(193);
      if (lookahead == 's')
        ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 250:
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == 'a')
        ADVANCE(149);
      if (lookahead == 'o')
        ADVANCE(251);
      if (lookahead == '{')
        ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(250);
      END_STATE();
    case 251:
      if (lookahead == 'r')
        ADVANCE(122);
      END_STATE();
    case 252:
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == 'a')
        ADVANCE(149);
      if (lookahead == 'o')
        ADVANCE(251);
      if (lookahead == '{')
        ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(252);
      END_STATE();
    case 253:
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == ']')
        ADVANCE(98);
      if (lookahead == '{')
        ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(255);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(229);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 255:
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == ']')
        ADVANCE(98);
      if (lookahead == '{')
        ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(255);
      END_STATE();
    case 256:
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == ']')
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(257);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(229);
      END_STATE();
    case 257:
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == ']')
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(257);
      END_STATE();
    case 258:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == '}')
        ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(259);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 259:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == '}')
        ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(259);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 260:
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '+')
        ADVANCE(206);
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '.')
        ADVANCE(169);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '{')
        ADVANCE(133);
      if (lookahead == '~')
        ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(205);
      END_STATE();
    case 261:
      if (lookahead == '$')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(262);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == ']')
        ADVANCE(98);
      if (lookahead == '^')
        ADVANCE(99);
      if (lookahead == '|')
        ADVANCE(134);
      if (lookahead == '~')
        ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(261);
      END_STATE();
    case 262:
      if (lookahead == '=')
        ADVANCE(21);
      END_STATE();
    case 263:
      if (lookahead == '=')
        ADVANCE(138);
      END_STATE();
    case 264:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '.')
        ADVANCE(169);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '}')
        ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(264);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 265:
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(265);
      END_STATE();
    case 266:
      if (lookahead == '(')
        ADVANCE(148);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(230);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == ']')
        ADVANCE(98);
      if (lookahead == 'n')
        ADVANCE(190);
      if (lookahead == 'o')
        ADVANCE(193);
      if (lookahead == 's')
        ADVANCE(197);
      if (lookahead == '{')
        ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 267:
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == ':')
        ADVANCE(268);
      if (lookahead == 'a')
        ADVANCE(149);
      if (lookahead == 'o')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 269:
      if (lookahead == '+')
        ADVANCE(270);
      if (lookahead == '-')
        ADVANCE(270);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == 'f')
        ADVANCE(150);
      if (lookahead == 't')
        ADVANCE(131);
      if (lookahead == '}')
        ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(269);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(271);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(271);
      END_STATE();
    case 272:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '(')
        ADVANCE(148);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(173);
      if (lookahead == '-')
        ADVANCE(174);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(188);
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '_')
        ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(272);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 273:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == '%')
        ADVANCE(229);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '(')
        ADVANCE(148);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(275);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(179);
      if (lookahead == '}')
        ADVANCE(136);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(279);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < '(' || lookahead > '*') &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(176);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(277);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '/')
        ADVANCE(178);
      if (lookahead == '_')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']' &&
          (lookahead < 'a' || lookahead > '{') &&
          lookahead != '}')
        ADVANCE(177);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/')
        ADVANCE(178);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']' &&
          (lookahead < 'a' || lookahead > '{') &&
          lookahead != '}')
        ADVANCE(177);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(277);
      if (lookahead == '/')
        ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']' &&
          (lookahead < 'a' || lookahead > '{') &&
          lookahead != '}')
        ADVANCE(177);
      END_STATE();
    case 279:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '(')
        ADVANCE(148);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(275);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(179);
      if (lookahead == '}')
        ADVANCE(136);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(279);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 280:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(275);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(179);
      if (lookahead == '}')
        ADVANCE(136);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(279);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 281:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '(')
        ADVANCE(148);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(275);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(179);
      if (lookahead == '}')
        ADVANCE(136);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(281);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 282:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '(')
        ADVANCE(148);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(275);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(282);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 283:
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '+')
        ADVANCE(206);
      if (lookahead == '.')
        ADVANCE(169);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '~')
        ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(283);
      END_STATE();
    case 284:
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(285);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(286);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 285:
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(285);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(287);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(288);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(289);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(290);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(291);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(292);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(293);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 294:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(275);
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '_')
        ADVANCE(179);
      if (lookahead == '~')
        ADVANCE(207);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 295:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '(')
        ADVANCE(148);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(275);
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '_')
        ADVANCE(179);
      if (lookahead == '~')
        ADVANCE(207);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 296:
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '+')
        ADVANCE(206);
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '.')
        ADVANCE(169);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '~')
        ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(296);
      END_STATE();
    case 297:
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == ']')
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(297);
      END_STATE();
    case 298:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '(')
        ADVANCE(148);
      if (lookahead == '+')
        ADVANCE(173);
      if (lookahead == ',')
        ADVANCE(29);
      if (lookahead == '-')
        ADVANCE(174);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(188);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(179);
      if (lookahead == '}')
        ADVANCE(136);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(298);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 167},
  [2] = {.lex_state = 172},
  [3] = {.lex_state = 189},
  [4] = {.lex_state = 172},
  [5] = {.lex_state = 167},
  [6] = {.lex_state = 167},
  [7] = {.lex_state = 189},
  [8] = {.lex_state = 205, .external_lex_state = 1},
  [9] = {.lex_state = 167},
  [10] = {.lex_state = 167},
  [11] = {.lex_state = 167},
  [12] = {.lex_state = 167},
  [13] = {.lex_state = 167},
  [14] = {.lex_state = 208},
  [15] = {.lex_state = 216},
  [16] = {.lex_state = 224, .external_lex_state = 1},
  [17] = {.lex_state = 189},
  [18] = {.lex_state = 225},
  [19] = {.lex_state = 189},
  [20] = {.lex_state = 224, .external_lex_state = 1},
  [21] = {.lex_state = 167},
  [22] = {.lex_state = 226},
  [23] = {.lex_state = 172},
  [24] = {.lex_state = 208},
  [25] = {.lex_state = 216},
  [26] = {.lex_state = 228},
  [27] = {.lex_state = 228},
  [28] = {.lex_state = 248},
  [29] = {.lex_state = 247},
  [30] = {.lex_state = 189},
  [31] = {.lex_state = 189},
  [32] = {.lex_state = 172},
  [33] = {.lex_state = 250},
  [34] = {.lex_state = 252},
  [35] = {.lex_state = 253},
  [36] = {.lex_state = 256},
  [37] = {.lex_state = 228},
  [38] = {.lex_state = 258},
  [39] = {.lex_state = 172},
  [40] = {.lex_state = 189},
  [41] = {.lex_state = 189},
  [42] = {.lex_state = 252},
  [43] = {.lex_state = 205, .external_lex_state = 1},
  [44] = {.lex_state = 260, .external_lex_state = 1},
  [45] = {.lex_state = 205, .external_lex_state = 1},
  [46] = {.lex_state = 205, .external_lex_state = 1},
  [47] = {.lex_state = 261},
  [48] = {.lex_state = 167},
  [49] = {.lex_state = 167},
  [50] = {.lex_state = 172},
  [51] = {.lex_state = 264},
  [52] = {.lex_state = 264},
  [53] = {.lex_state = 189},
  [54] = {.lex_state = 252},
  [55] = {.lex_state = 264},
  [56] = {.lex_state = 167},
  [57] = {.lex_state = 167},
  [58] = {.lex_state = 167},
  [59] = {.lex_state = 167},
  [60] = {.lex_state = 167},
  [61] = {.lex_state = 167},
  [62] = {.lex_state = 167},
  [63] = {.lex_state = 167},
  [64] = {.lex_state = 167},
  [65] = {.lex_state = 167},
  [66] = {.lex_state = 224},
  [67] = {.lex_state = 167},
  [68] = {.lex_state = 249},
  [69] = {.lex_state = 265},
  [70] = {.lex_state = 167},
  [71] = {.lex_state = 167},
  [72] = {.lex_state = 266},
  [73] = {.lex_state = 249},
  [74] = {.lex_state = 172},
  [75] = {.lex_state = 249},
  [76] = {.lex_state = 264},
  [77] = {.lex_state = 172},
  [78] = {.lex_state = 189},
  [79] = {.lex_state = 250},
  [80] = {.lex_state = 189},
  [81] = {.lex_state = 267},
  [82] = {.lex_state = 267},
  [83] = {.lex_state = 250},
  [84] = {.lex_state = 167},
  [85] = {.lex_state = 189},
  [86] = {.lex_state = 189},
  [87] = {.lex_state = 264},
  [88] = {.lex_state = 224},
  [89] = {.lex_state = 264},
  [90] = {.lex_state = 172},
  [91] = {.lex_state = 248},
  [92] = {.lex_state = 172},
  [93] = {.lex_state = 264},
  [94] = {.lex_state = 269},
  [95] = {.lex_state = 264},
  [96] = {.lex_state = 189},
  [97] = {.lex_state = 264},
  [98] = {.lex_state = 272},
  [99] = {.lex_state = 205, .external_lex_state = 1},
  [100] = {.lex_state = 172},
  [101] = {.lex_state = 205, .external_lex_state = 1},
  [102] = {.lex_state = 205, .external_lex_state = 1},
  [103] = {.lex_state = 226},
  [104] = {.lex_state = 172},
  [105] = {.lex_state = 208},
  [106] = {.lex_state = 216},
  [107] = {.lex_state = 273},
  [108] = {.lex_state = 273},
  [109] = {.lex_state = 280},
  [110] = {.lex_state = 281},
  [111] = {.lex_state = 264},
  [112] = {.lex_state = 224, .external_lex_state = 1},
  [113] = {.lex_state = 258},
  [114] = {.lex_state = 264},
  [115] = {.lex_state = 189},
  [116] = {.lex_state = 264},
  [117] = {.lex_state = 189},
  [118] = {.lex_state = 252},
  [119] = {.lex_state = 205, .external_lex_state = 1},
  [120] = {.lex_state = 205, .external_lex_state = 1},
  [121] = {.lex_state = 224, .external_lex_state = 1},
  [122] = {.lex_state = 205, .external_lex_state = 1},
  [123] = {.lex_state = 260, .external_lex_state = 1},
  [124] = {.lex_state = 205, .external_lex_state = 1},
  [125] = {.lex_state = 205, .external_lex_state = 1},
  [126] = {.lex_state = 261},
  [127] = {.lex_state = 205, .external_lex_state = 1},
  [128] = {.lex_state = 205, .external_lex_state = 1},
  [129] = {.lex_state = 205, .external_lex_state = 1},
  [130] = {.lex_state = 224},
  [131] = {.lex_state = 249},
  [132] = {.lex_state = 249},
  [133] = {.lex_state = 249},
  [134] = {.lex_state = 282},
  [135] = {.lex_state = 172},
  [136] = {.lex_state = 249},
  [137] = {.lex_state = 189},
  [138] = {.lex_state = 264},
  [139] = {.lex_state = 189},
  [140] = {.lex_state = 172},
  [141] = {.lex_state = 172},
  [142] = {.lex_state = 250},
  [143] = {.lex_state = 189},
  [144] = {.lex_state = 283, .external_lex_state = 1},
  [145] = {.lex_state = 252},
  [146] = {.lex_state = 250},
  [147] = {.lex_state = 264},
  [148] = {.lex_state = 224},
  [149] = {.lex_state = 264},
  [150] = {.lex_state = 264},
  [151] = {.lex_state = 189},
  [152] = {.lex_state = 269},
  [153] = {.lex_state = 284},
  [154] = {.lex_state = 205, .external_lex_state = 1},
  [155] = {.lex_state = 208},
  [156] = {.lex_state = 216},
  [157] = {.lex_state = 294, .external_lex_state = 1},
  [158] = {.lex_state = 296, .external_lex_state = 1},
  [159] = {.lex_state = 295, .external_lex_state = 1},
  [160] = {.lex_state = 172},
  [161] = {.lex_state = 297},
  [162] = {.lex_state = 279},
  [163] = {.lex_state = 265},
  [164] = {.lex_state = 167},
  [165] = {.lex_state = 167},
  [166] = {.lex_state = 279},
  [167] = {.lex_state = 279},
  [168] = {.lex_state = 172},
  [169] = {.lex_state = 279},
  [170] = {.lex_state = 172},
  [171] = {.lex_state = 264},
  [172] = {.lex_state = 172},
  [173] = {.lex_state = 172},
  [174] = {.lex_state = 281},
  [175] = {.lex_state = 298},
  [176] = {.lex_state = 172},
  [177] = {.lex_state = 264},
  [178] = {.lex_state = 258},
  [179] = {.lex_state = 264},
  [180] = {.lex_state = 252},
  [181] = {.lex_state = 264},
  [182] = {.lex_state = 252},
  [183] = {.lex_state = 205, .external_lex_state = 1},
  [184] = {.lex_state = 172},
  [185] = {.lex_state = 205, .external_lex_state = 1},
  [186] = {.lex_state = 172},
  [187] = {.lex_state = 249},
  [188] = {.lex_state = 172},
  [189] = {.lex_state = 172},
  [190] = {.lex_state = 250},
  [191] = {.lex_state = 264},
  [192] = {.lex_state = 172},
  [193] = {.lex_state = 172},
  [194] = {.lex_state = 250},
  [195] = {.lex_state = 264},
  [196] = {.lex_state = 269},
  [197] = {.lex_state = 264},
  [198] = {.lex_state = 269},
  [199] = {.lex_state = 167},
  [200] = {.lex_state = 167},
  [201] = {.lex_state = 272},
  [202] = {.lex_state = 205, .external_lex_state = 1},
  [203] = {.lex_state = 172},
  [204] = {.lex_state = 172},
  [205] = {.lex_state = 205, .external_lex_state = 1},
  [206] = {.lex_state = 279},
  [207] = {.lex_state = 279},
  [208] = {.lex_state = 279},
  [209] = {.lex_state = 172},
  [210] = {.lex_state = 281},
  [211] = {.lex_state = 279},
  [212] = {.lex_state = 264},
  [213] = {.lex_state = 172},
  [214] = {.lex_state = 298},
  [215] = {.lex_state = 281},
  [216] = {.lex_state = 264},
  [217] = {.lex_state = 297},
  [218] = {.lex_state = 172},
  [219] = {.lex_state = 249},
  [220] = {.lex_state = 172},
  [221] = {.lex_state = 250},
  [222] = {.lex_state = 172},
  [223] = {.lex_state = 269},
  [224] = {.lex_state = 258},
  [225] = {.lex_state = 264},
  [226] = {.lex_state = 295, .external_lex_state = 1},
  [227] = {.lex_state = 296, .external_lex_state = 1},
  [228] = {.lex_state = 172},
  [229] = {.lex_state = 205, .external_lex_state = 1},
  [230] = {.lex_state = 172},
  [231] = {.lex_state = 279},
  [232] = {.lex_state = 172},
  [233] = {.lex_state = 264},
  [234] = {.lex_state = 258},
  [235] = {.lex_state = 298},
  [236] = {.lex_state = 205, .external_lex_state = 1},
  [237] = {.lex_state = 269},
  [238] = {.lex_state = 258},
  [239] = {.lex_state = 279},
  [240] = {.lex_state = 258},
  [241] = {.lex_state = 298},
  [242] = {.lex_state = 269},
};

enum {
  ts_external_token__descendant_operator,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__descendant_operator] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(3),
    [anon_sym_ATcharset] = ACTIONS(3),
    [anon_sym_ATnamespace] = ACTIONS(3),
    [anon_sym_ATkeyframes] = ACTIONS(3),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(3),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(3),
    [sym_at_keyword] = ACTIONS(3),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(18),
    [sym_import_statement] = STATE(21),
    [sym_media_statement] = STATE(21),
    [sym_charset_statement] = STATE(21),
    [sym_namespace_statement] = STATE(21),
    [sym_keyframes_statement] = STATE(21),
    [sym_supports_statement] = STATE(21),
    [sym_at_rule] = STATE(21),
    [sym_rule_set] = STATE(21),
    [sym_selectors] = STATE(19),
    [sym__selector] = STATE(20),
    [sym_universal_selector] = STATE(20),
    [sym_class_selector] = STATE(20),
    [sym_pseudo_class_selector] = STATE(20),
    [sym_pseudo_element_selector] = STATE(20),
    [sym_id_selector] = STATE(20),
    [sym_attribute_selector] = STATE(20),
    [sym_child_selector] = STATE(20),
    [sym_descendant_selector] = STATE(20),
    [sym_sibling_selector] = STATE(20),
    [sym_adjacent_sibling_selector] = STATE(20),
    [sym_declaration] = STATE(21),
    [sym_string_value] = STATE(20),
    [aux_sym_stylesheet_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_at_keyword] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [2] = {
    [sym__value] = STATE(29),
    [sym_parenthesized_value] = STATE(29),
    [sym_color_value] = STATE(29),
    [sym_string_value] = STATE(29),
    [sym_integer_value] = STATE(29),
    [sym_float_value] = STATE(29),
    [sym_call_expression] = STATE(29),
    [sym_binary_expression] = STATE(29),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_LPAREN2] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(57),
  },
  [3] = {
    [sym__query] = STATE(34),
    [sym_feature_query] = STATE(34),
    [sym_parenthesized_query] = STATE(34),
    [sym_binary_query] = STATE(34),
    [sym_unary_query] = STATE(34),
    [sym_selector_query] = STATE(34),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_only] = ACTIONS(61),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [4] = {
    [sym__value] = STATE(37),
    [sym_parenthesized_value] = STATE(37),
    [sym_color_value] = STATE(37),
    [sym_string_value] = STATE(37),
    [sym_integer_value] = STATE(37),
    [sym_float_value] = STATE(37),
    [sym_call_expression] = STATE(37),
    [sym_binary_expression] = STATE(37),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_LPAREN2] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(69),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(71),
  },
  [5] = {
    [sym_string_value] = STATE(39),
    [sym_call_expression] = STATE(39),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(73),
    [sym_comment] = ACTIONS(41),
  },
  [6] = {
    [sym_identifier] = ACTIONS(75),
    [sym_comment] = ACTIONS(41),
  },
  [7] = {
    [sym__query] = STATE(42),
    [sym_feature_query] = STATE(42),
    [sym_parenthesized_query] = STATE(42),
    [sym_binary_query] = STATE(42),
    [sym_unary_query] = STATE(42),
    [sym_selector_query] = STATE(42),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(77),
    [anon_sym_only] = ACTIONS(77),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [8] = {
    [sym__descendant_operator] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [sym_comment] = ACTIONS(41),
  },
  [9] = {
    [sym_identifier] = ACTIONS(83),
    [sym_comment] = ACTIONS(41),
  },
  [10] = {
    [sym_identifier] = ACTIONS(85),
    [sym_comment] = ACTIONS(41),
  },
  [11] = {
    [sym_identifier] = ACTIONS(87),
    [sym_comment] = ACTIONS(41),
  },
  [12] = {
    [sym_identifier] = ACTIONS(89),
    [sym_comment] = ACTIONS(41),
  },
  [13] = {
    [sym_identifier] = ACTIONS(91),
    [sym_comment] = ACTIONS(41),
  },
  [14] = {
    [aux_sym_SLASH_LPAREN_LBRACK_CARET_SQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH] = ACTIONS(93),
    [sym_comment] = ACTIONS(95),
  },
  [15] = {
    [aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH] = ACTIONS(97),
    [sym_comment] = ACTIONS(95),
  },
  [16] = {
    [sym__descendant_operator] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(101),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_POUND] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(99),
    [sym_comment] = ACTIONS(41),
  },
  [17] = {
    [sym_block] = STATE(51),
    [sym__query] = STATE(54),
    [sym_feature_query] = STATE(54),
    [sym_parenthesized_query] = STATE(54),
    [sym_binary_query] = STATE(54),
    [sym_unary_query] = STATE(54),
    [sym_selector_query] = STATE(54),
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(108),
    [anon_sym_only] = ACTIONS(108),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_comment] = ACTIONS(41),
  },
  [19] = {
    [sym_block] = STATE(55),
    [anon_sym_LBRACE] = ACTIONS(106),
    [sym_comment] = ACTIONS(41),
  },
  [20] = {
    [aux_sym_selectors_repeat1] = STATE(66),
    [sym__descendant_operator] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_COLON_COLON] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_TILDE] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(132),
    [sym_comment] = ACTIONS(41),
  },
  [21] = {
    [sym_import_statement] = STATE(67),
    [sym_media_statement] = STATE(67),
    [sym_charset_statement] = STATE(67),
    [sym_namespace_statement] = STATE(67),
    [sym_keyframes_statement] = STATE(67),
    [sym_supports_statement] = STATE(67),
    [sym_at_rule] = STATE(67),
    [sym_rule_set] = STATE(67),
    [sym_selectors] = STATE(19),
    [sym__selector] = STATE(20),
    [sym_universal_selector] = STATE(20),
    [sym_class_selector] = STATE(20),
    [sym_pseudo_class_selector] = STATE(20),
    [sym_pseudo_element_selector] = STATE(20),
    [sym_id_selector] = STATE(20),
    [sym_attribute_selector] = STATE(20),
    [sym_child_selector] = STATE(20),
    [sym_descendant_selector] = STATE(20),
    [sym_sibling_selector] = STATE(20),
    [sym_adjacent_sibling_selector] = STATE(20),
    [sym_declaration] = STATE(67),
    [sym_string_value] = STATE(20),
    [aux_sym_stylesheet_repeat1] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_at_keyword] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [22] = {
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(41),
  },
  [23] = {
    [sym__value] = STATE(69),
    [sym_parenthesized_value] = STATE(69),
    [sym_color_value] = STATE(69),
    [sym_string_value] = STATE(69),
    [sym_integer_value] = STATE(69),
    [sym_float_value] = STATE(69),
    [sym_call_expression] = STATE(69),
    [sym_binary_expression] = STATE(69),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_LPAREN2] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(69),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(138),
  },
  [24] = {
    [aux_sym_SLASH_LPAREN_LBRACK_CARET_SQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(95),
  },
  [25] = {
    [aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH] = ACTIONS(142),
    [sym_comment] = ACTIONS(95),
  },
  [26] = {
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_STAR] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_LPAREN2] = ACTIONS(144),
    [anon_sym_not] = ACTIONS(146),
    [anon_sym_only] = ACTIONS(146),
    [anon_sym_selector] = ACTIONS(146),
    [sym_unit] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(146),
    [sym_identifier] = ACTIONS(146),
    [sym_comment] = ACTIONS(41),
  },
  [27] = {
    [anon_sym_SEMI] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_LPAREN2] = ACTIONS(150),
    [anon_sym_not] = ACTIONS(152),
    [anon_sym_only] = ACTIONS(152),
    [anon_sym_selector] = ACTIONS(152),
    [sym_unit] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_SLASH] = ACTIONS(152),
    [sym_identifier] = ACTIONS(152),
    [sym_comment] = ACTIONS(41),
  },
  [28] = {
    [sym_arguments] = STATE(75),
    [anon_sym_SEMI] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_RBRACK] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_LPAREN2] = ACTIONS(160),
    [anon_sym_not] = ACTIONS(160),
    [anon_sym_only] = ACTIONS(160),
    [anon_sym_selector] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(160),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(41),
  },
  [29] = {
    [sym__query] = STATE(79),
    [sym_feature_query] = STATE(79),
    [sym_parenthesized_query] = STATE(79),
    [sym_binary_query] = STATE(79),
    [sym_unary_query] = STATE(79),
    [sym_selector_query] = STATE(79),
    [anon_sym_SEMI] = ACTIONS(162),
    [anon_sym_STAR] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(166),
    [anon_sym_only] = ACTIONS(166),
    [anon_sym_selector] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(168),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [30] = {
    [sym__query] = STATE(82),
    [sym_feature_query] = STATE(82),
    [sym_parenthesized_query] = STATE(82),
    [sym_binary_query] = STATE(82),
    [sym_unary_query] = STATE(82),
    [sym_selector_query] = STATE(82),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(170),
    [anon_sym_only] = ACTIONS(170),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(172),
    [sym_comment] = ACTIONS(41),
  },
  [31] = {
    [sym__query] = STATE(83),
    [sym_feature_query] = STATE(83),
    [sym_parenthesized_query] = STATE(83),
    [sym_binary_query] = STATE(83),
    [sym_unary_query] = STATE(83),
    [sym_selector_query] = STATE(83),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_only] = ACTIONS(61),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [32] = {
    [anon_sym_LPAREN2] = ACTIONS(174),
    [sym_comment] = ACTIONS(41),
  },
  [33] = {
    [anon_sym_COMMA] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_and] = ACTIONS(176),
    [anon_sym_or] = ACTIONS(176),
    [sym_comment] = ACTIONS(41),
  },
  [34] = {
    [sym_block] = STATE(87),
    [aux_sym_import_statement_repeat1] = STATE(88),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_and] = ACTIONS(180),
    [anon_sym_or] = ACTIONS(180),
    [sym_comment] = ACTIONS(41),
  },
  [35] = {
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_STAR] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [sym_unit] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(41),
  },
  [36] = {
    [anon_sym_SEMI] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_RBRACK] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(150),
    [sym_unit] = ACTIONS(184),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(152),
    [sym_comment] = ACTIONS(41),
  },
  [37] = {
    [anon_sym_SEMI] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(41),
  },
  [38] = {
    [sym_string_value] = STATE(92),
    [sym_call_expression] = STATE(92),
    [sym_arguments] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(192),
    [sym_comment] = ACTIONS(41),
  },
  [39] = {
    [anon_sym_SEMI] = ACTIONS(194),
    [sym_comment] = ACTIONS(41),
  },
  [40] = {
    [sym_keyframe_block_list] = STATE(95),
    [anon_sym_LBRACE] = ACTIONS(196),
    [sym_comment] = ACTIONS(41),
  },
  [41] = {
    [sym__query] = STATE(83),
    [sym_feature_query] = STATE(83),
    [sym_parenthesized_query] = STATE(83),
    [sym_binary_query] = STATE(83),
    [sym_unary_query] = STATE(83),
    [sym_selector_query] = STATE(83),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(77),
    [anon_sym_only] = ACTIONS(77),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [42] = {
    [sym_block] = STATE(97),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_and] = ACTIONS(198),
    [anon_sym_or] = ACTIONS(198),
    [sym_comment] = ACTIONS(41),
  },
  [43] = {
    [sym__descendant_operator] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(200),
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_DOT] = ACTIONS(200),
    [anon_sym_COLON] = ACTIONS(202),
    [anon_sym_COLON_COLON] = ACTIONS(200),
    [anon_sym_POUND] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(200),
    [anon_sym_GT] = ACTIONS(200),
    [anon_sym_TILDE] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(200),
    [anon_sym_RPAREN] = ACTIONS(200),
    [sym_comment] = ACTIONS(41),
  },
  [44] = {
    [sym_pseudo_class_arguments] = STATE(99),
    [sym__descendant_operator] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_LBRACE] = ACTIONS(204),
    [anon_sym_DOT] = ACTIONS(204),
    [anon_sym_COLON] = ACTIONS(206),
    [anon_sym_COLON_COLON] = ACTIONS(204),
    [anon_sym_POUND] = ACTIONS(204),
    [anon_sym_LBRACK] = ACTIONS(204),
    [anon_sym_GT] = ACTIONS(204),
    [anon_sym_TILDE] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(204),
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(204),
    [sym_comment] = ACTIONS(41),
  },
  [45] = {
    [sym__descendant_operator] = ACTIONS(210),
    [anon_sym_COMMA] = ACTIONS(210),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_DOT] = ACTIONS(210),
    [anon_sym_COLON] = ACTIONS(212),
    [anon_sym_COLON_COLON] = ACTIONS(210),
    [anon_sym_POUND] = ACTIONS(210),
    [anon_sym_LBRACK] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [anon_sym_TILDE] = ACTIONS(210),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [sym_comment] = ACTIONS(41),
  },
  [46] = {
    [sym__descendant_operator] = ACTIONS(214),
    [anon_sym_COMMA] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(214),
    [anon_sym_DOT] = ACTIONS(214),
    [anon_sym_COLON] = ACTIONS(216),
    [anon_sym_COLON_COLON] = ACTIONS(214),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(214),
    [anon_sym_GT] = ACTIONS(214),
    [anon_sym_TILDE] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(214),
    [sym_comment] = ACTIONS(41),
  },
  [47] = {
    [anon_sym_EQ] = ACTIONS(218),
    [anon_sym_TILDE_EQ] = ACTIONS(218),
    [anon_sym_CARET_EQ] = ACTIONS(218),
    [anon_sym_PIPE_EQ] = ACTIONS(218),
    [anon_sym_STAR_EQ] = ACTIONS(218),
    [anon_sym_DOLLAR_EQ] = ACTIONS(218),
    [anon_sym_RBRACK] = ACTIONS(220),
    [sym_comment] = ACTIONS(41),
  },
  [48] = {
    [anon_sym_SQUOTE] = ACTIONS(222),
    [sym_comment] = ACTIONS(41),
  },
  [49] = {
    [anon_sym_DQUOTE] = ACTIONS(222),
    [sym_comment] = ACTIONS(41),
  },
  [50] = {
    [sym__value] = STATE(110),
    [sym_parenthesized_value] = STATE(110),
    [sym_color_value] = STATE(110),
    [sym_string_value] = STATE(110),
    [sym_integer_value] = STATE(110),
    [sym_float_value] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(238),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_ATimport] = ACTIONS(242),
    [anon_sym_ATmedia] = ACTIONS(242),
    [anon_sym_ATcharset] = ACTIONS(242),
    [anon_sym_ATnamespace] = ACTIONS(242),
    [anon_sym_ATkeyframes] = ACTIONS(242),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(240),
    [anon_sym_ATsupports] = ACTIONS(242),
    [sym_nesting_selector] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(240),
    [anon_sym_DOT] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(242),
    [anon_sym_COLON_COLON] = ACTIONS(240),
    [anon_sym_POUND] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(240),
    [anon_sym_SQUOTE] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [sym_identifier] = ACTIONS(240),
    [sym_at_keyword] = ACTIONS(242),
    [sym_comment] = ACTIONS(41),
  },
  [52] = {
    [sym_import_statement] = STATE(114),
    [sym_media_statement] = STATE(114),
    [sym_charset_statement] = STATE(114),
    [sym_namespace_statement] = STATE(114),
    [sym_keyframes_statement] = STATE(114),
    [sym_supports_statement] = STATE(114),
    [sym_at_rule] = STATE(114),
    [sym_rule_set] = STATE(114),
    [sym_selectors] = STATE(19),
    [sym__selector] = STATE(20),
    [sym_universal_selector] = STATE(20),
    [sym_class_selector] = STATE(20),
    [sym_pseudo_class_selector] = STATE(20),
    [sym_pseudo_element_selector] = STATE(20),
    [sym_id_selector] = STATE(20),
    [sym_attribute_selector] = STATE(20),
    [sym_child_selector] = STATE(20),
    [sym_descendant_selector] = STATE(20),
    [sym_sibling_selector] = STATE(20),
    [sym_adjacent_sibling_selector] = STATE(20),
    [sym_declaration] = STATE(114),
    [sym_last_declaration] = STATE(113),
    [sym_string_value] = STATE(20),
    [aux_sym_block_repeat1] = STATE(114),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(244),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(246),
    [sym_at_keyword] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [53] = {
    [sym__query] = STATE(83),
    [sym_feature_query] = STATE(83),
    [sym_parenthesized_query] = STATE(83),
    [sym_binary_query] = STATE(83),
    [sym_unary_query] = STATE(83),
    [sym_selector_query] = STATE(83),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(108),
    [anon_sym_only] = ACTIONS(108),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [54] = {
    [sym_block] = STATE(116),
    [aux_sym_import_statement_repeat1] = STATE(118),
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_SEMI] = ACTIONS(250),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_and] = ACTIONS(252),
    [anon_sym_or] = ACTIONS(252),
    [sym_comment] = ACTIONS(41),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(254),
    [anon_sym_ATimport] = ACTIONS(256),
    [anon_sym_ATmedia] = ACTIONS(256),
    [anon_sym_ATcharset] = ACTIONS(256),
    [anon_sym_ATnamespace] = ACTIONS(256),
    [anon_sym_ATkeyframes] = ACTIONS(256),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(254),
    [anon_sym_ATsupports] = ACTIONS(256),
    [sym_nesting_selector] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_DOT] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(256),
    [anon_sym_COLON_COLON] = ACTIONS(254),
    [anon_sym_POUND] = ACTIONS(254),
    [anon_sym_LBRACK] = ACTIONS(254),
    [anon_sym_SQUOTE] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(254),
    [sym_identifier] = ACTIONS(254),
    [sym_at_keyword] = ACTIONS(256),
    [sym_comment] = ACTIONS(41),
  },
  [56] = {
    [sym__selector] = STATE(120),
    [sym_universal_selector] = STATE(120),
    [sym_class_selector] = STATE(120),
    [sym_pseudo_class_selector] = STATE(120),
    [sym_pseudo_element_selector] = STATE(120),
    [sym_id_selector] = STATE(120),
    [sym_attribute_selector] = STATE(120),
    [sym_child_selector] = STATE(120),
    [sym_descendant_selector] = STATE(120),
    [sym_sibling_selector] = STATE(120),
    [sym_adjacent_sibling_selector] = STATE(120),
    [sym_string_value] = STATE(120),
    [sym_nesting_selector] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(41),
  },
  [57] = {
    [sym__selector] = STATE(121),
    [sym_universal_selector] = STATE(121),
    [sym_class_selector] = STATE(121),
    [sym_pseudo_class_selector] = STATE(121),
    [sym_pseudo_element_selector] = STATE(121),
    [sym_id_selector] = STATE(121),
    [sym_attribute_selector] = STATE(121),
    [sym_child_selector] = STATE(121),
    [sym_descendant_selector] = STATE(121),
    [sym_sibling_selector] = STATE(121),
    [sym_adjacent_sibling_selector] = STATE(121),
    [sym_string_value] = STATE(121),
    [sym_nesting_selector] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(41),
  },
  [58] = {
    [sym_identifier] = ACTIONS(264),
    [sym_comment] = ACTIONS(41),
  },
  [59] = {
    [sym_identifier] = ACTIONS(266),
    [sym_comment] = ACTIONS(41),
  },
  [60] = {
    [sym_identifier] = ACTIONS(268),
    [sym_comment] = ACTIONS(41),
  },
  [61] = {
    [sym_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(41),
  },
  [62] = {
    [sym_identifier] = ACTIONS(272),
    [sym_comment] = ACTIONS(41),
  },
  [63] = {
    [sym__selector] = STATE(127),
    [sym_universal_selector] = STATE(127),
    [sym_class_selector] = STATE(127),
    [sym_pseudo_class_selector] = STATE(127),
    [sym_pseudo_element_selector] = STATE(127),
    [sym_id_selector] = STATE(127),
    [sym_attribute_selector] = STATE(127),
    [sym_child_selector] = STATE(127),
    [sym_descendant_selector] = STATE(127),
    [sym_sibling_selector] = STATE(127),
    [sym_adjacent_sibling_selector] = STATE(127),
    [sym_string_value] = STATE(127),
    [sym_nesting_selector] = ACTIONS(274),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(41),
  },
  [64] = {
    [sym__selector] = STATE(128),
    [sym_universal_selector] = STATE(128),
    [sym_class_selector] = STATE(128),
    [sym_pseudo_class_selector] = STATE(128),
    [sym_pseudo_element_selector] = STATE(128),
    [sym_id_selector] = STATE(128),
    [sym_attribute_selector] = STATE(128),
    [sym_child_selector] = STATE(128),
    [sym_descendant_selector] = STATE(128),
    [sym_sibling_selector] = STATE(128),
    [sym_adjacent_sibling_selector] = STATE(128),
    [sym_string_value] = STATE(128),
    [sym_nesting_selector] = ACTIONS(276),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(41),
  },
  [65] = {
    [sym__selector] = STATE(129),
    [sym_universal_selector] = STATE(129),
    [sym_class_selector] = STATE(129),
    [sym_pseudo_class_selector] = STATE(129),
    [sym_pseudo_element_selector] = STATE(129),
    [sym_id_selector] = STATE(129),
    [sym_attribute_selector] = STATE(129),
    [sym_child_selector] = STATE(129),
    [sym_descendant_selector] = STATE(129),
    [sym_sibling_selector] = STATE(129),
    [sym_adjacent_sibling_selector] = STATE(129),
    [sym_string_value] = STATE(129),
    [sym_nesting_selector] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(41),
  },
  [66] = {
    [aux_sym_selectors_repeat1] = STATE(130),
    [anon_sym_COMMA] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(280),
    [sym_comment] = ACTIONS(41),
  },
  [67] = {
    [sym_import_statement] = STATE(67),
    [sym_media_statement] = STATE(67),
    [sym_charset_statement] = STATE(67),
    [sym_namespace_statement] = STATE(67),
    [sym_keyframes_statement] = STATE(67),
    [sym_supports_statement] = STATE(67),
    [sym_at_rule] = STATE(67),
    [sym_rule_set] = STATE(67),
    [sym_selectors] = STATE(19),
    [sym__selector] = STATE(20),
    [sym_universal_selector] = STATE(20),
    [sym_class_selector] = STATE(20),
    [sym_pseudo_class_selector] = STATE(20),
    [sym_pseudo_element_selector] = STATE(20),
    [sym_id_selector] = STATE(20),
    [sym_attribute_selector] = STATE(20),
    [sym_child_selector] = STATE(20),
    [sym_descendant_selector] = STATE(20),
    [sym_sibling_selector] = STATE(20),
    [sym_adjacent_sibling_selector] = STATE(20),
    [sym_declaration] = STATE(67),
    [sym_string_value] = STATE(20),
    [aux_sym_stylesheet_repeat1] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_ATimport] = ACTIONS(284),
    [anon_sym_ATmedia] = ACTIONS(287),
    [anon_sym_ATcharset] = ACTIONS(290),
    [anon_sym_ATnamespace] = ACTIONS(293),
    [anon_sym_ATkeyframes] = ACTIONS(296),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(296),
    [anon_sym_ATsupports] = ACTIONS(299),
    [sym_nesting_selector] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(305),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_COLON_COLON] = ACTIONS(314),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(320),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(326),
    [sym_identifier] = ACTIONS(329),
    [sym_at_keyword] = ACTIONS(332),
    [sym_comment] = ACTIONS(41),
  },
  [68] = {
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_RBRACK] = ACTIONS(335),
    [anon_sym_PLUS] = ACTIONS(335),
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_LPAREN2] = ACTIONS(335),
    [anon_sym_not] = ACTIONS(337),
    [anon_sym_only] = ACTIONS(337),
    [anon_sym_selector] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(337),
    [sym_identifier] = ACTIONS(337),
    [sym_comment] = ACTIONS(41),
  },
  [69] = {
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(339),
    [anon_sym_DASH] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(41),
  },
  [70] = {
    [anon_sym_SQUOTE] = ACTIONS(341),
    [sym_comment] = ACTIONS(41),
  },
  [71] = {
    [anon_sym_DQUOTE] = ACTIONS(341),
    [sym_comment] = ACTIONS(41),
  },
  [72] = {
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(343),
    [anon_sym_STAR] = ACTIONS(343),
    [anon_sym_RBRACK] = ACTIONS(343),
    [anon_sym_PLUS] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_LPAREN2] = ACTIONS(343),
    [anon_sym_not] = ACTIONS(345),
    [anon_sym_only] = ACTIONS(345),
    [anon_sym_selector] = ACTIONS(345),
    [anon_sym_DASH] = ACTIONS(345),
    [anon_sym_SLASH] = ACTIONS(345),
    [sym_identifier] = ACTIONS(345),
    [sym_comment] = ACTIONS(41),
  },
  [73] = {
    [anon_sym_SEMI] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_RBRACK] = ACTIONS(347),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_LPAREN2] = ACTIONS(347),
    [anon_sym_not] = ACTIONS(349),
    [anon_sym_only] = ACTIONS(349),
    [anon_sym_selector] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_SLASH] = ACTIONS(349),
    [sym_identifier] = ACTIONS(349),
    [sym_comment] = ACTIONS(41),
  },
  [74] = {
    [sym__value] = STATE(134),
    [sym_parenthesized_value] = STATE(134),
    [sym_color_value] = STATE(134),
    [sym_string_value] = STATE(134),
    [sym_integer_value] = STATE(134),
    [sym_float_value] = STATE(134),
    [sym_call_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(135),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(351),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(353),
  },
  [75] = {
    [anon_sym_SEMI] = ACTIONS(355),
    [anon_sym_STAR] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(355),
    [anon_sym_PLUS] = ACTIONS(355),
    [anon_sym_RPAREN] = ACTIONS(355),
    [anon_sym_LPAREN2] = ACTIONS(355),
    [anon_sym_not] = ACTIONS(357),
    [anon_sym_only] = ACTIONS(357),
    [anon_sym_selector] = ACTIONS(357),
    [anon_sym_DASH] = ACTIONS(357),
    [anon_sym_SLASH] = ACTIONS(357),
    [sym_identifier] = ACTIONS(357),
    [sym_comment] = ACTIONS(41),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [anon_sym_ATimport] = ACTIONS(361),
    [anon_sym_ATmedia] = ACTIONS(361),
    [anon_sym_ATcharset] = ACTIONS(361),
    [anon_sym_ATnamespace] = ACTIONS(361),
    [anon_sym_ATkeyframes] = ACTIONS(361),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(361),
    [anon_sym_RBRACE] = ACTIONS(359),
    [anon_sym_ATsupports] = ACTIONS(361),
    [sym_nesting_selector] = ACTIONS(359),
    [anon_sym_STAR] = ACTIONS(359),
    [anon_sym_DOT] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_COLON_COLON] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(359),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [sym_identifier] = ACTIONS(359),
    [sym_at_keyword] = ACTIONS(361),
    [sym_comment] = ACTIONS(41),
  },
  [77] = {
    [sym__value] = STATE(136),
    [sym_parenthesized_value] = STATE(136),
    [sym_color_value] = STATE(136),
    [sym_string_value] = STATE(136),
    [sym_integer_value] = STATE(136),
    [sym_float_value] = STATE(136),
    [sym_call_expression] = STATE(136),
    [sym_binary_expression] = STATE(136),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_LPAREN2] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(363),
  },
  [78] = {
    [sym__query] = STATE(83),
    [sym_feature_query] = STATE(83),
    [sym_parenthesized_query] = STATE(83),
    [sym_binary_query] = STATE(83),
    [sym_unary_query] = STATE(83),
    [sym_selector_query] = STATE(83),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(166),
    [anon_sym_only] = ACTIONS(166),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [79] = {
    [aux_sym_import_statement_repeat1] = STATE(140),
    [anon_sym_COMMA] = ACTIONS(365),
    [anon_sym_SEMI] = ACTIONS(367),
    [anon_sym_and] = ACTIONS(369),
    [anon_sym_or] = ACTIONS(369),
    [sym_comment] = ACTIONS(41),
  },
  [80] = {
    [sym__query] = STATE(83),
    [sym_feature_query] = STATE(83),
    [sym_parenthesized_query] = STATE(83),
    [sym_binary_query] = STATE(83),
    [sym_unary_query] = STATE(83),
    [sym_selector_query] = STATE(83),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(170),
    [anon_sym_only] = ACTIONS(170),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [81] = {
    [anon_sym_COLON] = ACTIONS(371),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_and] = ACTIONS(176),
    [anon_sym_or] = ACTIONS(176),
    [sym_comment] = ACTIONS(41),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_and] = ACTIONS(375),
    [anon_sym_or] = ACTIONS(375),
    [sym_comment] = ACTIONS(41),
  },
  [83] = {
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_SEMI] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_and] = ACTIONS(377),
    [anon_sym_or] = ACTIONS(377),
    [sym_comment] = ACTIONS(41),
  },
  [84] = {
    [sym__selector] = STATE(144),
    [sym_universal_selector] = STATE(144),
    [sym_class_selector] = STATE(144),
    [sym_pseudo_class_selector] = STATE(144),
    [sym_pseudo_element_selector] = STATE(144),
    [sym_id_selector] = STATE(144),
    [sym_attribute_selector] = STATE(144),
    [sym_child_selector] = STATE(144),
    [sym_descendant_selector] = STATE(144),
    [sym_sibling_selector] = STATE(144),
    [sym_adjacent_sibling_selector] = STATE(144),
    [sym_string_value] = STATE(144),
    [sym_nesting_selector] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(41),
  },
  [85] = {
    [sym__query] = STATE(145),
    [sym_feature_query] = STATE(145),
    [sym_parenthesized_query] = STATE(145),
    [sym_binary_query] = STATE(145),
    [sym_unary_query] = STATE(145),
    [sym_selector_query] = STATE(145),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_only] = ACTIONS(61),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [86] = {
    [sym__query] = STATE(146),
    [sym_feature_query] = STATE(146),
    [sym_parenthesized_query] = STATE(146),
    [sym_binary_query] = STATE(146),
    [sym_unary_query] = STATE(146),
    [sym_selector_query] = STATE(146),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_only] = ACTIONS(61),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [anon_sym_ATimport] = ACTIONS(383),
    [anon_sym_ATmedia] = ACTIONS(383),
    [anon_sym_ATcharset] = ACTIONS(383),
    [anon_sym_ATnamespace] = ACTIONS(383),
    [anon_sym_ATkeyframes] = ACTIONS(383),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(381),
    [anon_sym_ATsupports] = ACTIONS(383),
    [sym_nesting_selector] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_DOT] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_COLON_COLON] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_SQUOTE] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [sym_identifier] = ACTIONS(381),
    [sym_at_keyword] = ACTIONS(383),
    [sym_comment] = ACTIONS(41),
  },
  [88] = {
    [sym_block] = STATE(147),
    [aux_sym_import_statement_repeat1] = STATE(148),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(106),
    [sym_comment] = ACTIONS(41),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [anon_sym_ATimport] = ACTIONS(387),
    [anon_sym_ATmedia] = ACTIONS(387),
    [anon_sym_ATcharset] = ACTIONS(387),
    [anon_sym_ATnamespace] = ACTIONS(387),
    [anon_sym_ATkeyframes] = ACTIONS(387),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(387),
    [anon_sym_RBRACE] = ACTIONS(385),
    [anon_sym_ATsupports] = ACTIONS(387),
    [sym_nesting_selector] = ACTIONS(385),
    [anon_sym_STAR] = ACTIONS(385),
    [anon_sym_DOT] = ACTIONS(385),
    [anon_sym_COLON] = ACTIONS(387),
    [anon_sym_COLON_COLON] = ACTIONS(385),
    [anon_sym_POUND] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(385),
    [anon_sym_SQUOTE] = ACTIONS(385),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [sym_identifier] = ACTIONS(385),
    [sym_at_keyword] = ACTIONS(387),
    [sym_comment] = ACTIONS(41),
  },
  [90] = {
    [sym__value] = STATE(136),
    [sym_parenthesized_value] = STATE(136),
    [sym_color_value] = STATE(136),
    [sym_string_value] = STATE(136),
    [sym_integer_value] = STATE(136),
    [sym_float_value] = STATE(136),
    [sym_call_expression] = STATE(136),
    [sym_binary_expression] = STATE(136),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_LPAREN2] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(69),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(363),
  },
  [91] = {
    [sym_arguments] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [sym_comment] = ACTIONS(41),
  },
  [92] = {
    [anon_sym_SEMI] = ACTIONS(389),
    [sym_comment] = ACTIONS(41),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [anon_sym_ATimport] = ACTIONS(393),
    [anon_sym_ATmedia] = ACTIONS(393),
    [anon_sym_ATcharset] = ACTIONS(393),
    [anon_sym_ATnamespace] = ACTIONS(393),
    [anon_sym_ATkeyframes] = ACTIONS(393),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(393),
    [anon_sym_RBRACE] = ACTIONS(391),
    [anon_sym_ATsupports] = ACTIONS(393),
    [sym_nesting_selector] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(391),
    [anon_sym_DOT] = ACTIONS(391),
    [anon_sym_COLON] = ACTIONS(393),
    [anon_sym_COLON_COLON] = ACTIONS(391),
    [anon_sym_POUND] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_DQUOTE] = ACTIONS(391),
    [sym_identifier] = ACTIONS(391),
    [sym_at_keyword] = ACTIONS(393),
    [sym_comment] = ACTIONS(41),
  },
  [94] = {
    [sym_keyframe_block] = STATE(152),
    [sym_integer_value] = STATE(151),
    [aux_sym_keyframe_block_list_repeat1] = STATE(152),
    [anon_sym_RBRACE] = ACTIONS(395),
    [sym_from] = ACTIONS(397),
    [sym_to] = ACTIONS(397),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(399),
    [sym_comment] = ACTIONS(41),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [anon_sym_ATimport] = ACTIONS(403),
    [anon_sym_ATmedia] = ACTIONS(403),
    [anon_sym_ATcharset] = ACTIONS(403),
    [anon_sym_ATnamespace] = ACTIONS(403),
    [anon_sym_ATkeyframes] = ACTIONS(403),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(403),
    [anon_sym_RBRACE] = ACTIONS(401),
    [anon_sym_ATsupports] = ACTIONS(403),
    [sym_nesting_selector] = ACTIONS(401),
    [anon_sym_STAR] = ACTIONS(401),
    [anon_sym_DOT] = ACTIONS(401),
    [anon_sym_COLON] = ACTIONS(403),
    [anon_sym_COLON_COLON] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(401),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [sym_identifier] = ACTIONS(401),
    [sym_at_keyword] = ACTIONS(403),
    [sym_comment] = ACTIONS(41),
  },
  [96] = {
    [sym__query] = STATE(146),
    [sym_feature_query] = STATE(146),
    [sym_parenthesized_query] = STATE(146),
    [sym_binary_query] = STATE(146),
    [sym_unary_query] = STATE(146),
    [sym_selector_query] = STATE(146),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(77),
    [anon_sym_only] = ACTIONS(77),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [anon_sym_ATimport] = ACTIONS(407),
    [anon_sym_ATmedia] = ACTIONS(407),
    [anon_sym_ATcharset] = ACTIONS(407),
    [anon_sym_ATnamespace] = ACTIONS(407),
    [anon_sym_ATkeyframes] = ACTIONS(407),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(407),
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_ATsupports] = ACTIONS(407),
    [sym_nesting_selector] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(405),
    [anon_sym_DOT] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_SQUOTE] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [sym_identifier] = ACTIONS(405),
    [sym_at_keyword] = ACTIONS(407),
    [sym_comment] = ACTIONS(41),
  },
  [98] = {
    [sym__selector] = STATE(158),
    [sym_universal_selector] = STATE(158),
    [sym_class_selector] = STATE(158),
    [sym_pseudo_class_selector] = STATE(158),
    [sym_pseudo_element_selector] = STATE(158),
    [sym_id_selector] = STATE(158),
    [sym_attribute_selector] = STATE(158),
    [sym_child_selector] = STATE(158),
    [sym_descendant_selector] = STATE(158),
    [sym_sibling_selector] = STATE(158),
    [sym_adjacent_sibling_selector] = STATE(158),
    [sym__value] = STATE(134),
    [sym_parenthesized_value] = STATE(134),
    [sym_color_value] = STATE(134),
    [sym_string_value] = STATE(159),
    [sym_integer_value] = STATE(134),
    [sym_float_value] = STATE(134),
    [sym_call_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(160),
    [sym_nesting_selector] = ACTIONS(409),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(415),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(421),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(353),
  },
  [99] = {
    [sym__descendant_operator] = ACTIONS(423),
    [anon_sym_COMMA] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [anon_sym_COLON] = ACTIONS(425),
    [anon_sym_COLON_COLON] = ACTIONS(423),
    [anon_sym_POUND] = ACTIONS(423),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_TILDE] = ACTIONS(423),
    [anon_sym_PLUS] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(423),
    [sym_comment] = ACTIONS(41),
  },
  [100] = {
    [sym__value] = STATE(161),
    [sym_parenthesized_value] = STATE(161),
    [sym_color_value] = STATE(161),
    [sym_string_value] = STATE(161),
    [sym_integer_value] = STATE(161),
    [sym_float_value] = STATE(161),
    [sym_call_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_LPAREN2] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(69),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(427),
  },
  [101] = {
    [sym__descendant_operator] = ACTIONS(429),
    [anon_sym_COMMA] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_DOT] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(431),
    [anon_sym_COLON_COLON] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_GT] = ACTIONS(429),
    [anon_sym_TILDE] = ACTIONS(429),
    [anon_sym_PLUS] = ACTIONS(429),
    [anon_sym_RPAREN] = ACTIONS(429),
    [sym_comment] = ACTIONS(41),
  },
  [102] = {
    [sym__descendant_operator] = ACTIONS(433),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_LBRACE] = ACTIONS(433),
    [anon_sym_DOT] = ACTIONS(433),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_GT] = ACTIONS(433),
    [anon_sym_TILDE] = ACTIONS(433),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_RPAREN] = ACTIONS(433),
    [sym_comment] = ACTIONS(41),
  },
  [103] = {
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = ACTIONS(437),
    [sym_comment] = ACTIONS(41),
  },
  [104] = {
    [sym__value] = STATE(163),
    [sym_parenthesized_value] = STATE(163),
    [sym_color_value] = STATE(163),
    [sym_string_value] = STATE(163),
    [sym_integer_value] = STATE(163),
    [sym_float_value] = STATE(163),
    [sym_call_expression] = STATE(163),
    [sym_binary_expression] = STATE(163),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_LPAREN2] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(69),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(439),
  },
  [105] = {
    [aux_sym_SLASH_LPAREN_LBRACK_CARET_SQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH] = ACTIONS(441),
    [sym_comment] = ACTIONS(95),
  },
  [106] = {
    [aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH] = ACTIONS(443),
    [sym_comment] = ACTIONS(95),
  },
  [107] = {
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_STAR] = ACTIONS(144),
    [anon_sym_POUND] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(144),
    [sym_important] = ACTIONS(144),
    [anon_sym_LPAREN2] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(146),
    [sym_unit] = ACTIONS(445),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(146),
    [sym_identifier] = ACTIONS(146),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(146),
  },
  [108] = {
    [anon_sym_COMMA] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_POUND] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(150),
    [sym_important] = ACTIONS(150),
    [anon_sym_LPAREN2] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(152),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(152),
    [sym_unit] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_SLASH] = ACTIONS(152),
    [sym_identifier] = ACTIONS(152),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(152),
  },
  [109] = {
    [sym_arguments] = STATE(169),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_POUND] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(156),
    [sym_important] = ACTIONS(156),
    [anon_sym_LPAREN2] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(160),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(160),
  },
  [110] = {
    [sym__value] = STATE(174),
    [sym_parenthesized_value] = STATE(174),
    [sym_color_value] = STATE(174),
    [sym_string_value] = STATE(174),
    [sym_integer_value] = STATE(174),
    [sym_float_value] = STATE(174),
    [sym_call_expression] = STATE(174),
    [sym_binary_expression] = STATE(174),
    [aux_sym_declaration_repeat1] = STATE(175),
    [anon_sym_COMMA] = ACTIONS(451),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(457),
    [sym_important] = ACTIONS(459),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [anon_sym_DASH] = ACTIONS(457),
    [anon_sym_SLASH] = ACTIONS(457),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(461),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [anon_sym_ATimport] = ACTIONS(465),
    [anon_sym_ATmedia] = ACTIONS(465),
    [anon_sym_ATcharset] = ACTIONS(465),
    [anon_sym_ATnamespace] = ACTIONS(465),
    [anon_sym_ATkeyframes] = ACTIONS(465),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(465),
    [anon_sym_RBRACE] = ACTIONS(463),
    [anon_sym_ATsupports] = ACTIONS(465),
    [sym_nesting_selector] = ACTIONS(463),
    [anon_sym_STAR] = ACTIONS(463),
    [anon_sym_DOT] = ACTIONS(463),
    [anon_sym_COLON] = ACTIONS(465),
    [anon_sym_COLON_COLON] = ACTIONS(463),
    [anon_sym_POUND] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(463),
    [anon_sym_SQUOTE] = ACTIONS(463),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [sym_identifier] = ACTIONS(463),
    [sym_at_keyword] = ACTIONS(465),
    [sym_comment] = ACTIONS(41),
  },
  [112] = {
    [sym__descendant_operator] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(467),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_POUND] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(99),
    [sym_comment] = ACTIONS(41),
  },
  [113] = {
    [anon_sym_RBRACE] = ACTIONS(469),
    [sym_comment] = ACTIONS(41),
  },
  [114] = {
    [sym_import_statement] = STATE(179),
    [sym_media_statement] = STATE(179),
    [sym_charset_statement] = STATE(179),
    [sym_namespace_statement] = STATE(179),
    [sym_keyframes_statement] = STATE(179),
    [sym_supports_statement] = STATE(179),
    [sym_at_rule] = STATE(179),
    [sym_rule_set] = STATE(179),
    [sym_selectors] = STATE(19),
    [sym__selector] = STATE(20),
    [sym_universal_selector] = STATE(20),
    [sym_class_selector] = STATE(20),
    [sym_pseudo_class_selector] = STATE(20),
    [sym_pseudo_element_selector] = STATE(20),
    [sym_id_selector] = STATE(20),
    [sym_attribute_selector] = STATE(20),
    [sym_child_selector] = STATE(20),
    [sym_descendant_selector] = STATE(20),
    [sym_sibling_selector] = STATE(20),
    [sym_adjacent_sibling_selector] = STATE(20),
    [sym_declaration] = STATE(179),
    [sym_last_declaration] = STATE(178),
    [sym_string_value] = STATE(20),
    [aux_sym_block_repeat1] = STATE(179),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(469),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(246),
    [sym_at_keyword] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [115] = {
    [sym__query] = STATE(180),
    [sym_feature_query] = STATE(180),
    [sym_parenthesized_query] = STATE(180),
    [sym_binary_query] = STATE(180),
    [sym_unary_query] = STATE(180),
    [sym_selector_query] = STATE(180),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(108),
    [anon_sym_only] = ACTIONS(108),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [anon_sym_ATimport] = ACTIONS(473),
    [anon_sym_ATmedia] = ACTIONS(473),
    [anon_sym_ATcharset] = ACTIONS(473),
    [anon_sym_ATnamespace] = ACTIONS(473),
    [anon_sym_ATkeyframes] = ACTIONS(473),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(473),
    [anon_sym_RBRACE] = ACTIONS(471),
    [anon_sym_ATsupports] = ACTIONS(473),
    [sym_nesting_selector] = ACTIONS(471),
    [anon_sym_STAR] = ACTIONS(471),
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_COLON] = ACTIONS(473),
    [anon_sym_COLON_COLON] = ACTIONS(471),
    [anon_sym_POUND] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(471),
    [anon_sym_SQUOTE] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(471),
    [sym_identifier] = ACTIONS(471),
    [sym_at_keyword] = ACTIONS(473),
    [sym_comment] = ACTIONS(41),
  },
  [117] = {
    [sym__query] = STATE(146),
    [sym_feature_query] = STATE(146),
    [sym_parenthesized_query] = STATE(146),
    [sym_binary_query] = STATE(146),
    [sym_unary_query] = STATE(146),
    [sym_selector_query] = STATE(146),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(108),
    [anon_sym_only] = ACTIONS(108),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [118] = {
    [sym_block] = STATE(181),
    [aux_sym_import_statement_repeat1] = STATE(182),
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(106),
    [sym_comment] = ACTIONS(41),
  },
  [119] = {
    [sym__descendant_operator] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(477),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_POUND] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [sym_comment] = ACTIONS(41),
  },
  [120] = {
    [sym__descendant_operator] = ACTIONS(479),
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_LBRACE] = ACTIONS(479),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(481),
    [anon_sym_COLON_COLON] = ACTIONS(479),
    [anon_sym_POUND] = ACTIONS(479),
    [anon_sym_LBRACK] = ACTIONS(479),
    [anon_sym_GT] = ACTIONS(479),
    [anon_sym_TILDE] = ACTIONS(479),
    [anon_sym_PLUS] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [sym_comment] = ACTIONS(41),
  },
  [121] = {
    [sym__descendant_operator] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(483),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_COLON_COLON] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_TILDE] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(132),
    [sym_comment] = ACTIONS(41),
  },
  [122] = {
    [sym__descendant_operator] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_LBRACE] = ACTIONS(485),
    [anon_sym_DOT] = ACTIONS(485),
    [anon_sym_COLON] = ACTIONS(487),
    [anon_sym_COLON_COLON] = ACTIONS(485),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(485),
    [anon_sym_GT] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(485),
    [sym_comment] = ACTIONS(41),
  },
  [123] = {
    [sym_pseudo_class_arguments] = STATE(183),
    [sym__descendant_operator] = ACTIONS(489),
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_LBRACE] = ACTIONS(489),
    [anon_sym_DOT] = ACTIONS(489),
    [anon_sym_COLON] = ACTIONS(491),
    [anon_sym_COLON_COLON] = ACTIONS(489),
    [anon_sym_POUND] = ACTIONS(489),
    [anon_sym_LBRACK] = ACTIONS(489),
    [anon_sym_GT] = ACTIONS(489),
    [anon_sym_TILDE] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(489),
    [sym_comment] = ACTIONS(41),
  },
  [124] = {
    [sym__descendant_operator] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_COLON] = ACTIONS(495),
    [anon_sym_COLON_COLON] = ACTIONS(493),
    [anon_sym_POUND] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_GT] = ACTIONS(493),
    [anon_sym_TILDE] = ACTIONS(493),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [sym_comment] = ACTIONS(41),
  },
  [125] = {
    [sym__descendant_operator] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_COLON_COLON] = ACTIONS(497),
    [anon_sym_POUND] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_GT] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [sym_comment] = ACTIONS(41),
  },
  [126] = {
    [anon_sym_EQ] = ACTIONS(501),
    [anon_sym_TILDE_EQ] = ACTIONS(501),
    [anon_sym_CARET_EQ] = ACTIONS(501),
    [anon_sym_PIPE_EQ] = ACTIONS(501),
    [anon_sym_STAR_EQ] = ACTIONS(501),
    [anon_sym_DOLLAR_EQ] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(503),
    [sym_comment] = ACTIONS(41),
  },
  [127] = {
    [sym__descendant_operator] = ACTIONS(505),
    [anon_sym_COMMA] = ACTIONS(505),
    [anon_sym_LBRACE] = ACTIONS(505),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(507),
    [anon_sym_COLON_COLON] = ACTIONS(505),
    [anon_sym_POUND] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_TILDE] = ACTIONS(505),
    [anon_sym_PLUS] = ACTIONS(505),
    [anon_sym_RPAREN] = ACTIONS(505),
    [sym_comment] = ACTIONS(41),
  },
  [128] = {
    [sym__descendant_operator] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(509),
    [anon_sym_LBRACE] = ACTIONS(509),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(511),
    [anon_sym_COLON_COLON] = ACTIONS(509),
    [anon_sym_POUND] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_GT] = ACTIONS(509),
    [anon_sym_TILDE] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(509),
    [anon_sym_RPAREN] = ACTIONS(509),
    [sym_comment] = ACTIONS(41),
  },
  [129] = {
    [sym__descendant_operator] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(513),
    [anon_sym_LBRACE] = ACTIONS(513),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(515),
    [anon_sym_COLON_COLON] = ACTIONS(513),
    [anon_sym_POUND] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [anon_sym_TILDE] = ACTIONS(513),
    [anon_sym_PLUS] = ACTIONS(513),
    [anon_sym_RPAREN] = ACTIONS(513),
    [sym_comment] = ACTIONS(41),
  },
  [130] = {
    [aux_sym_selectors_repeat1] = STATE(130),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(483),
    [sym_comment] = ACTIONS(41),
  },
  [131] = {
    [anon_sym_SEMI] = ACTIONS(520),
    [anon_sym_STAR] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(520),
    [anon_sym_PLUS] = ACTIONS(520),
    [anon_sym_RPAREN] = ACTIONS(520),
    [anon_sym_LPAREN2] = ACTIONS(520),
    [anon_sym_not] = ACTIONS(522),
    [anon_sym_only] = ACTIONS(522),
    [anon_sym_selector] = ACTIONS(522),
    [anon_sym_DASH] = ACTIONS(522),
    [anon_sym_SLASH] = ACTIONS(522),
    [sym_identifier] = ACTIONS(522),
    [sym_comment] = ACTIONS(41),
  },
  [132] = {
    [anon_sym_SEMI] = ACTIONS(433),
    [anon_sym_STAR] = ACTIONS(433),
    [anon_sym_RBRACK] = ACTIONS(433),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_RPAREN] = ACTIONS(433),
    [anon_sym_LPAREN2] = ACTIONS(433),
    [anon_sym_not] = ACTIONS(435),
    [anon_sym_only] = ACTIONS(435),
    [anon_sym_selector] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [sym_identifier] = ACTIONS(435),
    [sym_comment] = ACTIONS(41),
  },
  [133] = {
    [anon_sym_SEMI] = ACTIONS(524),
    [anon_sym_STAR] = ACTIONS(524),
    [anon_sym_RBRACK] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(524),
    [anon_sym_LPAREN2] = ACTIONS(524),
    [anon_sym_not] = ACTIONS(526),
    [anon_sym_only] = ACTIONS(526),
    [anon_sym_selector] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [sym_identifier] = ACTIONS(526),
    [sym_comment] = ACTIONS(41),
  },
  [134] = {
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_SEMI] = ACTIONS(528),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_RPAREN] = ACTIONS(528),
    [anon_sym_LPAREN2] = ACTIONS(528),
    [anon_sym_SQUOTE] = ACTIONS(528),
    [anon_sym_DQUOTE] = ACTIONS(528),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(457),
    [anon_sym_SLASH] = ACTIONS(457),
    [sym_identifier] = ACTIONS(530),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(530),
  },
  [135] = {
    [sym__value] = STATE(134),
    [sym_parenthesized_value] = STATE(134),
    [sym_color_value] = STATE(134),
    [sym_string_value] = STATE(134),
    [sym_integer_value] = STATE(134),
    [sym_float_value] = STATE(134),
    [sym_call_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(188),
    [aux_sym_arguments_repeat1] = STATE(189),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_SEMI] = ACTIONS(532),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(534),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(353),
  },
  [136] = {
    [anon_sym_SEMI] = ACTIONS(536),
    [anon_sym_STAR] = ACTIONS(536),
    [anon_sym_RBRACK] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(536),
    [anon_sym_RPAREN] = ACTIONS(536),
    [anon_sym_LPAREN2] = ACTIONS(536),
    [anon_sym_not] = ACTIONS(538),
    [anon_sym_only] = ACTIONS(538),
    [anon_sym_selector] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_SLASH] = ACTIONS(538),
    [sym_identifier] = ACTIONS(538),
    [sym_comment] = ACTIONS(41),
  },
  [137] = {
    [sym__query] = STATE(190),
    [sym_feature_query] = STATE(190),
    [sym_parenthesized_query] = STATE(190),
    [sym_binary_query] = STATE(190),
    [sym_unary_query] = STATE(190),
    [sym_selector_query] = STATE(190),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(166),
    [anon_sym_only] = ACTIONS(166),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(540),
    [anon_sym_ATimport] = ACTIONS(542),
    [anon_sym_ATmedia] = ACTIONS(542),
    [anon_sym_ATcharset] = ACTIONS(542),
    [anon_sym_ATnamespace] = ACTIONS(542),
    [anon_sym_ATkeyframes] = ACTIONS(542),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(542),
    [anon_sym_RBRACE] = ACTIONS(540),
    [anon_sym_ATsupports] = ACTIONS(542),
    [sym_nesting_selector] = ACTIONS(540),
    [anon_sym_STAR] = ACTIONS(540),
    [anon_sym_DOT] = ACTIONS(540),
    [anon_sym_COLON] = ACTIONS(542),
    [anon_sym_COLON_COLON] = ACTIONS(540),
    [anon_sym_POUND] = ACTIONS(540),
    [anon_sym_LBRACK] = ACTIONS(540),
    [anon_sym_SQUOTE] = ACTIONS(540),
    [anon_sym_DQUOTE] = ACTIONS(540),
    [sym_identifier] = ACTIONS(540),
    [sym_at_keyword] = ACTIONS(542),
    [sym_comment] = ACTIONS(41),
  },
  [139] = {
    [sym__query] = STATE(146),
    [sym_feature_query] = STATE(146),
    [sym_parenthesized_query] = STATE(146),
    [sym_binary_query] = STATE(146),
    [sym_unary_query] = STATE(146),
    [sym_selector_query] = STATE(146),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(166),
    [anon_sym_only] = ACTIONS(166),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [140] = {
    [aux_sym_import_statement_repeat1] = STATE(192),
    [anon_sym_COMMA] = ACTIONS(365),
    [anon_sym_SEMI] = ACTIONS(544),
    [sym_comment] = ACTIONS(41),
  },
  [141] = {
    [sym__value] = STATE(134),
    [sym_parenthesized_value] = STATE(134),
    [sym_color_value] = STATE(134),
    [sym_string_value] = STATE(134),
    [sym_integer_value] = STATE(134),
    [sym_float_value] = STATE(134),
    [sym_call_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(193),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(353),
  },
  [142] = {
    [anon_sym_COMMA] = ACTIONS(546),
    [anon_sym_SEMI] = ACTIONS(546),
    [anon_sym_LBRACE] = ACTIONS(546),
    [anon_sym_RPAREN] = ACTIONS(546),
    [anon_sym_and] = ACTIONS(546),
    [anon_sym_or] = ACTIONS(546),
    [sym_comment] = ACTIONS(41),
  },
  [143] = {
    [sym__query] = STATE(146),
    [sym_feature_query] = STATE(146),
    [sym_parenthesized_query] = STATE(146),
    [sym_binary_query] = STATE(146),
    [sym_unary_query] = STATE(146),
    [sym_selector_query] = STATE(146),
    [anon_sym_LPAREN2] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(170),
    [anon_sym_only] = ACTIONS(170),
    [anon_sym_selector] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(41),
  },
  [144] = {
    [sym__descendant_operator] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_COLON_COLON] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_TILDE] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(548),
    [sym_comment] = ACTIONS(41),
  },
  [145] = {
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_LBRACE] = ACTIONS(550),
    [anon_sym_and] = ACTIONS(180),
    [anon_sym_or] = ACTIONS(180),
    [sym_comment] = ACTIONS(41),
  },
  [146] = {
    [anon_sym_COMMA] = ACTIONS(552),
    [anon_sym_SEMI] = ACTIONS(552),
    [anon_sym_LBRACE] = ACTIONS(552),
    [anon_sym_RPAREN] = ACTIONS(552),
    [anon_sym_and] = ACTIONS(552),
    [anon_sym_or] = ACTIONS(552),
    [sym_comment] = ACTIONS(41),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(554),
    [anon_sym_ATimport] = ACTIONS(556),
    [anon_sym_ATmedia] = ACTIONS(556),
    [anon_sym_ATcharset] = ACTIONS(556),
    [anon_sym_ATnamespace] = ACTIONS(556),
    [anon_sym_ATkeyframes] = ACTIONS(556),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(556),
    [anon_sym_RBRACE] = ACTIONS(554),
    [anon_sym_ATsupports] = ACTIONS(556),
    [sym_nesting_selector] = ACTIONS(554),
    [anon_sym_STAR] = ACTIONS(554),
    [anon_sym_DOT] = ACTIONS(554),
    [anon_sym_COLON] = ACTIONS(556),
    [anon_sym_COLON_COLON] = ACTIONS(554),
    [anon_sym_POUND] = ACTIONS(554),
    [anon_sym_LBRACK] = ACTIONS(554),
    [anon_sym_SQUOTE] = ACTIONS(554),
    [anon_sym_DQUOTE] = ACTIONS(554),
    [sym_identifier] = ACTIONS(554),
    [sym_at_keyword] = ACTIONS(556),
    [sym_comment] = ACTIONS(41),
  },
  [148] = {
    [aux_sym_import_statement_repeat1] = STATE(148),
    [anon_sym_COMMA] = ACTIONS(558),
    [anon_sym_LBRACE] = ACTIONS(550),
    [sym_comment] = ACTIONS(41),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(561),
    [anon_sym_ATimport] = ACTIONS(563),
    [anon_sym_ATmedia] = ACTIONS(563),
    [anon_sym_ATcharset] = ACTIONS(563),
    [anon_sym_ATnamespace] = ACTIONS(563),
    [anon_sym_ATkeyframes] = ACTIONS(563),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(563),
    [anon_sym_RBRACE] = ACTIONS(561),
    [anon_sym_ATsupports] = ACTIONS(563),
    [sym_nesting_selector] = ACTIONS(561),
    [anon_sym_STAR] = ACTIONS(561),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(563),
    [anon_sym_COLON_COLON] = ACTIONS(561),
    [anon_sym_POUND] = ACTIONS(561),
    [anon_sym_LBRACK] = ACTIONS(561),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [sym_identifier] = ACTIONS(561),
    [sym_at_keyword] = ACTIONS(563),
    [sym_comment] = ACTIONS(41),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(565),
    [anon_sym_ATimport] = ACTIONS(567),
    [anon_sym_ATmedia] = ACTIONS(567),
    [anon_sym_ATcharset] = ACTIONS(567),
    [anon_sym_ATnamespace] = ACTIONS(567),
    [anon_sym_ATkeyframes] = ACTIONS(567),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(567),
    [anon_sym_RBRACE] = ACTIONS(565),
    [anon_sym_ATsupports] = ACTIONS(567),
    [sym_nesting_selector] = ACTIONS(565),
    [anon_sym_STAR] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_COLON] = ACTIONS(567),
    [anon_sym_COLON_COLON] = ACTIONS(565),
    [anon_sym_POUND] = ACTIONS(565),
    [anon_sym_LBRACK] = ACTIONS(565),
    [anon_sym_SQUOTE] = ACTIONS(565),
    [anon_sym_DQUOTE] = ACTIONS(565),
    [sym_identifier] = ACTIONS(565),
    [sym_at_keyword] = ACTIONS(567),
    [sym_comment] = ACTIONS(41),
  },
  [151] = {
    [sym_block] = STATE(196),
    [anon_sym_LBRACE] = ACTIONS(569),
    [sym_comment] = ACTIONS(41),
  },
  [152] = {
    [sym_keyframe_block] = STATE(198),
    [sym_integer_value] = STATE(151),
    [aux_sym_keyframe_block_list_repeat1] = STATE(198),
    [anon_sym_RBRACE] = ACTIONS(571),
    [sym_from] = ACTIONS(397),
    [sym_to] = ACTIONS(397),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(399),
    [sym_comment] = ACTIONS(41),
  },
  [153] = {
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = ACTIONS(573),
    [sym_identifier] = ACTIONS(575),
    [sym_comment] = ACTIONS(41),
  },
  [154] = {
    [sym__descendant_operator] = ACTIONS(577),
    [anon_sym_COMMA] = ACTIONS(577),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_DOT] = ACTIONS(577),
    [anon_sym_COLON] = ACTIONS(579),
    [anon_sym_COLON_COLON] = ACTIONS(577),
    [anon_sym_POUND] = ACTIONS(577),
    [anon_sym_LBRACK] = ACTIONS(577),
    [anon_sym_GT] = ACTIONS(577),
    [anon_sym_TILDE] = ACTIONS(577),
    [anon_sym_PLUS] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(577),
    [sym_comment] = ACTIONS(41),
  },
  [155] = {
    [aux_sym_SLASH_LPAREN_LBRACK_CARET_SQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH] = ACTIONS(581),
    [sym_comment] = ACTIONS(95),
  },
  [156] = {
    [aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_BSLASHn_RBRACK_PIPE_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_RPAREN_STAR_SLASH] = ACTIONS(583),
    [sym_comment] = ACTIONS(95),
  },
  [157] = {
    [sym_arguments] = STATE(169),
    [sym__descendant_operator] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(477),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_POUND] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_LPAREN2] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(160),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(160),
  },
  [158] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(203),
    [sym__descendant_operator] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_COLON_COLON] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_TILDE] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(587),
    [sym_comment] = ACTIONS(41),
  },
  [159] = {
    [sym__descendant_operator] = ACTIONS(589),
    [anon_sym_COMMA] = ACTIONS(589),
    [anon_sym_STAR] = ACTIONS(591),
    [anon_sym_DOT] = ACTIONS(593),
    [anon_sym_COLON] = ACTIONS(593),
    [anon_sym_COLON_COLON] = ACTIONS(589),
    [anon_sym_POUND] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(589),
    [anon_sym_GT] = ACTIONS(589),
    [anon_sym_TILDE] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(593),
    [anon_sym_RPAREN] = ACTIONS(589),
    [anon_sym_LPAREN2] = ACTIONS(591),
    [anon_sym_SQUOTE] = ACTIONS(591),
    [anon_sym_DQUOTE] = ACTIONS(591),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [anon_sym_SLASH] = ACTIONS(595),
    [sym_identifier] = ACTIONS(595),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(595),
  },
  [160] = {
    [sym__value] = STATE(134),
    [sym_parenthesized_value] = STATE(134),
    [sym_color_value] = STATE(134),
    [sym_string_value] = STATE(134),
    [sym_integer_value] = STATE(134),
    [sym_float_value] = STATE(134),
    [sym_call_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(204),
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(203),
    [anon_sym_COMMA] = ACTIONS(585),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(587),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(353),
  },
  [161] = {
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_RBRACK] = ACTIONS(597),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(41),
  },
  [162] = {
    [anon_sym_COMMA] = ACTIONS(335),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_RBRACE] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_POUND] = ACTIONS(335),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(335),
    [sym_important] = ACTIONS(335),
    [anon_sym_LPAREN2] = ACTIONS(335),
    [anon_sym_SQUOTE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(335),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(337),
    [sym_identifier] = ACTIONS(337),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(337),
  },
  [163] = {
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(41),
  },
  [164] = {
    [anon_sym_SQUOTE] = ACTIONS(601),
    [sym_comment] = ACTIONS(41),
  },
  [165] = {
    [anon_sym_DQUOTE] = ACTIONS(601),
    [sym_comment] = ACTIONS(41),
  },
  [166] = {
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_RBRACE] = ACTIONS(343),
    [anon_sym_STAR] = ACTIONS(343),
    [anon_sym_POUND] = ACTIONS(343),
    [anon_sym_PLUS] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(343),
    [sym_important] = ACTIONS(343),
    [anon_sym_LPAREN2] = ACTIONS(343),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(345),
    [anon_sym_DASH] = ACTIONS(345),
    [anon_sym_SLASH] = ACTIONS(345),
    [sym_identifier] = ACTIONS(345),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(345),
  },
  [167] = {
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_SEMI] = ACTIONS(347),
    [anon_sym_RBRACE] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_POUND] = ACTIONS(347),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_RPAREN] = ACTIONS(347),
    [sym_important] = ACTIONS(347),
    [anon_sym_LPAREN2] = ACTIONS(347),
    [anon_sym_SQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(347),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(349),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_SLASH] = ACTIONS(349),
    [sym_identifier] = ACTIONS(349),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(349),
  },
  [168] = {
    [sym__value] = STATE(134),
    [sym_parenthesized_value] = STATE(134),
    [sym_color_value] = STATE(134),
    [sym_string_value] = STATE(134),
    [sym_integer_value] = STATE(134),
    [sym_float_value] = STATE(134),
    [sym_call_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(209),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(353),
  },
  [169] = {
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_SEMI] = ACTIONS(355),
    [anon_sym_RBRACE] = ACTIONS(355),
    [anon_sym_STAR] = ACTIONS(355),
    [anon_sym_POUND] = ACTIONS(355),
    [anon_sym_PLUS] = ACTIONS(357),
    [anon_sym_RPAREN] = ACTIONS(355),
    [sym_important] = ACTIONS(355),
    [anon_sym_LPAREN2] = ACTIONS(355),
    [anon_sym_SQUOTE] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(357),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(357),
    [anon_sym_DASH] = ACTIONS(357),
    [anon_sym_SLASH] = ACTIONS(357),
    [sym_identifier] = ACTIONS(357),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(357),
  },
  [170] = {
    [sym__value] = STATE(210),
    [sym_parenthesized_value] = STATE(210),
    [sym_color_value] = STATE(210),
    [sym_string_value] = STATE(210),
    [sym_integer_value] = STATE(210),
    [sym_float_value] = STATE(210),
    [sym_call_expression] = STATE(210),
    [sym_binary_expression] = STATE(210),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(605),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(607),
    [anon_sym_ATimport] = ACTIONS(609),
    [anon_sym_ATmedia] = ACTIONS(609),
    [anon_sym_ATcharset] = ACTIONS(609),
    [anon_sym_ATnamespace] = ACTIONS(609),
    [anon_sym_ATkeyframes] = ACTIONS(609),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(609),
    [anon_sym_RBRACE] = ACTIONS(607),
    [anon_sym_ATsupports] = ACTIONS(609),
    [sym_nesting_selector] = ACTIONS(607),
    [anon_sym_STAR] = ACTIONS(607),
    [anon_sym_DOT] = ACTIONS(607),
    [anon_sym_COLON] = ACTIONS(609),
    [anon_sym_COLON_COLON] = ACTIONS(607),
    [anon_sym_POUND] = ACTIONS(607),
    [anon_sym_LBRACK] = ACTIONS(607),
    [anon_sym_SQUOTE] = ACTIONS(607),
    [anon_sym_DQUOTE] = ACTIONS(607),
    [sym_identifier] = ACTIONS(607),
    [sym_at_keyword] = ACTIONS(609),
    [sym_comment] = ACTIONS(41),
  },
  [172] = {
    [sym__value] = STATE(211),
    [sym_parenthesized_value] = STATE(211),
    [sym_color_value] = STATE(211),
    [sym_string_value] = STATE(211),
    [sym_integer_value] = STATE(211),
    [sym_float_value] = STATE(211),
    [sym_call_expression] = STATE(211),
    [sym_binary_expression] = STATE(211),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(611),
  },
  [173] = {
    [anon_sym_SEMI] = ACTIONS(613),
    [sym_comment] = ACTIONS(41),
  },
  [174] = {
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_SEMI] = ACTIONS(615),
    [anon_sym_RBRACE] = ACTIONS(615),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(615),
    [anon_sym_PLUS] = ACTIONS(457),
    [sym_important] = ACTIONS(615),
    [anon_sym_LPAREN2] = ACTIONS(615),
    [anon_sym_SQUOTE] = ACTIONS(615),
    [anon_sym_DQUOTE] = ACTIONS(615),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(617),
    [anon_sym_DASH] = ACTIONS(457),
    [anon_sym_SLASH] = ACTIONS(457),
    [sym_identifier] = ACTIONS(617),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(617),
  },
  [175] = {
    [sym__value] = STATE(174),
    [sym_parenthesized_value] = STATE(174),
    [sym_color_value] = STATE(174),
    [sym_string_value] = STATE(174),
    [sym_integer_value] = STATE(174),
    [sym_float_value] = STATE(174),
    [sym_call_expression] = STATE(174),
    [sym_binary_expression] = STATE(174),
    [aux_sym_declaration_repeat1] = STATE(214),
    [anon_sym_COMMA] = ACTIONS(451),
    [anon_sym_SEMI] = ACTIONS(613),
    [anon_sym_POUND] = ACTIONS(224),
    [sym_important] = ACTIONS(619),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(461),
  },
  [176] = {
    [sym__value] = STATE(215),
    [sym_parenthesized_value] = STATE(215),
    [sym_color_value] = STATE(215),
    [sym_string_value] = STATE(215),
    [sym_integer_value] = STATE(215),
    [sym_float_value] = STATE(215),
    [sym_call_expression] = STATE(215),
    [sym_binary_expression] = STATE(215),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(621),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(623),
    [anon_sym_ATimport] = ACTIONS(625),
    [anon_sym_ATmedia] = ACTIONS(625),
    [anon_sym_ATcharset] = ACTIONS(625),
    [anon_sym_ATnamespace] = ACTIONS(625),
    [anon_sym_ATkeyframes] = ACTIONS(625),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(625),
    [anon_sym_RBRACE] = ACTIONS(623),
    [anon_sym_ATsupports] = ACTIONS(625),
    [sym_nesting_selector] = ACTIONS(623),
    [anon_sym_STAR] = ACTIONS(623),
    [anon_sym_DOT] = ACTIONS(623),
    [anon_sym_COLON] = ACTIONS(625),
    [anon_sym_COLON_COLON] = ACTIONS(623),
    [anon_sym_POUND] = ACTIONS(623),
    [anon_sym_LBRACK] = ACTIONS(623),
    [anon_sym_SQUOTE] = ACTIONS(623),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_identifier] = ACTIONS(623),
    [sym_at_keyword] = ACTIONS(625),
    [sym_comment] = ACTIONS(41),
  },
  [178] = {
    [anon_sym_RBRACE] = ACTIONS(627),
    [sym_comment] = ACTIONS(41),
  },
  [179] = {
    [sym_import_statement] = STATE(179),
    [sym_media_statement] = STATE(179),
    [sym_charset_statement] = STATE(179),
    [sym_namespace_statement] = STATE(179),
    [sym_keyframes_statement] = STATE(179),
    [sym_supports_statement] = STATE(179),
    [sym_at_rule] = STATE(179),
    [sym_rule_set] = STATE(179),
    [sym_selectors] = STATE(19),
    [sym__selector] = STATE(20),
    [sym_universal_selector] = STATE(20),
    [sym_class_selector] = STATE(20),
    [sym_pseudo_class_selector] = STATE(20),
    [sym_pseudo_element_selector] = STATE(20),
    [sym_id_selector] = STATE(20),
    [sym_attribute_selector] = STATE(20),
    [sym_child_selector] = STATE(20),
    [sym_descendant_selector] = STATE(20),
    [sym_sibling_selector] = STATE(20),
    [sym_adjacent_sibling_selector] = STATE(20),
    [sym_declaration] = STATE(179),
    [sym_string_value] = STATE(20),
    [aux_sym_block_repeat1] = STATE(179),
    [anon_sym_ATimport] = ACTIONS(629),
    [anon_sym_ATmedia] = ACTIONS(632),
    [anon_sym_ATcharset] = ACTIONS(635),
    [anon_sym_ATnamespace] = ACTIONS(638),
    [anon_sym_ATkeyframes] = ACTIONS(641),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(641),
    [anon_sym_RBRACE] = ACTIONS(644),
    [anon_sym_ATsupports] = ACTIONS(646),
    [sym_nesting_selector] = ACTIONS(649),
    [anon_sym_STAR] = ACTIONS(652),
    [anon_sym_DOT] = ACTIONS(655),
    [anon_sym_COLON] = ACTIONS(658),
    [anon_sym_COLON_COLON] = ACTIONS(661),
    [anon_sym_POUND] = ACTIONS(664),
    [anon_sym_LBRACK] = ACTIONS(667),
    [anon_sym_SQUOTE] = ACTIONS(670),
    [anon_sym_DQUOTE] = ACTIONS(673),
    [sym_identifier] = ACTIONS(676),
    [sym_at_keyword] = ACTIONS(679),
    [sym_comment] = ACTIONS(41),
  },
  [180] = {
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_SEMI] = ACTIONS(550),
    [anon_sym_LBRACE] = ACTIONS(550),
    [anon_sym_and] = ACTIONS(252),
    [anon_sym_or] = ACTIONS(252),
    [sym_comment] = ACTIONS(41),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(682),
    [anon_sym_ATimport] = ACTIONS(684),
    [anon_sym_ATmedia] = ACTIONS(684),
    [anon_sym_ATcharset] = ACTIONS(684),
    [anon_sym_ATnamespace] = ACTIONS(684),
    [anon_sym_ATkeyframes] = ACTIONS(684),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(684),
    [anon_sym_RBRACE] = ACTIONS(682),
    [anon_sym_ATsupports] = ACTIONS(684),
    [sym_nesting_selector] = ACTIONS(682),
    [anon_sym_STAR] = ACTIONS(682),
    [anon_sym_DOT] = ACTIONS(682),
    [anon_sym_COLON] = ACTIONS(684),
    [anon_sym_COLON_COLON] = ACTIONS(682),
    [anon_sym_POUND] = ACTIONS(682),
    [anon_sym_LBRACK] = ACTIONS(682),
    [anon_sym_SQUOTE] = ACTIONS(682),
    [anon_sym_DQUOTE] = ACTIONS(682),
    [sym_identifier] = ACTIONS(682),
    [sym_at_keyword] = ACTIONS(684),
    [sym_comment] = ACTIONS(41),
  },
  [182] = {
    [aux_sym_import_statement_repeat1] = STATE(182),
    [anon_sym_COMMA] = ACTIONS(686),
    [anon_sym_SEMI] = ACTIONS(550),
    [anon_sym_LBRACE] = ACTIONS(550),
    [sym_comment] = ACTIONS(41),
  },
  [183] = {
    [sym__descendant_operator] = ACTIONS(689),
    [anon_sym_COMMA] = ACTIONS(689),
    [anon_sym_LBRACE] = ACTIONS(689),
    [anon_sym_DOT] = ACTIONS(689),
    [anon_sym_COLON] = ACTIONS(691),
    [anon_sym_COLON_COLON] = ACTIONS(689),
    [anon_sym_POUND] = ACTIONS(689),
    [anon_sym_LBRACK] = ACTIONS(689),
    [anon_sym_GT] = ACTIONS(689),
    [anon_sym_TILDE] = ACTIONS(689),
    [anon_sym_PLUS] = ACTIONS(689),
    [anon_sym_RPAREN] = ACTIONS(689),
    [sym_comment] = ACTIONS(41),
  },
  [184] = {
    [sym__value] = STATE(217),
    [sym_parenthesized_value] = STATE(217),
    [sym_color_value] = STATE(217),
    [sym_string_value] = STATE(217),
    [sym_integer_value] = STATE(217),
    [sym_float_value] = STATE(217),
    [sym_call_expression] = STATE(217),
    [sym_binary_expression] = STATE(217),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_LPAREN2] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(69),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(693),
  },
  [185] = {
    [sym__descendant_operator] = ACTIONS(695),
    [anon_sym_COMMA] = ACTIONS(695),
    [anon_sym_LBRACE] = ACTIONS(695),
    [anon_sym_DOT] = ACTIONS(695),
    [anon_sym_COLON] = ACTIONS(697),
    [anon_sym_COLON_COLON] = ACTIONS(695),
    [anon_sym_POUND] = ACTIONS(695),
    [anon_sym_LBRACK] = ACTIONS(695),
    [anon_sym_GT] = ACTIONS(695),
    [anon_sym_TILDE] = ACTIONS(695),
    [anon_sym_PLUS] = ACTIONS(695),
    [anon_sym_RPAREN] = ACTIONS(695),
    [sym_comment] = ACTIONS(41),
  },
  [186] = {
    [sym__value] = STATE(134),
    [sym_parenthesized_value] = STATE(134),
    [sym_color_value] = STATE(134),
    [sym_string_value] = STATE(134),
    [sym_integer_value] = STATE(134),
    [sym_float_value] = STATE(134),
    [sym_call_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(218),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(353),
  },
  [187] = {
    [anon_sym_SEMI] = ACTIONS(699),
    [anon_sym_STAR] = ACTIONS(699),
    [anon_sym_RBRACK] = ACTIONS(699),
    [anon_sym_PLUS] = ACTIONS(699),
    [anon_sym_RPAREN] = ACTIONS(699),
    [anon_sym_LPAREN2] = ACTIONS(699),
    [anon_sym_not] = ACTIONS(701),
    [anon_sym_only] = ACTIONS(701),
    [anon_sym_selector] = ACTIONS(701),
    [anon_sym_DASH] = ACTIONS(701),
    [anon_sym_SLASH] = ACTIONS(701),
    [sym_identifier] = ACTIONS(701),
    [sym_comment] = ACTIONS(41),
  },
  [188] = {
    [sym__value] = STATE(134),
    [sym_parenthesized_value] = STATE(134),
    [sym_color_value] = STATE(134),
    [sym_string_value] = STATE(134),
    [sym_integer_value] = STATE(134),
    [sym_float_value] = STATE(134),
    [sym_call_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(188),
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_SEMI] = ACTIONS(703),
    [anon_sym_POUND] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(703),
    [anon_sym_LPAREN2] = ACTIONS(708),
    [anon_sym_SQUOTE] = ACTIONS(711),
    [anon_sym_DQUOTE] = ACTIONS(714),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(720),
    [sym_identifier] = ACTIONS(723),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(726),
  },
  [189] = {
    [aux_sym_arguments_repeat1] = STATE(220),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_SEMI] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(729),
    [sym_comment] = ACTIONS(41),
  },
  [190] = {
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_SEMI] = ACTIONS(550),
    [anon_sym_and] = ACTIONS(369),
    [anon_sym_or] = ACTIONS(369),
    [sym_comment] = ACTIONS(41),
  },
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(731),
    [anon_sym_ATimport] = ACTIONS(733),
    [anon_sym_ATmedia] = ACTIONS(733),
    [anon_sym_ATcharset] = ACTIONS(733),
    [anon_sym_ATnamespace] = ACTIONS(733),
    [anon_sym_ATkeyframes] = ACTIONS(733),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(733),
    [anon_sym_RBRACE] = ACTIONS(731),
    [anon_sym_ATsupports] = ACTIONS(733),
    [sym_nesting_selector] = ACTIONS(731),
    [anon_sym_STAR] = ACTIONS(731),
    [anon_sym_DOT] = ACTIONS(731),
    [anon_sym_COLON] = ACTIONS(733),
    [anon_sym_COLON_COLON] = ACTIONS(731),
    [anon_sym_POUND] = ACTIONS(731),
    [anon_sym_LBRACK] = ACTIONS(731),
    [anon_sym_SQUOTE] = ACTIONS(731),
    [anon_sym_DQUOTE] = ACTIONS(731),
    [sym_identifier] = ACTIONS(731),
    [sym_at_keyword] = ACTIONS(733),
    [sym_comment] = ACTIONS(41),
  },
  [192] = {
    [aux_sym_import_statement_repeat1] = STATE(192),
    [anon_sym_COMMA] = ACTIONS(735),
    [anon_sym_SEMI] = ACTIONS(550),
    [sym_comment] = ACTIONS(41),
  },
  [193] = {
    [sym__value] = STATE(134),
    [sym_parenthesized_value] = STATE(134),
    [sym_color_value] = STATE(134),
    [sym_string_value] = STATE(134),
    [sym_integer_value] = STATE(134),
    [sym_float_value] = STATE(134),
    [sym_call_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(222),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(738),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(353),
  },
  [194] = {
    [anon_sym_COMMA] = ACTIONS(740),
    [anon_sym_SEMI] = ACTIONS(740),
    [anon_sym_LBRACE] = ACTIONS(740),
    [anon_sym_RPAREN] = ACTIONS(740),
    [anon_sym_and] = ACTIONS(740),
    [anon_sym_or] = ACTIONS(740),
    [sym_comment] = ACTIONS(41),
  },
  [195] = {
    [sym_import_statement] = STATE(225),
    [sym_media_statement] = STATE(225),
    [sym_charset_statement] = STATE(225),
    [sym_namespace_statement] = STATE(225),
    [sym_keyframes_statement] = STATE(225),
    [sym_supports_statement] = STATE(225),
    [sym_at_rule] = STATE(225),
    [sym_rule_set] = STATE(225),
    [sym_selectors] = STATE(19),
    [sym__selector] = STATE(20),
    [sym_universal_selector] = STATE(20),
    [sym_class_selector] = STATE(20),
    [sym_pseudo_class_selector] = STATE(20),
    [sym_pseudo_element_selector] = STATE(20),
    [sym_id_selector] = STATE(20),
    [sym_attribute_selector] = STATE(20),
    [sym_child_selector] = STATE(20),
    [sym_descendant_selector] = STATE(20),
    [sym_sibling_selector] = STATE(20),
    [sym_adjacent_sibling_selector] = STATE(20),
    [sym_declaration] = STATE(225),
    [sym_last_declaration] = STATE(224),
    [sym_string_value] = STATE(20),
    [aux_sym_block_repeat1] = STATE(225),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(742),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(246),
    [sym_at_keyword] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [196] = {
    [anon_sym_RBRACE] = ACTIONS(744),
    [sym_from] = ACTIONS(744),
    [sym_to] = ACTIONS(744),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(744),
    [sym_comment] = ACTIONS(41),
  },
  [197] = {
    [ts_builtin_sym_end] = ACTIONS(746),
    [anon_sym_ATimport] = ACTIONS(748),
    [anon_sym_ATmedia] = ACTIONS(748),
    [anon_sym_ATcharset] = ACTIONS(748),
    [anon_sym_ATnamespace] = ACTIONS(748),
    [anon_sym_ATkeyframes] = ACTIONS(748),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(748),
    [anon_sym_RBRACE] = ACTIONS(746),
    [anon_sym_ATsupports] = ACTIONS(748),
    [sym_nesting_selector] = ACTIONS(746),
    [anon_sym_STAR] = ACTIONS(746),
    [anon_sym_DOT] = ACTIONS(746),
    [anon_sym_COLON] = ACTIONS(748),
    [anon_sym_COLON_COLON] = ACTIONS(746),
    [anon_sym_POUND] = ACTIONS(746),
    [anon_sym_LBRACK] = ACTIONS(746),
    [anon_sym_SQUOTE] = ACTIONS(746),
    [anon_sym_DQUOTE] = ACTIONS(746),
    [sym_identifier] = ACTIONS(746),
    [sym_at_keyword] = ACTIONS(748),
    [sym_comment] = ACTIONS(41),
  },
  [198] = {
    [sym_keyframe_block] = STATE(198),
    [sym_integer_value] = STATE(151),
    [aux_sym_keyframe_block_list_repeat1] = STATE(198),
    [anon_sym_RBRACE] = ACTIONS(750),
    [sym_from] = ACTIONS(752),
    [sym_to] = ACTIONS(752),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(755),
    [sym_comment] = ACTIONS(41),
  },
  [199] = {
    [anon_sym_SQUOTE] = ACTIONS(758),
    [sym_comment] = ACTIONS(41),
  },
  [200] = {
    [anon_sym_DQUOTE] = ACTIONS(758),
    [sym_comment] = ACTIONS(41),
  },
  [201] = {
    [sym__selector] = STATE(227),
    [sym_universal_selector] = STATE(227),
    [sym_class_selector] = STATE(227),
    [sym_pseudo_class_selector] = STATE(227),
    [sym_pseudo_element_selector] = STATE(227),
    [sym_id_selector] = STATE(227),
    [sym_attribute_selector] = STATE(227),
    [sym_child_selector] = STATE(227),
    [sym_descendant_selector] = STATE(227),
    [sym_sibling_selector] = STATE(227),
    [sym_adjacent_sibling_selector] = STATE(227),
    [sym__value] = STATE(134),
    [sym_parenthesized_value] = STATE(134),
    [sym_color_value] = STATE(134),
    [sym_string_value] = STATE(159),
    [sym_integer_value] = STATE(134),
    [sym_float_value] = STATE(134),
    [sym_call_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(228),
    [sym_nesting_selector] = ACTIONS(760),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(421),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(353),
  },
  [202] = {
    [sym__descendant_operator] = ACTIONS(762),
    [anon_sym_COMMA] = ACTIONS(762),
    [anon_sym_LBRACE] = ACTIONS(762),
    [anon_sym_DOT] = ACTIONS(762),
    [anon_sym_COLON] = ACTIONS(764),
    [anon_sym_COLON_COLON] = ACTIONS(762),
    [anon_sym_POUND] = ACTIONS(762),
    [anon_sym_LBRACK] = ACTIONS(762),
    [anon_sym_GT] = ACTIONS(762),
    [anon_sym_TILDE] = ACTIONS(762),
    [anon_sym_PLUS] = ACTIONS(762),
    [anon_sym_RPAREN] = ACTIONS(762),
    [sym_comment] = ACTIONS(41),
  },
  [203] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(230),
    [anon_sym_COMMA] = ACTIONS(585),
    [anon_sym_RPAREN] = ACTIONS(766),
    [sym_comment] = ACTIONS(41),
  },
  [204] = {
    [sym__value] = STATE(134),
    [sym_parenthesized_value] = STATE(134),
    [sym_color_value] = STATE(134),
    [sym_string_value] = STATE(134),
    [sym_integer_value] = STATE(134),
    [sym_float_value] = STATE(134),
    [sym_call_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(204),
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_POUND] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(703),
    [anon_sym_LPAREN2] = ACTIONS(708),
    [anon_sym_SQUOTE] = ACTIONS(711),
    [anon_sym_DQUOTE] = ACTIONS(714),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(720),
    [sym_identifier] = ACTIONS(723),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(726),
  },
  [205] = {
    [sym__descendant_operator] = ACTIONS(768),
    [anon_sym_COMMA] = ACTIONS(768),
    [anon_sym_LBRACE] = ACTIONS(768),
    [anon_sym_DOT] = ACTIONS(768),
    [anon_sym_COLON] = ACTIONS(770),
    [anon_sym_COLON_COLON] = ACTIONS(768),
    [anon_sym_POUND] = ACTIONS(768),
    [anon_sym_LBRACK] = ACTIONS(768),
    [anon_sym_GT] = ACTIONS(768),
    [anon_sym_TILDE] = ACTIONS(768),
    [anon_sym_PLUS] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(768),
    [sym_comment] = ACTIONS(41),
  },
  [206] = {
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_SEMI] = ACTIONS(520),
    [anon_sym_RBRACE] = ACTIONS(520),
    [anon_sym_STAR] = ACTIONS(520),
    [anon_sym_POUND] = ACTIONS(520),
    [anon_sym_PLUS] = ACTIONS(522),
    [anon_sym_RPAREN] = ACTIONS(520),
    [sym_important] = ACTIONS(520),
    [anon_sym_LPAREN2] = ACTIONS(520),
    [anon_sym_SQUOTE] = ACTIONS(520),
    [anon_sym_DQUOTE] = ACTIONS(520),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(522),
    [anon_sym_DASH] = ACTIONS(522),
    [anon_sym_SLASH] = ACTIONS(522),
    [sym_identifier] = ACTIONS(522),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(522),
  },
  [207] = {
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_SEMI] = ACTIONS(433),
    [anon_sym_RBRACE] = ACTIONS(433),
    [anon_sym_STAR] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(433),
    [sym_important] = ACTIONS(433),
    [anon_sym_LPAREN2] = ACTIONS(433),
    [anon_sym_SQUOTE] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [sym_identifier] = ACTIONS(435),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(435),
  },
  [208] = {
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_SEMI] = ACTIONS(524),
    [anon_sym_RBRACE] = ACTIONS(524),
    [anon_sym_STAR] = ACTIONS(524),
    [anon_sym_POUND] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_RPAREN] = ACTIONS(524),
    [sym_important] = ACTIONS(524),
    [anon_sym_LPAREN2] = ACTIONS(524),
    [anon_sym_SQUOTE] = ACTIONS(524),
    [anon_sym_DQUOTE] = ACTIONS(524),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(526),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [sym_identifier] = ACTIONS(526),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(526),
  },
  [209] = {
    [sym__value] = STATE(134),
    [sym_parenthesized_value] = STATE(134),
    [sym_color_value] = STATE(134),
    [sym_string_value] = STATE(134),
    [sym_integer_value] = STATE(134),
    [sym_float_value] = STATE(134),
    [sym_call_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(188),
    [aux_sym_arguments_repeat1] = STATE(232),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_SEMI] = ACTIONS(532),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(772),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(353),
  },
  [210] = {
    [anon_sym_COMMA] = ACTIONS(774),
    [anon_sym_SEMI] = ACTIONS(774),
    [anon_sym_RBRACE] = ACTIONS(774),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(774),
    [anon_sym_PLUS] = ACTIONS(457),
    [sym_important] = ACTIONS(774),
    [anon_sym_LPAREN2] = ACTIONS(774),
    [anon_sym_SQUOTE] = ACTIONS(774),
    [anon_sym_DQUOTE] = ACTIONS(774),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(776),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(776),
    [anon_sym_DASH] = ACTIONS(457),
    [anon_sym_SLASH] = ACTIONS(457),
    [sym_identifier] = ACTIONS(776),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(776),
  },
  [211] = {
    [anon_sym_COMMA] = ACTIONS(536),
    [anon_sym_SEMI] = ACTIONS(536),
    [anon_sym_RBRACE] = ACTIONS(536),
    [anon_sym_STAR] = ACTIONS(536),
    [anon_sym_POUND] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(538),
    [anon_sym_RPAREN] = ACTIONS(536),
    [sym_important] = ACTIONS(536),
    [anon_sym_LPAREN2] = ACTIONS(536),
    [anon_sym_SQUOTE] = ACTIONS(536),
    [anon_sym_DQUOTE] = ACTIONS(536),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_SLASH] = ACTIONS(538),
    [sym_identifier] = ACTIONS(538),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(538),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(778),
    [anon_sym_ATimport] = ACTIONS(780),
    [anon_sym_ATmedia] = ACTIONS(780),
    [anon_sym_ATcharset] = ACTIONS(780),
    [anon_sym_ATnamespace] = ACTIONS(780),
    [anon_sym_ATkeyframes] = ACTIONS(780),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(780),
    [anon_sym_RBRACE] = ACTIONS(778),
    [anon_sym_ATsupports] = ACTIONS(780),
    [sym_nesting_selector] = ACTIONS(778),
    [anon_sym_STAR] = ACTIONS(778),
    [anon_sym_DOT] = ACTIONS(778),
    [anon_sym_COLON] = ACTIONS(780),
    [anon_sym_COLON_COLON] = ACTIONS(778),
    [anon_sym_POUND] = ACTIONS(778),
    [anon_sym_LBRACK] = ACTIONS(778),
    [anon_sym_SQUOTE] = ACTIONS(778),
    [anon_sym_DQUOTE] = ACTIONS(778),
    [sym_identifier] = ACTIONS(778),
    [sym_at_keyword] = ACTIONS(780),
    [sym_comment] = ACTIONS(41),
  },
  [213] = {
    [anon_sym_SEMI] = ACTIONS(782),
    [sym_comment] = ACTIONS(41),
  },
  [214] = {
    [sym__value] = STATE(174),
    [sym_parenthesized_value] = STATE(174),
    [sym_color_value] = STATE(174),
    [sym_string_value] = STATE(174),
    [sym_integer_value] = STATE(174),
    [sym_float_value] = STATE(174),
    [sym_call_expression] = STATE(174),
    [sym_binary_expression] = STATE(174),
    [aux_sym_declaration_repeat1] = STATE(214),
    [anon_sym_COMMA] = ACTIONS(784),
    [anon_sym_SEMI] = ACTIONS(774),
    [anon_sym_POUND] = ACTIONS(787),
    [sym_important] = ACTIONS(774),
    [anon_sym_LPAREN2] = ACTIONS(790),
    [anon_sym_SQUOTE] = ACTIONS(793),
    [anon_sym_DQUOTE] = ACTIONS(796),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(802),
    [sym_identifier] = ACTIONS(805),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(808),
  },
  [215] = {
    [sym__value] = STATE(174),
    [sym_parenthesized_value] = STATE(174),
    [sym_color_value] = STATE(174),
    [sym_string_value] = STATE(174),
    [sym_integer_value] = STATE(174),
    [sym_float_value] = STATE(174),
    [sym_call_expression] = STATE(174),
    [sym_binary_expression] = STATE(174),
    [aux_sym_declaration_repeat1] = STATE(235),
    [anon_sym_COMMA] = ACTIONS(451),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(811),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(457),
    [sym_important] = ACTIONS(813),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [anon_sym_DASH] = ACTIONS(457),
    [anon_sym_SLASH] = ACTIONS(457),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(461),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(815),
    [anon_sym_ATimport] = ACTIONS(817),
    [anon_sym_ATmedia] = ACTIONS(817),
    [anon_sym_ATcharset] = ACTIONS(817),
    [anon_sym_ATnamespace] = ACTIONS(817),
    [anon_sym_ATkeyframes] = ACTIONS(817),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(817),
    [anon_sym_RBRACE] = ACTIONS(815),
    [anon_sym_ATsupports] = ACTIONS(817),
    [sym_nesting_selector] = ACTIONS(815),
    [anon_sym_STAR] = ACTIONS(815),
    [anon_sym_DOT] = ACTIONS(815),
    [anon_sym_COLON] = ACTIONS(817),
    [anon_sym_COLON_COLON] = ACTIONS(815),
    [anon_sym_POUND] = ACTIONS(815),
    [anon_sym_LBRACK] = ACTIONS(815),
    [anon_sym_SQUOTE] = ACTIONS(815),
    [anon_sym_DQUOTE] = ACTIONS(815),
    [sym_identifier] = ACTIONS(815),
    [sym_at_keyword] = ACTIONS(817),
    [sym_comment] = ACTIONS(41),
  },
  [217] = {
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_RBRACK] = ACTIONS(819),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(41),
  },
  [218] = {
    [sym__value] = STATE(134),
    [sym_parenthesized_value] = STATE(134),
    [sym_color_value] = STATE(134),
    [sym_string_value] = STATE(134),
    [sym_integer_value] = STATE(134),
    [sym_float_value] = STATE(134),
    [sym_call_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(188),
    [anon_sym_COMMA] = ACTIONS(821),
    [anon_sym_SEMI] = ACTIONS(821),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(821),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(353),
  },
  [219] = {
    [anon_sym_SEMI] = ACTIONS(823),
    [anon_sym_STAR] = ACTIONS(823),
    [anon_sym_RBRACK] = ACTIONS(823),
    [anon_sym_PLUS] = ACTIONS(823),
    [anon_sym_RPAREN] = ACTIONS(823),
    [anon_sym_LPAREN2] = ACTIONS(823),
    [anon_sym_not] = ACTIONS(825),
    [anon_sym_only] = ACTIONS(825),
    [anon_sym_selector] = ACTIONS(825),
    [anon_sym_DASH] = ACTIONS(825),
    [anon_sym_SLASH] = ACTIONS(825),
    [sym_identifier] = ACTIONS(825),
    [sym_comment] = ACTIONS(41),
  },
  [220] = {
    [aux_sym_arguments_repeat1] = STATE(220),
    [anon_sym_COMMA] = ACTIONS(827),
    [anon_sym_SEMI] = ACTIONS(827),
    [anon_sym_RPAREN] = ACTIONS(821),
    [sym_comment] = ACTIONS(41),
  },
  [221] = {
    [anon_sym_COMMA] = ACTIONS(830),
    [anon_sym_SEMI] = ACTIONS(830),
    [anon_sym_LBRACE] = ACTIONS(830),
    [anon_sym_RPAREN] = ACTIONS(830),
    [anon_sym_and] = ACTIONS(830),
    [anon_sym_or] = ACTIONS(830),
    [sym_comment] = ACTIONS(41),
  },
  [222] = {
    [sym__value] = STATE(134),
    [sym_parenthesized_value] = STATE(134),
    [sym_color_value] = STATE(134),
    [sym_string_value] = STATE(134),
    [sym_integer_value] = STATE(134),
    [sym_float_value] = STATE(134),
    [sym_call_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(222),
    [anon_sym_POUND] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(703),
    [anon_sym_LPAREN2] = ACTIONS(708),
    [anon_sym_SQUOTE] = ACTIONS(711),
    [anon_sym_DQUOTE] = ACTIONS(714),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(720),
    [sym_identifier] = ACTIONS(723),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(726),
  },
  [223] = {
    [anon_sym_RBRACE] = ACTIONS(463),
    [sym_from] = ACTIONS(463),
    [sym_to] = ACTIONS(463),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(463),
    [sym_comment] = ACTIONS(41),
  },
  [224] = {
    [anon_sym_RBRACE] = ACTIONS(832),
    [sym_comment] = ACTIONS(41),
  },
  [225] = {
    [sym_import_statement] = STATE(179),
    [sym_media_statement] = STATE(179),
    [sym_charset_statement] = STATE(179),
    [sym_namespace_statement] = STATE(179),
    [sym_keyframes_statement] = STATE(179),
    [sym_supports_statement] = STATE(179),
    [sym_at_rule] = STATE(179),
    [sym_rule_set] = STATE(179),
    [sym_selectors] = STATE(19),
    [sym__selector] = STATE(20),
    [sym_universal_selector] = STATE(20),
    [sym_class_selector] = STATE(20),
    [sym_pseudo_class_selector] = STATE(20),
    [sym_pseudo_element_selector] = STATE(20),
    [sym_id_selector] = STATE(20),
    [sym_attribute_selector] = STATE(20),
    [sym_child_selector] = STATE(20),
    [sym_descendant_selector] = STATE(20),
    [sym_sibling_selector] = STATE(20),
    [sym_adjacent_sibling_selector] = STATE(20),
    [sym_declaration] = STATE(179),
    [sym_last_declaration] = STATE(238),
    [sym_string_value] = STATE(20),
    [aux_sym_block_repeat1] = STATE(179),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(832),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(246),
    [sym_at_keyword] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [226] = {
    [sym__descendant_operator] = ACTIONS(433),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_STAR] = ACTIONS(433),
    [anon_sym_DOT] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_GT] = ACTIONS(433),
    [anon_sym_TILDE] = ACTIONS(433),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(433),
    [anon_sym_LPAREN2] = ACTIONS(433),
    [anon_sym_SQUOTE] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [sym_identifier] = ACTIONS(435),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(435),
  },
  [227] = {
    [sym__descendant_operator] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(834),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_COLON_COLON] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_TILDE] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(834),
    [sym_comment] = ACTIONS(41),
  },
  [228] = {
    [sym__value] = STATE(134),
    [sym_parenthesized_value] = STATE(134),
    [sym_color_value] = STATE(134),
    [sym_string_value] = STATE(134),
    [sym_integer_value] = STATE(134),
    [sym_float_value] = STATE(134),
    [sym_call_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(204),
    [anon_sym_COMMA] = ACTIONS(834),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(834),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(353),
  },
  [229] = {
    [sym__descendant_operator] = ACTIONS(836),
    [anon_sym_COMMA] = ACTIONS(836),
    [anon_sym_LBRACE] = ACTIONS(836),
    [anon_sym_DOT] = ACTIONS(836),
    [anon_sym_COLON] = ACTIONS(838),
    [anon_sym_COLON_COLON] = ACTIONS(836),
    [anon_sym_POUND] = ACTIONS(836),
    [anon_sym_LBRACK] = ACTIONS(836),
    [anon_sym_GT] = ACTIONS(836),
    [anon_sym_TILDE] = ACTIONS(836),
    [anon_sym_PLUS] = ACTIONS(836),
    [anon_sym_RPAREN] = ACTIONS(836),
    [sym_comment] = ACTIONS(41),
  },
  [230] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(230),
    [anon_sym_COMMA] = ACTIONS(840),
    [anon_sym_RPAREN] = ACTIONS(834),
    [sym_comment] = ACTIONS(41),
  },
  [231] = {
    [anon_sym_COMMA] = ACTIONS(699),
    [anon_sym_SEMI] = ACTIONS(699),
    [anon_sym_RBRACE] = ACTIONS(699),
    [anon_sym_STAR] = ACTIONS(699),
    [anon_sym_POUND] = ACTIONS(699),
    [anon_sym_PLUS] = ACTIONS(701),
    [anon_sym_RPAREN] = ACTIONS(699),
    [sym_important] = ACTIONS(699),
    [anon_sym_LPAREN2] = ACTIONS(699),
    [anon_sym_SQUOTE] = ACTIONS(699),
    [anon_sym_DQUOTE] = ACTIONS(699),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(701),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(701),
    [anon_sym_DASH] = ACTIONS(701),
    [anon_sym_SLASH] = ACTIONS(701),
    [sym_identifier] = ACTIONS(701),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(701),
  },
  [232] = {
    [aux_sym_arguments_repeat1] = STATE(220),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_SEMI] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(843),
    [sym_comment] = ACTIONS(41),
  },
  [233] = {
    [ts_builtin_sym_end] = ACTIONS(845),
    [anon_sym_ATimport] = ACTIONS(847),
    [anon_sym_ATmedia] = ACTIONS(847),
    [anon_sym_ATcharset] = ACTIONS(847),
    [anon_sym_ATnamespace] = ACTIONS(847),
    [anon_sym_ATkeyframes] = ACTIONS(847),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(847),
    [anon_sym_RBRACE] = ACTIONS(845),
    [anon_sym_ATsupports] = ACTIONS(847),
    [sym_nesting_selector] = ACTIONS(845),
    [anon_sym_STAR] = ACTIONS(845),
    [anon_sym_DOT] = ACTIONS(845),
    [anon_sym_COLON] = ACTIONS(847),
    [anon_sym_COLON_COLON] = ACTIONS(845),
    [anon_sym_POUND] = ACTIONS(845),
    [anon_sym_LBRACK] = ACTIONS(845),
    [anon_sym_SQUOTE] = ACTIONS(845),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [sym_identifier] = ACTIONS(845),
    [sym_at_keyword] = ACTIONS(847),
    [sym_comment] = ACTIONS(41),
  },
  [234] = {
    [anon_sym_SEMI] = ACTIONS(613),
    [anon_sym_RBRACE] = ACTIONS(849),
    [sym_comment] = ACTIONS(41),
  },
  [235] = {
    [sym__value] = STATE(174),
    [sym_parenthesized_value] = STATE(174),
    [sym_color_value] = STATE(174),
    [sym_string_value] = STATE(174),
    [sym_integer_value] = STATE(174),
    [sym_float_value] = STATE(174),
    [sym_call_expression] = STATE(174),
    [sym_binary_expression] = STATE(174),
    [aux_sym_declaration_repeat1] = STATE(241),
    [anon_sym_COMMA] = ACTIONS(451),
    [anon_sym_SEMI] = ACTIONS(613),
    [anon_sym_RBRACE] = ACTIONS(849),
    [anon_sym_POUND] = ACTIONS(224),
    [sym_important] = ACTIONS(851),
    [anon_sym_LPAREN2] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(461),
  },
  [236] = {
    [sym__descendant_operator] = ACTIONS(853),
    [anon_sym_COMMA] = ACTIONS(853),
    [anon_sym_LBRACE] = ACTIONS(853),
    [anon_sym_DOT] = ACTIONS(853),
    [anon_sym_COLON] = ACTIONS(855),
    [anon_sym_COLON_COLON] = ACTIONS(853),
    [anon_sym_POUND] = ACTIONS(853),
    [anon_sym_LBRACK] = ACTIONS(853),
    [anon_sym_GT] = ACTIONS(853),
    [anon_sym_TILDE] = ACTIONS(853),
    [anon_sym_PLUS] = ACTIONS(853),
    [anon_sym_RPAREN] = ACTIONS(853),
    [sym_comment] = ACTIONS(41),
  },
  [237] = {
    [anon_sym_RBRACE] = ACTIONS(623),
    [sym_from] = ACTIONS(623),
    [sym_to] = ACTIONS(623),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(623),
    [sym_comment] = ACTIONS(41),
  },
  [238] = {
    [anon_sym_RBRACE] = ACTIONS(857),
    [sym_comment] = ACTIONS(41),
  },
  [239] = {
    [anon_sym_COMMA] = ACTIONS(823),
    [anon_sym_SEMI] = ACTIONS(823),
    [anon_sym_RBRACE] = ACTIONS(823),
    [anon_sym_STAR] = ACTIONS(823),
    [anon_sym_POUND] = ACTIONS(823),
    [anon_sym_PLUS] = ACTIONS(825),
    [anon_sym_RPAREN] = ACTIONS(823),
    [sym_important] = ACTIONS(823),
    [anon_sym_LPAREN2] = ACTIONS(823),
    [anon_sym_SQUOTE] = ACTIONS(823),
    [anon_sym_DQUOTE] = ACTIONS(823),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(825),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(825),
    [anon_sym_DASH] = ACTIONS(825),
    [anon_sym_SLASH] = ACTIONS(825),
    [sym_identifier] = ACTIONS(825),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(825),
  },
  [240] = {
    [anon_sym_SEMI] = ACTIONS(782),
    [anon_sym_RBRACE] = ACTIONS(859),
    [sym_comment] = ACTIONS(41),
  },
  [241] = {
    [sym__value] = STATE(174),
    [sym_parenthesized_value] = STATE(174),
    [sym_color_value] = STATE(174),
    [sym_string_value] = STATE(174),
    [sym_integer_value] = STATE(174),
    [sym_float_value] = STATE(174),
    [sym_call_expression] = STATE(174),
    [sym_binary_expression] = STATE(174),
    [aux_sym_declaration_repeat1] = STATE(241),
    [anon_sym_COMMA] = ACTIONS(784),
    [anon_sym_SEMI] = ACTIONS(774),
    [anon_sym_RBRACE] = ACTIONS(774),
    [anon_sym_POUND] = ACTIONS(787),
    [sym_important] = ACTIONS(774),
    [anon_sym_LPAREN2] = ACTIONS(790),
    [anon_sym_SQUOTE] = ACTIONS(793),
    [anon_sym_DQUOTE] = ACTIONS(796),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(802),
    [sym_identifier] = ACTIONS(805),
    [sym_comment] = ACTIONS(41),
    [sym_plain_value] = ACTIONS(808),
  },
  [242] = {
    [anon_sym_RBRACE] = ACTIONS(815),
    [sym_from] = ACTIONS(815),
    [sym_to] = ACTIONS(815),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(815),
    [sym_comment] = ACTIONS(41),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(20),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = false}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 1, .reusable = true}, SHIFT(15),
  [37] = {.count = 1, .reusable = true}, SHIFT(16),
  [39] = {.count = 1, .reusable = false}, SHIFT(17),
  [41] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [43] = {.count = 1, .reusable = true}, SHIFT(22),
  [45] = {.count = 1, .reusable = true}, SHIFT(23),
  [47] = {.count = 1, .reusable = true}, SHIFT(24),
  [49] = {.count = 1, .reusable = true}, SHIFT(25),
  [51] = {.count = 1, .reusable = false}, SHIFT(26),
  [53] = {.count = 1, .reusable = false}, SHIFT(27),
  [55] = {.count = 1, .reusable = false}, SHIFT(28),
  [57] = {.count = 1, .reusable = false}, SHIFT(29),
  [59] = {.count = 1, .reusable = true}, SHIFT(30),
  [61] = {.count = 1, .reusable = false}, SHIFT(31),
  [63] = {.count = 1, .reusable = false}, SHIFT(32),
  [65] = {.count = 1, .reusable = false}, SHIFT(33),
  [67] = {.count = 1, .reusable = false}, SHIFT(35),
  [69] = {.count = 1, .reusable = false}, SHIFT(36),
  [71] = {.count = 1, .reusable = false}, SHIFT(37),
  [73] = {.count = 1, .reusable = true}, SHIFT(38),
  [75] = {.count = 1, .reusable = true}, SHIFT(40),
  [77] = {.count = 1, .reusable = false}, SHIFT(41),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_universal_selector, 1),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_universal_selector, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(43),
  [85] = {.count = 1, .reusable = true}, SHIFT(44),
  [87] = {.count = 1, .reusable = true}, SHIFT(45),
  [89] = {.count = 1, .reusable = true}, SHIFT(46),
  [91] = {.count = 1, .reusable = true}, SHIFT(47),
  [93] = {.count = 1, .reusable = false}, SHIFT(48),
  [95] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [97] = {.count = 1, .reusable = false}, SHIFT(49),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [101] = {.count = 2, .reusable = false}, REDUCE(sym__selector, 1, .alias_sequence_id = 1), SHIFT(50),
  [104] = {.count = 1, .reusable = true}, SHIFT(51),
  [106] = {.count = 1, .reusable = true}, SHIFT(52),
  [108] = {.count = 1, .reusable = false}, SHIFT(53),
  [110] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [112] = {.count = 1, .reusable = true}, SHIFT(56),
  [114] = {.count = 1, .reusable = true}, SHIFT(57),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [118] = {.count = 1, .reusable = true}, SHIFT(58),
  [120] = {.count = 1, .reusable = false}, SHIFT(59),
  [122] = {.count = 1, .reusable = true}, SHIFT(60),
  [124] = {.count = 1, .reusable = true}, SHIFT(61),
  [126] = {.count = 1, .reusable = true}, SHIFT(62),
  [128] = {.count = 1, .reusable = true}, SHIFT(63),
  [130] = {.count = 1, .reusable = true}, SHIFT(64),
  [132] = {.count = 1, .reusable = true}, SHIFT(65),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [136] = {.count = 1, .reusable = true}, SHIFT(68),
  [138] = {.count = 1, .reusable = false}, SHIFT(69),
  [140] = {.count = 1, .reusable = false}, SHIFT(70),
  [142] = {.count = 1, .reusable = false}, SHIFT(71),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 1),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 1),
  [148] = {.count = 1, .reusable = false}, SHIFT(72),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 1),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 1),
  [154] = {.count = 1, .reusable = false}, SHIFT(73),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [158] = {.count = 1, .reusable = true}, SHIFT(74),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [162] = {.count = 1, .reusable = true}, SHIFT(76),
  [164] = {.count = 1, .reusable = true}, SHIFT(77),
  [166] = {.count = 1, .reusable = false}, SHIFT(78),
  [168] = {.count = 1, .reusable = false}, SHIFT(77),
  [170] = {.count = 1, .reusable = false}, SHIFT(80),
  [172] = {.count = 1, .reusable = false}, SHIFT(81),
  [174] = {.count = 1, .reusable = true}, SHIFT(84),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym__query, 1, .alias_sequence_id = 3),
  [178] = {.count = 1, .reusable = true}, SHIFT(85),
  [180] = {.count = 1, .reusable = true}, SHIFT(86),
  [182] = {.count = 1, .reusable = true}, SHIFT(72),
  [184] = {.count = 1, .reusable = true}, SHIFT(73),
  [186] = {.count = 1, .reusable = true}, SHIFT(89),
  [188] = {.count = 1, .reusable = true}, SHIFT(90),
  [190] = {.count = 1, .reusable = false}, SHIFT(90),
  [192] = {.count = 1, .reusable = true}, SHIFT(91),
  [194] = {.count = 1, .reusable = true}, SHIFT(93),
  [196] = {.count = 1, .reusable = true}, SHIFT(94),
  [198] = {.count = 1, .reusable = true}, SHIFT(96),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [208] = {.count = 1, .reusable = true}, SHIFT(98),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [216] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [218] = {.count = 1, .reusable = true}, SHIFT(100),
  [220] = {.count = 1, .reusable = true}, SHIFT(101),
  [222] = {.count = 1, .reusable = true}, SHIFT(102),
  [224] = {.count = 1, .reusable = true}, SHIFT(103),
  [226] = {.count = 1, .reusable = true}, SHIFT(104),
  [228] = {.count = 1, .reusable = true}, SHIFT(105),
  [230] = {.count = 1, .reusable = true}, SHIFT(106),
  [232] = {.count = 1, .reusable = false}, SHIFT(107),
  [234] = {.count = 1, .reusable = false}, SHIFT(108),
  [236] = {.count = 1, .reusable = false}, SHIFT(109),
  [238] = {.count = 1, .reusable = false}, SHIFT(110),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 2),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 2),
  [244] = {.count = 1, .reusable = true}, SHIFT(111),
  [246] = {.count = 1, .reusable = true}, SHIFT(112),
  [248] = {.count = 1, .reusable = true}, SHIFT(115),
  [250] = {.count = 1, .reusable = true}, SHIFT(116),
  [252] = {.count = 1, .reusable = true}, SHIFT(117),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_rule_set, 2),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym_rule_set, 2),
  [258] = {.count = 1, .reusable = true}, SHIFT(120),
  [260] = {.count = 1, .reusable = true}, SHIFT(119),
  [262] = {.count = 1, .reusable = true}, SHIFT(121),
  [264] = {.count = 1, .reusable = true}, SHIFT(122),
  [266] = {.count = 1, .reusable = true}, SHIFT(123),
  [268] = {.count = 1, .reusable = true}, SHIFT(124),
  [270] = {.count = 1, .reusable = true}, SHIFT(125),
  [272] = {.count = 1, .reusable = true}, SHIFT(126),
  [274] = {.count = 1, .reusable = true}, SHIFT(127),
  [276] = {.count = 1, .reusable = true}, SHIFT(128),
  [278] = {.count = 1, .reusable = true}, SHIFT(129),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 2),
  [282] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [284] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [287] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [290] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [293] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [296] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [299] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(20),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(8),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(9),
  [311] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(10),
  [314] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(11),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(12),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(13),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(14),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(15),
  [329] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(16),
  [332] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(17),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_color_value, 2),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_color_value, 2),
  [339] = {.count = 1, .reusable = true}, SHIFT(131),
  [341] = {.count = 1, .reusable = true}, SHIFT(132),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 2),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 2),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 2),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 2),
  [351] = {.count = 1, .reusable = true}, SHIFT(133),
  [353] = {.count = 1, .reusable = false}, SHIFT(134),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 3),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 3),
  [363] = {.count = 1, .reusable = false}, SHIFT(136),
  [365] = {.count = 1, .reusable = true}, SHIFT(137),
  [367] = {.count = 1, .reusable = true}, SHIFT(138),
  [369] = {.count = 1, .reusable = true}, SHIFT(139),
  [371] = {.count = 1, .reusable = true}, SHIFT(141),
  [373] = {.count = 1, .reusable = true}, SHIFT(142),
  [375] = {.count = 1, .reusable = true}, SHIFT(143),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_unary_query, 2),
  [379] = {.count = 1, .reusable = true}, SHIFT(144),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 3),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 3),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_charset_statement, 3),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_charset_statement, 3),
  [389] = {.count = 1, .reusable = true}, SHIFT(149),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 3),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 3),
  [395] = {.count = 1, .reusable = true}, SHIFT(150),
  [397] = {.count = 1, .reusable = true}, SHIFT(151),
  [399] = {.count = 1, .reusable = true}, SHIFT(35),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_keyframes_statement, 3, .alias_sequence_id = 8),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_keyframes_statement, 3, .alias_sequence_id = 8),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_supports_statement, 3),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_supports_statement, 3),
  [409] = {.count = 1, .reusable = true}, SHIFT(158),
  [411] = {.count = 1, .reusable = false}, SHIFT(9),
  [413] = {.count = 1, .reusable = true}, SHIFT(153),
  [415] = {.count = 1, .reusable = true}, SHIFT(154),
  [417] = {.count = 1, .reusable = true}, SHIFT(155),
  [419] = {.count = 1, .reusable = true}, SHIFT(156),
  [421] = {.count = 1, .reusable = false}, SHIFT(157),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [427] = {.count = 1, .reusable = false}, SHIFT(161),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [431] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_string_value, 3),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_string_value, 3),
  [437] = {.count = 1, .reusable = true}, SHIFT(162),
  [439] = {.count = 1, .reusable = false}, SHIFT(163),
  [441] = {.count = 1, .reusable = false}, SHIFT(164),
  [443] = {.count = 1, .reusable = false}, SHIFT(165),
  [445] = {.count = 1, .reusable = false}, SHIFT(166),
  [447] = {.count = 1, .reusable = false}, SHIFT(167),
  [449] = {.count = 1, .reusable = true}, SHIFT(168),
  [451] = {.count = 1, .reusable = true}, SHIFT(170),
  [453] = {.count = 1, .reusable = true}, SHIFT(171),
  [455] = {.count = 1, .reusable = true}, SHIFT(172),
  [457] = {.count = 1, .reusable = false}, SHIFT(172),
  [459] = {.count = 1, .reusable = true}, SHIFT(173),
  [461] = {.count = 1, .reusable = false}, SHIFT(174),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [467] = {.count = 1, .reusable = false}, SHIFT(176),
  [469] = {.count = 1, .reusable = true}, SHIFT(177),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 3),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 3),
  [475] = {.count = 1, .reusable = true}, SHIFT(181),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 3),
  [481] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 3),
  [483] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [491] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [495] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [499] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [501] = {.count = 1, .reusable = true}, SHIFT(184),
  [503] = {.count = 1, .reusable = true}, SHIFT(185),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [507] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_sibling_selector, 3),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_sibling_selector, 3),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_adjacent_sibling_selector, 3),
  [515] = {.count = 1, .reusable = false}, REDUCE(sym_adjacent_sibling_selector, 3),
  [517] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(57),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_value, 3),
  [522] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized_value, 3),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [526] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [528] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [530] = {.count = 1, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [532] = {.count = 1, .reusable = true}, SHIFT(186),
  [534] = {.count = 1, .reusable = true}, SHIFT(187),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [538] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 4),
  [542] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 4),
  [544] = {.count = 1, .reusable = true}, SHIFT(191),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_query, 3),
  [548] = {.count = 1, .reusable = true}, SHIFT(194),
  [550] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_binary_query, 3),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 4),
  [556] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 4),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(85),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 13),
  [563] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 13),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 2),
  [567] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 2),
  [569] = {.count = 1, .reusable = true}, SHIFT(195),
  [571] = {.count = 1, .reusable = true}, SHIFT(197),
  [573] = {.count = 1, .reusable = false}, SHIFT(162),
  [575] = {.count = 1, .reusable = false}, SHIFT(46),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 2),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 2),
  [581] = {.count = 1, .reusable = false}, SHIFT(199),
  [583] = {.count = 1, .reusable = false}, SHIFT(200),
  [585] = {.count = 1, .reusable = true}, SHIFT(201),
  [587] = {.count = 1, .reusable = true}, SHIFT(202),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [593] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1),
  [595] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [597] = {.count = 1, .reusable = true}, SHIFT(205),
  [599] = {.count = 1, .reusable = true}, SHIFT(206),
  [601] = {.count = 1, .reusable = true}, SHIFT(207),
  [603] = {.count = 1, .reusable = true}, SHIFT(208),
  [605] = {.count = 1, .reusable = false}, SHIFT(210),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4, .alias_sequence_id = 14),
  [609] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4, .alias_sequence_id = 14),
  [611] = {.count = 1, .reusable = false}, SHIFT(211),
  [613] = {.count = 1, .reusable = true}, SHIFT(212),
  [615] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 1),
  [617] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 1),
  [619] = {.count = 1, .reusable = true}, SHIFT(213),
  [621] = {.count = 1, .reusable = false}, SHIFT(215),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [625] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [627] = {.count = 1, .reusable = true}, SHIFT(216),
  [629] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [632] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [635] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [638] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [641] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [644] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [646] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [649] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [652] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [655] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [658] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [661] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [664] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [667] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [670] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [673] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [676] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(16),
  [679] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 4),
  [684] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 4),
  [686] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(115),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [691] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [693] = {.count = 1, .reusable = false}, SHIFT(217),
  [695] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 15),
  [697] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 15),
  [699] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [701] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [703] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [705] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(103),
  [708] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(104),
  [711] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(105),
  [714] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(106),
  [717] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(107),
  [720] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(108),
  [723] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(109),
  [726] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(134),
  [729] = {.count = 1, .reusable = true}, SHIFT(219),
  [731] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 5),
  [733] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 5),
  [735] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(137),
  [738] = {.count = 1, .reusable = true}, SHIFT(221),
  [740] = {.count = 1, .reusable = true}, REDUCE(sym_selector_query, 4),
  [742] = {.count = 1, .reusable = true}, SHIFT(223),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block, 2),
  [746] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 3),
  [748] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 3),
  [750] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [752] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(151),
  [755] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(35),
  [758] = {.count = 1, .reusable = true}, SHIFT(226),
  [760] = {.count = 1, .reusable = true}, SHIFT(227),
  [762] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 3),
  [764] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 3),
  [766] = {.count = 1, .reusable = true}, SHIFT(229),
  [768] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [770] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [772] = {.count = 1, .reusable = true}, SHIFT(231),
  [774] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [776] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2),
  [778] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 5, .alias_sequence_id = 14),
  [780] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 5, .alias_sequence_id = 14),
  [782] = {.count = 1, .reusable = true}, SHIFT(233),
  [784] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(170),
  [787] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(103),
  [790] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(104),
  [793] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(105),
  [796] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(106),
  [799] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(107),
  [802] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(108),
  [805] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(109),
  [808] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(174),
  [811] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 3, .alias_sequence_id = 14),
  [813] = {.count = 1, .reusable = true}, SHIFT(234),
  [815] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [817] = {.count = 1, .reusable = false}, REDUCE(sym_block, 4),
  [819] = {.count = 1, .reusable = true}, SHIFT(236),
  [821] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [825] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [827] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(186),
  [830] = {.count = 1, .reusable = true}, REDUCE(sym_feature_query, 5, .alias_sequence_id = 16),
  [832] = {.count = 1, .reusable = true}, SHIFT(237),
  [834] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 4),
  [838] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 4),
  [840] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(201),
  [843] = {.count = 1, .reusable = true}, SHIFT(239),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 6, .alias_sequence_id = 14),
  [847] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 6, .alias_sequence_id = 14),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 4, .alias_sequence_id = 14),
  [851] = {.count = 1, .reusable = true}, SHIFT(240),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 15),
  [855] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 15),
  [857] = {.count = 1, .reusable = true}, SHIFT(242),
  [859] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 5, .alias_sequence_id = 14),
};

void *tree_sitter_css_external_scanner_create();
void tree_sitter_css_external_scanner_destroy(void *);
bool tree_sitter_css_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_css_external_scanner_serialize(void *, char *);
void tree_sitter_css_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_css() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_css_external_scanner_create,
      tree_sitter_css_external_scanner_destroy,
      tree_sitter_css_external_scanner_scan,
      tree_sitter_css_external_scanner_serialize,
      tree_sitter_css_external_scanner_deserialize,
    },
  };
  return &language;
}
