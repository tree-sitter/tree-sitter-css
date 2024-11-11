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
    [0] = sym_plain_value,
  },
  [3] = {
    [0] = alias_sym_keyword_query,
  },
  [4] = {
    [1] = alias_sym_tag_name,
  },
  [5] = {
    [1] = alias_sym_id_name,
  },
  [6] = {
    [1] = sym_class_name,
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
    [2] = alias_sym_tag_name,
  },
  [11] = {
    [2] = alias_sym_id_name,
  },
  [12] = {
    [1] = alias_sym_namespace_name,
  },
  [13] = {
    [0] = alias_sym_property_name,
  },
  [14] = {
    [2] = sym_class_name,
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 2,
  [7] = 4,
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
  [19] = 19,
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 23,
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
  [52] = 47,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 53,
  [59] = 59,
  [60] = 60,
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
  [72] = 72,
  [73] = 73,
  [74] = 21,
  [75] = 75,
  [76] = 76,
  [77] = 77,
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
  [96] = 28,
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
  [128] = 112,
  [129] = 117,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 105,
  [135] = 99,
  [136] = 100,
  [137] = 103,
  [138] = 104,
  [139] = 107,
  [140] = 108,
  [141] = 109,
  [142] = 102,
  [143] = 114,
  [144] = 119,
  [145] = 120,
  [146] = 121,
  [147] = 122,
  [148] = 123,
  [149] = 126,
  [150] = 127,
  [151] = 151,
  [152] = 152,
  [153] = 130,
  [154] = 131,
  [155] = 131,
  [156] = 156,
  [157] = 132,
  [158] = 133,
  [159] = 118,
  [160] = 124,
  [161] = 156,
  [162] = 102,
  [163] = 111,
  [164] = 156,
  [165] = 110,
  [166] = 166,
  [167] = 21,
  [168] = 28,
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
  [179] = 179,
  [180] = 180,
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
  [191] = 188,
  [192] = 190,
  [193] = 189,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 201,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 83,
  [207] = 152,
  [208] = 208,
  [209] = 169,
  [210] = 210,
  [211] = 151,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 208,
  [217] = 217,
  [218] = 218,
  [219] = 213,
  [220] = 220,
  [221] = 171,
  [222] = 173,
  [223] = 174,
  [224] = 175,
  [225] = 176,
  [226] = 178,
  [227] = 177,
  [228] = 172,
  [229] = 229,
  [230] = 28,
  [231] = 166,
  [232] = 21,
  [233] = 83,
  [234] = 170,
  [235] = 152,
  [236] = 151,
  [237] = 169,
  [238] = 166,
  [239] = 177,
  [240] = 21,
  [241] = 178,
  [242] = 170,
  [243] = 28,
  [244] = 171,
  [245] = 174,
  [246] = 175,
  [247] = 173,
  [248] = 176,
  [249] = 172,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 251,
  [255] = 255,
  [256] = 253,
  [257] = 257,
  [258] = 257,
  [259] = 253,
  [260] = 250,
  [261] = 252,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 267,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 271,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 276,
  [279] = 273,
  [280] = 280,
  [281] = 281,
  [282] = 281,
  [283] = 277,
  [284] = 284,
  [285] = 273,
  [286] = 286,
  [287] = 119,
  [288] = 288,
  [289] = 126,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 291,
  [297] = 297,
  [298] = 295,
  [299] = 297,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 293,
  [304] = 304,
  [305] = 301,
  [306] = 306,
  [307] = 292,
  [308] = 293,
  [309] = 291,
  [310] = 297,
  [311] = 311,
  [312] = 286,
  [313] = 301,
  [314] = 292,
  [315] = 293,
  [316] = 291,
  [317] = 297,
  [318] = 292,
  [319] = 293,
  [320] = 291,
  [321] = 297,
  [322] = 322,
  [323] = 103,
  [324] = 292,
  [325] = 151,
  [326] = 326,
  [327] = 327,
  [328] = 326,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 331,
  [333] = 333,
  [334] = 334,
  [335] = 331,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 340,
  [342] = 151,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 339,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 355,
  [357] = 357,
  [358] = 350,
  [359] = 359,
  [360] = 360,
  [361] = 351,
  [362] = 362,
  [363] = 363,
  [364] = 363,
  [365] = 350,
  [366] = 351,
  [367] = 355,
  [368] = 360,
  [369] = 353,
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
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0) ADVANCE(252);
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
  [19] = {.lex_state = 5, .external_lex_state = 3},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 8, .external_lex_state = 3},
  [22] = {.lex_state = 8, .external_lex_state = 3},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 13, .external_lex_state = 3},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 132, .external_lex_state = 2},
  [27] = {.lex_state = 13, .external_lex_state = 3},
  [28] = {.lex_state = 8, .external_lex_state = 3},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 132, .external_lex_state = 2},
  [31] = {.lex_state = 132, .external_lex_state = 2},
  [32] = {.lex_state = 132, .external_lex_state = 2},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 132, .external_lex_state = 2},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 132, .external_lex_state = 2},
  [37] = {.lex_state = 132, .external_lex_state = 2},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 132, .external_lex_state = 2},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 132, .external_lex_state = 2},
  [44] = {.lex_state = 132, .external_lex_state = 2},
  [45] = {.lex_state = 132, .external_lex_state = 2},
  [46] = {.lex_state = 13, .external_lex_state = 3},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 13, .external_lex_state = 3},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 13, .external_lex_state = 3},
  [51] = {.lex_state = 13, .external_lex_state = 3},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 13, .external_lex_state = 3},
  [60] = {.lex_state = 13, .external_lex_state = 3},
  [61] = {.lex_state = 13, .external_lex_state = 3},
  [62] = {.lex_state = 13, .external_lex_state = 3},
  [63] = {.lex_state = 13, .external_lex_state = 3},
  [64] = {.lex_state = 13, .external_lex_state = 3},
  [65] = {.lex_state = 13, .external_lex_state = 3},
  [66] = {.lex_state = 13, .external_lex_state = 3},
  [67] = {.lex_state = 13, .external_lex_state = 3},
  [68] = {.lex_state = 13, .external_lex_state = 3},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 13, .external_lex_state = 3},
  [71] = {.lex_state = 13, .external_lex_state = 3},
  [72] = {.lex_state = 13, .external_lex_state = 3},
  [73] = {.lex_state = 13, .external_lex_state = 3},
  [74] = {.lex_state = 13, .external_lex_state = 3},
  [75] = {.lex_state = 13, .external_lex_state = 3},
  [76] = {.lex_state = 13, .external_lex_state = 3},
  [77] = {.lex_state = 13, .external_lex_state = 3},
  [78] = {.lex_state = 13, .external_lex_state = 3},
  [79] = {.lex_state = 13, .external_lex_state = 3},
  [80] = {.lex_state = 13, .external_lex_state = 3},
  [81] = {.lex_state = 13, .external_lex_state = 3},
  [82] = {.lex_state = 13, .external_lex_state = 3},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 13, .external_lex_state = 3},
  [85] = {.lex_state = 13, .external_lex_state = 3},
  [86] = {.lex_state = 13, .external_lex_state = 3},
  [87] = {.lex_state = 13, .external_lex_state = 3},
  [88] = {.lex_state = 13, .external_lex_state = 3},
  [89] = {.lex_state = 13, .external_lex_state = 3},
  [90] = {.lex_state = 13, .external_lex_state = 3},
  [91] = {.lex_state = 13, .external_lex_state = 3},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 13, .external_lex_state = 3},
  [94] = {.lex_state = 13, .external_lex_state = 3},
  [95] = {.lex_state = 13, .external_lex_state = 3},
  [96] = {.lex_state = 13, .external_lex_state = 3},
  [97] = {.lex_state = 13, .external_lex_state = 3},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 132, .external_lex_state = 2},
  [100] = {.lex_state = 132, .external_lex_state = 2},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 132, .external_lex_state = 2},
  [104] = {.lex_state = 132, .external_lex_state = 2},
  [105] = {.lex_state = 132, .external_lex_state = 2},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 132, .external_lex_state = 2},
  [108] = {.lex_state = 132, .external_lex_state = 2},
  [109] = {.lex_state = 132, .external_lex_state = 2},
  [110] = {.lex_state = 132, .external_lex_state = 2},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 132, .external_lex_state = 2},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 132, .external_lex_state = 2},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 132, .external_lex_state = 2},
  [117] = {.lex_state = 132, .external_lex_state = 2},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 132, .external_lex_state = 2},
  [120] = {.lex_state = 132, .external_lex_state = 2},
  [121] = {.lex_state = 132, .external_lex_state = 2},
  [122] = {.lex_state = 132, .external_lex_state = 2},
  [123] = {.lex_state = 132, .external_lex_state = 2},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 132, .external_lex_state = 2},
  [126] = {.lex_state = 132, .external_lex_state = 2},
  [127] = {.lex_state = 132, .external_lex_state = 2},
  [128] = {.lex_state = 132, .external_lex_state = 2},
  [129] = {.lex_state = 132, .external_lex_state = 2},
  [130] = {.lex_state = 132, .external_lex_state = 2},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 132, .external_lex_state = 2},
  [133] = {.lex_state = 132, .external_lex_state = 2},
  [134] = {.lex_state = 132, .external_lex_state = 2},
  [135] = {.lex_state = 132, .external_lex_state = 2},
  [136] = {.lex_state = 132, .external_lex_state = 2},
  [137] = {.lex_state = 132, .external_lex_state = 2},
  [138] = {.lex_state = 132, .external_lex_state = 2},
  [139] = {.lex_state = 132, .external_lex_state = 2},
  [140] = {.lex_state = 132, .external_lex_state = 2},
  [141] = {.lex_state = 132, .external_lex_state = 2},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 132, .external_lex_state = 2},
  [144] = {.lex_state = 132, .external_lex_state = 2},
  [145] = {.lex_state = 132, .external_lex_state = 2},
  [146] = {.lex_state = 132, .external_lex_state = 2},
  [147] = {.lex_state = 132, .external_lex_state = 2},
  [148] = {.lex_state = 132, .external_lex_state = 2},
  [149] = {.lex_state = 132, .external_lex_state = 2},
  [150] = {.lex_state = 132, .external_lex_state = 2},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 132, .external_lex_state = 2},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 132, .external_lex_state = 2},
  [158] = {.lex_state = 132, .external_lex_state = 2},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 132, .external_lex_state = 2},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 9},
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
  [179] = {.lex_state = 13, .external_lex_state = 3},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 13, .external_lex_state = 3},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 13, .external_lex_state = 3},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 13, .external_lex_state = 3},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 18},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 18},
  [194] = {.lex_state = 20},
  [195] = {.lex_state = 33},
  [196] = {.lex_state = 132, .external_lex_state = 3},
  [197] = {.lex_state = 132, .external_lex_state = 3},
  [198] = {.lex_state = 132, .external_lex_state = 3},
  [199] = {.lex_state = 132, .external_lex_state = 3},
  [200] = {.lex_state = 132, .external_lex_state = 3},
  [201] = {.lex_state = 132, .external_lex_state = 3},
  [202] = {.lex_state = 132, .external_lex_state = 3},
  [203] = {.lex_state = 132, .external_lex_state = 3},
  [204] = {.lex_state = 33},
  [205] = {.lex_state = 132, .external_lex_state = 3},
  [206] = {.lex_state = 17},
  [207] = {.lex_state = 15},
  [208] = {.lex_state = 20},
  [209] = {.lex_state = 18},
  [210] = {.lex_state = 132, .external_lex_state = 3},
  [211] = {.lex_state = 15},
  [212] = {.lex_state = 20},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 20},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 20},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 132, .external_lex_state = 3},
  [219] = {.lex_state = 20},
  [220] = {.lex_state = 16},
  [221] = {.lex_state = 18},
  [222] = {.lex_state = 18},
  [223] = {.lex_state = 18},
  [224] = {.lex_state = 18},
  [225] = {.lex_state = 18},
  [226] = {.lex_state = 18},
  [227] = {.lex_state = 18},
  [228] = {.lex_state = 18},
  [229] = {.lex_state = 132, .external_lex_state = 3},
  [230] = {.lex_state = 18},
  [231] = {.lex_state = 18},
  [232] = {.lex_state = 18},
  [233] = {.lex_state = 16},
  [234] = {.lex_state = 18},
  [235] = {.lex_state = 23},
  [236] = {.lex_state = 23},
  [237] = {.lex_state = 16},
  [238] = {.lex_state = 16},
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
  [250] = {.lex_state = 24},
  [251] = {.lex_state = 132},
  [252] = {.lex_state = 24},
  [253] = {.lex_state = 16},
  [254] = {.lex_state = 132},
  [255] = {.lex_state = 24},
  [256] = {.lex_state = 16},
  [257] = {.lex_state = 24},
  [258] = {.lex_state = 24},
  [259] = {.lex_state = 16},
  [260] = {.lex_state = 24},
  [261] = {.lex_state = 24},
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
  [272] = {.lex_state = 16},
  [273] = {.lex_state = 16},
  [274] = {.lex_state = 24},
  [275] = {.lex_state = 31},
  [276] = {.lex_state = 132},
  [277] = {.lex_state = 132},
  [278] = {.lex_state = 132},
  [279] = {.lex_state = 16},
  [280] = {.lex_state = 24},
  [281] = {.lex_state = 16},
  [282] = {.lex_state = 16},
  [283] = {.lex_state = 132},
  [284] = {.lex_state = 16},
  [285] = {.lex_state = 16},
  [286] = {.lex_state = 132},
  [287] = {.lex_state = 24},
  [288] = {.lex_state = 132},
  [289] = {.lex_state = 24},
  [290] = {.lex_state = 132},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 24},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 24},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 24},
  [301] = {.lex_state = 132},
  [302] = {.lex_state = 24},
  [303] = {.lex_state = 2},
  [304] = {.lex_state = 132},
  [305] = {.lex_state = 132},
  [306] = {.lex_state = 132},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 2},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 2},
  [311] = {.lex_state = 132},
  [312] = {.lex_state = 132},
  [313] = {.lex_state = 132},
  [314] = {.lex_state = 1},
  [315] = {.lex_state = 2},
  [316] = {.lex_state = 1},
  [317] = {.lex_state = 2},
  [318] = {.lex_state = 1},
  [319] = {.lex_state = 2},
  [320] = {.lex_state = 1},
  [321] = {.lex_state = 2},
  [322] = {.lex_state = 1},
  [323] = {.lex_state = 24},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 25},
  [326] = {.lex_state = 132},
  [327] = {.lex_state = 132},
  [328] = {.lex_state = 132},
  [329] = {.lex_state = 132},
  [330] = {.lex_state = 132},
  [331] = {.lex_state = 132},
  [332] = {.lex_state = 132},
  [333] = {.lex_state = 132},
  [334] = {.lex_state = 24},
  [335] = {.lex_state = 132},
  [336] = {.lex_state = 132},
  [337] = {.lex_state = 132},
  [338] = {.lex_state = 132},
  [339] = {.lex_state = 132},
  [340] = {.lex_state = 132},
  [341] = {.lex_state = 132},
  [342] = {.lex_state = 45},
  [343] = {.lex_state = 132},
  [344] = {.lex_state = 132},
  [345] = {.lex_state = 132},
  [346] = {.lex_state = 132},
  [347] = {.lex_state = 132},
  [348] = {.lex_state = 24},
  [349] = {.lex_state = 34},
  [350] = {.lex_state = 47},
  [351] = {.lex_state = 132},
  [352] = {.lex_state = 20},
  [353] = {.lex_state = 132},
  [354] = {.lex_state = 132},
  [355] = {.lex_state = 132},
  [356] = {.lex_state = 132},
  [357] = {.lex_state = 132},
  [358] = {.lex_state = 47},
  [359] = {.lex_state = 132},
  [360] = {.lex_state = 132},
  [361] = {.lex_state = 132},
  [362] = {.lex_state = 132},
  [363] = {.lex_state = 132},
  [364] = {.lex_state = 132},
  [365] = {.lex_state = 47},
  [366] = {.lex_state = 132},
  [367] = {.lex_state = 132},
  [368] = {.lex_state = 132},
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
    [sym_stylesheet] = STATE(370),
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(347),
    [sym__selector] = STATE(200),
    [sym_universal_selector] = STATE(200),
    [sym_class_selector] = STATE(200),
    [sym_pseudo_class_selector] = STATE(200),
    [sym_pseudo_element_selector] = STATE(200),
    [sym_id_selector] = STATE(200),
    [sym_attribute_selector] = STATE(200),
    [sym_child_selector] = STATE(200),
    [sym_descendant_selector] = STATE(200),
    [sym_sibling_selector] = STATE(200),
    [sym_adjacent_sibling_selector] = STATE(200),
    [sym_namespace_selector] = STATE(200),
    [sym_declaration] = STATE(10),
    [sym_string_value] = STATE(200),
    [aux_sym_stylesheet_repeat1] = STATE(10),
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
    STATE(339), 1,
      sym_selectors,
    STATE(355), 1,
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
    STATE(339), 1,
      sym_selectors,
    STATE(367), 1,
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
    STATE(339), 1,
      sym_selectors,
    STATE(366), 1,
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
    STATE(339), 1,
      sym_selectors,
    STATE(361), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(6), 11,
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
    STATE(339), 1,
      sym_selectors,
    STATE(356), 1,
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
    STATE(339), 1,
      sym_selectors,
    STATE(351), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(2), 11,
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
    STATE(339), 1,
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
  [655] = 22,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      anon_sym_ATimport,
    ACTIONS(129), 1,
      anon_sym_ATmedia,
    ACTIONS(132), 1,
      anon_sym_ATcharset,
    ACTIONS(135), 1,
      anon_sym_ATnamespace,
    ACTIONS(141), 1,
      anon_sym_ATsupports,
    ACTIONS(144), 1,
      sym_nesting_selector,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(150), 1,
      anon_sym_DOT,
    ACTIONS(153), 1,
      anon_sym_COLON_COLON,
    ACTIONS(156), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_at_keyword,
    ACTIONS(174), 1,
      sym__pseudo_class_selector_colon,
    STATE(347), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 10,
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
  [745] = 22,
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
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    STATE(347), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 10,
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
    STATE(22), 1,
      sym_string_value,
    STATE(35), 1,
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
    STATE(203), 12,
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
    STATE(22), 1,
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
    STATE(197), 12,
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
    STATE(22), 1,
      sym_string_value,
    STATE(49), 1,
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
    STATE(205), 12,
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
    STATE(128), 1,
      sym_block,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(258), 6,
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
    STATE(334), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
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
    STATE(334), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
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
    STATE(39), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(263), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(180), 9,
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
    STATE(47), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(263), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1430] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym_arguments,
    ACTIONS(279), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(277), 4,
      anon_sym_STAR,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(283), 8,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(275), 10,
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
  [1475] = 18,
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
    ACTIONS(285), 1,
      sym_important,
    STATE(52), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(263), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1540] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(289), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(287), 15,
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
  [1575] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(293), 5,
      anon_sym_STAR,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(297), 7,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(291), 10,
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
  [1614] = 17,
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
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(301), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(299), 2,
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
  [1675] = 5,
    STATE(27), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(307), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(303), 19,
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
  [1712] = 17,
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
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(305), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(299), 2,
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
  [1773] = 13,
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
    ACTIONS(311), 1,
      sym_nesting_selector,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(198), 13,
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
  [1826] = 5,
    STATE(27), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(321), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(317), 19,
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
  [1863] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(326), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(324), 15,
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
  [1898] = 17,
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
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(313), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(299), 2,
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
  [1959] = 12,
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
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(330), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(80), 13,
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
  [2009] = 12,
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
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(332), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(78), 13,
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
  [2059] = 13,
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
    ACTIONS(334), 1,
      sym_nesting_selector,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(187), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(229), 12,
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
  [2111] = 17,
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
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(329), 1,
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
  [2171] = 12,
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
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(342), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(84), 13,
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
  [2221] = 17,
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
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(327), 1,
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
  [2281] = 12,
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
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(346), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(85), 13,
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
  [2331] = 12,
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
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(348), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(218), 13,
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
  [2381] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      sym_important,
    ACTIONS(358), 1,
      anon_sym_LPAREN2,
    ACTIONS(361), 1,
      anon_sym_SQUOTE,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      aux_sym_integer_value_token1,
    ACTIONS(370), 1,
      aux_sym_float_value_token1,
    ACTIONS(373), 1,
      anon_sym_LBRACK2,
    ACTIONS(376), 1,
      sym_identifier,
    ACTIONS(379), 1,
      sym_plain_value,
    STATE(38), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(350), 3,
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
  [2437] = 17,
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
    ACTIONS(382), 1,
      anon_sym_SEMI,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    ACTIONS(386), 1,
      sym_important,
    STATE(40), 1,
      aux_sym_declaration_repeat1,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2497] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_POUND,
    ACTIONS(396), 1,
      sym_important,
    ACTIONS(399), 1,
      anon_sym_LPAREN2,
    ACTIONS(402), 1,
      anon_sym_SQUOTE,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(408), 1,
      aux_sym_integer_value_token1,
    ACTIONS(411), 1,
      aux_sym_float_value_token1,
    ACTIONS(414), 1,
      anon_sym_LBRACK2,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(420), 1,
      sym_plain_value,
    STATE(40), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(391), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2555] = 12,
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
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(423), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(66), 13,
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
  [2605] = 15,
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
    STATE(38), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(425), 3,
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
  [2661] = 12,
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
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(427), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(210), 13,
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
  [2711] = 12,
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
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(429), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(196), 13,
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
  [2761] = 13,
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
    ACTIONS(334), 1,
      sym_nesting_selector,
    ACTIONS(431), 1,
      sym_identifier,
    STATE(179), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(229), 12,
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
  [2813] = 5,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_pseudo_element_arguments,
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
  [2848] = 16,
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
    ACTIONS(439), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      sym_important,
    STATE(40), 1,
      aux_sym_declaration_repeat1,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2905] = 5,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(445), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(443), 18,
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
  [2940] = 15,
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
    STATE(38), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(449), 2,
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
  [2995] = 5,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(451), 18,
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
  [3030] = 5,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_pseudo_element_arguments,
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
  [3065] = 16,
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
    ACTIONS(382), 1,
      anon_sym_SEMI,
    ACTIONS(459), 1,
      sym_important,
    STATE(40), 1,
      aux_sym_declaration_repeat1,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3122] = 15,
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
    ACTIONS(461), 1,
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
  [3176] = 15,
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
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
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
  [3230] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym_arguments,
    ACTIONS(467), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(465), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(277), 6,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
    ACTIONS(283), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [3270] = 15,
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
    ACTIONS(469), 1,
      anon_sym_SEMI,
    STATE(38), 1,
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
  [3324] = 15,
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
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
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
  [3378] = 15,
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
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
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
  [3432] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(475), 18,
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
  [3461] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(479), 18,
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
  [3490] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(483), 18,
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
  [3519] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(489), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(487), 18,
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
  [3548] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(491), 18,
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
  [3577] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(495), 18,
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
  [3606] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(275), 18,
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
  [3635] = 4,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(499), 17,
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
  [3666] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(505), 18,
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
  [3695] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(445), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(443), 18,
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
  [3724] = 14,
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
    STATE(42), 1,
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
  [3775] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(509), 18,
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
  [3804] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(515), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(513), 18,
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
  [3833] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(519), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(517), 18,
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
  [3862] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(523), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(521), 18,
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
  [3891] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(287), 18,
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
  [3920] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(525), 18,
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
  [3949] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(529), 18,
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
  [3978] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(533), 18,
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
  [4007] = 4,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(539), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(537), 17,
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
  [4038] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(543), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(541), 18,
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
  [4067] = 4,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(547), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(545), 17,
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
  [4098] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(551), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(549), 18,
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
  [4127] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(555), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(553), 18,
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
  [4156] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym_arguments,
    ACTIONS(283), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(277), 10,
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
  [4191] = 4,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(559), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(557), 17,
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
  [4222] = 4,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(563), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(561), 17,
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
  [4253] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(567), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(565), 18,
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
  [4282] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(569), 18,
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
  [4311] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(575), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(573), 18,
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
  [4340] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(579), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(577), 18,
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
  [4369] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(451), 18,
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
  [4398] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(581), 18,
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
  [4427] = 14,
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
    STATE(57), 1,
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
  [4478] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(585), 18,
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
  [4507] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(591), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(589), 18,
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
  [4536] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(593), 18,
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
  [4565] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(326), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(324), 18,
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
  [4594] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(597), 18,
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
  [4623] = 13,
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
    ACTIONS(601), 1,
      sym_important,
    ACTIONS(603), 1,
      anon_sym_LPAREN2,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(607), 1,
      sym_plain_value,
    STATE(272), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4671] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(611), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(609), 11,
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
  [4699] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(615), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(613), 11,
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
  [4727] = 13,
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
    ACTIONS(603), 1,
      anon_sym_LPAREN2,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(617), 1,
      sym_important,
    ACTIONS(619), 1,
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
  [4775] = 13,
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
    ACTIONS(603), 1,
      anon_sym_LPAREN2,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(621), 1,
      sym_important,
    ACTIONS(623), 1,
      sym_plain_value,
    STATE(253), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4823] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(627), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(625), 11,
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
  [4851] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(631), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(629), 11,
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
  [4879] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(635), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(633), 11,
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
  [4907] = 13,
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
    ACTIONS(603), 1,
      anon_sym_LPAREN2,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(637), 1,
      sym_important,
    ACTIONS(639), 1,
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
  [4955] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(643), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(641), 11,
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
  [4983] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(647), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(645), 11,
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
  [5011] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(651), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(649), 11,
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
  [5039] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(655), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(653), 11,
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
  [5067] = 13,
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
    ACTIONS(657), 1,
      sym_important,
    ACTIONS(659), 1,
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
  [5115] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(663), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(661), 11,
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
  [5143] = 13,
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
    ACTIONS(665), 1,
      sym_important,
    ACTIONS(667), 1,
      sym_plain_value,
    STATE(181), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5191] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(671), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(669), 11,
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
  [5219] = 13,
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
    ACTIONS(673), 1,
      sym_important,
    ACTIONS(675), 1,
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
  [5267] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(663), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(661), 11,
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
  [5295] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(679), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(677), 11,
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
  [5323] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_POUND,
    ACTIONS(683), 1,
      sym_important,
    ACTIONS(685), 1,
      anon_sym_LPAREN2,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      aux_sym_integer_value_token1,
    ACTIONS(693), 1,
      aux_sym_float_value_token1,
    ACTIONS(695), 1,
      anon_sym_LBRACK2,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(699), 1,
      sym_plain_value,
    STATE(189), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5371] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(703), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(701), 11,
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
  [5399] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(707), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(705), 11,
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
  [5427] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(711), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(709), 11,
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
  [5455] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(715), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(713), 11,
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
  [5483] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(719), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(717), 11,
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
  [5511] = 13,
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
    ACTIONS(603), 1,
      anon_sym_LPAREN2,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(721), 1,
      sym_important,
    ACTIONS(723), 1,
      sym_plain_value,
    STATE(282), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5559] = 3,
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
  [5587] = 3,
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
    ACTIONS(729), 11,
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
  [5615] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(735), 8,
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
  [5643] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(663), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(661), 11,
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
  [5671] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(679), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(677), 11,
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
  [5699] = 3,
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
    ACTIONS(739), 11,
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
  [5727] = 13,
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
    ACTIONS(603), 1,
      anon_sym_LPAREN2,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(741), 1,
      sym_important,
    ACTIONS(743), 1,
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
  [5775] = 3,
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
  [5803] = 3,
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
    ACTIONS(751), 11,
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
  [5831] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(635), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(633), 11,
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
  [5859] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(611), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(609), 11,
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
  [5887] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(615), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(613), 11,
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
  [5915] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(627), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(625), 11,
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
  [5943] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(631), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(629), 11,
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
  [5971] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(643), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(641), 11,
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
  [5999] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(647), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(645), 11,
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
  [6027] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(651), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(649), 11,
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
  [6055] = 13,
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
    ACTIONS(603), 1,
      anon_sym_LPAREN2,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(753), 1,
      sym_important,
    ACTIONS(755), 1,
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
  [6103] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(671), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(669), 11,
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
  [6131] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(703), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(701), 11,
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
  [6159] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(707), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(705), 11,
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
  [6187] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(711), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(709), 11,
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
  [6215] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(715), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(713), 11,
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
  [6243] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(719), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(717), 11,
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
  [6271] = 3,
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
    ACTIONS(729), 11,
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
  [6299] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(735), 8,
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
  [6327] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym_unit,
    ACTIONS(759), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(757), 11,
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
  [6359] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym_unit,
    ACTIONS(765), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(763), 11,
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
  [6391] = 3,
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
    ACTIONS(739), 11,
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
  [6419] = 13,
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
    ACTIONS(769), 1,
      sym_important,
    ACTIONS(771), 1,
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
  [6467] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_POUND,
    ACTIONS(685), 1,
      anon_sym_LPAREN2,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      aux_sym_integer_value_token1,
    ACTIONS(693), 1,
      aux_sym_float_value_token1,
    ACTIONS(695), 1,
      anon_sym_LBRACK2,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(773), 1,
      sym_important,
    ACTIONS(775), 1,
      sym_plain_value,
    STATE(225), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6515] = 13,
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
    ACTIONS(603), 1,
      anon_sym_LPAREN2,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(777), 1,
      sym_important,
    ACTIONS(779), 1,
      sym_plain_value,
    STATE(273), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6563] = 3,
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
  [6591] = 3,
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
    ACTIONS(751), 11,
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
  [6619] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_POUND,
    ACTIONS(685), 1,
      anon_sym_LPAREN2,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      aux_sym_integer_value_token1,
    ACTIONS(693), 1,
      aux_sym_float_value_token1,
    ACTIONS(695), 1,
      anon_sym_LBRACK2,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_important,
    ACTIONS(783), 1,
      sym_plain_value,
    STATE(193), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6667] = 13,
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
    ACTIONS(603), 1,
      anon_sym_LPAREN2,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(785), 1,
      sym_important,
    ACTIONS(787), 1,
      sym_plain_value,
    STATE(281), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6715] = 13,
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
    ACTIONS(603), 1,
      anon_sym_LPAREN2,
    ACTIONS(605), 1,
      sym_identifier,
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
  [6763] = 13,
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
    ACTIONS(603), 1,
      anon_sym_LPAREN2,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(789), 1,
      sym_important,
    ACTIONS(791), 1,
      sym_plain_value,
    STATE(256), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6811] = 13,
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
    ACTIONS(793), 1,
      sym_important,
    ACTIONS(795), 1,
      sym_plain_value,
    STATE(20), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6859] = 13,
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
    ACTIONS(603), 1,
      anon_sym_LPAREN2,
    ACTIONS(605), 1,
      sym_identifier,
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
  [6907] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(655), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(653), 11,
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
  [6935] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(799), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(797), 11,
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
  [6964] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(289), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(287), 11,
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
  [6993] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(326), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(324), 11,
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
  [7022] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(803), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(801), 11,
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
  [7051] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(807), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(805), 11,
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
  [7080] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(811), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(809), 11,
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
  [7109] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(815), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(813), 11,
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
  [7138] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(819), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(817), 11,
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
  [7167] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(823), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(821), 11,
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
  [7196] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(827), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(825), 11,
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
  [7225] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(831), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(829), 11,
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
  [7254] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(835), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(833), 11,
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
  [7283] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(839), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(837), 11,
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
  [7312] = 5,
    ACTIONS(843), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(841), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(291), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7342] = 6,
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
    ACTIONS(847), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(845), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7374] = 6,
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
    ACTIONS(849), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(391), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7406] = 5,
    ACTIONS(843), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(841), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(275), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7436] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_SEMI,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(293), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7468] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_SEMI,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(293), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7500] = 5,
    ACTIONS(857), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(855), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(275), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7530] = 6,
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
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7562] = 5,
    ACTIONS(857), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(855), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(291), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7592] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_SEMI,
    ACTIONS(297), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(293), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7621] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(863), 1,
      anon_sym_SEMI,
    ACTIONS(867), 1,
      anon_sym_LPAREN2,
    ACTIONS(871), 1,
      sym_identifier,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(865), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(869), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(271), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7660] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_SEMI,
    ACTIONS(297), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(293), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7689] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_SEMI,
    ACTIONS(297), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(293), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7718] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_SEMI,
    ACTIONS(297), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(293), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7747] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(867), 1,
      anon_sym_LPAREN2,
    ACTIONS(871), 1,
      sym_identifier,
    ACTIONS(875), 1,
      anon_sym_SEMI,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(865), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(869), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(274), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7786] = 9,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(867), 1,
      anon_sym_LPAREN2,
    ACTIONS(871), 1,
      sym_identifier,
    ACTIONS(877), 1,
      anon_sym_SEMI,
    ACTIONS(879), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(257), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7821] = 8,
    ACTIONS(885), 1,
      sym_escape_sequence,
    ACTIONS(887), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym_class_name_repeat1,
    STATE(50), 1,
      sym_class_name,
    STATE(90), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(883), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(881), 6,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host,
      anon_sym_host_DASHcontext,
  [7853] = 12,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(891), 1,
      anon_sym_COLON_COLON,
    ACTIONS(893), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_LBRACK,
    ACTIONS(897), 1,
      anon_sym_GT,
    ACTIONS(899), 1,
      anon_sym_TILDE,
    ACTIONS(901), 1,
      anon_sym_PLUS,
    ACTIONS(903), 1,
      anon_sym_PIPE,
    ACTIONS(905), 1,
      sym__descendant_operator,
    ACTIONS(907), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(889), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [7893] = 14,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(891), 1,
      anon_sym_COLON_COLON,
    ACTIONS(893), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_LBRACK,
    ACTIONS(897), 1,
      anon_sym_GT,
    ACTIONS(899), 1,
      anon_sym_TILDE,
    ACTIONS(901), 1,
      anon_sym_PLUS,
    ACTIONS(903), 1,
      anon_sym_PIPE,
    ACTIONS(905), 1,
      sym__descendant_operator,
    ACTIONS(907), 1,
      sym__pseudo_class_selector_colon,
    STATE(329), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [7937] = 14,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(891), 1,
      anon_sym_COLON_COLON,
    ACTIONS(893), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_LBRACK,
    ACTIONS(897), 1,
      anon_sym_GT,
    ACTIONS(899), 1,
      anon_sym_TILDE,
    ACTIONS(901), 1,
      anon_sym_PLUS,
    ACTIONS(903), 1,
      anon_sym_PIPE,
    ACTIONS(905), 1,
      sym__descendant_operator,
    ACTIONS(907), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
    STATE(333), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [7981] = 3,
    ACTIONS(913), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(275), 12,
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
  [8003] = 14,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(891), 1,
      anon_sym_COLON_COLON,
    ACTIONS(893), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_LBRACK,
    ACTIONS(897), 1,
      anon_sym_GT,
    ACTIONS(899), 1,
      anon_sym_TILDE,
    ACTIONS(901), 1,
      anon_sym_PLUS,
    ACTIONS(903), 1,
      anon_sym_PIPE,
    ACTIONS(905), 1,
      sym__descendant_operator,
    ACTIONS(907), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    ACTIONS(915), 1,
      anon_sym_LBRACE,
    STATE(337), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8047] = 3,
    ACTIONS(917), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(275), 12,
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
  [8069] = 3,
    ACTIONS(919), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(275), 12,
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
  [8091] = 14,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(891), 1,
      anon_sym_COLON_COLON,
    ACTIONS(893), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_LBRACK,
    ACTIONS(897), 1,
      anon_sym_GT,
    ACTIONS(899), 1,
      anon_sym_TILDE,
    ACTIONS(901), 1,
      anon_sym_PLUS,
    ACTIONS(903), 1,
      anon_sym_PIPE,
    ACTIONS(905), 1,
      sym__descendant_operator,
    ACTIONS(907), 1,
      sym__pseudo_class_selector_colon,
    STATE(327), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8135] = 8,
    ACTIONS(885), 1,
      sym_escape_sequence,
    ACTIONS(887), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym_class_name_repeat1,
    STATE(48), 1,
      sym_class_name,
    STATE(68), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(883), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(921), 6,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host,
      anon_sym_host_DASHcontext,
  [8167] = 12,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(891), 1,
      anon_sym_COLON_COLON,
    ACTIONS(893), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_LBRACK,
    ACTIONS(897), 1,
      anon_sym_GT,
    ACTIONS(899), 1,
      anon_sym_TILDE,
    ACTIONS(901), 1,
      anon_sym_PLUS,
    ACTIONS(903), 1,
      anon_sym_PIPE,
    ACTIONS(905), 1,
      sym__descendant_operator,
    ACTIONS(907), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(449), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8206] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
    STATE(221), 1,
      sym_arguments,
    ACTIONS(277), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(283), 7,
      anon_sym_not,
      anon_sym_LPAREN2,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8233] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(925), 1,
      sym_unit,
    ACTIONS(763), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(765), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8257] = 6,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(867), 1,
      anon_sym_LPAREN2,
    ACTIONS(871), 1,
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
  [8283] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(801), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(803), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8305] = 12,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(891), 1,
      anon_sym_COLON_COLON,
    ACTIONS(893), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_LBRACK,
    ACTIONS(897), 1,
      anon_sym_GT,
    ACTIONS(899), 1,
      anon_sym_TILDE,
    ACTIONS(901), 1,
      anon_sym_PLUS,
    ACTIONS(903), 1,
      anon_sym_PIPE,
    ACTIONS(905), 1,
      sym__descendant_operator,
    ACTIONS(907), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8343] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym_unit,
    ACTIONS(757), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(759), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8367] = 6,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(867), 1,
      anon_sym_LPAREN2,
    ACTIONS(871), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(268), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8393] = 6,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(867), 1,
      anon_sym_LPAREN2,
    ACTIONS(871), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(270), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8419] = 6,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(867), 1,
      anon_sym_LPAREN2,
    ACTIONS(931), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(334), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8445] = 6,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(867), 1,
      anon_sym_LPAREN2,
    ACTIONS(871), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(280), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8471] = 6,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(867), 1,
      anon_sym_LPAREN2,
    ACTIONS(871), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(298), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8497] = 6,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(867), 1,
      anon_sym_LPAREN2,
    ACTIONS(871), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(263), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8523] = 12,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(891), 1,
      anon_sym_COLON_COLON,
    ACTIONS(893), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_LBRACK,
    ACTIONS(897), 1,
      anon_sym_GT,
    ACTIONS(899), 1,
      anon_sym_TILDE,
    ACTIONS(901), 1,
      anon_sym_PLUS,
    ACTIONS(903), 1,
      anon_sym_PIPE,
    ACTIONS(905), 1,
      sym__descendant_operator,
    ACTIONS(907), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8561] = 6,
    ACTIONS(221), 1,
      anon_sym_selector,
    ACTIONS(867), 1,
      anon_sym_LPAREN2,
    ACTIONS(871), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(267), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8587] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_SLASH,
    ACTIONS(935), 1,
      anon_sym_LPAREN,
    ACTIONS(937), 1,
      anon_sym_COLON,
    STATE(244), 1,
      sym_arguments,
    ACTIONS(277), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(465), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [8616] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(809), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(811), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8637] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(817), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(819), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8658] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(821), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(823), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8679] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(825), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(827), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8700] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(829), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(831), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8721] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(837), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(839), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8742] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(833), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(835), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8763] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(813), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(815), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8784] = 11,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(891), 1,
      anon_sym_COLON_COLON,
    ACTIONS(893), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_LBRACK,
    ACTIONS(897), 1,
      anon_sym_GT,
    ACTIONS(899), 1,
      anon_sym_TILDE,
    ACTIONS(901), 1,
      anon_sym_PLUS,
    ACTIONS(903), 1,
      anon_sym_PIPE,
    ACTIONS(905), 1,
      sym__descendant_operator,
    ACTIONS(907), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8819] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(324), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(326), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8840] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(797), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(799), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8861] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(287), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(289), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8882] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_SLASH,
    ACTIONS(935), 1,
      anon_sym_LPAREN,
    STATE(244), 1,
      sym_arguments,
    ACTIONS(277), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8907] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(805), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(807), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8928] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_SLASH,
    ACTIONS(939), 1,
      sym_unit,
    ACTIONS(763), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8950] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_SLASH,
    ACTIONS(941), 1,
      sym_unit,
    ACTIONS(757), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8972] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_SLASH,
    ACTIONS(801), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_DASH,
  [8992] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_SLASH,
    ACTIONS(797), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9011] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_SLASH,
    ACTIONS(833), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9030] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_SLASH,
    ACTIONS(287), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9049] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_SLASH,
    ACTIONS(837), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9068] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_SLASH,
    ACTIONS(805), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9087] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_SLASH,
    ACTIONS(324), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9106] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_SLASH,
    ACTIONS(809), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9125] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_SLASH,
    ACTIONS(821), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9144] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_SLASH,
    ACTIONS(825), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9163] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_SLASH,
    ACTIONS(817), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9182] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_SLASH,
    ACTIONS(829), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9201] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_SLASH,
    ACTIONS(813), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9220] = 6,
    ACTIONS(943), 1,
      anon_sym_RBRACE,
    ACTIONS(947), 1,
      aux_sym_integer_value_token1,
    STATE(344), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(945), 2,
      sym_from,
      sym_to,
    STATE(252), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9242] = 7,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
    ACTIONS(949), 1,
      sym_identifier,
    STATE(221), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(360), 2,
      sym_string_value,
      sym_call_expression,
  [9266] = 6,
    ACTIONS(947), 1,
      aux_sym_integer_value_token1,
    ACTIONS(951), 1,
      anon_sym_RBRACE,
    STATE(344), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(945), 2,
      sym_from,
      sym_to,
    STATE(255), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9288] = 7,
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
    STATE(332), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9312] = 7,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
    ACTIONS(949), 1,
      sym_identifier,
    STATE(221), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(368), 2,
      sym_string_value,
      sym_call_expression,
  [9336] = 6,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
    ACTIONS(966), 1,
      aux_sym_integer_value_token1,
    STATE(344), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(963), 2,
      sym_from,
      sym_to,
    STATE(255), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9358] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(969), 1,
      anon_sym_RBRACK,
    STATE(335), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9382] = 7,
    ACTIONS(879), 1,
      anon_sym_LBRACE,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    ACTIONS(973), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      sym_block,
    STATE(278), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(975), 2,
      anon_sym_and,
      anon_sym_or,
  [9406] = 7,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    ACTIONS(977), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      sym_block,
    STATE(276), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(975), 2,
      anon_sym_and,
      anon_sym_or,
  [9430] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(979), 1,
      anon_sym_RBRACK,
    STATE(331), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9454] = 6,
    ACTIONS(947), 1,
      aux_sym_integer_value_token1,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
    STATE(344), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(945), 2,
      sym_from,
      sym_to,
    STATE(261), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9476] = 6,
    ACTIONS(947), 1,
      aux_sym_integer_value_token1,
    ACTIONS(983), 1,
      anon_sym_RBRACE,
    STATE(344), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(945), 2,
      sym_from,
      sym_to,
    STATE(255), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9498] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(985), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9511] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(987), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9524] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(989), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9537] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(991), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9556] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(993), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9569] = 6,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      sym_block,
    STATE(286), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(975), 2,
      anon_sym_and,
      anon_sym_or,
  [9590] = 2,
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
  [9603] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(465), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9616] = 6,
    ACTIONS(879), 1,
      anon_sym_LBRACE,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      sym_block,
    STATE(312), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(975), 2,
      anon_sym_and,
      anon_sym_or,
  [9637] = 5,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    ACTIONS(997), 1,
      anon_sym_SEMI,
    STATE(328), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(975), 2,
      anon_sym_and,
      anon_sym_or,
  [9655] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(999), 1,
      anon_sym_RBRACK,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9673] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9691] = 5,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_SEMI,
    STATE(326), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(975), 2,
      anon_sym_and,
      anon_sym_or,
  [9709] = 4,
    ACTIONS(1007), 1,
      aux_sym_integer_value_token1,
    STATE(348), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1005), 3,
      anon_sym_even,
      anon_sym_odd,
      sym__nth_functional_notation,
  [9725] = 6,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    ACTIONS(1009), 1,
      anon_sym_SEMI,
    STATE(145), 1,
      sym_block,
    STATE(311), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9745] = 5,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(1011), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(369), 2,
      sym_string_value,
      sym_call_expression,
  [9763] = 6,
    ACTIONS(879), 1,
      anon_sym_LBRACE,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    ACTIONS(1013), 1,
      anon_sym_SEMI,
    STATE(120), 1,
      sym_block,
    STATE(311), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9783] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9801] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(975), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1017), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [9815] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(1019), 1,
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
    ACTIONS(1021), 1,
      anon_sym_SEMI,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9851] = 5,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(1023), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(353), 2,
      sym_string_value,
      sym_call_expression,
  [9869] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(1025), 1,
      anon_sym_RBRACK,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9887] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_SLASH,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9905] = 5,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      sym_block,
    STATE(311), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9922] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(701), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [9933] = 4,
    STATE(24), 1,
      aux_sym_class_name_repeat1,
    STATE(59), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(885), 2,
      sym_escape_sequence,
      sym_identifier,
  [9948] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(729), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [9959] = 4,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1029), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9974] = 4,
    ACTIONS(1032), 1,
      anon_sym_SQUOTE,
    STATE(322), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1034), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [9989] = 4,
    ACTIONS(1036), 1,
      anon_sym_SQUOTE,
    STATE(296), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1038), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10004] = 4,
    ACTIONS(1036), 1,
      anon_sym_DQUOTE,
    STATE(297), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1040), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10019] = 4,
    ACTIONS(1042), 1,
      anon_sym_DQUOTE,
    STATE(294), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1044), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10034] = 4,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(975), 2,
      anon_sym_and,
      anon_sym_or,
  [10049] = 4,
    ACTIONS(1047), 1,
      anon_sym_SQUOTE,
    STATE(322), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1034), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10064] = 4,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE,
    STATE(294), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1049), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10079] = 4,
    ACTIONS(879), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(975), 2,
      anon_sym_and,
      anon_sym_or,
  [10094] = 4,
    ACTIONS(1032), 1,
      anon_sym_DQUOTE,
    STATE(294), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1049), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10109] = 3,
    ACTIONS(937), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(465), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10122] = 4,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10137] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1053), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10148] = 4,
    ACTIONS(1055), 1,
      anon_sym_DQUOTE,
    STATE(299), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1057), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10163] = 4,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    STATE(304), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(889), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [10178] = 4,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10193] = 4,
    STATE(24), 1,
      aux_sym_class_name_repeat1,
    STATE(89), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(885), 2,
      sym_escape_sequence,
      sym_identifier,
  [10208] = 4,
    ACTIONS(1064), 1,
      anon_sym_SQUOTE,
    STATE(309), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1066), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10223] = 4,
    ACTIONS(1064), 1,
      anon_sym_DQUOTE,
    STATE(310), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1068), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10238] = 4,
    ACTIONS(1070), 1,
      anon_sym_SQUOTE,
    STATE(322), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1034), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10253] = 4,
    ACTIONS(1070), 1,
      anon_sym_DQUOTE,
    STATE(294), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1049), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10268] = 4,
    ACTIONS(1072), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1017), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10283] = 5,
    ACTIONS(879), 1,
      anon_sym_LBRACE,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      sym_block,
    STATE(311), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10300] = 4,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10315] = 4,
    ACTIONS(1077), 1,
      anon_sym_SQUOTE,
    STATE(316), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1079), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10330] = 4,
    ACTIONS(1077), 1,
      anon_sym_DQUOTE,
    STATE(317), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1081), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10345] = 4,
    ACTIONS(1083), 1,
      anon_sym_SQUOTE,
    STATE(322), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1034), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10360] = 4,
    ACTIONS(1083), 1,
      anon_sym_DQUOTE,
    STATE(294), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1049), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10375] = 4,
    ACTIONS(1085), 1,
      anon_sym_SQUOTE,
    STATE(320), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1087), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10390] = 4,
    ACTIONS(1085), 1,
      anon_sym_DQUOTE,
    STATE(321), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1089), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10405] = 4,
    ACTIONS(1091), 1,
      anon_sym_SQUOTE,
    STATE(322), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1034), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10420] = 4,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    STATE(294), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1049), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10435] = 4,
    ACTIONS(1093), 1,
      anon_sym_SQUOTE,
    STATE(322), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1095), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10450] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(625), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10461] = 4,
    ACTIONS(1055), 1,
      anon_sym_SQUOTE,
    STATE(291), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1098), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10476] = 4,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    ACTIONS(759), 1,
      anon_sym_of,
    ACTIONS(1100), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10490] = 4,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    ACTIONS(1102), 1,
      anon_sym_SEMI,
    STATE(311), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10504] = 4,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10518] = 4,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    ACTIONS(1106), 1,
      anon_sym_SEMI,
    STATE(311), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10532] = 4,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10546] = 4,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    ACTIONS(1110), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10560] = 4,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_RBRACK,
    STATE(336), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10574] = 4,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(1115), 1,
      anon_sym_RBRACK,
    STATE(336), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10588] = 4,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10602] = 3,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(975), 2,
      anon_sym_and,
      anon_sym_or,
  [10614] = 4,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(1121), 1,
      anon_sym_RBRACK,
    STATE(336), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10628] = 4,
    ACTIONS(991), 1,
      anon_sym_RBRACK,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10642] = 4,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    STATE(304), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10656] = 3,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
    STATE(221), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10667] = 3,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10678] = 3,
    ACTIONS(1128), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10689] = 3,
    ACTIONS(1130), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10700] = 3,
    ACTIONS(757), 1,
      anon_sym_LBRACE,
    ACTIONS(1132), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10711] = 3,
    ACTIONS(1134), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_pseudo_class_nth_child_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10722] = 3,
    ACTIONS(1136), 1,
      anon_sym_LBRACE,
    STATE(302), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10733] = 3,
    ACTIONS(1138), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10744] = 3,
    ACTIONS(1138), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10755] = 3,
    ACTIONS(879), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10766] = 3,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
    ACTIONS(1142), 1,
      anon_sym_of,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10777] = 3,
    ACTIONS(1144), 1,
      aux_sym_color_value_token1,
    ACTIONS(1146), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10788] = 2,
    ACTIONS(1148), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10796] = 2,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10804] = 2,
    ACTIONS(1150), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10812] = 2,
    ACTIONS(1152), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10820] = 2,
    ACTIONS(1154), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10828] = 2,
    ACTIONS(1156), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10836] = 2,
    ACTIONS(1158), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10844] = 2,
    ACTIONS(1160), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10852] = 2,
    ACTIONS(1162), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10860] = 2,
    ACTIONS(1164), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10868] = 2,
    ACTIONS(1166), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10876] = 2,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10884] = 2,
    ACTIONS(1168), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10892] = 2,
    ACTIONS(1170), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10900] = 2,
    ACTIONS(1172), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10908] = 2,
    ACTIONS(1174), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10916] = 2,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10924] = 2,
    ACTIONS(1176), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10932] = 2,
    ACTIONS(1178), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10940] = 2,
    ACTIONS(1180), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10948] = 2,
    ACTIONS(1182), 1,
      ts_builtin_sym_end,
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
  [SMALL_STATE(20)] = 1475,
  [SMALL_STATE(21)] = 1540,
  [SMALL_STATE(22)] = 1575,
  [SMALL_STATE(23)] = 1614,
  [SMALL_STATE(24)] = 1675,
  [SMALL_STATE(25)] = 1712,
  [SMALL_STATE(26)] = 1773,
  [SMALL_STATE(27)] = 1826,
  [SMALL_STATE(28)] = 1863,
  [SMALL_STATE(29)] = 1898,
  [SMALL_STATE(30)] = 1959,
  [SMALL_STATE(31)] = 2009,
  [SMALL_STATE(32)] = 2059,
  [SMALL_STATE(33)] = 2111,
  [SMALL_STATE(34)] = 2171,
  [SMALL_STATE(35)] = 2221,
  [SMALL_STATE(36)] = 2281,
  [SMALL_STATE(37)] = 2331,
  [SMALL_STATE(38)] = 2381,
  [SMALL_STATE(39)] = 2437,
  [SMALL_STATE(40)] = 2497,
  [SMALL_STATE(41)] = 2555,
  [SMALL_STATE(42)] = 2605,
  [SMALL_STATE(43)] = 2661,
  [SMALL_STATE(44)] = 2711,
  [SMALL_STATE(45)] = 2761,
  [SMALL_STATE(46)] = 2813,
  [SMALL_STATE(47)] = 2848,
  [SMALL_STATE(48)] = 2905,
  [SMALL_STATE(49)] = 2940,
  [SMALL_STATE(50)] = 2995,
  [SMALL_STATE(51)] = 3030,
  [SMALL_STATE(52)] = 3065,
  [SMALL_STATE(53)] = 3122,
  [SMALL_STATE(54)] = 3176,
  [SMALL_STATE(55)] = 3230,
  [SMALL_STATE(56)] = 3270,
  [SMALL_STATE(57)] = 3324,
  [SMALL_STATE(58)] = 3378,
  [SMALL_STATE(59)] = 3432,
  [SMALL_STATE(60)] = 3461,
  [SMALL_STATE(61)] = 3490,
  [SMALL_STATE(62)] = 3519,
  [SMALL_STATE(63)] = 3548,
  [SMALL_STATE(64)] = 3577,
  [SMALL_STATE(65)] = 3606,
  [SMALL_STATE(66)] = 3635,
  [SMALL_STATE(67)] = 3666,
  [SMALL_STATE(68)] = 3695,
  [SMALL_STATE(69)] = 3724,
  [SMALL_STATE(70)] = 3775,
  [SMALL_STATE(71)] = 3804,
  [SMALL_STATE(72)] = 3833,
  [SMALL_STATE(73)] = 3862,
  [SMALL_STATE(74)] = 3891,
  [SMALL_STATE(75)] = 3920,
  [SMALL_STATE(76)] = 3949,
  [SMALL_STATE(77)] = 3978,
  [SMALL_STATE(78)] = 4007,
  [SMALL_STATE(79)] = 4038,
  [SMALL_STATE(80)] = 4067,
  [SMALL_STATE(81)] = 4098,
  [SMALL_STATE(82)] = 4127,
  [SMALL_STATE(83)] = 4156,
  [SMALL_STATE(84)] = 4191,
  [SMALL_STATE(85)] = 4222,
  [SMALL_STATE(86)] = 4253,
  [SMALL_STATE(87)] = 4282,
  [SMALL_STATE(88)] = 4311,
  [SMALL_STATE(89)] = 4340,
  [SMALL_STATE(90)] = 4369,
  [SMALL_STATE(91)] = 4398,
  [SMALL_STATE(92)] = 4427,
  [SMALL_STATE(93)] = 4478,
  [SMALL_STATE(94)] = 4507,
  [SMALL_STATE(95)] = 4536,
  [SMALL_STATE(96)] = 4565,
  [SMALL_STATE(97)] = 4594,
  [SMALL_STATE(98)] = 4623,
  [SMALL_STATE(99)] = 4671,
  [SMALL_STATE(100)] = 4699,
  [SMALL_STATE(101)] = 4727,
  [SMALL_STATE(102)] = 4775,
  [SMALL_STATE(103)] = 4823,
  [SMALL_STATE(104)] = 4851,
  [SMALL_STATE(105)] = 4879,
  [SMALL_STATE(106)] = 4907,
  [SMALL_STATE(107)] = 4955,
  [SMALL_STATE(108)] = 4983,
  [SMALL_STATE(109)] = 5011,
  [SMALL_STATE(110)] = 5039,
  [SMALL_STATE(111)] = 5067,
  [SMALL_STATE(112)] = 5115,
  [SMALL_STATE(113)] = 5143,
  [SMALL_STATE(114)] = 5191,
  [SMALL_STATE(115)] = 5219,
  [SMALL_STATE(116)] = 5267,
  [SMALL_STATE(117)] = 5295,
  [SMALL_STATE(118)] = 5323,
  [SMALL_STATE(119)] = 5371,
  [SMALL_STATE(120)] = 5399,
  [SMALL_STATE(121)] = 5427,
  [SMALL_STATE(122)] = 5455,
  [SMALL_STATE(123)] = 5483,
  [SMALL_STATE(124)] = 5511,
  [SMALL_STATE(125)] = 5559,
  [SMALL_STATE(126)] = 5587,
  [SMALL_STATE(127)] = 5615,
  [SMALL_STATE(128)] = 5643,
  [SMALL_STATE(129)] = 5671,
  [SMALL_STATE(130)] = 5699,
  [SMALL_STATE(131)] = 5727,
  [SMALL_STATE(132)] = 5775,
  [SMALL_STATE(133)] = 5803,
  [SMALL_STATE(134)] = 5831,
  [SMALL_STATE(135)] = 5859,
  [SMALL_STATE(136)] = 5887,
  [SMALL_STATE(137)] = 5915,
  [SMALL_STATE(138)] = 5943,
  [SMALL_STATE(139)] = 5971,
  [SMALL_STATE(140)] = 5999,
  [SMALL_STATE(141)] = 6027,
  [SMALL_STATE(142)] = 6055,
  [SMALL_STATE(143)] = 6103,
  [SMALL_STATE(144)] = 6131,
  [SMALL_STATE(145)] = 6159,
  [SMALL_STATE(146)] = 6187,
  [SMALL_STATE(147)] = 6215,
  [SMALL_STATE(148)] = 6243,
  [SMALL_STATE(149)] = 6271,
  [SMALL_STATE(150)] = 6299,
  [SMALL_STATE(151)] = 6327,
  [SMALL_STATE(152)] = 6359,
  [SMALL_STATE(153)] = 6391,
  [SMALL_STATE(154)] = 6419,
  [SMALL_STATE(155)] = 6467,
  [SMALL_STATE(156)] = 6515,
  [SMALL_STATE(157)] = 6563,
  [SMALL_STATE(158)] = 6591,
  [SMALL_STATE(159)] = 6619,
  [SMALL_STATE(160)] = 6667,
  [SMALL_STATE(161)] = 6715,
  [SMALL_STATE(162)] = 6763,
  [SMALL_STATE(163)] = 6811,
  [SMALL_STATE(164)] = 6859,
  [SMALL_STATE(165)] = 6907,
  [SMALL_STATE(166)] = 6935,
  [SMALL_STATE(167)] = 6964,
  [SMALL_STATE(168)] = 6993,
  [SMALL_STATE(169)] = 7022,
  [SMALL_STATE(170)] = 7051,
  [SMALL_STATE(171)] = 7080,
  [SMALL_STATE(172)] = 7109,
  [SMALL_STATE(173)] = 7138,
  [SMALL_STATE(174)] = 7167,
  [SMALL_STATE(175)] = 7196,
  [SMALL_STATE(176)] = 7225,
  [SMALL_STATE(177)] = 7254,
  [SMALL_STATE(178)] = 7283,
  [SMALL_STATE(179)] = 7312,
  [SMALL_STATE(180)] = 7342,
  [SMALL_STATE(181)] = 7374,
  [SMALL_STATE(182)] = 7406,
  [SMALL_STATE(183)] = 7436,
  [SMALL_STATE(184)] = 7468,
  [SMALL_STATE(185)] = 7500,
  [SMALL_STATE(186)] = 7530,
  [SMALL_STATE(187)] = 7562,
  [SMALL_STATE(188)] = 7592,
  [SMALL_STATE(189)] = 7621,
  [SMALL_STATE(190)] = 7660,
  [SMALL_STATE(191)] = 7689,
  [SMALL_STATE(192)] = 7718,
  [SMALL_STATE(193)] = 7747,
  [SMALL_STATE(194)] = 7786,
  [SMALL_STATE(195)] = 7821,
  [SMALL_STATE(196)] = 7853,
  [SMALL_STATE(197)] = 7893,
  [SMALL_STATE(198)] = 7937,
  [SMALL_STATE(199)] = 7981,
  [SMALL_STATE(200)] = 8003,
  [SMALL_STATE(201)] = 8047,
  [SMALL_STATE(202)] = 8069,
  [SMALL_STATE(203)] = 8091,
  [SMALL_STATE(204)] = 8135,
  [SMALL_STATE(205)] = 8167,
  [SMALL_STATE(206)] = 8206,
  [SMALL_STATE(207)] = 8233,
  [SMALL_STATE(208)] = 8257,
  [SMALL_STATE(209)] = 8283,
  [SMALL_STATE(210)] = 8305,
  [SMALL_STATE(211)] = 8343,
  [SMALL_STATE(212)] = 8367,
  [SMALL_STATE(213)] = 8393,
  [SMALL_STATE(214)] = 8419,
  [SMALL_STATE(215)] = 8445,
  [SMALL_STATE(216)] = 8471,
  [SMALL_STATE(217)] = 8497,
  [SMALL_STATE(218)] = 8523,
  [SMALL_STATE(219)] = 8561,
  [SMALL_STATE(220)] = 8587,
  [SMALL_STATE(221)] = 8616,
  [SMALL_STATE(222)] = 8637,
  [SMALL_STATE(223)] = 8658,
  [SMALL_STATE(224)] = 8679,
  [SMALL_STATE(225)] = 8700,
  [SMALL_STATE(226)] = 8721,
  [SMALL_STATE(227)] = 8742,
  [SMALL_STATE(228)] = 8763,
  [SMALL_STATE(229)] = 8784,
  [SMALL_STATE(230)] = 8819,
  [SMALL_STATE(231)] = 8840,
  [SMALL_STATE(232)] = 8861,
  [SMALL_STATE(233)] = 8882,
  [SMALL_STATE(234)] = 8907,
  [SMALL_STATE(235)] = 8928,
  [SMALL_STATE(236)] = 8950,
  [SMALL_STATE(237)] = 8972,
  [SMALL_STATE(238)] = 8992,
  [SMALL_STATE(239)] = 9011,
  [SMALL_STATE(240)] = 9030,
  [SMALL_STATE(241)] = 9049,
  [SMALL_STATE(242)] = 9068,
  [SMALL_STATE(243)] = 9087,
  [SMALL_STATE(244)] = 9106,
  [SMALL_STATE(245)] = 9125,
  [SMALL_STATE(246)] = 9144,
  [SMALL_STATE(247)] = 9163,
  [SMALL_STATE(248)] = 9182,
  [SMALL_STATE(249)] = 9201,
  [SMALL_STATE(250)] = 9220,
  [SMALL_STATE(251)] = 9242,
  [SMALL_STATE(252)] = 9266,
  [SMALL_STATE(253)] = 9288,
  [SMALL_STATE(254)] = 9312,
  [SMALL_STATE(255)] = 9336,
  [SMALL_STATE(256)] = 9358,
  [SMALL_STATE(257)] = 9382,
  [SMALL_STATE(258)] = 9406,
  [SMALL_STATE(259)] = 9430,
  [SMALL_STATE(260)] = 9454,
  [SMALL_STATE(261)] = 9476,
  [SMALL_STATE(262)] = 9498,
  [SMALL_STATE(263)] = 9511,
  [SMALL_STATE(264)] = 9524,
  [SMALL_STATE(265)] = 9537,
  [SMALL_STATE(266)] = 9556,
  [SMALL_STATE(267)] = 9569,
  [SMALL_STATE(268)] = 9590,
  [SMALL_STATE(269)] = 9603,
  [SMALL_STATE(270)] = 9616,
  [SMALL_STATE(271)] = 9637,
  [SMALL_STATE(272)] = 9655,
  [SMALL_STATE(273)] = 9673,
  [SMALL_STATE(274)] = 9691,
  [SMALL_STATE(275)] = 9709,
  [SMALL_STATE(276)] = 9725,
  [SMALL_STATE(277)] = 9745,
  [SMALL_STATE(278)] = 9763,
  [SMALL_STATE(279)] = 9783,
  [SMALL_STATE(280)] = 9801,
  [SMALL_STATE(281)] = 9815,
  [SMALL_STATE(282)] = 9833,
  [SMALL_STATE(283)] = 9851,
  [SMALL_STATE(284)] = 9869,
  [SMALL_STATE(285)] = 9887,
  [SMALL_STATE(286)] = 9905,
  [SMALL_STATE(287)] = 9922,
  [SMALL_STATE(288)] = 9933,
  [SMALL_STATE(289)] = 9948,
  [SMALL_STATE(290)] = 9959,
  [SMALL_STATE(291)] = 9974,
  [SMALL_STATE(292)] = 9989,
  [SMALL_STATE(293)] = 10004,
  [SMALL_STATE(294)] = 10019,
  [SMALL_STATE(295)] = 10034,
  [SMALL_STATE(296)] = 10049,
  [SMALL_STATE(297)] = 10064,
  [SMALL_STATE(298)] = 10079,
  [SMALL_STATE(299)] = 10094,
  [SMALL_STATE(300)] = 10109,
  [SMALL_STATE(301)] = 10122,
  [SMALL_STATE(302)] = 10137,
  [SMALL_STATE(303)] = 10148,
  [SMALL_STATE(304)] = 10163,
  [SMALL_STATE(305)] = 10178,
  [SMALL_STATE(306)] = 10193,
  [SMALL_STATE(307)] = 10208,
  [SMALL_STATE(308)] = 10223,
  [SMALL_STATE(309)] = 10238,
  [SMALL_STATE(310)] = 10253,
  [SMALL_STATE(311)] = 10268,
  [SMALL_STATE(312)] = 10283,
  [SMALL_STATE(313)] = 10300,
  [SMALL_STATE(314)] = 10315,
  [SMALL_STATE(315)] = 10330,
  [SMALL_STATE(316)] = 10345,
  [SMALL_STATE(317)] = 10360,
  [SMALL_STATE(318)] = 10375,
  [SMALL_STATE(319)] = 10390,
  [SMALL_STATE(320)] = 10405,
  [SMALL_STATE(321)] = 10420,
  [SMALL_STATE(322)] = 10435,
  [SMALL_STATE(323)] = 10450,
  [SMALL_STATE(324)] = 10461,
  [SMALL_STATE(325)] = 10476,
  [SMALL_STATE(326)] = 10490,
  [SMALL_STATE(327)] = 10504,
  [SMALL_STATE(328)] = 10518,
  [SMALL_STATE(329)] = 10532,
  [SMALL_STATE(330)] = 10546,
  [SMALL_STATE(331)] = 10560,
  [SMALL_STATE(332)] = 10574,
  [SMALL_STATE(333)] = 10588,
  [SMALL_STATE(334)] = 10602,
  [SMALL_STATE(335)] = 10614,
  [SMALL_STATE(336)] = 10628,
  [SMALL_STATE(337)] = 10642,
  [SMALL_STATE(338)] = 10656,
  [SMALL_STATE(339)] = 10667,
  [SMALL_STATE(340)] = 10678,
  [SMALL_STATE(341)] = 10689,
  [SMALL_STATE(342)] = 10700,
  [SMALL_STATE(343)] = 10711,
  [SMALL_STATE(344)] = 10722,
  [SMALL_STATE(345)] = 10733,
  [SMALL_STATE(346)] = 10744,
  [SMALL_STATE(347)] = 10755,
  [SMALL_STATE(348)] = 10766,
  [SMALL_STATE(349)] = 10777,
  [SMALL_STATE(350)] = 10788,
  [SMALL_STATE(351)] = 10796,
  [SMALL_STATE(352)] = 10804,
  [SMALL_STATE(353)] = 10812,
  [SMALL_STATE(354)] = 10820,
  [SMALL_STATE(355)] = 10828,
  [SMALL_STATE(356)] = 10836,
  [SMALL_STATE(357)] = 10844,
  [SMALL_STATE(358)] = 10852,
  [SMALL_STATE(359)] = 10860,
  [SMALL_STATE(360)] = 10868,
  [SMALL_STATE(361)] = 10876,
  [SMALL_STATE(362)] = 10884,
  [SMALL_STATE(363)] = 10892,
  [SMALL_STATE(364)] = 10900,
  [SMALL_STATE(365)] = 10908,
  [SMALL_STATE(366)] = 10916,
  [SMALL_STATE(367)] = 10924,
  [SMALL_STATE(368)] = 10932,
  [SMALL_STATE(369)] = 10940,
  [SMALL_STATE(370)] = 10948,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(364),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, 0, 13),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, 0, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, 0, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(365),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, 0, 13),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(365),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, 0, 10),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, 0, 10),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, 0, 4),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, 0, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, 0, 3),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, 0, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, 0, 10),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, 0, 10),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, 0, 5),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, 0, 5),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, 0, 15),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, 0, 15),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nth_child_pseudo_class_selector, 2, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nth_child_pseudo_class_selector, 2, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, 0, 9),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, 0, 9),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 6),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 6),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, 0, 11),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, 0, 11),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, 0, 15),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, 0, 15),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, 0, 14),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, 0, 14),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, 0, 4),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, 0, 4),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, 0, 9),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, 0, 9),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, 0, 8),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, 0, 8),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, 0, 0),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, 0, 12),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, 0, 12),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, 0, 13),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, 0, 13),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4, 0, 0),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, 0, 13),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, 0, 13),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcss_statement, 3, 0, 0),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcss_statement, 3, 0, 0),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, 0, 13),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, 0, 13),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 7),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 7),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3, 0, 0),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3, 0, 0),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4, 0, 0),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4, 0, 0),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, 0, 0),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 0),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, 0, 13),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1, 0, 0),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2, 0, 0),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1, 0, 0),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0),
  [963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0), SHIFT_REPEAT(342),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, 0, 16),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3, 0, 0),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4, 0, 0),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2, 0, 0),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3, 0, 0),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2, 0, 0),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1029] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2, 0, 0),
  [1044] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2, 0, 0), SHIFT_REPEAT(294),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2, 0, 0),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1059] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1072] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [1093] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2, 0, 0),
  [1095] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2, 0, 0),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1182] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
