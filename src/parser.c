#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 371
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 135
#define ALIAS_COUNT 9
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

enum ts_symbol_identifiers {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATkeyframes = 7,
  aux_sym_keyframes_statement_token1 = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_from = 11,
  sym_to = 12,
  anon_sym_ATsupports = 13,
  sym_nesting_selector = 14,
  anon_sym_STAR = 15,
  anon_sym_DOT = 16,
  anon_sym_has = 17,
  anon_sym_not = 18,
  anon_sym_is = 19,
  anon_sym_where = 20,
  anon_sym_host = 21,
  anon_sym_host_DASHcontext = 22,
  anon_sym_nth_DASHchild = 23,
  anon_sym_nth_DASHlast_DASHchild = 24,
  anon_sym_COLON_COLON = 25,
  anon_sym_POUND = 26,
  anon_sym_LBRACK = 27,
  anon_sym_EQ = 28,
  anon_sym_TILDE_EQ = 29,
  anon_sym_CARET_EQ = 30,
  anon_sym_PIPE_EQ = 31,
  anon_sym_STAR_EQ = 32,
  anon_sym_DOLLAR_EQ = 33,
  anon_sym_RBRACK = 34,
  anon_sym_GT = 35,
  anon_sym_TILDE = 36,
  anon_sym_PLUS = 37,
  anon_sym_PIPE = 38,
  anon_sym_LPAREN = 39,
  anon_sym_RPAREN = 40,
  anon_sym_even = 41,
  anon_sym_odd = 42,
  anon_sym_of = 43,
  sym__nth_functional_notation = 44,
  anon_sym_COLON = 45,
  sym_important = 46,
  anon_sym_LPAREN2 = 47,
  anon_sym_and = 48,
  anon_sym_or = 49,
  anon_sym_only = 50,
  anon_sym_selector = 51,
  aux_sym_color_value_token1 = 52,
  anon_sym_SQUOTE = 53,
  aux_sym_string_value_token1 = 54,
  anon_sym_DQUOTE = 55,
  aux_sym_string_value_token2 = 56,
  sym_escape_sequence = 57,
  aux_sym_integer_value_token1 = 58,
  aux_sym_float_value_token1 = 59,
  sym_unit = 60,
  anon_sym_LBRACK2 = 61,
  anon_sym_DASH = 62,
  anon_sym_SLASH = 63,
  sym_identifier = 64,
  sym_at_keyword = 65,
  sym_js_comment = 66,
  sym_comment = 67,
  sym_plain_value = 68,
  sym__descendant_operator = 69,
  sym__pseudo_class_selector_colon = 70,
  sym___error_recovery = 71,
  sym_stylesheet = 72,
  sym_import_statement = 73,
  sym_media_statement = 74,
  sym_charset_statement = 75,
  sym_namespace_statement = 76,
  sym_keyframes_statement = 77,
  sym_keyframe_block_list = 78,
  sym_keyframe_block = 79,
  sym_supports_statement = 80,
  sym_postcss_statement = 81,
  sym_at_rule = 82,
  sym_rule_set = 83,
  sym_selectors = 84,
  sym_block = 85,
  sym__selector = 86,
  sym_universal_selector = 87,
  sym_class_selector = 88,
  sym_pseudo_class_selector = 89,
  sym__nth_child_pseudo_class_selector = 90,
  sym_pseudo_element_selector = 91,
  sym_id_selector = 92,
  sym_attribute_selector = 93,
  sym_child_selector = 94,
  sym_descendant_selector = 95,
  sym_sibling_selector = 96,
  sym_adjacent_sibling_selector = 97,
  sym_namespace_selector = 98,
  sym_pseudo_class_arguments = 99,
  sym_pseudo_class_with_selector_arguments = 100,
  sym_pseudo_class_nth_child_arguments = 101,
  sym_pseudo_element_arguments = 102,
  sym_declaration = 103,
  sym_last_declaration = 104,
  sym__query = 105,
  sym_feature_query = 106,
  sym_parenthesized_query = 107,
  sym_binary_query = 108,
  sym_unary_query = 109,
  sym_selector_query = 110,
  sym__value = 111,
  sym_parenthesized_value = 112,
  sym_color_value = 113,
  sym_string_value = 114,
  sym_integer_value = 115,
  sym_float_value = 116,
  sym_grid_value = 117,
  sym_call_expression = 118,
  sym_binary_expression = 119,
  sym_arguments = 120,
  sym_class_name = 121,
  aux_sym_stylesheet_repeat1 = 122,
  aux_sym_import_statement_repeat1 = 123,
  aux_sym_keyframe_block_list_repeat1 = 124,
  aux_sym_postcss_statement_repeat1 = 125,
  aux_sym_selectors_repeat1 = 126,
  aux_sym_block_repeat1 = 127,
  aux_sym_pseudo_class_arguments_repeat1 = 128,
  aux_sym_declaration_repeat1 = 129,
  aux_sym_string_value_repeat1 = 130,
  aux_sym_string_value_repeat2 = 131,
  aux_sym_grid_value_repeat1 = 132,
  aux_sym_arguments_repeat1 = 133,
  aux_sym_class_name_repeat1 = 134,
  alias_sym_attribute_name = 135,
  alias_sym_feature_name = 136,
  alias_sym_function_name = 137,
  alias_sym_id_name = 138,
  alias_sym_keyframes_name = 139,
  alias_sym_keyword_query = 140,
  alias_sym_namespace_name = 141,
  alias_sym_property_name = 142,
  alias_sym_tag_name = 143,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "at_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_has] = "class_name",
  [anon_sym_not] = "not",
  [anon_sym_is] = "class_name",
  [anon_sym_where] = "class_name",
  [anon_sym_host] = "class_name",
  [anon_sym_host_DASHcontext] = "class_name",
  [anon_sym_nth_DASHchild] = "class_name",
  [anon_sym_nth_DASHlast_DASHchild] = "class_name",
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
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_even] = "plain_value",
  [anon_sym_odd] = "plain_value",
  [anon_sym_of] = "of",
  [sym__nth_functional_notation] = "plain_value",
  [anon_sym_COLON] = ":",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_value_token1] = "string_content",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_value_token2] = "string_content",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym_at_keyword] = "at_keyword",
  [sym_js_comment] = "js_comment",
  [sym_comment] = "comment",
  [sym_plain_value] = "plain_value",
  [sym__descendant_operator] = "_descendant_operator",
  [sym__pseudo_class_selector_colon] = ":",
  [sym___error_recovery] = "__error_recovery",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_supports_statement] = "supports_statement",
  [sym_postcss_statement] = "postcss_statement",
  [sym_at_rule] = "at_rule",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym__nth_child_pseudo_class_selector] = "_nth_child_pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_namespace_selector] = "namespace_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_pseudo_class_with_selector_arguments] = "arguments",
  [sym_pseudo_class_nth_child_arguments] = "arguments",
  [sym_pseudo_element_arguments] = "arguments",
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
  [sym_grid_value] = "grid_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [sym_class_name] = "class_name",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_postcss_statement_repeat1] = "postcss_statement_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_string_value_repeat1] = "string_value_repeat1",
  [aux_sym_string_value_repeat2] = "string_value_repeat2",
  [aux_sym_grid_value_repeat1] = "grid_value_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_class_name_repeat1] = "class_name_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ATmedia] = anon_sym_ATmedia,
  [anon_sym_ATcharset] = anon_sym_ATcharset,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATkeyframes] = anon_sym_ATkeyframes,
  [aux_sym_keyframes_statement_token1] = sym_at_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_from] = sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_has] = sym_class_name,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_is] = sym_class_name,
  [anon_sym_where] = sym_class_name,
  [anon_sym_host] = sym_class_name,
  [anon_sym_host_DASHcontext] = sym_class_name,
  [anon_sym_nth_DASHchild] = sym_class_name,
  [anon_sym_nth_DASHlast_DASHchild] = sym_class_name,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_even] = sym_plain_value,
  [anon_sym_odd] = sym_plain_value,
  [anon_sym_of] = anon_sym_of,
  [sym__nth_functional_notation] = sym_plain_value,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_important] = sym_important,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_value_token1] = aux_sym_string_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_value_token2] = aux_sym_string_value_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_js_comment] = sym_js_comment,
  [sym_comment] = sym_comment,
  [sym_plain_value] = sym_plain_value,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym__pseudo_class_selector_colon] = anon_sym_COLON,
  [sym___error_recovery] = sym___error_recovery,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_supports_statement] = sym_supports_statement,
  [sym_postcss_statement] = sym_postcss_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_rule_set] = sym_rule_set,
  [sym_selectors] = sym_selectors,
  [sym_block] = sym_block,
  [sym__selector] = sym__selector,
  [sym_universal_selector] = sym_universal_selector,
  [sym_class_selector] = sym_class_selector,
  [sym_pseudo_class_selector] = sym_pseudo_class_selector,
  [sym__nth_child_pseudo_class_selector] = sym__nth_child_pseudo_class_selector,
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_namespace_selector] = sym_namespace_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_pseudo_class_with_selector_arguments] = sym_arguments,
  [sym_pseudo_class_nth_child_arguments] = sym_arguments,
  [sym_pseudo_element_arguments] = sym_arguments,
  [sym_declaration] = sym_declaration,
  [sym_last_declaration] = sym_declaration,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym__value] = sym__value,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_color_value] = sym_color_value,
  [sym_string_value] = sym_string_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_grid_value] = sym_grid_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [sym_class_name] = sym_class_name,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_postcss_statement_repeat1] = aux_sym_postcss_statement_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_string_value_repeat1] = aux_sym_string_value_repeat1,
  [aux_sym_string_value_repeat2] = aux_sym_string_value_repeat2,
  [aux_sym_grid_value_repeat1] = aux_sym_grid_value_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_class_name_repeat1] = aux_sym_class_name_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_property_name] = alias_sym_property_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
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
  [aux_sym_keyframes_statement_token1] = {
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
  [anon_sym_has] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_host] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_host_DASHcontext] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nth_DASHchild] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nth_DASHlast_DASHchild] = {
    .visible = true,
    .named = true,
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
  [anon_sym_PIPE] = {
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
  [anon_sym_even] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_odd] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [sym__nth_functional_notation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
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
  [sym_js_comment] = {
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
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__pseudo_class_selector_colon] = {
    .visible = true,
    .named = false,
  },
  [sym___error_recovery] = {
    .visible = false,
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
  [sym_postcss_statement] = {
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
  [sym__nth_child_pseudo_class_selector] = {
    .visible = false,
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
  [sym_namespace_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_with_selector_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_nth_child_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_arguments] = {
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
  [sym_grid_value] = {
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
  [sym_class_name] = {
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
  [aux_sym_postcss_statement_repeat1] = {
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
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grid_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
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
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [1] = sym_class_name,
  },
  [3] = {
    [0] = sym_plain_value,
  },
  [4] = {
    [0] = alias_sym_keyword_query,
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
    [2] = sym_class_name,
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

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_namespace_selector, 2,
    sym_namespace_selector,
    alias_sym_attribute_name,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 2,
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 22,
  [26] = 26,
  [27] = 27,
  [28] = 22,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 51,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 57,
  [60] = 57,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 26,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 27,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 110,
  [133] = 117,
  [134] = 130,
  [135] = 131,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 101,
  [140] = 104,
  [141] = 103,
  [142] = 105,
  [143] = 109,
  [144] = 111,
  [145] = 112,
  [146] = 113,
  [147] = 116,
  [148] = 120,
  [149] = 121,
  [150] = 123,
  [151] = 124,
  [152] = 125,
  [153] = 127,
  [154] = 129,
  [155] = 155,
  [156] = 156,
  [157] = 131,
  [158] = 136,
  [159] = 137,
  [160] = 138,
  [161] = 114,
  [162] = 122,
  [163] = 128,
  [164] = 101,
  [165] = 108,
  [166] = 128,
  [167] = 106,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 26,
  [180] = 27,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 191,
  [194] = 190,
  [195] = 192,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 198,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 85,
  [208] = 208,
  [209] = 156,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 172,
  [217] = 155,
  [218] = 218,
  [219] = 219,
  [220] = 210,
  [221] = 213,
  [222] = 27,
  [223] = 170,
  [224] = 171,
  [225] = 225,
  [226] = 226,
  [227] = 176,
  [228] = 168,
  [229] = 173,
  [230] = 178,
  [231] = 177,
  [232] = 174,
  [233] = 85,
  [234] = 26,
  [235] = 175,
  [236] = 169,
  [237] = 155,
  [238] = 156,
  [239] = 172,
  [240] = 171,
  [241] = 169,
  [242] = 175,
  [243] = 168,
  [244] = 177,
  [245] = 26,
  [246] = 27,
  [247] = 178,
  [248] = 176,
  [249] = 170,
  [250] = 173,
  [251] = 174,
  [252] = 252,
  [253] = 253,
  [254] = 253,
  [255] = 255,
  [256] = 256,
  [257] = 256,
  [258] = 258,
  [259] = 252,
  [260] = 258,
  [261] = 252,
  [262] = 255,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 266,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 277,
  [280] = 280,
  [281] = 274,
  [282] = 273,
  [283] = 278,
  [284] = 284,
  [285] = 278,
  [286] = 276,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 288,
  [295] = 295,
  [296] = 289,
  [297] = 291,
  [298] = 298,
  [299] = 299,
  [300] = 103,
  [301] = 295,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 302,
  [306] = 290,
  [307] = 293,
  [308] = 288,
  [309] = 289,
  [310] = 291,
  [311] = 311,
  [312] = 312,
  [313] = 290,
  [314] = 293,
  [315] = 288,
  [316] = 289,
  [317] = 291,
  [318] = 293,
  [319] = 288,
  [320] = 289,
  [321] = 291,
  [322] = 293,
  [323] = 120,
  [324] = 127,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 155,
  [329] = 329,
  [330] = 327,
  [331] = 329,
  [332] = 329,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 340,
  [342] = 155,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 343,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 352,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 354,
  [360] = 358,
  [361] = 361,
  [362] = 362,
  [363] = 361,
  [364] = 350,
  [365] = 365,
  [366] = 350,
  [367] = 362,
  [368] = 352,
  [369] = 354,
  [370] = 370,
};

static TSCharacterRange sym_plain_value_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'"', '\''}, {'+', '+'}, {'-', ':'}, {'<', 'Z'}, {'\\', '\\'}, {'^', 'z'},
  {'|', '|'}, {'~', 0x10ffff},
};

static TSCharacterRange sym_plain_value_character_set_2[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'"', '\''}, {'*', '+'}, {'-', ':'}, {'<', 'Z'}, {'\\', '\\'}, {'^', 'z'},
  {'|', '|'}, {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(134);
      ADVANCE_MAP(
        '!', 79,
        '"', 247,
        '#', 171,
        '$', 50,
        '&', 148,
        '\'', 241,
        '(', 187,
        ')', 188,
        '*', 149,
        '+', 184,
        ',', 136,
        '-', 290,
        '.', 151,
        '/', 292,
        ':', 196,
        ';', 137,
        '=', 173,
        '>', 180,
        '@', 56,
        'E', 38,
        '[', 172,
        '\\', 125,
        ']', 179,
        '^', 51,
        'a', 89,
        'e', 36,
        'f', 103,
        'h', 53,
        'i', 106,
        'n', 94,
        'o', 66,
        's', 70,
        't', 95,
        'w', 77,
        '{', 143,
        '|', 186,
        '}', 144,
        '~', 182,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(131);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 79,
        '"', 247,
        '#', 171,
        '%', 286,
        '\'', 241,
        '(', 198,
        ')', 188,
        '*', 149,
        '+', 184,
        ',', 136,
        '-', 289,
        '.', 122,
        '/', 293,
        ';', 137,
        '[', 287,
        '_', 297,
        '}', 144,
        'E', 282,
        'e', 282,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 79,
        '"', 247,
        '#', 171,
        '&', 148,
        '\'', 241,
        '(', 198,
        ')', 188,
        '*', 149,
        '+', 43,
        '-', 42,
        '.', 151,
        '/', 28,
        ':', 49,
        '[', 172,
        '_', 297,
        'E', 294,
        'e', 294,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 79,
        '"', 247,
        '#', 171,
        '\'', 241,
        '(', 187,
        ')', 188,
        '*', 149,
        '+', 184,
        ',', 136,
        '-', 289,
        '.', 151,
        '/', 293,
        ':', 49,
        '>', 180,
        '[', 172,
        '_', 297,
        '|', 185,
        '~', 181,
        'E', 294,
        'e', 294,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '!', 79,
        '"', 247,
        '#', 171,
        '\'', 241,
        '(', 187,
        ')', 188,
        '*', 149,
        '+', 184,
        ',', 136,
        '-', 289,
        '.', 122,
        '/', 293,
        ';', 137,
        '[', 287,
        '_', 297,
        '}', 144,
        'E', 294,
        'e', 294,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '!', 79,
        '"', 247,
        '#', 171,
        '\'', 241,
        '(', 187,
        '*', 149,
        '+', 184,
        ',', 136,
        '-', 289,
        '.', 122,
        '/', 293,
        ';', 137,
        '[', 287,
        '_', 297,
        'a', 305,
        'o', 309,
        '{', 143,
        'E', 294,
        'e', 294,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '!', 79,
        '"', 247,
        '#', 171,
        '\'', 241,
        '(', 198,
        ')', 188,
        '*', 149,
        '+', 184,
        ',', 136,
        '-', 289,
        '.', 151,
        '/', 293,
        ':', 49,
        '>', 180,
        '[', 172,
        '_', 297,
        '|', 185,
        '~', 181,
        'E', 294,
        'e', 294,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '!', 79,
        '"', 247,
        '#', 171,
        '\'', 241,
        '(', 198,
        ')', 188,
        '*', 149,
        '+', 184,
        ',', 136,
        '-', 289,
        '.', 122,
        '/', 293,
        ';', 137,
        '[', 287,
        '_', 297,
        '}', 144,
        'E', 294,
        'e', 294,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '!', 79,
        '"', 247,
        '#', 171,
        '\'', 241,
        '(', 198,
        ')', 188,
        '+', 43,
        ',', 136,
        '-', 42,
        '.', 122,
        '/', 28,
        ';', 137,
        '[', 287,
        '_', 297,
        '}', 144,
        'E', 294,
        'e', 294,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '!', 79,
        '"', 247,
        '#', 171,
        '\'', 241,
        '(', 198,
        '*', 149,
        '+', 184,
        ',', 136,
        '-', 289,
        '.', 122,
        '/', 293,
        ';', 137,
        '[', 287,
        '_', 297,
        'a', 305,
        'o', 309,
        '{', 143,
        'E', 294,
        'e', 294,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '!', 79,
        '"', 247,
        '#', 171,
        '\'', 241,
        '(', 198,
        '+', 43,
        '-', 42,
        '.', 122,
        '/', 28,
        ';', 137,
        '[', 287,
        '_', 297,
        'n', 306,
        'o', 304,
        's', 301,
        '{', 143,
        'E', 294,
        'e', 294,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '#', 171,
        '$', 50,
        '(', 187,
        ')', 188,
        '*', 52,
        '+', 183,
        ',', 136,
        '-', 128,
        '.', 150,
        '/', 27,
        ':', 49,
        '=', 173,
        '>', 180,
        '[', 172,
        '\\', 125,
        ']', 179,
        '^', 51,
        '{', 143,
        '|', 186,
        '~', 182,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '#', 171,
        '$', 50,
        ')', 188,
        '*', 52,
        '+', 183,
        ',', 136,
        '-', 128,
        '.', 150,
        '/', 27,
        ':', 49,
        '=', 173,
        '>', 180,
        '[', 172,
        '\\', 125,
        ']', 179,
        '^', 51,
        '{', 143,
        '|', 186,
        '~', 182,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '%', 286,
        '(', 198,
        '*', 149,
        '+', 183,
        '-', 291,
        '/', 292,
        ';', 137,
        'n', 275,
        'o', 274,
        's', 271,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '(', 187,
        ')', 188,
        '*', 149,
        '+', 183,
        ',', 136,
        '-', 288,
        '/', 292,
        ':', 195,
        ';', 137,
        ']', 179,
        'a', 88,
        'o', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '(', 187,
        '*', 149,
        '+', 183,
        '-', 291,
        '/', 292,
        ';', 137,
        'n', 341,
        'o', 338,
        's', 326,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '(', 198,
        '*', 149,
        '+', 183,
        '-', 291,
        '/', 292,
        ';', 137,
        'n', 341,
        'o', 338,
        's', 326,
        '{', 143,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '(', 198,
        '*', 149,
        '+', 183,
        '-', 291,
        '/', 292,
        ';', 137,
        'n', 341,
        'o', 338,
        's', 326,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '(', 198,
        '-', 128,
        '/', 27,
        ';', 137,
        'n', 341,
        'o', 338,
        's', 326,
        '{', 143,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        ')', 188,
        '*', 149,
        '+', 183,
        ',', 136,
        '-', 288,
        '/', 292,
        ':', 195,
        ';', 137,
        ']', 179,
        'a', 88,
        'o', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        ')', 188,
        '*', 149,
        '+', 183,
        ',', 136,
        '-', 288,
        '/', 292,
        ';', 137,
        ']', 179,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        ')', 188,
        '*', 149,
        '+', 183,
        ',', 136,
        '-', 288,
        '/', 292,
        ';', 137,
        ']', 179,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        ')', 188,
        ',', 136,
        '/', 27,
        ':', 195,
        ';', 137,
        'a', 88,
        'f', 102,
        'o', 74,
        't', 95,
        '{', 143,
        '}', 144,
        '+', 124,
        '-', 124,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(188);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(285);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(188);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(412);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(409);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(413);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '+') ADVANCE(124);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(125);
      if (lookahead == 'h') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == 'n') ADVANCE(340);
      if (lookahead == 'w') ADVANCE(330);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '/') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '/') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(297);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '{') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '{') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(170);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(177);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(379);
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead == 'k') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(191);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 118:
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 119:
      if (lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 121:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(253);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 128:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 129:
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(48);
      END_STATE();
    case 130:
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 131:
      if (eof) ADVANCE(134);
      ADVANCE_MAP(
        '!', 79,
        '"', 247,
        '#', 171,
        '$', 50,
        '&', 148,
        '\'', 241,
        '(', 198,
        ')', 188,
        '*', 149,
        '+', 184,
        ',', 136,
        '-', 290,
        '.', 151,
        '/', 292,
        ':', 196,
        ';', 137,
        '=', 173,
        '>', 180,
        '@', 56,
        'E', 39,
        '[', 172,
        '\\', 125,
        ']', 179,
        '^', 51,
        'a', 88,
        'e', 37,
        'f', 102,
        'h', 53,
        'i', 106,
        'n', 94,
        'o', 66,
        's', 70,
        't', 95,
        'w', 77,
        '{', 143,
        '|', 186,
        '}', 144,
        '~', 182,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 132:
      if (eof) ADVANCE(134);
      ADVANCE_MAP(
        '"', 247,
        '#', 171,
        '&', 148,
        '\'', 241,
        '(', 187,
        ')', 188,
        '*', 149,
        '+', 183,
        ',', 136,
        '-', 128,
        '.', 150,
        '/', 27,
        ':', 196,
        ';', 137,
        '>', 180,
        '@', 56,
        '[', 172,
        '\\', 125,
        ']', 179,
        '{', 143,
        '|', 185,
        '}', 144,
        '~', 181,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 133:
      if (eof) ADVANCE(134);
      ADVANCE_MAP(
        '"', 247,
        '#', 171,
        '&', 148,
        '\'', 241,
        ')', 188,
        '*', 149,
        '+', 183,
        ',', 136,
        '-', 128,
        '.', 150,
        '/', 27,
        ':', 196,
        ';', 137,
        '>', 180,
        '@', 56,
        '[', 172,
        '\\', 125,
        ']', 179,
        '{', 143,
        '|', 185,
        '}', 144,
        '~', 181,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_has);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_even);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_odd);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (lookahead == '+') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(170);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(244);
      if (lookahead == '/') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(246);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(243);
      if (lookahead == '/') ADVANCE(246);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(243);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(250);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(252);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(249);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(249);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == 'n') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(286);
      if (lookahead == 'c') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(286);
      if (lookahead == 'e') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(286);
      if (lookahead == 'e') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(286);
      if (lookahead == 'l') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(286);
      if (lookahead == 'l') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(286);
      if (lookahead == 'o') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(286);
      if (lookahead == 'o') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(286);
      if (lookahead == 'r') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(286);
      if (lookahead == 't') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(286);
      if (lookahead == 't') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(286);
      if (lookahead == 'y') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(284);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '/') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      if (lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(284);
      if (lookahead == '/') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(297);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(409);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(48);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '/') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'c') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == 'y') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(314);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(383);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(371);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(394);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(395);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(361);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(387);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(372);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(374);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(375);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'o') ADVANCE(393);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'p') ADVANCE(385);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'p') ADVANCE(363);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(400);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(401);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(403);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'u') ADVANCE(390);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'y') ADVANCE(377);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'y') ADVANCE(378);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '/') ADVANCE(410);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '!' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(409);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '!' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(415);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(130);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(411);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(415);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 132, .external_lex_state = 2},
  [2] = {.lex_state = 132, .external_lex_state = 2},
  [3] = {.lex_state = 132, .external_lex_state = 2},
  [4] = {.lex_state = 132, .external_lex_state = 2},
  [5] = {.lex_state = 132, .external_lex_state = 2},
  [6] = {.lex_state = 132, .external_lex_state = 2},
  [7] = {.lex_state = 132, .external_lex_state = 2},
  [8] = {.lex_state = 132, .external_lex_state = 2},
  [9] = {.lex_state = 132, .external_lex_state = 2},
  [10] = {.lex_state = 132, .external_lex_state = 2},
  [11] = {.lex_state = 4, .external_lex_state = 2},
  [12] = {.lex_state = 4, .external_lex_state = 2},
  [13] = {.lex_state = 4, .external_lex_state = 2},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 5, .external_lex_state = 3},
  [21] = {.lex_state = 13, .external_lex_state = 3},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 13, .external_lex_state = 3},
  [24] = {.lex_state = 8, .external_lex_state = 3},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 8, .external_lex_state = 3},
  [27] = {.lex_state = 8, .external_lex_state = 3},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 132, .external_lex_state = 2},
  [30] = {.lex_state = 132, .external_lex_state = 2},
  [31] = {.lex_state = 132, .external_lex_state = 2},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 132, .external_lex_state = 2},
  [35] = {.lex_state = 132, .external_lex_state = 2},
  [36] = {.lex_state = 132, .external_lex_state = 2},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 132, .external_lex_state = 2},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 132, .external_lex_state = 2},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 132, .external_lex_state = 2},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 132, .external_lex_state = 2},
  [45] = {.lex_state = 132, .external_lex_state = 2},
  [46] = {.lex_state = 13, .external_lex_state = 3},
  [47] = {.lex_state = 13, .external_lex_state = 3},
  [48] = {.lex_state = 13, .external_lex_state = 3},
  [49] = {.lex_state = 13, .external_lex_state = 3},
  [50] = {.lex_state = 13, .external_lex_state = 3},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 13, .external_lex_state = 3},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 13, .external_lex_state = 3},
  [62] = {.lex_state = 13, .external_lex_state = 3},
  [63] = {.lex_state = 13, .external_lex_state = 3},
  [64] = {.lex_state = 13, .external_lex_state = 3},
  [65] = {.lex_state = 13, .external_lex_state = 3},
  [66] = {.lex_state = 13, .external_lex_state = 3},
  [67] = {.lex_state = 13, .external_lex_state = 3},
  [68] = {.lex_state = 13, .external_lex_state = 3},
  [69] = {.lex_state = 13, .external_lex_state = 3},
  [70] = {.lex_state = 13, .external_lex_state = 3},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 13, .external_lex_state = 3},
  [73] = {.lex_state = 13, .external_lex_state = 3},
  [74] = {.lex_state = 13, .external_lex_state = 3},
  [75] = {.lex_state = 13, .external_lex_state = 3},
  [76] = {.lex_state = 13, .external_lex_state = 3},
  [77] = {.lex_state = 13, .external_lex_state = 3},
  [78] = {.lex_state = 13, .external_lex_state = 3},
  [79] = {.lex_state = 13, .external_lex_state = 3},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 13, .external_lex_state = 3},
  [82] = {.lex_state = 13, .external_lex_state = 3},
  [83] = {.lex_state = 13, .external_lex_state = 3},
  [84] = {.lex_state = 13, .external_lex_state = 3},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 13, .external_lex_state = 3},
  [87] = {.lex_state = 13, .external_lex_state = 3},
  [88] = {.lex_state = 13, .external_lex_state = 3},
  [89] = {.lex_state = 13, .external_lex_state = 3},
  [90] = {.lex_state = 13, .external_lex_state = 3},
  [91] = {.lex_state = 13, .external_lex_state = 3},
  [92] = {.lex_state = 13, .external_lex_state = 3},
  [93] = {.lex_state = 13, .external_lex_state = 3},
  [94] = {.lex_state = 13, .external_lex_state = 3},
  [95] = {.lex_state = 13, .external_lex_state = 3},
  [96] = {.lex_state = 13, .external_lex_state = 3},
  [97] = {.lex_state = 13, .external_lex_state = 3},
  [98] = {.lex_state = 13, .external_lex_state = 3},
  [99] = {.lex_state = 13, .external_lex_state = 3},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 132, .external_lex_state = 2},
  [104] = {.lex_state = 132, .external_lex_state = 2},
  [105] = {.lex_state = 132, .external_lex_state = 2},
  [106] = {.lex_state = 132, .external_lex_state = 2},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 132, .external_lex_state = 2},
  [110] = {.lex_state = 132, .external_lex_state = 2},
  [111] = {.lex_state = 132, .external_lex_state = 2},
  [112] = {.lex_state = 132, .external_lex_state = 2},
  [113] = {.lex_state = 132, .external_lex_state = 2},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 132, .external_lex_state = 2},
  [117] = {.lex_state = 132, .external_lex_state = 2},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 132, .external_lex_state = 2},
  [120] = {.lex_state = 132, .external_lex_state = 2},
  [121] = {.lex_state = 132, .external_lex_state = 2},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 132, .external_lex_state = 2},
  [124] = {.lex_state = 132, .external_lex_state = 2},
  [125] = {.lex_state = 132, .external_lex_state = 2},
  [126] = {.lex_state = 132, .external_lex_state = 2},
  [127] = {.lex_state = 132, .external_lex_state = 2},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 132, .external_lex_state = 2},
  [130] = {.lex_state = 132, .external_lex_state = 2},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 132, .external_lex_state = 2},
  [133] = {.lex_state = 132, .external_lex_state = 2},
  [134] = {.lex_state = 132, .external_lex_state = 2},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 132, .external_lex_state = 2},
  [137] = {.lex_state = 132, .external_lex_state = 2},
  [138] = {.lex_state = 132, .external_lex_state = 2},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 132, .external_lex_state = 2},
  [141] = {.lex_state = 132, .external_lex_state = 2},
  [142] = {.lex_state = 132, .external_lex_state = 2},
  [143] = {.lex_state = 132, .external_lex_state = 2},
  [144] = {.lex_state = 132, .external_lex_state = 2},
  [145] = {.lex_state = 132, .external_lex_state = 2},
  [146] = {.lex_state = 132, .external_lex_state = 2},
  [147] = {.lex_state = 132, .external_lex_state = 2},
  [148] = {.lex_state = 132, .external_lex_state = 2},
  [149] = {.lex_state = 132, .external_lex_state = 2},
  [150] = {.lex_state = 132, .external_lex_state = 2},
  [151] = {.lex_state = 132, .external_lex_state = 2},
  [152] = {.lex_state = 132, .external_lex_state = 2},
  [153] = {.lex_state = 132, .external_lex_state = 2},
  [154] = {.lex_state = 132, .external_lex_state = 2},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 132, .external_lex_state = 2},
  [159] = {.lex_state = 132, .external_lex_state = 2},
  [160] = {.lex_state = 132, .external_lex_state = 2},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 132, .external_lex_state = 2},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 13, .external_lex_state = 3},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 13, .external_lex_state = 3},
  [188] = {.lex_state = 13, .external_lex_state = 3},
  [189] = {.lex_state = 13, .external_lex_state = 3},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 18},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 18},
  [196] = {.lex_state = 20},
  [197] = {.lex_state = 132, .external_lex_state = 3},
  [198] = {.lex_state = 132, .external_lex_state = 3},
  [199] = {.lex_state = 33},
  [200] = {.lex_state = 132, .external_lex_state = 3},
  [201] = {.lex_state = 132, .external_lex_state = 3},
  [202] = {.lex_state = 132, .external_lex_state = 3},
  [203] = {.lex_state = 33},
  [204] = {.lex_state = 132, .external_lex_state = 3},
  [205] = {.lex_state = 132, .external_lex_state = 3},
  [206] = {.lex_state = 132, .external_lex_state = 3},
  [207] = {.lex_state = 17},
  [208] = {.lex_state = 132, .external_lex_state = 3},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 20},
  [211] = {.lex_state = 20},
  [212] = {.lex_state = 132, .external_lex_state = 3},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 20},
  [215] = {.lex_state = 132, .external_lex_state = 3},
  [216] = {.lex_state = 18},
  [217] = {.lex_state = 15},
  [218] = {.lex_state = 20},
  [219] = {.lex_state = 20},
  [220] = {.lex_state = 20},
  [221] = {.lex_state = 20},
  [222] = {.lex_state = 18},
  [223] = {.lex_state = 18},
  [224] = {.lex_state = 18},
  [225] = {.lex_state = 16},
  [226] = {.lex_state = 132, .external_lex_state = 3},
  [227] = {.lex_state = 18},
  [228] = {.lex_state = 18},
  [229] = {.lex_state = 18},
  [230] = {.lex_state = 18},
  [231] = {.lex_state = 18},
  [232] = {.lex_state = 18},
  [233] = {.lex_state = 16},
  [234] = {.lex_state = 18},
  [235] = {.lex_state = 18},
  [236] = {.lex_state = 18},
  [237] = {.lex_state = 23},
  [238] = {.lex_state = 23},
  [239] = {.lex_state = 16},
  [240] = {.lex_state = 16},
  [241] = {.lex_state = 16},
  [242] = {.lex_state = 16},
  [243] = {.lex_state = 16},
  [244] = {.lex_state = 16},
  [245] = {.lex_state = 16},
  [246] = {.lex_state = 16},
  [247] = {.lex_state = 16},
  [248] = {.lex_state = 16},
  [249] = {.lex_state = 16},
  [250] = {.lex_state = 16},
  [251] = {.lex_state = 16},
  [252] = {.lex_state = 16},
  [253] = {.lex_state = 24},
  [254] = {.lex_state = 24},
  [255] = {.lex_state = 24},
  [256] = {.lex_state = 24},
  [257] = {.lex_state = 24},
  [258] = {.lex_state = 132},
  [259] = {.lex_state = 16},
  [260] = {.lex_state = 132},
  [261] = {.lex_state = 16},
  [262] = {.lex_state = 24},
  [263] = {.lex_state = 24},
  [264] = {.lex_state = 24},
  [265] = {.lex_state = 16},
  [266] = {.lex_state = 24},
  [267] = {.lex_state = 24},
  [268] = {.lex_state = 24},
  [269] = {.lex_state = 24},
  [270] = {.lex_state = 24},
  [271] = {.lex_state = 24},
  [272] = {.lex_state = 24},
  [273] = {.lex_state = 132},
  [274] = {.lex_state = 24},
  [275] = {.lex_state = 31},
  [276] = {.lex_state = 132},
  [277] = {.lex_state = 16},
  [278] = {.lex_state = 16},
  [279] = {.lex_state = 16},
  [280] = {.lex_state = 16},
  [281] = {.lex_state = 24},
  [282] = {.lex_state = 132},
  [283] = {.lex_state = 16},
  [284] = {.lex_state = 16},
  [285] = {.lex_state = 16},
  [286] = {.lex_state = 132},
  [287] = {.lex_state = 24},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 132},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 24},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 24},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 24},
  [299] = {.lex_state = 132},
  [300] = {.lex_state = 24},
  [301] = {.lex_state = 24},
  [302] = {.lex_state = 132},
  [303] = {.lex_state = 132},
  [304] = {.lex_state = 132},
  [305] = {.lex_state = 132},
  [306] = {.lex_state = 132},
  [307] = {.lex_state = 2},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 2},
  [310] = {.lex_state = 1},
  [311] = {.lex_state = 132},
  [312] = {.lex_state = 1},
  [313] = {.lex_state = 132},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 1},
  [316] = {.lex_state = 2},
  [317] = {.lex_state = 1},
  [318] = {.lex_state = 2},
  [319] = {.lex_state = 1},
  [320] = {.lex_state = 2},
  [321] = {.lex_state = 1},
  [322] = {.lex_state = 2},
  [323] = {.lex_state = 24},
  [324] = {.lex_state = 24},
  [325] = {.lex_state = 132},
  [326] = {.lex_state = 2},
  [327] = {.lex_state = 132},
  [328] = {.lex_state = 25},
  [329] = {.lex_state = 132},
  [330] = {.lex_state = 132},
  [331] = {.lex_state = 132},
  [332] = {.lex_state = 132},
  [333] = {.lex_state = 132},
  [334] = {.lex_state = 132},
  [335] = {.lex_state = 132},
  [336] = {.lex_state = 132},
  [337] = {.lex_state = 24},
  [338] = {.lex_state = 132},
  [339] = {.lex_state = 132},
  [340] = {.lex_state = 132},
  [341] = {.lex_state = 132},
  [342] = {.lex_state = 45},
  [343] = {.lex_state = 132},
  [344] = {.lex_state = 132},
  [345] = {.lex_state = 24},
  [346] = {.lex_state = 132},
  [347] = {.lex_state = 132},
  [348] = {.lex_state = 34},
  [349] = {.lex_state = 132},
  [350] = {.lex_state = 132},
  [351] = {.lex_state = 132},
  [352] = {.lex_state = 47},
  [353] = {.lex_state = 47},
  [354] = {.lex_state = 132},
  [355] = {.lex_state = 20},
  [356] = {.lex_state = 132},
  [357] = {.lex_state = 132},
  [358] = {.lex_state = 132},
  [359] = {.lex_state = 132},
  [360] = {.lex_state = 132},
  [361] = {.lex_state = 132},
  [362] = {.lex_state = 132},
  [363] = {.lex_state = 132},
  [364] = {.lex_state = 132},
  [365] = {.lex_state = 132},
  [366] = {.lex_state = 132},
  [367] = {.lex_state = 132},
  [368] = {.lex_state = 47},
  [369] = {.lex_state = 132},
  [370] = {.lex_state = 132},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_has] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_host] = ACTIONS(1),
    [anon_sym_host_DASHcontext] = ACTIONS(1),
    [anon_sym_nth_DASHchild] = ACTIONS(1),
    [anon_sym_nth_DASHlast_DASHchild] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_even] = ACTIONS(1),
    [anon_sym_odd] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_js_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym__descendant_operator] = ACTIONS(1),
    [sym__pseudo_class_selector_colon] = ACTIONS(1),
    [sym___error_recovery] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(356),
    [sym_import_statement] = STATE(9),
    [sym_media_statement] = STATE(9),
    [sym_charset_statement] = STATE(9),
    [sym_namespace_statement] = STATE(9),
    [sym_keyframes_statement] = STATE(9),
    [sym_supports_statement] = STATE(9),
    [sym_at_rule] = STATE(9),
    [sym_rule_set] = STATE(9),
    [sym_selectors] = STATE(346),
    [sym__selector] = STATE(202),
    [sym_universal_selector] = STATE(202),
    [sym_class_selector] = STATE(202),
    [sym_pseudo_class_selector] = STATE(202),
    [sym_pseudo_element_selector] = STATE(202),
    [sym_id_selector] = STATE(202),
    [sym_attribute_selector] = STATE(202),
    [sym_child_selector] = STATE(202),
    [sym_descendant_selector] = STATE(202),
    [sym_sibling_selector] = STATE(202),
    [sym_adjacent_sibling_selector] = STATE(202),
    [sym_namespace_selector] = STATE(202),
    [sym_declaration] = STATE(9),
    [sym_string_value] = STATE(202),
    [aux_sym_stylesheet_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_ATimport] = ACTIONS(9),
    [anon_sym_ATmedia] = ACTIONS(11),
    [anon_sym_ATcharset] = ACTIONS(13),
    [anon_sym_ATnamespace] = ACTIONS(15),
    [anon_sym_ATkeyframes] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(17),
    [anon_sym_ATsupports] = ACTIONS(19),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_at_keyword] = ACTIONS(39),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__pseudo_class_selector_colon] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(43), 1,
      anon_sym_ATimport,
    ACTIONS(45), 1,
      anon_sym_ATmedia,
    ACTIONS(47), 1,
      anon_sym_ATcharset,
    ACTIONS(49), 1,
      anon_sym_ATnamespace,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_ATsupports,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_at_keyword,
    STATE(343), 1,
      sym_selectors,
    STATE(354), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(3), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(202), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [94] = 23,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(43), 1,
      anon_sym_ATimport,
    ACTIONS(45), 1,
      anon_sym_ATmedia,
    ACTIONS(47), 1,
      anon_sym_ATcharset,
    ACTIONS(49), 1,
      anon_sym_ATnamespace,
    ACTIONS(55), 1,
      anon_sym_ATsupports,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_at_keyword,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(343), 1,
      sym_selectors,
    STATE(350), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(202), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [188] = 23,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(43), 1,
      anon_sym_ATimport,
    ACTIONS(45), 1,
      anon_sym_ATmedia,
    ACTIONS(47), 1,
      anon_sym_ATcharset,
    ACTIONS(49), 1,
      anon_sym_ATnamespace,
    ACTIONS(55), 1,
      anon_sym_ATsupports,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(343), 1,
      sym_selectors,
    STATE(369), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(5), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(202), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [282] = 23,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(43), 1,
      anon_sym_ATimport,
    ACTIONS(45), 1,
      anon_sym_ATmedia,
    ACTIONS(47), 1,
      anon_sym_ATcharset,
    ACTIONS(49), 1,
      anon_sym_ATnamespace,
    ACTIONS(55), 1,
      anon_sym_ATsupports,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_at_keyword,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(343), 1,
      sym_selectors,
    STATE(364), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(202), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [376] = 23,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(43), 1,
      anon_sym_ATimport,
    ACTIONS(45), 1,
      anon_sym_ATmedia,
    ACTIONS(47), 1,
      anon_sym_ATcharset,
    ACTIONS(49), 1,
      anon_sym_ATnamespace,
    ACTIONS(55), 1,
      anon_sym_ATsupports,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_at_keyword,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(343), 1,
      sym_selectors,
    STATE(359), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(7), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(202), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [470] = 23,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(43), 1,
      anon_sym_ATimport,
    ACTIONS(45), 1,
      anon_sym_ATmedia,
    ACTIONS(47), 1,
      anon_sym_ATcharset,
    ACTIONS(49), 1,
      anon_sym_ATnamespace,
    ACTIONS(55), 1,
      anon_sym_ATsupports,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_at_keyword,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(343), 1,
      sym_selectors,
    STATE(366), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(202), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [564] = 22,
    ACTIONS(71), 1,
      anon_sym_ATimport,
    ACTIONS(74), 1,
      anon_sym_ATmedia,
    ACTIONS(77), 1,
      anon_sym_ATcharset,
    ACTIONS(80), 1,
      anon_sym_ATnamespace,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      anon_sym_ATsupports,
    ACTIONS(91), 1,
      sym_nesting_selector,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(100), 1,
      anon_sym_COLON_COLON,
    ACTIONS(103), 1,
      anon_sym_POUND,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(118), 1,
      sym_at_keyword,
    ACTIONS(121), 1,
      sym__pseudo_class_selector_colon,
    STATE(343), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(83), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(202), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [655] = 22,
    ACTIONS(9), 1,
      anon_sym_ATimport,
    ACTIONS(11), 1,
      anon_sym_ATmedia,
    ACTIONS(13), 1,
      anon_sym_ATcharset,
    ACTIONS(15), 1,
      anon_sym_ATnamespace,
    ACTIONS(19), 1,
      anon_sym_ATsupports,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      sym_at_keyword,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(346), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
    STATE(202), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [745] = 22,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      anon_sym_ATimport,
    ACTIONS(131), 1,
      anon_sym_ATmedia,
    ACTIONS(134), 1,
      anon_sym_ATcharset,
    ACTIONS(137), 1,
      anon_sym_ATnamespace,
    ACTIONS(143), 1,
      anon_sym_ATsupports,
    ACTIONS(146), 1,
      sym_nesting_selector,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(152), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_COLON_COLON,
    ACTIONS(158), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(164), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym_identifier,
    ACTIONS(173), 1,
      sym_at_keyword,
    ACTIONS(176), 1,
      sym__pseudo_class_selector_colon,
    STATE(346), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
    STATE(202), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [835] = 23,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(179), 1,
      sym_nesting_selector,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(199), 1,
      anon_sym_LBRACK2,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      sym_plain_value,
    STATE(24), 1,
      sym_string_value,
    STATE(32), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(186), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(204), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [923] = 23,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(199), 1,
      anon_sym_LBRACK2,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(205), 1,
      sym_nesting_selector,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string_value,
    STATE(33), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(186), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(206), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [1011] = 22,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(199), 1,
      anon_sym_LBRACK2,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(209), 1,
      sym_nesting_selector,
    STATE(24), 1,
      sym_string_value,
    STATE(53), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(186), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(208), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [1096] = 20,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(229), 1,
      sym_identifier,
    STATE(56), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(132), 1,
      sym_block,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(254), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(186), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1171] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      sym_important,
    ACTIONS(235), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_integer_value_token1,
    ACTIONS(243), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACK2,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_plain_value,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(337), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(278), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1234] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_integer_value_token1,
    ACTIONS(243), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACK2,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(251), 1,
      sym_important,
    ACTIONS(253), 1,
      sym_plain_value,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(337), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(283), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1297] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    ACTIONS(261), 1,
      anon_sym_STAR,
    ACTIONS(265), 1,
      sym_important,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      sym_plain_value,
    STATE(43), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(263), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(184), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1365] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_STAR,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      sym_plain_value,
    ACTIONS(271), 1,
      anon_sym_SEMI,
    ACTIONS(273), 1,
      sym_important,
    STATE(51), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(263), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(184), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1430] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    ACTIONS(261), 1,
      anon_sym_STAR,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      sym_plain_value,
    ACTIONS(275), 1,
      sym_important,
    STATE(54), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(263), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(184), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1495] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_arguments,
    ACTIONS(281), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(279), 4,
      anon_sym_STAR,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(285), 8,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(277), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [1540] = 5,
    STATE(23), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(291), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(287), 19,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1577] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(313), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(186), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1638] = 5,
    STATE(23), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(299), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(301), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(297), 19,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1675] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(308), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(306), 5,
      anon_sym_STAR,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(310), 7,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(304), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [1714] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(290), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(186), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1775] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(316), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(314), 15,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1810] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(320), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(318), 15,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1845] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(306), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(186), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1906] = 13,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(324), 1,
      sym_nesting_selector,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(205), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [1959] = 13,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(330), 1,
      sym_nesting_selector,
    ACTIONS(332), 1,
      sym_identifier,
    STATE(187), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(226), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_string_value,
  [2011] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(334), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(76), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2061] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(336), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(186), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2121] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(338), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(186), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2181] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(342), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(200), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2231] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(344), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(215), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2281] = 13,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(330), 1,
      sym_nesting_selector,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(189), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(226), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_string_value,
  [2333] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_POUND,
    ACTIONS(353), 1,
      sym_important,
    ACTIONS(356), 1,
      anon_sym_LPAREN2,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(365), 1,
      aux_sym_integer_value_token1,
    ACTIONS(368), 1,
      aux_sym_float_value_token1,
    ACTIONS(371), 1,
      anon_sym_LBRACK2,
    ACTIONS(374), 1,
      sym_identifier,
    ACTIONS(377), 1,
      sym_plain_value,
    STATE(37), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(348), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(186), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2389] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(380), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(212), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2439] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_POUND,
    ACTIONS(390), 1,
      sym_important,
    ACTIONS(393), 1,
      anon_sym_LPAREN2,
    ACTIONS(396), 1,
      anon_sym_SQUOTE,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    ACTIONS(402), 1,
      aux_sym_integer_value_token1,
    ACTIONS(405), 1,
      aux_sym_float_value_token1,
    ACTIONS(408), 1,
      anon_sym_LBRACK2,
    ACTIONS(411), 1,
      sym_identifier,
    ACTIONS(414), 1,
      sym_plain_value,
    STATE(39), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(385), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(184), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2497] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(417), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(90), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2547] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(37), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(419), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(186), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2603] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(421), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(91), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2653] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      sym_plain_value,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    ACTIONS(427), 1,
      sym_important,
    STATE(39), 1,
      aux_sym_declaration_repeat1,
    STATE(184), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2713] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(429), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(63), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2763] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(431), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(67), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2813] = 5,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(433), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2848] = 5,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(439), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2883] = 5,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(445), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2918] = 5,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(449), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2953] = 5,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(457), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(455), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2988] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      sym_plain_value,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    ACTIONS(461), 1,
      sym_important,
    STATE(39), 1,
      aux_sym_declaration_repeat1,
    STATE(184), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3045] = 5,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(463), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3080] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(37), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(467), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(186), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3135] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      sym_plain_value,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(469), 1,
      sym_important,
    STATE(39), 1,
      aux_sym_declaration_repeat1,
    STATE(184), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3192] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_arguments,
    ACTIONS(473), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(471), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(279), 6,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
    ACTIONS(285), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [3232] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(475), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(186), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3286] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(186), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3340] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(186), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3394] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(186), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3448] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(186), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3502] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(485), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3531] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(489), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3560] = 4,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(493), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3591] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(499), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3620] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(503), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3649] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(507), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3678] = 4,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(513), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(511), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3709] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(515), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3738] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(521), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(519), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3767] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(525), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(523), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3796] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(41), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(186), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3847] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(314), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3876] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(529), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(527), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3905] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(533), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(531), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3934] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(457), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(455), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3963] = 4,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(535), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3994] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(318), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4023] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(539), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4052] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(543), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4081] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_important,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(58), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(186), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4132] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(549), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(547), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4161] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(553), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(551), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4190] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(557), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(555), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4219] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(561), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(559), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4248] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_arguments,
    ACTIONS(285), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(279), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [4283] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(565), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(563), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4312] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(569), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(567), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4341] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(277), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4370] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(573), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(571), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4399] = 4,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(577), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(575), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4430] = 4,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(581), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(579), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4461] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(583), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4490] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(587), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4519] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(449), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4548] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(593), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(591), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4577] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(597), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(595), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4606] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(601), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(599), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4635] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(605), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(603), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4664] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(607), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4693] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_integer_value_token1,
    ACTIONS(243), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACK2,
    ACTIONS(611), 1,
      sym_important,
    ACTIONS(613), 1,
      anon_sym_LPAREN2,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(617), 1,
      sym_plain_value,
    STATE(284), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4741] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_integer_value_token1,
    ACTIONS(243), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACK2,
    ACTIONS(613), 1,
      anon_sym_LPAREN2,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(619), 1,
      sym_important,
    ACTIONS(621), 1,
      sym_plain_value,
    STATE(259), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4789] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_integer_value_token1,
    ACTIONS(243), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACK2,
    ACTIONS(613), 1,
      anon_sym_LPAREN2,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(623), 1,
      sym_important,
    ACTIONS(625), 1,
      sym_plain_value,
    STATE(280), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4837] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(629), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(627), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4865] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(633), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(631), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4893] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(637), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(635), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4921] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(641), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(639), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4949] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_integer_value_token1,
    ACTIONS(243), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACK2,
    ACTIONS(613), 1,
      anon_sym_LPAREN2,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(643), 1,
      sym_important,
    ACTIONS(645), 1,
      sym_plain_value,
    STATE(265), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4997] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(647), 1,
      sym_important,
    ACTIONS(649), 1,
      sym_plain_value,
    STATE(18), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5045] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(653), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(651), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5073] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(657), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(655), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5101] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(661), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(659), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5129] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(665), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(663), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5157] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(669), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(667), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5185] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_POUND,
    ACTIONS(673), 1,
      sym_important,
    ACTIONS(675), 1,
      anon_sym_LPAREN2,
    ACTIONS(677), 1,
      anon_sym_SQUOTE,
    ACTIONS(679), 1,
      anon_sym_DQUOTE,
    ACTIONS(681), 1,
      aux_sym_integer_value_token1,
    ACTIONS(683), 1,
      aux_sym_float_value_token1,
    ACTIONS(685), 1,
      anon_sym_LBRACK2,
    ACTIONS(687), 1,
      sym_identifier,
    ACTIONS(689), 1,
      sym_plain_value,
    STATE(195), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5233] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(691), 1,
      sym_important,
    ACTIONS(693), 1,
      sym_plain_value,
    STATE(185), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5281] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(697), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(695), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5309] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(701), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(699), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5337] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(703), 1,
      sym_important,
    ACTIONS(705), 1,
      sym_plain_value,
    STATE(17), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5385] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(657), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(655), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5413] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(709), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(707), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5441] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(713), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(711), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5469] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_integer_value_token1,
    ACTIONS(243), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACK2,
    ACTIONS(613), 1,
      anon_sym_LPAREN2,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(715), 1,
      sym_important,
    ACTIONS(717), 1,
      sym_plain_value,
    STATE(279), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5517] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(721), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(719), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5545] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(725), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(723), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5573] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(729), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(727), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5601] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(731), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(733), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5629] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(737), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(735), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5657] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_integer_value_token1,
    ACTIONS(243), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACK2,
    ACTIONS(613), 1,
      anon_sym_LPAREN2,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(739), 1,
      sym_important,
    ACTIONS(741), 1,
      sym_plain_value,
    STATE(285), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5705] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(745), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(743), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5733] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(749), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(747), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5761] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_POUND,
    ACTIONS(675), 1,
      anon_sym_LPAREN2,
    ACTIONS(677), 1,
      anon_sym_SQUOTE,
    ACTIONS(679), 1,
      anon_sym_DQUOTE,
    ACTIONS(681), 1,
      aux_sym_integer_value_token1,
    ACTIONS(683), 1,
      aux_sym_float_value_token1,
    ACTIONS(685), 1,
      anon_sym_LBRACK2,
    ACTIONS(687), 1,
      sym_identifier,
    ACTIONS(751), 1,
      sym_important,
    ACTIONS(753), 1,
      sym_plain_value,
    STATE(227), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5809] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(657), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(655), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5837] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(701), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(699), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5865] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(749), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(747), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5893] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_integer_value_token1,
    ACTIONS(243), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACK2,
    ACTIONS(613), 1,
      anon_sym_LPAREN2,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(755), 1,
      sym_important,
    ACTIONS(757), 1,
      sym_plain_value,
    STATE(248), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5941] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(759), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(761), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5969] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(763), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(765), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5997] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(767), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(769), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6025] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_integer_value_token1,
    ACTIONS(243), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACK2,
    ACTIONS(613), 1,
      anon_sym_LPAREN2,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(771), 1,
      sym_important,
    ACTIONS(773), 1,
      sym_plain_value,
    STATE(261), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6073] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(633), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(631), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6101] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(629), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(627), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6129] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(637), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(635), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6157] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(653), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(651), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6185] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(661), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(659), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6213] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(665), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(663), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6241] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(669), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(667), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6269] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(697), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(695), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6297] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(709), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(707), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6325] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(713), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(711), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6353] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(721), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(719), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6381] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(725), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(723), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6409] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(729), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(727), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6437] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(737), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(735), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6465] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(745), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(743), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6493] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_unit,
    ACTIONS(777), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(775), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [6525] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(785), 1,
      sym_unit,
    ACTIONS(783), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(781), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [6557] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(787), 1,
      sym_important,
    ACTIONS(789), 1,
      sym_plain_value,
    STATE(176), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6605] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(759), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(761), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6633] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(763), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(765), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6661] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(767), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(769), 11,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [6689] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_POUND,
    ACTIONS(675), 1,
      anon_sym_LPAREN2,
    ACTIONS(677), 1,
      anon_sym_SQUOTE,
    ACTIONS(679), 1,
      anon_sym_DQUOTE,
    ACTIONS(681), 1,
      aux_sym_integer_value_token1,
    ACTIONS(683), 1,
      aux_sym_float_value_token1,
    ACTIONS(685), 1,
      anon_sym_LBRACK2,
    ACTIONS(687), 1,
      sym_identifier,
    ACTIONS(791), 1,
      sym_important,
    ACTIONS(793), 1,
      sym_plain_value,
    STATE(192), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6737] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_integer_value_token1,
    ACTIONS(243), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACK2,
    ACTIONS(613), 1,
      anon_sym_LPAREN2,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(795), 1,
      sym_important,
    ACTIONS(797), 1,
      sym_plain_value,
    STATE(277), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6785] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      sym_important,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_integer_value_token1,
    ACTIONS(243), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACK2,
    ACTIONS(249), 1,
      sym_plain_value,
    ACTIONS(613), 1,
      anon_sym_LPAREN2,
    ACTIONS(615), 1,
      sym_identifier,
    STATE(278), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6833] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_integer_value_token1,
    ACTIONS(243), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACK2,
    ACTIONS(613), 1,
      anon_sym_LPAREN2,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(799), 1,
      sym_important,
    ACTIONS(801), 1,
      sym_plain_value,
    STATE(252), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6881] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN2,
    ACTIONS(195), 1,
      aux_sym_integer_value_token1,
    ACTIONS(197), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LBRACK2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(803), 1,
      sym_important,
    ACTIONS(805), 1,
      sym_plain_value,
    STATE(19), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6929] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_integer_value_token1,
    ACTIONS(243), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACK2,
    ACTIONS(251), 1,
      sym_important,
    ACTIONS(253), 1,
      sym_plain_value,
    ACTIONS(613), 1,
      anon_sym_LPAREN2,
    ACTIONS(615), 1,
      sym_identifier,
    STATE(283), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6977] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(641), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(639), 11,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [7005] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(809), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(807), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7034] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(813), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(811), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7063] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(817), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(815), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7092] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(821), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(819), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7121] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(825), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(823), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7150] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(829), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(827), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7179] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(833), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(831), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7208] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(837), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(835), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7237] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(841), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(839), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7266] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(845), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(843), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7295] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(849), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(847), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7324] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(316), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(314), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7353] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(320), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(318), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7382] = 5,
    ACTIONS(853), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(277), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7412] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    ACTIONS(310), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(306), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7444] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_SEMI,
    ACTIONS(857), 1,
      anon_sym_RBRACE,
    ACTIONS(310), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(306), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7476] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_STAR,
    ACTIONS(263), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(861), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(859), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7508] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_STAR,
    ACTIONS(263), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(863), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(385), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7540] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_STAR,
    ACTIONS(263), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(867), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(865), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7572] = 5,
    ACTIONS(853), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(308), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(304), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7602] = 5,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(869), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(277), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7632] = 5,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(308), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(869), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(304), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7662] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    ACTIONS(310), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(306), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7691] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_SEMI,
    ACTIONS(310), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(306), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7720] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(873), 1,
      anon_sym_SEMI,
    ACTIONS(877), 1,
      anon_sym_LPAREN2,
    ACTIONS(881), 1,
      sym_identifier,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(875), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(879), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(281), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7759] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_SEMI,
    ACTIONS(310), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(306), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7788] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(310), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(306), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7817] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(877), 1,
      anon_sym_LPAREN2,
    ACTIONS(881), 1,
      sym_identifier,
    ACTIONS(885), 1,
      anon_sym_SEMI,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(875), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(879), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(274), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7856] = 9,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(877), 1,
      anon_sym_LPAREN2,
    ACTIONS(881), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_SEMI,
    ACTIONS(889), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(253), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7891] = 3,
    ACTIONS(891), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(277), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [7913] = 3,
    ACTIONS(893), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(277), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [7935] = 8,
    ACTIONS(899), 1,
      sym_escape_sequence,
    ACTIONS(901), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_class_name_repeat1,
    STATE(50), 1,
      sym_class_name,
    STATE(75), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(897), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(895), 6,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host,
      anon_sym_host_DASHcontext,
  [7967] = 12,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(905), 1,
      anon_sym_COLON_COLON,
    ACTIONS(907), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      anon_sym_LBRACK,
    ACTIONS(911), 1,
      anon_sym_GT,
    ACTIONS(913), 1,
      anon_sym_TILDE,
    ACTIONS(915), 1,
      anon_sym_PLUS,
    ACTIONS(917), 1,
      anon_sym_PIPE,
    ACTIONS(919), 1,
      sym__descendant_operator,
    ACTIONS(921), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(903), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [8007] = 3,
    ACTIONS(923), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(277), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [8029] = 14,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(905), 1,
      anon_sym_COLON_COLON,
    ACTIONS(907), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      anon_sym_LBRACK,
    ACTIONS(911), 1,
      anon_sym_GT,
    ACTIONS(913), 1,
      anon_sym_TILDE,
    ACTIONS(915), 1,
      anon_sym_PLUS,
    ACTIONS(917), 1,
      anon_sym_PIPE,
    ACTIONS(919), 1,
      sym__descendant_operator,
    ACTIONS(921), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    ACTIONS(927), 1,
      anon_sym_LBRACE,
    STATE(334), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8073] = 8,
    ACTIONS(899), 1,
      sym_escape_sequence,
    ACTIONS(901), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_class_name_repeat1,
    STATE(49), 1,
      sym_class_name,
    STATE(94), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(897), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(929), 6,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host,
      anon_sym_host_DASHcontext,
  [8105] = 14,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(905), 1,
      anon_sym_COLON_COLON,
    ACTIONS(907), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      anon_sym_LBRACK,
    ACTIONS(911), 1,
      anon_sym_GT,
    ACTIONS(913), 1,
      anon_sym_TILDE,
    ACTIONS(915), 1,
      anon_sym_PLUS,
    ACTIONS(917), 1,
      anon_sym_PIPE,
    ACTIONS(919), 1,
      sym__descendant_operator,
    ACTIONS(921), 1,
      sym__pseudo_class_selector_colon,
    STATE(336), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8149] = 14,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(905), 1,
      anon_sym_COLON_COLON,
    ACTIONS(907), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      anon_sym_LBRACK,
    ACTIONS(911), 1,
      anon_sym_GT,
    ACTIONS(913), 1,
      anon_sym_TILDE,
    ACTIONS(915), 1,
      anon_sym_PLUS,
    ACTIONS(917), 1,
      anon_sym_PIPE,
    ACTIONS(919), 1,
      sym__descendant_operator,
    ACTIONS(921), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    STATE(333), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8193] = 14,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(905), 1,
      anon_sym_COLON_COLON,
    ACTIONS(907), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      anon_sym_LBRACK,
    ACTIONS(911), 1,
      anon_sym_GT,
    ACTIONS(913), 1,
      anon_sym_TILDE,
    ACTIONS(915), 1,
      anon_sym_PLUS,
    ACTIONS(917), 1,
      anon_sym_PIPE,
    ACTIONS(919), 1,
      sym__descendant_operator,
    ACTIONS(921), 1,
      sym__pseudo_class_selector_colon,
    STATE(338), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8237] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    STATE(232), 1,
      sym_arguments,
    ACTIONS(279), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(285), 7,
      anon_sym_not,
      anon_sym_LPAREN2,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8264] = 12,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(905), 1,
      anon_sym_COLON_COLON,
    ACTIONS(907), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      anon_sym_LBRACK,
    ACTIONS(911), 1,
      anon_sym_GT,
    ACTIONS(913), 1,
      anon_sym_TILDE,
    ACTIONS(915), 1,
      anon_sym_PLUS,
    ACTIONS(917), 1,
      anon_sym_PIPE,
    ACTIONS(919), 1,
      sym__descendant_operator,
    ACTIONS(921), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8303] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym_unit,
    ACTIONS(781), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(783), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8327] = 6,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(877), 1,
      anon_sym_LPAREN2,
    ACTIONS(881), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(269), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8353] = 6,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(877), 1,
      anon_sym_LPAREN2,
    ACTIONS(937), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(337), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8379] = 12,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(905), 1,
      anon_sym_COLON_COLON,
    ACTIONS(907), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      anon_sym_LBRACK,
    ACTIONS(911), 1,
      anon_sym_GT,
    ACTIONS(913), 1,
      anon_sym_TILDE,
    ACTIONS(915), 1,
      anon_sym_PLUS,
    ACTIONS(917), 1,
      anon_sym_PIPE,
    ACTIONS(919), 1,
      sym__descendant_operator,
    ACTIONS(921), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8417] = 6,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(877), 1,
      anon_sym_LPAREN2,
    ACTIONS(881), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(301), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8443] = 6,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(877), 1,
      anon_sym_LPAREN2,
    ACTIONS(881), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(264), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8469] = 12,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(905), 1,
      anon_sym_COLON_COLON,
    ACTIONS(907), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      anon_sym_LBRACK,
    ACTIONS(911), 1,
      anon_sym_GT,
    ACTIONS(913), 1,
      anon_sym_TILDE,
    ACTIONS(915), 1,
      anon_sym_PLUS,
    ACTIONS(917), 1,
      anon_sym_PIPE,
    ACTIONS(919), 1,
      sym__descendant_operator,
    ACTIONS(921), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8507] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(823), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(825), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8529] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(943), 1,
      sym_unit,
    ACTIONS(775), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(777), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8553] = 6,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(877), 1,
      anon_sym_LPAREN2,
    ACTIONS(881), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(287), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8579] = 6,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(877), 1,
      anon_sym_LPAREN2,
    ACTIONS(881), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(272), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8605] = 6,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(877), 1,
      anon_sym_LPAREN2,
    ACTIONS(881), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(266), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8631] = 6,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(877), 1,
      anon_sym_LPAREN2,
    ACTIONS(881), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(295), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8657] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(318), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(320), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8678] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(815), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(817), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8699] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(819), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(821), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8720] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    ACTIONS(947), 1,
      anon_sym_COLON,
    STATE(251), 1,
      sym_arguments,
    ACTIONS(279), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(471), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [8749] = 11,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(905), 1,
      anon_sym_COLON_COLON,
    ACTIONS(907), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      anon_sym_LBRACK,
    ACTIONS(911), 1,
      anon_sym_GT,
    ACTIONS(913), 1,
      anon_sym_TILDE,
    ACTIONS(915), 1,
      anon_sym_PLUS,
    ACTIONS(917), 1,
      anon_sym_PIPE,
    ACTIONS(919), 1,
      sym__descendant_operator,
    ACTIONS(921), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8784] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(839), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(841), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8805] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(807), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(809), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8826] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(827), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(829), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8847] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(847), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(849), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8868] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(843), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(845), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8889] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(831), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(833), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8910] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
    STATE(251), 1,
      sym_arguments,
    ACTIONS(279), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8935] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(314), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(316), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8956] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(835), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(837), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8977] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(811), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(813), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8998] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_SLASH,
    ACTIONS(949), 1,
      sym_unit,
    ACTIONS(775), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9020] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_SLASH,
    ACTIONS(951), 1,
      sym_unit,
    ACTIONS(781), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9042] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_SLASH,
    ACTIONS(823), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_DASH,
  [9062] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_SLASH,
    ACTIONS(819), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9081] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_SLASH,
    ACTIONS(811), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9100] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_SLASH,
    ACTIONS(835), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9119] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_SLASH,
    ACTIONS(807), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9138] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_SLASH,
    ACTIONS(843), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9157] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SLASH,
    ACTIONS(314), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9176] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(318), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9195] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_SLASH,
    ACTIONS(847), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9214] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_SLASH,
    ACTIONS(839), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9233] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_SLASH,
    ACTIONS(815), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9252] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_SLASH,
    ACTIONS(827), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9271] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_SLASH,
    ACTIONS(831), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9290] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(957), 1,
      anon_sym_RBRACK,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    STATE(331), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9314] = 7,
    ACTIONS(889), 1,
      anon_sym_LBRACE,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(963), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_block,
    STATE(273), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_and,
      anon_sym_or,
  [9338] = 7,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_SEMI,
    STATE(142), 1,
      sym_block,
    STATE(282), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_and,
      anon_sym_or,
  [9362] = 6,
    ACTIONS(969), 1,
      anon_sym_RBRACE,
    ACTIONS(973), 1,
      aux_sym_integer_value_token1,
    STATE(347), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(971), 2,
      sym_from,
      sym_to,
    STATE(256), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9384] = 6,
    ACTIONS(973), 1,
      aux_sym_integer_value_token1,
    ACTIONS(975), 1,
      anon_sym_RBRACE,
    STATE(347), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(971), 2,
      sym_from,
      sym_to,
    STATE(263), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9406] = 6,
    ACTIONS(973), 1,
      aux_sym_integer_value_token1,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
    STATE(347), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(971), 2,
      sym_from,
      sym_to,
    STATE(263), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9428] = 7,
    ACTIONS(677), 1,
      anon_sym_SQUOTE,
    ACTIONS(679), 1,
      anon_sym_DQUOTE,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    ACTIONS(979), 1,
      sym_identifier,
    STATE(232), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(360), 2,
      sym_string_value,
      sym_call_expression,
  [9452] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(981), 1,
      anon_sym_RBRACK,
    STATE(332), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9476] = 7,
    ACTIONS(677), 1,
      anon_sym_SQUOTE,
    ACTIONS(679), 1,
      anon_sym_DQUOTE,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    ACTIONS(979), 1,
      sym_identifier,
    STATE(232), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(358), 2,
      sym_string_value,
      sym_call_expression,
  [9500] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(983), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9524] = 6,
    ACTIONS(973), 1,
      aux_sym_integer_value_token1,
    ACTIONS(985), 1,
      anon_sym_RBRACE,
    STATE(347), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(971), 2,
      sym_from,
      sym_to,
    STATE(257), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9546] = 6,
    ACTIONS(987), 1,
      anon_sym_RBRACE,
    ACTIONS(992), 1,
      aux_sym_integer_value_token1,
    STATE(347), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(989), 2,
      sym_from,
      sym_to,
    STATE(263), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9568] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(995), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9581] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(997), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9600] = 6,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      sym_block,
    STATE(302), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_and,
      anon_sym_or,
  [9621] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(471), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9634] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(999), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9647] = 6,
    ACTIONS(889), 1,
      anon_sym_LBRACE,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      sym_block,
    STATE(305), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_and,
      anon_sym_or,
  [9668] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1001), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9681] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1003), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9694] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1005), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9707] = 6,
    ACTIONS(889), 1,
      anon_sym_LBRACE,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(1007), 1,
      anon_sym_SEMI,
    STATE(121), 1,
      sym_block,
    STATE(299), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9727] = 5,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(1009), 1,
      anon_sym_SEMI,
    STATE(330), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_and,
      anon_sym_or,
  [9745] = 4,
    ACTIONS(1013), 1,
      aux_sym_integer_value_token1,
    STATE(345), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1011), 3,
      anon_sym_even,
      anon_sym_odd,
      sym__nth_functional_notation,
  [9761] = 5,
    ACTIONS(677), 1,
      anon_sym_SQUOTE,
    ACTIONS(679), 1,
      anon_sym_DQUOTE,
    ACTIONS(1015), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(362), 2,
      sym_string_value,
      sym_call_expression,
  [9779] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(1017), 1,
      anon_sym_SEMI,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9797] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9815] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(1021), 1,
      anon_sym_SEMI,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9833] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(1023), 1,
      anon_sym_RBRACK,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9851] = 5,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(1025), 1,
      anon_sym_SEMI,
    STATE(327), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_and,
      anon_sym_or,
  [9869] = 6,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(1027), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_block,
    STATE(299), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9889] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9907] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(1031), 1,
      anon_sym_RBRACK,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9925] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9943] = 5,
    ACTIONS(677), 1,
      anon_sym_SQUOTE,
    ACTIONS(679), 1,
      anon_sym_DQUOTE,
    ACTIONS(1035), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(367), 2,
      sym_string_value,
      sym_call_expression,
  [9961] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1037), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [9975] = 4,
    ACTIONS(1039), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1041), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [9990] = 4,
    ACTIONS(1043), 1,
      anon_sym_SQUOTE,
    STATE(326), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1045), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10005] = 4,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10020] = 4,
    ACTIONS(1043), 1,
      anon_sym_DQUOTE,
    STATE(312), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1049), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10035] = 3,
    ACTIONS(947), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(471), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10048] = 4,
    ACTIONS(1051), 1,
      anon_sym_SQUOTE,
    STATE(296), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1053), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10063] = 4,
    ACTIONS(1051), 1,
      anon_sym_DQUOTE,
    STATE(297), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1055), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10078] = 4,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_and,
      anon_sym_or,
  [10093] = 4,
    ACTIONS(1057), 1,
      anon_sym_SQUOTE,
    STATE(326), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1045), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10108] = 4,
    ACTIONS(1057), 1,
      anon_sym_DQUOTE,
    STATE(312), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1049), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10123] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1059), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10134] = 4,
    ACTIONS(1061), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1037), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10149] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(627), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10160] = 4,
    ACTIONS(889), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_and,
      anon_sym_or,
  [10175] = 5,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      sym_block,
    STATE(299), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10192] = 4,
    STATE(21), 1,
      aux_sym_class_name_repeat1,
    STATE(78), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(899), 2,
      sym_escape_sequence,
      sym_identifier,
  [10207] = 4,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1064), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10222] = 5,
    ACTIONS(889), 1,
      anon_sym_LBRACE,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      sym_block,
    STATE(299), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10239] = 4,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10254] = 4,
    ACTIONS(1069), 1,
      anon_sym_SQUOTE,
    STATE(309), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1071), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10269] = 4,
    ACTIONS(1069), 1,
      anon_sym_DQUOTE,
    STATE(310), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1073), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10284] = 4,
    ACTIONS(1075), 1,
      anon_sym_SQUOTE,
    STATE(326), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1045), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10299] = 4,
    ACTIONS(1075), 1,
      anon_sym_DQUOTE,
    STATE(312), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1049), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10314] = 4,
    ACTIONS(1077), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(903), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [10329] = 4,
    ACTIONS(1080), 1,
      anon_sym_DQUOTE,
    STATE(312), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1082), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10344] = 4,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10359] = 4,
    ACTIONS(1087), 1,
      anon_sym_SQUOTE,
    STATE(316), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1089), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10374] = 4,
    ACTIONS(1087), 1,
      anon_sym_DQUOTE,
    STATE(317), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1091), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10389] = 4,
    ACTIONS(1093), 1,
      anon_sym_SQUOTE,
    STATE(326), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1045), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10404] = 4,
    ACTIONS(1093), 1,
      anon_sym_DQUOTE,
    STATE(312), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1049), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10419] = 4,
    ACTIONS(1095), 1,
      anon_sym_SQUOTE,
    STATE(320), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1097), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10434] = 4,
    ACTIONS(1095), 1,
      anon_sym_DQUOTE,
    STATE(321), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1099), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10449] = 4,
    ACTIONS(1101), 1,
      anon_sym_SQUOTE,
    STATE(326), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1045), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10464] = 4,
    ACTIONS(1101), 1,
      anon_sym_DQUOTE,
    STATE(312), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1049), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10479] = 4,
    ACTIONS(1039), 1,
      anon_sym_SQUOTE,
    STATE(289), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1103), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10494] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(707), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10505] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(735), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10516] = 4,
    STATE(21), 1,
      aux_sym_class_name_repeat1,
    STATE(87), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(899), 2,
      sym_escape_sequence,
      sym_identifier,
  [10531] = 4,
    ACTIONS(1105), 1,
      anon_sym_SQUOTE,
    STATE(326), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1107), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10546] = 4,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(1110), 1,
      anon_sym_SEMI,
    STATE(299), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10560] = 4,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    ACTIONS(777), 1,
      anon_sym_of,
    ACTIONS(1112), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10574] = 4,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(1114), 1,
      anon_sym_RBRACK,
    STATE(339), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10588] = 4,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(1116), 1,
      anon_sym_SEMI,
    STATE(299), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10602] = 4,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RBRACK,
    STATE(339), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10616] = 4,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      anon_sym_RBRACK,
    STATE(339), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10630] = 4,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10644] = 4,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_LBRACE,
    STATE(311), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10658] = 4,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    STATE(335), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10672] = 4,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
    STATE(335), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10686] = 3,
    ACTIONS(1131), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_and,
      anon_sym_or,
  [10698] = 4,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    STATE(335), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10712] = 4,
    ACTIONS(997), 1,
      anon_sym_RBRACK,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10726] = 3,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10737] = 3,
    ACTIONS(1140), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10748] = 3,
    ACTIONS(775), 1,
      anon_sym_LBRACE,
    ACTIONS(1142), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10759] = 3,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10770] = 3,
    ACTIONS(1144), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_pseudo_class_nth_child_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10781] = 3,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    ACTIONS(1148), 1,
      anon_sym_of,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10792] = 3,
    ACTIONS(889), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10803] = 3,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    STATE(298), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10814] = 3,
    ACTIONS(1152), 1,
      aux_sym_color_value_token1,
    ACTIONS(1154), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10825] = 3,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    STATE(232), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10836] = 2,
    ACTIONS(1156), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10844] = 2,
    ACTIONS(1158), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10852] = 2,
    ACTIONS(1160), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10860] = 2,
    ACTIONS(1162), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10868] = 2,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10876] = 2,
    ACTIONS(1164), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10884] = 2,
    ACTIONS(1166), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10892] = 2,
    ACTIONS(1168), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10900] = 2,
    ACTIONS(1170), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10908] = 2,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10916] = 2,
    ACTIONS(1172), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10924] = 2,
    ACTIONS(1174), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10932] = 2,
    ACTIONS(1176), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10940] = 2,
    ACTIONS(1178), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10948] = 2,
    ACTIONS(1180), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10956] = 2,
    ACTIONS(1182), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10964] = 2,
    ACTIONS(1184), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10972] = 2,
    ACTIONS(1186), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10980] = 2,
    ACTIONS(1188), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10988] = 2,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10996] = 2,
    ACTIONS(1190), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 188,
  [SMALL_STATE(5)] = 282,
  [SMALL_STATE(6)] = 376,
  [SMALL_STATE(7)] = 470,
  [SMALL_STATE(8)] = 564,
  [SMALL_STATE(9)] = 655,
  [SMALL_STATE(10)] = 745,
  [SMALL_STATE(11)] = 835,
  [SMALL_STATE(12)] = 923,
  [SMALL_STATE(13)] = 1011,
  [SMALL_STATE(14)] = 1096,
  [SMALL_STATE(15)] = 1171,
  [SMALL_STATE(16)] = 1234,
  [SMALL_STATE(17)] = 1297,
  [SMALL_STATE(18)] = 1365,
  [SMALL_STATE(19)] = 1430,
  [SMALL_STATE(20)] = 1495,
  [SMALL_STATE(21)] = 1540,
  [SMALL_STATE(22)] = 1577,
  [SMALL_STATE(23)] = 1638,
  [SMALL_STATE(24)] = 1675,
  [SMALL_STATE(25)] = 1714,
  [SMALL_STATE(26)] = 1775,
  [SMALL_STATE(27)] = 1810,
  [SMALL_STATE(28)] = 1845,
  [SMALL_STATE(29)] = 1906,
  [SMALL_STATE(30)] = 1959,
  [SMALL_STATE(31)] = 2011,
  [SMALL_STATE(32)] = 2061,
  [SMALL_STATE(33)] = 2121,
  [SMALL_STATE(34)] = 2181,
  [SMALL_STATE(35)] = 2231,
  [SMALL_STATE(36)] = 2281,
  [SMALL_STATE(37)] = 2333,
  [SMALL_STATE(38)] = 2389,
  [SMALL_STATE(39)] = 2439,
  [SMALL_STATE(40)] = 2497,
  [SMALL_STATE(41)] = 2547,
  [SMALL_STATE(42)] = 2603,
  [SMALL_STATE(43)] = 2653,
  [SMALL_STATE(44)] = 2713,
  [SMALL_STATE(45)] = 2763,
  [SMALL_STATE(46)] = 2813,
  [SMALL_STATE(47)] = 2848,
  [SMALL_STATE(48)] = 2883,
  [SMALL_STATE(49)] = 2918,
  [SMALL_STATE(50)] = 2953,
  [SMALL_STATE(51)] = 2988,
  [SMALL_STATE(52)] = 3045,
  [SMALL_STATE(53)] = 3080,
  [SMALL_STATE(54)] = 3135,
  [SMALL_STATE(55)] = 3192,
  [SMALL_STATE(56)] = 3232,
  [SMALL_STATE(57)] = 3286,
  [SMALL_STATE(58)] = 3340,
  [SMALL_STATE(59)] = 3394,
  [SMALL_STATE(60)] = 3448,
  [SMALL_STATE(61)] = 3502,
  [SMALL_STATE(62)] = 3531,
  [SMALL_STATE(63)] = 3560,
  [SMALL_STATE(64)] = 3591,
  [SMALL_STATE(65)] = 3620,
  [SMALL_STATE(66)] = 3649,
  [SMALL_STATE(67)] = 3678,
  [SMALL_STATE(68)] = 3709,
  [SMALL_STATE(69)] = 3738,
  [SMALL_STATE(70)] = 3767,
  [SMALL_STATE(71)] = 3796,
  [SMALL_STATE(72)] = 3847,
  [SMALL_STATE(73)] = 3876,
  [SMALL_STATE(74)] = 3905,
  [SMALL_STATE(75)] = 3934,
  [SMALL_STATE(76)] = 3963,
  [SMALL_STATE(77)] = 3994,
  [SMALL_STATE(78)] = 4023,
  [SMALL_STATE(79)] = 4052,
  [SMALL_STATE(80)] = 4081,
  [SMALL_STATE(81)] = 4132,
  [SMALL_STATE(82)] = 4161,
  [SMALL_STATE(83)] = 4190,
  [SMALL_STATE(84)] = 4219,
  [SMALL_STATE(85)] = 4248,
  [SMALL_STATE(86)] = 4283,
  [SMALL_STATE(87)] = 4312,
  [SMALL_STATE(88)] = 4341,
  [SMALL_STATE(89)] = 4370,
  [SMALL_STATE(90)] = 4399,
  [SMALL_STATE(91)] = 4430,
  [SMALL_STATE(92)] = 4461,
  [SMALL_STATE(93)] = 4490,
  [SMALL_STATE(94)] = 4519,
  [SMALL_STATE(95)] = 4548,
  [SMALL_STATE(96)] = 4577,
  [SMALL_STATE(97)] = 4606,
  [SMALL_STATE(98)] = 4635,
  [SMALL_STATE(99)] = 4664,
  [SMALL_STATE(100)] = 4693,
  [SMALL_STATE(101)] = 4741,
  [SMALL_STATE(102)] = 4789,
  [SMALL_STATE(103)] = 4837,
  [SMALL_STATE(104)] = 4865,
  [SMALL_STATE(105)] = 4893,
  [SMALL_STATE(106)] = 4921,
  [SMALL_STATE(107)] = 4949,
  [SMALL_STATE(108)] = 4997,
  [SMALL_STATE(109)] = 5045,
  [SMALL_STATE(110)] = 5073,
  [SMALL_STATE(111)] = 5101,
  [SMALL_STATE(112)] = 5129,
  [SMALL_STATE(113)] = 5157,
  [SMALL_STATE(114)] = 5185,
  [SMALL_STATE(115)] = 5233,
  [SMALL_STATE(116)] = 5281,
  [SMALL_STATE(117)] = 5309,
  [SMALL_STATE(118)] = 5337,
  [SMALL_STATE(119)] = 5385,
  [SMALL_STATE(120)] = 5413,
  [SMALL_STATE(121)] = 5441,
  [SMALL_STATE(122)] = 5469,
  [SMALL_STATE(123)] = 5517,
  [SMALL_STATE(124)] = 5545,
  [SMALL_STATE(125)] = 5573,
  [SMALL_STATE(126)] = 5601,
  [SMALL_STATE(127)] = 5629,
  [SMALL_STATE(128)] = 5657,
  [SMALL_STATE(129)] = 5705,
  [SMALL_STATE(130)] = 5733,
  [SMALL_STATE(131)] = 5761,
  [SMALL_STATE(132)] = 5809,
  [SMALL_STATE(133)] = 5837,
  [SMALL_STATE(134)] = 5865,
  [SMALL_STATE(135)] = 5893,
  [SMALL_STATE(136)] = 5941,
  [SMALL_STATE(137)] = 5969,
  [SMALL_STATE(138)] = 5997,
  [SMALL_STATE(139)] = 6025,
  [SMALL_STATE(140)] = 6073,
  [SMALL_STATE(141)] = 6101,
  [SMALL_STATE(142)] = 6129,
  [SMALL_STATE(143)] = 6157,
  [SMALL_STATE(144)] = 6185,
  [SMALL_STATE(145)] = 6213,
  [SMALL_STATE(146)] = 6241,
  [SMALL_STATE(147)] = 6269,
  [SMALL_STATE(148)] = 6297,
  [SMALL_STATE(149)] = 6325,
  [SMALL_STATE(150)] = 6353,
  [SMALL_STATE(151)] = 6381,
  [SMALL_STATE(152)] = 6409,
  [SMALL_STATE(153)] = 6437,
  [SMALL_STATE(154)] = 6465,
  [SMALL_STATE(155)] = 6493,
  [SMALL_STATE(156)] = 6525,
  [SMALL_STATE(157)] = 6557,
  [SMALL_STATE(158)] = 6605,
  [SMALL_STATE(159)] = 6633,
  [SMALL_STATE(160)] = 6661,
  [SMALL_STATE(161)] = 6689,
  [SMALL_STATE(162)] = 6737,
  [SMALL_STATE(163)] = 6785,
  [SMALL_STATE(164)] = 6833,
  [SMALL_STATE(165)] = 6881,
  [SMALL_STATE(166)] = 6929,
  [SMALL_STATE(167)] = 6977,
  [SMALL_STATE(168)] = 7005,
  [SMALL_STATE(169)] = 7034,
  [SMALL_STATE(170)] = 7063,
  [SMALL_STATE(171)] = 7092,
  [SMALL_STATE(172)] = 7121,
  [SMALL_STATE(173)] = 7150,
  [SMALL_STATE(174)] = 7179,
  [SMALL_STATE(175)] = 7208,
  [SMALL_STATE(176)] = 7237,
  [SMALL_STATE(177)] = 7266,
  [SMALL_STATE(178)] = 7295,
  [SMALL_STATE(179)] = 7324,
  [SMALL_STATE(180)] = 7353,
  [SMALL_STATE(181)] = 7382,
  [SMALL_STATE(182)] = 7412,
  [SMALL_STATE(183)] = 7444,
  [SMALL_STATE(184)] = 7476,
  [SMALL_STATE(185)] = 7508,
  [SMALL_STATE(186)] = 7540,
  [SMALL_STATE(187)] = 7572,
  [SMALL_STATE(188)] = 7602,
  [SMALL_STATE(189)] = 7632,
  [SMALL_STATE(190)] = 7662,
  [SMALL_STATE(191)] = 7691,
  [SMALL_STATE(192)] = 7720,
  [SMALL_STATE(193)] = 7759,
  [SMALL_STATE(194)] = 7788,
  [SMALL_STATE(195)] = 7817,
  [SMALL_STATE(196)] = 7856,
  [SMALL_STATE(197)] = 7891,
  [SMALL_STATE(198)] = 7913,
  [SMALL_STATE(199)] = 7935,
  [SMALL_STATE(200)] = 7967,
  [SMALL_STATE(201)] = 8007,
  [SMALL_STATE(202)] = 8029,
  [SMALL_STATE(203)] = 8073,
  [SMALL_STATE(204)] = 8105,
  [SMALL_STATE(205)] = 8149,
  [SMALL_STATE(206)] = 8193,
  [SMALL_STATE(207)] = 8237,
  [SMALL_STATE(208)] = 8264,
  [SMALL_STATE(209)] = 8303,
  [SMALL_STATE(210)] = 8327,
  [SMALL_STATE(211)] = 8353,
  [SMALL_STATE(212)] = 8379,
  [SMALL_STATE(213)] = 8417,
  [SMALL_STATE(214)] = 8443,
  [SMALL_STATE(215)] = 8469,
  [SMALL_STATE(216)] = 8507,
  [SMALL_STATE(217)] = 8529,
  [SMALL_STATE(218)] = 8553,
  [SMALL_STATE(219)] = 8579,
  [SMALL_STATE(220)] = 8605,
  [SMALL_STATE(221)] = 8631,
  [SMALL_STATE(222)] = 8657,
  [SMALL_STATE(223)] = 8678,
  [SMALL_STATE(224)] = 8699,
  [SMALL_STATE(225)] = 8720,
  [SMALL_STATE(226)] = 8749,
  [SMALL_STATE(227)] = 8784,
  [SMALL_STATE(228)] = 8805,
  [SMALL_STATE(229)] = 8826,
  [SMALL_STATE(230)] = 8847,
  [SMALL_STATE(231)] = 8868,
  [SMALL_STATE(232)] = 8889,
  [SMALL_STATE(233)] = 8910,
  [SMALL_STATE(234)] = 8935,
  [SMALL_STATE(235)] = 8956,
  [SMALL_STATE(236)] = 8977,
  [SMALL_STATE(237)] = 8998,
  [SMALL_STATE(238)] = 9020,
  [SMALL_STATE(239)] = 9042,
  [SMALL_STATE(240)] = 9062,
  [SMALL_STATE(241)] = 9081,
  [SMALL_STATE(242)] = 9100,
  [SMALL_STATE(243)] = 9119,
  [SMALL_STATE(244)] = 9138,
  [SMALL_STATE(245)] = 9157,
  [SMALL_STATE(246)] = 9176,
  [SMALL_STATE(247)] = 9195,
  [SMALL_STATE(248)] = 9214,
  [SMALL_STATE(249)] = 9233,
  [SMALL_STATE(250)] = 9252,
  [SMALL_STATE(251)] = 9271,
  [SMALL_STATE(252)] = 9290,
  [SMALL_STATE(253)] = 9314,
  [SMALL_STATE(254)] = 9338,
  [SMALL_STATE(255)] = 9362,
  [SMALL_STATE(256)] = 9384,
  [SMALL_STATE(257)] = 9406,
  [SMALL_STATE(258)] = 9428,
  [SMALL_STATE(259)] = 9452,
  [SMALL_STATE(260)] = 9476,
  [SMALL_STATE(261)] = 9500,
  [SMALL_STATE(262)] = 9524,
  [SMALL_STATE(263)] = 9546,
  [SMALL_STATE(264)] = 9568,
  [SMALL_STATE(265)] = 9581,
  [SMALL_STATE(266)] = 9600,
  [SMALL_STATE(267)] = 9621,
  [SMALL_STATE(268)] = 9634,
  [SMALL_STATE(269)] = 9647,
  [SMALL_STATE(270)] = 9668,
  [SMALL_STATE(271)] = 9681,
  [SMALL_STATE(272)] = 9694,
  [SMALL_STATE(273)] = 9707,
  [SMALL_STATE(274)] = 9727,
  [SMALL_STATE(275)] = 9745,
  [SMALL_STATE(276)] = 9761,
  [SMALL_STATE(277)] = 9779,
  [SMALL_STATE(278)] = 9797,
  [SMALL_STATE(279)] = 9815,
  [SMALL_STATE(280)] = 9833,
  [SMALL_STATE(281)] = 9851,
  [SMALL_STATE(282)] = 9869,
  [SMALL_STATE(283)] = 9889,
  [SMALL_STATE(284)] = 9907,
  [SMALL_STATE(285)] = 9925,
  [SMALL_STATE(286)] = 9943,
  [SMALL_STATE(287)] = 9961,
  [SMALL_STATE(288)] = 9975,
  [SMALL_STATE(289)] = 9990,
  [SMALL_STATE(290)] = 10005,
  [SMALL_STATE(291)] = 10020,
  [SMALL_STATE(292)] = 10035,
  [SMALL_STATE(293)] = 10048,
  [SMALL_STATE(294)] = 10063,
  [SMALL_STATE(295)] = 10078,
  [SMALL_STATE(296)] = 10093,
  [SMALL_STATE(297)] = 10108,
  [SMALL_STATE(298)] = 10123,
  [SMALL_STATE(299)] = 10134,
  [SMALL_STATE(300)] = 10149,
  [SMALL_STATE(301)] = 10160,
  [SMALL_STATE(302)] = 10175,
  [SMALL_STATE(303)] = 10192,
  [SMALL_STATE(304)] = 10207,
  [SMALL_STATE(305)] = 10222,
  [SMALL_STATE(306)] = 10239,
  [SMALL_STATE(307)] = 10254,
  [SMALL_STATE(308)] = 10269,
  [SMALL_STATE(309)] = 10284,
  [SMALL_STATE(310)] = 10299,
  [SMALL_STATE(311)] = 10314,
  [SMALL_STATE(312)] = 10329,
  [SMALL_STATE(313)] = 10344,
  [SMALL_STATE(314)] = 10359,
  [SMALL_STATE(315)] = 10374,
  [SMALL_STATE(316)] = 10389,
  [SMALL_STATE(317)] = 10404,
  [SMALL_STATE(318)] = 10419,
  [SMALL_STATE(319)] = 10434,
  [SMALL_STATE(320)] = 10449,
  [SMALL_STATE(321)] = 10464,
  [SMALL_STATE(322)] = 10479,
  [SMALL_STATE(323)] = 10494,
  [SMALL_STATE(324)] = 10505,
  [SMALL_STATE(325)] = 10516,
  [SMALL_STATE(326)] = 10531,
  [SMALL_STATE(327)] = 10546,
  [SMALL_STATE(328)] = 10560,
  [SMALL_STATE(329)] = 10574,
  [SMALL_STATE(330)] = 10588,
  [SMALL_STATE(331)] = 10602,
  [SMALL_STATE(332)] = 10616,
  [SMALL_STATE(333)] = 10630,
  [SMALL_STATE(334)] = 10644,
  [SMALL_STATE(335)] = 10658,
  [SMALL_STATE(336)] = 10672,
  [SMALL_STATE(337)] = 10686,
  [SMALL_STATE(338)] = 10698,
  [SMALL_STATE(339)] = 10712,
  [SMALL_STATE(340)] = 10726,
  [SMALL_STATE(341)] = 10737,
  [SMALL_STATE(342)] = 10748,
  [SMALL_STATE(343)] = 10759,
  [SMALL_STATE(344)] = 10770,
  [SMALL_STATE(345)] = 10781,
  [SMALL_STATE(346)] = 10792,
  [SMALL_STATE(347)] = 10803,
  [SMALL_STATE(348)] = 10814,
  [SMALL_STATE(349)] = 10825,
  [SMALL_STATE(350)] = 10836,
  [SMALL_STATE(351)] = 10844,
  [SMALL_STATE(352)] = 10852,
  [SMALL_STATE(353)] = 10860,
  [SMALL_STATE(354)] = 10868,
  [SMALL_STATE(355)] = 10876,
  [SMALL_STATE(356)] = 10884,
  [SMALL_STATE(357)] = 10892,
  [SMALL_STATE(358)] = 10900,
  [SMALL_STATE(359)] = 10908,
  [SMALL_STATE(360)] = 10916,
  [SMALL_STATE(361)] = 10924,
  [SMALL_STATE(362)] = 10932,
  [SMALL_STATE(363)] = 10940,
  [SMALL_STATE(364)] = 10948,
  [SMALL_STATE(365)] = 10956,
  [SMALL_STATE(366)] = 10964,
  [SMALL_STATE(367)] = 10972,
  [SMALL_STATE(368)] = 10980,
  [SMALL_STATE(369)] = 10988,
  [SMALL_STATE(370)] = 10996,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, 0, 14),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, 0, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, 0, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 2, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, 0, 14),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 10),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 10),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, 0, 11),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, 0, 11),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, 0, 5),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, 0, 5),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, 0, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, 0, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, 0, 4),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, 0, 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, 0, 11),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, 0, 11),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, 0, 15),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, 0, 15),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nth_child_pseudo_class_selector, 2, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nth_child_pseudo_class_selector, 2, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, 0, 9),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, 0, 9),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, 0, 15),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, 0, 15),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, 0, 6),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, 0, 6),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, 0, 12),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, 0, 12),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, 0, 10),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, 0, 10),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, 0, 5),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, 0, 5),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, 0, 9),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, 0, 9),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 2),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, 0, 8),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, 0, 8),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, 0, 13),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, 0, 13),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, 0, 14),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, 0, 14),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5, 0, 0),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5, 0, 0),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3, 0, 0),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3, 0, 0),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, 0, 14),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, 0, 14),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcss_statement, 3, 0, 0),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcss_statement, 3, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, 0, 14),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, 0, 14),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3, 0, 0),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2, 0, 0),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2, 0, 0),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 7),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 7),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3, 0, 0),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, 0, 0),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, 0, 0),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, 0, 14),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 0),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1, 0, 0),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1, 0, 0),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2, 0, 0),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1, 0, 0),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0),
  [989] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0), SHIFT_REPEAT(347),
  [992] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0), SHIFT_REPEAT(342),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2, 0, 0),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2, 0, 0),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4, 0, 0),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, 0, 16),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3, 0, 0),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3, 0, 0),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2, 0, 0),
  [1061] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [1064] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [1080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2, 0, 0),
  [1082] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2, 0, 0), SHIFT_REPEAT(312),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2, 0, 0),
  [1107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2, 0, 0),
  [1126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1166] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__descendant_operator = 0,
  ts_external_token__pseudo_class_selector_colon = 1,
  ts_external_token___error_recovery = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
  [ts_external_token__pseudo_class_selector_colon] = sym__pseudo_class_selector_colon,
  [ts_external_token___error_recovery] = sym___error_recovery,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
    [ts_external_token___error_recovery] = true,
  },
  [2] = {
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
  [3] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_css_external_scanner_create(void);
void tree_sitter_css_external_scanner_destroy(void *);
bool tree_sitter_css_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_css_external_scanner_serialize(void *, char *);
void tree_sitter_css_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_css(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_css_external_scanner_create,
      tree_sitter_css_external_scanner_destroy,
      tree_sitter_css_external_scanner_scan,
      tree_sitter_css_external_scanner_serialize,
      tree_sitter_css_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
