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
#define STATE_COUNT 331
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 136
#define ALIAS_COUNT 9
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

enum ts_symbol_identifiers {
  anon_sym_BQUOTE = 1,
  anon_sym_ATimport = 2,
  anon_sym_COMMA = 3,
  anon_sym_SEMI = 4,
  anon_sym_ATmedia = 5,
  anon_sym_ATcharset = 6,
  anon_sym_ATnamespace = 7,
  anon_sym_ATkeyframes = 8,
  aux_sym_keyframes_statement_token1 = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  sym_from = 12,
  sym_to = 13,
  anon_sym_ATsupports = 14,
  sym_nesting_selector = 15,
  anon_sym_STAR = 16,
  anon_sym_DOT = 17,
  anon_sym_has = 18,
  anon_sym_not = 19,
  anon_sym_is = 20,
  anon_sym_where = 21,
  anon_sym_host = 22,
  anon_sym_host_DASHcontext = 23,
  anon_sym_nth_DASHchild = 24,
  anon_sym_nth_DASHlast_DASHchild = 25,
  anon_sym_COLON_COLON = 26,
  anon_sym_POUND = 27,
  anon_sym_LBRACK = 28,
  anon_sym_EQ = 29,
  anon_sym_TILDE_EQ = 30,
  anon_sym_CARET_EQ = 31,
  anon_sym_PIPE_EQ = 32,
  anon_sym_STAR_EQ = 33,
  anon_sym_DOLLAR_EQ = 34,
  anon_sym_RBRACK = 35,
  anon_sym_GT = 36,
  anon_sym_TILDE = 37,
  anon_sym_PLUS = 38,
  anon_sym_PIPE = 39,
  anon_sym_LPAREN = 40,
  anon_sym_RPAREN = 41,
  anon_sym_even = 42,
  anon_sym_odd = 43,
  anon_sym_of = 44,
  sym__nth_functional_notation = 45,
  anon_sym_COLON = 46,
  sym_important = 47,
  anon_sym_LPAREN2 = 48,
  anon_sym_and = 49,
  anon_sym_or = 50,
  anon_sym_only = 51,
  anon_sym_selector = 52,
  aux_sym_color_value_token1 = 53,
  anon_sym_SQUOTE = 54,
  aux_sym_string_value_token1 = 55,
  anon_sym_DQUOTE = 56,
  aux_sym_string_value_token2 = 57,
  sym_escape_sequence = 58,
  aux_sym_integer_value_token1 = 59,
  aux_sym_float_value_token1 = 60,
  sym_unit = 61,
  anon_sym_LBRACK2 = 62,
  anon_sym_DASH = 63,
  anon_sym_SLASH = 64,
  sym_identifier = 65,
  sym_at_keyword = 66,
  sym_js_comment = 67,
  sym_comment = 68,
  sym_plain_value = 69,
  sym__descendant_operator = 70,
  sym__pseudo_class_selector_colon = 71,
  sym___error_recovery = 72,
  sym_stylesheet = 73,
  sym_import_statement = 74,
  sym_media_statement = 75,
  sym_charset_statement = 76,
  sym_namespace_statement = 77,
  sym_keyframes_statement = 78,
  sym_keyframe_block_list = 79,
  sym_keyframe_block = 80,
  sym_supports_statement = 81,
  sym_postcss_statement = 82,
  sym_at_rule = 83,
  sym_rule_set = 84,
  sym_selectors = 85,
  sym_block = 86,
  sym__selector = 87,
  sym_universal_selector = 88,
  sym_class_selector = 89,
  sym_pseudo_class_selector = 90,
  sym__nth_child_pseudo_class_selector = 91,
  sym_pseudo_element_selector = 92,
  sym_id_selector = 93,
  sym_attribute_selector = 94,
  sym_child_selector = 95,
  sym_descendant_selector = 96,
  sym_sibling_selector = 97,
  sym_adjacent_sibling_selector = 98,
  sym_namespace_selector = 99,
  sym_pseudo_class_arguments = 100,
  sym_pseudo_class_with_selector_arguments = 101,
  sym_pseudo_class_nth_child_arguments = 102,
  sym_pseudo_element_arguments = 103,
  sym_declaration = 104,
  sym_last_declaration = 105,
  sym__query = 106,
  sym_feature_query = 107,
  sym_parenthesized_query = 108,
  sym_binary_query = 109,
  sym_unary_query = 110,
  sym_selector_query = 111,
  sym__value = 112,
  sym_parenthesized_value = 113,
  sym_color_value = 114,
  sym_string_value = 115,
  sym_integer_value = 116,
  sym_float_value = 117,
  sym_grid_value = 118,
  sym_call_expression = 119,
  sym_binary_expression = 120,
  sym_arguments = 121,
  sym_class_name = 122,
  aux_sym_stylesheet_repeat1 = 123,
  aux_sym_import_statement_repeat1 = 124,
  aux_sym_keyframe_block_list_repeat1 = 125,
  aux_sym_postcss_statement_repeat1 = 126,
  aux_sym_selectors_repeat1 = 127,
  aux_sym_block_repeat1 = 128,
  aux_sym_pseudo_class_arguments_repeat1 = 129,
  aux_sym_declaration_repeat1 = 130,
  aux_sym_string_value_repeat1 = 131,
  aux_sym_string_value_repeat2 = 132,
  aux_sym_grid_value_repeat1 = 133,
  aux_sym_arguments_repeat1 = 134,
  aux_sym_class_name_repeat1 = 135,
  alias_sym_attribute_name = 136,
  alias_sym_feature_name = 137,
  alias_sym_function_name = 138,
  alias_sym_id_name = 139,
  alias_sym_keyframes_name = 140,
  alias_sym_keyword_query = 141,
  alias_sym_namespace_name = 142,
  alias_sym_property_name = 143,
  alias_sym_tag_name = 144,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BQUOTE] = "`",
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
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
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
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
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
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 57,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 57,
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
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 81,
  [84] = 84,
  [85] = 85,
  [86] = 81,
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
  [106] = 60,
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
  [118] = 61,
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
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 138,
  [141] = 131,
  [142] = 142,
  [143] = 143,
  [144] = 131,
  [145] = 145,
  [146] = 135,
  [147] = 138,
  [148] = 135,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 60,
  [159] = 61,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
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
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 87,
  [186] = 186,
  [187] = 187,
  [188] = 130,
  [189] = 142,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 150,
  [196] = 196,
  [197] = 161,
  [198] = 157,
  [199] = 156,
  [200] = 87,
  [201] = 60,
  [202] = 149,
  [203] = 61,
  [204] = 154,
  [205] = 205,
  [206] = 206,
  [207] = 155,
  [208] = 152,
  [209] = 153,
  [210] = 160,
  [211] = 151,
  [212] = 142,
  [213] = 150,
  [214] = 130,
  [215] = 156,
  [216] = 149,
  [217] = 151,
  [218] = 60,
  [219] = 154,
  [220] = 161,
  [221] = 61,
  [222] = 152,
  [223] = 153,
  [224] = 160,
  [225] = 155,
  [226] = 157,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 228,
  [231] = 231,
  [232] = 228,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 243,
  [248] = 243,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 56,
  [257] = 254,
  [258] = 258,
  [259] = 44,
  [260] = 260,
  [261] = 261,
  [262] = 51,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 254,
  [271] = 260,
  [272] = 269,
  [273] = 273,
  [274] = 274,
  [275] = 258,
  [276] = 254,
  [277] = 260,
  [278] = 268,
  [279] = 269,
  [280] = 280,
  [281] = 281,
  [282] = 258,
  [283] = 254,
  [284] = 260,
  [285] = 268,
  [286] = 269,
  [287] = 260,
  [288] = 268,
  [289] = 269,
  [290] = 268,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 294,
  [297] = 294,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 130,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 130,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 316,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 320,
  [323] = 320,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 329,
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
      if (eof) ADVANCE(136);
      ADVANCE_MAP(
        '!', 79,
        '"', 252,
        '#', 174,
        '$', 50,
        '&', 151,
        '\'', 244,
        '(', 190,
        ')', 191,
        '*', 152,
        '+', 187,
        ',', 139,
        '-', 297,
        '.', 154,
        '/', 299,
        ':', 199,
        ';', 140,
        '=', 176,
        '>', 183,
        '@', 56,
        'E', 42,
        '[', 175,
        '\\', 127,
        ']', 182,
        '^', 51,
        '`', 137,
        'a', 89,
        'e', 40,
        'f', 103,
        'h', 53,
        'i', 106,
        'n', 94,
        'o', 66,
        's', 70,
        't', 95,
        'w', 77,
        '{', 146,
        '|', 189,
        '}', 147,
        '~', 185,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(133);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == '/') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '$') ADVANCE(257);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 79,
        '"', 252,
        '#', 174,
        '$', 121,
        '%', 293,
        '\'', 244,
        '(', 201,
        ')', 191,
        '*', 152,
        '+', 187,
        ',', 139,
        '-', 296,
        '.', 124,
        '/', 300,
        ';', 140,
        '[', 294,
        '_', 304,
        '}', 147,
        'E', 289,
        'e', 289,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 79,
        '"', 252,
        '#', 174,
        '$', 121,
        '&', 151,
        '\'', 244,
        '(', 201,
        ')', 191,
        '*', 152,
        '+', 187,
        '-', 46,
        '.', 154,
        '/', 36,
        ':', 49,
        '>', 183,
        '[', 175,
        '_', 304,
        '|', 188,
        '~', 184,
        'E', 301,
        'e', 301,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 79,
        '"', 252,
        '#', 174,
        '$', 121,
        '\'', 244,
        '(', 190,
        ')', 191,
        '*', 152,
        '+', 187,
        ',', 139,
        '-', 296,
        '.', 154,
        '/', 300,
        ':', 49,
        '>', 183,
        '[', 175,
        '_', 304,
        '|', 188,
        '~', 184,
        'E', 301,
        'e', 301,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '!', 79,
        '"', 252,
        '#', 174,
        '$', 121,
        '\'', 244,
        '(', 190,
        ')', 191,
        '*', 152,
        '+', 187,
        ',', 139,
        '-', 296,
        '.', 124,
        '/', 300,
        ';', 140,
        '[', 294,
        '_', 304,
        '}', 147,
        'E', 301,
        'e', 301,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '!', 79,
        '"', 252,
        '#', 174,
        '$', 121,
        '\'', 244,
        '(', 190,
        '*', 152,
        '+', 187,
        ',', 139,
        '-', 296,
        '.', 124,
        '/', 300,
        ';', 140,
        '[', 294,
        '_', 304,
        'a', 312,
        'o', 316,
        '{', 146,
        'E', 301,
        'e', 301,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '!', 79,
        '"', 252,
        '#', 174,
        '$', 121,
        '\'', 244,
        '(', 201,
        ')', 191,
        '*', 152,
        '+', 187,
        ',', 139,
        '-', 296,
        '.', 154,
        '/', 300,
        ':', 49,
        '>', 183,
        '[', 175,
        '_', 304,
        '|', 188,
        '~', 184,
        'E', 301,
        'e', 301,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '!', 79,
        '"', 252,
        '#', 174,
        '$', 121,
        '\'', 244,
        '(', 201,
        ')', 191,
        '*', 152,
        '+', 187,
        ',', 139,
        '-', 296,
        '.', 124,
        '/', 300,
        ';', 140,
        '[', 294,
        '_', 304,
        '}', 147,
        'E', 301,
        'e', 301,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '!', 79,
        '"', 252,
        '#', 174,
        '$', 121,
        '\'', 244,
        '(', 201,
        ')', 191,
        '+', 47,
        ',', 139,
        '-', 46,
        '.', 124,
        '/', 36,
        ';', 140,
        '[', 294,
        '_', 304,
        '}', 147,
        'E', 301,
        'e', 301,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '!', 79,
        '"', 252,
        '#', 174,
        '$', 121,
        '\'', 244,
        '(', 201,
        '*', 152,
        '+', 187,
        ',', 139,
        '-', 296,
        '.', 124,
        '/', 300,
        ';', 140,
        '[', 294,
        '_', 304,
        'a', 312,
        'o', 316,
        '{', 146,
        'E', 301,
        'e', 301,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '!', 79,
        '"', 252,
        '#', 174,
        '$', 121,
        '\'', 244,
        '(', 201,
        '+', 47,
        '-', 46,
        '.', 124,
        '/', 36,
        ';', 140,
        '[', 294,
        '_', 304,
        'n', 313,
        'o', 311,
        's', 308,
        '{', 146,
        'E', 301,
        'e', 301,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '#', 174,
        '$', 50,
        '(', 190,
        ')', 191,
        '*', 52,
        '+', 186,
        ',', 139,
        '-', 130,
        '.', 153,
        '/', 35,
        ':', 49,
        '=', 176,
        '>', 183,
        '[', 175,
        '\\', 127,
        ']', 182,
        '^', 51,
        '{', 146,
        '|', 189,
        '~', 185,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '#', 174,
        '$', 50,
        ')', 191,
        '*', 52,
        '+', 186,
        ',', 139,
        '-', 130,
        '.', 153,
        '/', 35,
        ':', 49,
        '=', 176,
        '>', 183,
        '[', 175,
        '\\', 127,
        ']', 182,
        '^', 51,
        '{', 146,
        '|', 189,
        '~', 185,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '$', 121,
        '%', 293,
        '(', 201,
        '*', 152,
        '+', 186,
        '-', 298,
        '/', 299,
        ';', 140,
        'n', 282,
        'o', 281,
        's', 278,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '$', 121,
        '(', 190,
        ')', 191,
        '*', 152,
        '+', 186,
        ',', 139,
        '-', 295,
        '/', 299,
        ':', 198,
        ';', 140,
        ']', 182,
        'a', 88,
        'o', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '$', 121,
        '(', 190,
        '*', 152,
        '+', 186,
        '-', 298,
        '/', 299,
        ';', 140,
        'n', 348,
        'o', 345,
        's', 333,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '$', 121,
        '(', 201,
        '*', 152,
        '+', 186,
        '-', 298,
        '/', 299,
        ';', 140,
        'n', 348,
        'o', 345,
        's', 333,
        '{', 146,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '$', 121,
        '(', 201,
        '*', 152,
        '+', 186,
        '-', 298,
        '/', 299,
        ';', 140,
        'n', 348,
        'o', 345,
        's', 333,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '$', 121,
        '(', 201,
        '-', 130,
        '/', 35,
        ';', 140,
        'n', 348,
        'o', 345,
        's', 333,
        '{', 146,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '$', 121,
        ')', 191,
        '*', 152,
        '+', 186,
        ',', 139,
        '-', 295,
        '/', 299,
        ':', 198,
        ';', 140,
        ']', 182,
        'a', 88,
        'o', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '$', 121,
        ')', 191,
        '*', 152,
        '+', 186,
        ',', 139,
        '-', 295,
        '/', 299,
        ';', 140,
        ']', 182,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '$', 121,
        ')', 191,
        '*', 152,
        '+', 186,
        ',', 139,
        '-', 295,
        '/', 299,
        ';', 140,
        ']', 182,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '$', 121,
        ')', 191,
        ',', 139,
        '/', 35,
        ':', 198,
        ';', 140,
        'a', 88,
        'f', 102,
        'o', 74,
        't', 95,
        '{', 146,
        '}', 147,
        '+', 126,
        '-', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(292);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 26:
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      END_STATE();
    case 27:
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == 'o') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '$', 121,
        '-', 130,
        '/', 35,
        '\\', 127,
        'h', 322,
        'i', 353,
        'n', 347,
        'w', 337,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '{') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '{') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(419);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(416);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(420);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == 'v') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == 'v') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(304);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(173);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '{') ADVANCE(122);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(180);
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
      if (lookahead == 'c') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(388);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(377);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead == 's') ADVANCE(411);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
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
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(194);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(163);
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
      if (lookahead == 'f') ADVANCE(194);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(39);
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
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
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
      if (lookahead == 'o') ADVANCE(149);
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
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(45);
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
      if (lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 121:
      if (lookahead == '{') ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == '}') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 123:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(260);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 130:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 131:
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(48);
      END_STATE();
    case 132:
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 133:
      if (eof) ADVANCE(136);
      ADVANCE_MAP(
        '!', 79,
        '"', 252,
        '#', 174,
        '$', 50,
        '&', 151,
        '\'', 244,
        '(', 201,
        ')', 191,
        '*', 152,
        '+', 187,
        ',', 139,
        '-', 297,
        '.', 154,
        '/', 299,
        ':', 199,
        ';', 140,
        '=', 176,
        '>', 183,
        '@', 56,
        'E', 43,
        '[', 175,
        '\\', 127,
        ']', 182,
        '^', 51,
        '`', 137,
        'a', 88,
        'e', 41,
        'f', 102,
        'h', 53,
        'i', 106,
        'n', 94,
        'o', 66,
        's', 70,
        't', 95,
        'w', 77,
        '{', 146,
        '|', 189,
        '}', 147,
        '~', 185,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 134:
      if (eof) ADVANCE(136);
      ADVANCE_MAP(
        '"', 252,
        '#', 174,
        '$', 121,
        '&', 151,
        '\'', 244,
        '(', 190,
        ')', 191,
        '*', 152,
        '+', 186,
        ',', 139,
        '-', 130,
        '.', 153,
        '/', 35,
        ':', 199,
        ';', 140,
        '>', 183,
        '@', 56,
        '[', 175,
        '\\', 127,
        ']', 182,
        '`', 137,
        '{', 146,
        '|', 188,
        '}', 147,
        '~', 184,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 135:
      if (eof) ADVANCE(136);
      ADVANCE_MAP(
        '"', 252,
        '#', 174,
        '$', 121,
        '&', 151,
        '\'', 244,
        ')', 191,
        '*', 152,
        '+', 186,
        ',', 139,
        '-', 130,
        '.', 153,
        '/', 35,
        ':', 199,
        ';', 140,
        '>', 183,
        '@', 56,
        '[', 175,
        '\\', 127,
        ']', 182,
        '`', 137,
        '{', 146,
        '|', 188,
        '}', 147,
        '~', 184,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_has);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(177);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(179);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_even);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_odd);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (lookahead == '+') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(173);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '/') ADVANCE(246);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(251);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(248);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(251);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(247);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(38);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(247);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(38);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '{') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '}') ADVANCE(250);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '$') ADVANCE(257);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(256);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(255);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(38);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(255);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(38);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '}') ADVANCE(258);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == 'c') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == 'l') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == 'l') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == 'n') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == 't') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == 't') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == 'y') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == '-') ADVANCE(320);
      if (lookahead == '/') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      if (lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == '/') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(304);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(38);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(416);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(48);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(320);
      if (lookahead == '/') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'n') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'y') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(321);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(387);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(401);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(402);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(368);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(379);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(407);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(410);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 't') ADVANCE(403);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(397);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(384);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(385);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '/') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(419);
      END_STATE();
    case 417:
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
          lookahead == '}') ADVANCE(419);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(416);
      END_STATE();
    case 418:
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
          lookahead == '}') ADVANCE(419);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(423);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '}') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(132);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(418);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(423);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 134, .external_lex_state = 2},
  [2] = {.lex_state = 134, .external_lex_state = 2},
  [3] = {.lex_state = 134, .external_lex_state = 2},
  [4] = {.lex_state = 134, .external_lex_state = 2},
  [5] = {.lex_state = 134, .external_lex_state = 2},
  [6] = {.lex_state = 134, .external_lex_state = 2},
  [7] = {.lex_state = 134, .external_lex_state = 2},
  [8] = {.lex_state = 134, .external_lex_state = 2},
  [9] = {.lex_state = 134, .external_lex_state = 2},
  [10] = {.lex_state = 134, .external_lex_state = 2},
  [11] = {.lex_state = 4, .external_lex_state = 2},
  [12] = {.lex_state = 4, .external_lex_state = 2},
  [13] = {.lex_state = 4, .external_lex_state = 2},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 134, .external_lex_state = 2},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 134, .external_lex_state = 2},
  [20] = {.lex_state = 134, .external_lex_state = 2},
  [21] = {.lex_state = 134, .external_lex_state = 2},
  [22] = {.lex_state = 134, .external_lex_state = 2},
  [23] = {.lex_state = 134, .external_lex_state = 2},
  [24] = {.lex_state = 134, .external_lex_state = 2},
  [25] = {.lex_state = 134, .external_lex_state = 2},
  [26] = {.lex_state = 134, .external_lex_state = 2},
  [27] = {.lex_state = 134, .external_lex_state = 2},
  [28] = {.lex_state = 134, .external_lex_state = 2},
  [29] = {.lex_state = 134, .external_lex_state = 2},
  [30] = {.lex_state = 134, .external_lex_state = 2},
  [31] = {.lex_state = 134, .external_lex_state = 2},
  [32] = {.lex_state = 134, .external_lex_state = 2},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 5, .external_lex_state = 3},
  [35] = {.lex_state = 134, .external_lex_state = 2},
  [36] = {.lex_state = 134, .external_lex_state = 2},
  [37] = {.lex_state = 134, .external_lex_state = 2},
  [38] = {.lex_state = 134, .external_lex_state = 2},
  [39] = {.lex_state = 134, .external_lex_state = 2},
  [40] = {.lex_state = 134, .external_lex_state = 2},
  [41] = {.lex_state = 134, .external_lex_state = 2},
  [42] = {.lex_state = 134, .external_lex_state = 2},
  [43] = {.lex_state = 134, .external_lex_state = 2},
  [44] = {.lex_state = 134, .external_lex_state = 2},
  [45] = {.lex_state = 134, .external_lex_state = 2},
  [46] = {.lex_state = 134, .external_lex_state = 2},
  [47] = {.lex_state = 134, .external_lex_state = 2},
  [48] = {.lex_state = 134, .external_lex_state = 2},
  [49] = {.lex_state = 134, .external_lex_state = 2},
  [50] = {.lex_state = 134, .external_lex_state = 2},
  [51] = {.lex_state = 134, .external_lex_state = 2},
  [52] = {.lex_state = 134, .external_lex_state = 2},
  [53] = {.lex_state = 134, .external_lex_state = 2},
  [54] = {.lex_state = 134, .external_lex_state = 2},
  [55] = {.lex_state = 134, .external_lex_state = 2},
  [56] = {.lex_state = 134, .external_lex_state = 2},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 8, .external_lex_state = 3},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 8, .external_lex_state = 3},
  [61] = {.lex_state = 8, .external_lex_state = 3},
  [62] = {.lex_state = 13, .external_lex_state = 3},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 13, .external_lex_state = 3},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 134, .external_lex_state = 2},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 134, .external_lex_state = 2},
  [73] = {.lex_state = 13, .external_lex_state = 3},
  [74] = {.lex_state = 13, .external_lex_state = 3},
  [75] = {.lex_state = 13, .external_lex_state = 3},
  [76] = {.lex_state = 13, .external_lex_state = 3},
  [77] = {.lex_state = 13, .external_lex_state = 3},
  [78] = {.lex_state = 13, .external_lex_state = 3},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 6},
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
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 13, .external_lex_state = 3},
  [100] = {.lex_state = 13, .external_lex_state = 3},
  [101] = {.lex_state = 13, .external_lex_state = 3},
  [102] = {.lex_state = 13, .external_lex_state = 3},
  [103] = {.lex_state = 13, .external_lex_state = 3},
  [104] = {.lex_state = 13, .external_lex_state = 3},
  [105] = {.lex_state = 13, .external_lex_state = 3},
  [106] = {.lex_state = 13, .external_lex_state = 3},
  [107] = {.lex_state = 13, .external_lex_state = 3},
  [108] = {.lex_state = 13, .external_lex_state = 3},
  [109] = {.lex_state = 13, .external_lex_state = 3},
  [110] = {.lex_state = 13, .external_lex_state = 3},
  [111] = {.lex_state = 13, .external_lex_state = 3},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 13, .external_lex_state = 3},
  [114] = {.lex_state = 13, .external_lex_state = 3},
  [115] = {.lex_state = 13, .external_lex_state = 3},
  [116] = {.lex_state = 13, .external_lex_state = 3},
  [117] = {.lex_state = 13, .external_lex_state = 3},
  [118] = {.lex_state = 13, .external_lex_state = 3},
  [119] = {.lex_state = 13, .external_lex_state = 3},
  [120] = {.lex_state = 13, .external_lex_state = 3},
  [121] = {.lex_state = 13, .external_lex_state = 3},
  [122] = {.lex_state = 13, .external_lex_state = 3},
  [123] = {.lex_state = 13, .external_lex_state = 3},
  [124] = {.lex_state = 13, .external_lex_state = 3},
  [125] = {.lex_state = 13, .external_lex_state = 3},
  [126] = {.lex_state = 13, .external_lex_state = 3},
  [127] = {.lex_state = 13, .external_lex_state = 3},
  [128] = {.lex_state = 13, .external_lex_state = 3},
  [129] = {.lex_state = 13, .external_lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 13, .external_lex_state = 3},
  [163] = {.lex_state = 13, .external_lex_state = 3},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 13, .external_lex_state = 3},
  [170] = {.lex_state = 13, .external_lex_state = 3},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 18},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 20},
  [175] = {.lex_state = 134, .external_lex_state = 3},
  [176] = {.lex_state = 134, .external_lex_state = 3},
  [177] = {.lex_state = 134, .external_lex_state = 3},
  [178] = {.lex_state = 28},
  [179] = {.lex_state = 134, .external_lex_state = 3},
  [180] = {.lex_state = 134, .external_lex_state = 3},
  [181] = {.lex_state = 134, .external_lex_state = 3},
  [182] = {.lex_state = 134, .external_lex_state = 3},
  [183] = {.lex_state = 28},
  [184] = {.lex_state = 134, .external_lex_state = 3},
  [185] = {.lex_state = 17},
  [186] = {.lex_state = 20},
  [187] = {.lex_state = 20},
  [188] = {.lex_state = 15},
  [189] = {.lex_state = 15},
  [190] = {.lex_state = 20},
  [191] = {.lex_state = 20},
  [192] = {.lex_state = 20},
  [193] = {.lex_state = 20},
  [194] = {.lex_state = 134, .external_lex_state = 3},
  [195] = {.lex_state = 18},
  [196] = {.lex_state = 134, .external_lex_state = 3},
  [197] = {.lex_state = 18},
  [198] = {.lex_state = 18},
  [199] = {.lex_state = 18},
  [200] = {.lex_state = 16},
  [201] = {.lex_state = 18},
  [202] = {.lex_state = 18},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 18},
  [205] = {.lex_state = 16},
  [206] = {.lex_state = 134, .external_lex_state = 3},
  [207] = {.lex_state = 18},
  [208] = {.lex_state = 18},
  [209] = {.lex_state = 18},
  [210] = {.lex_state = 18},
  [211] = {.lex_state = 18},
  [212] = {.lex_state = 23},
  [213] = {.lex_state = 16},
  [214] = {.lex_state = 23},
  [215] = {.lex_state = 16},
  [216] = {.lex_state = 16},
  [217] = {.lex_state = 16},
  [218] = {.lex_state = 16},
  [219] = {.lex_state = 16},
  [220] = {.lex_state = 16},
  [221] = {.lex_state = 16},
  [222] = {.lex_state = 16},
  [223] = {.lex_state = 16},
  [224] = {.lex_state = 16},
  [225] = {.lex_state = 16},
  [226] = {.lex_state = 16},
  [227] = {.lex_state = 24},
  [228] = {.lex_state = 16},
  [229] = {.lex_state = 24},
  [230] = {.lex_state = 16},
  [231] = {.lex_state = 24},
  [232] = {.lex_state = 16},
  [233] = {.lex_state = 134},
  [234] = {.lex_state = 24},
  [235] = {.lex_state = 24},
  [236] = {.lex_state = 24},
  [237] = {.lex_state = 16},
  [238] = {.lex_state = 24},
  [239] = {.lex_state = 24},
  [240] = {.lex_state = 24},
  [241] = {.lex_state = 24},
  [242] = {.lex_state = 24},
  [243] = {.lex_state = 16},
  [244] = {.lex_state = 134},
  [245] = {.lex_state = 24},
  [246] = {.lex_state = 16},
  [247] = {.lex_state = 16},
  [248] = {.lex_state = 16},
  [249] = {.lex_state = 134},
  [250] = {.lex_state = 27},
  [251] = {.lex_state = 24},
  [252] = {.lex_state = 16},
  [253] = {.lex_state = 16},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 134},
  [256] = {.lex_state = 24},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 134},
  [259] = {.lex_state = 24},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 134},
  [262] = {.lex_state = 24},
  [263] = {.lex_state = 24},
  [264] = {.lex_state = 24},
  [265] = {.lex_state = 134},
  [266] = {.lex_state = 134},
  [267] = {.lex_state = 134},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 134},
  [274] = {.lex_state = 24},
  [275] = {.lex_state = 134},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 134},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 134},
  [292] = {.lex_state = 134},
  [293] = {.lex_state = 134},
  [294] = {.lex_state = 134},
  [295] = {.lex_state = 134},
  [296] = {.lex_state = 134},
  [297] = {.lex_state = 134},
  [298] = {.lex_state = 134},
  [299] = {.lex_state = 24},
  [300] = {.lex_state = 134},
  [301] = {.lex_state = 25},
  [302] = {.lex_state = 134},
  [303] = {.lex_state = 134},
  [304] = {.lex_state = 134},
  [305] = {.lex_state = 134},
  [306] = {.lex_state = 134},
  [307] = {.lex_state = 134},
  [308] = {.lex_state = 134},
  [309] = {.lex_state = 29},
  [310] = {.lex_state = 32},
  [311] = {.lex_state = 24},
  [312] = {.lex_state = 134},
  [313] = {.lex_state = 134},
  [314] = {.lex_state = 134},
  [315] = {.lex_state = 134},
  [316] = {.lex_state = 134},
  [317] = {.lex_state = 20},
  [318] = {.lex_state = 134},
  [319] = {.lex_state = 134},
  [320] = {.lex_state = 34},
  [321] = {.lex_state = 134},
  [322] = {.lex_state = 34},
  [323] = {.lex_state = 34},
  [324] = {.lex_state = 134},
  [325] = {.lex_state = 134},
  [326] = {.lex_state = 134},
  [327] = {.lex_state = 134},
  [328] = {.lex_state = 134},
  [329] = {.lex_state = 134},
  [330] = {.lex_state = 134},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
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
    [sym_stylesheet] = STATE(327),
    [sym_import_statement] = STATE(7),
    [sym_media_statement] = STATE(7),
    [sym_charset_statement] = STATE(7),
    [sym_namespace_statement] = STATE(7),
    [sym_keyframes_statement] = STATE(7),
    [sym_supports_statement] = STATE(7),
    [sym_at_rule] = STATE(7),
    [sym_rule_set] = STATE(7),
    [sym_selectors] = STATE(305),
    [sym__selector] = STATE(179),
    [sym_universal_selector] = STATE(179),
    [sym_class_selector] = STATE(179),
    [sym_pseudo_class_selector] = STATE(179),
    [sym_pseudo_element_selector] = STATE(179),
    [sym_id_selector] = STATE(179),
    [sym_attribute_selector] = STATE(179),
    [sym_child_selector] = STATE(179),
    [sym_descendant_selector] = STATE(179),
    [sym_sibling_selector] = STATE(179),
    [sym_adjacent_sibling_selector] = STATE(179),
    [sym_namespace_selector] = STATE(179),
    [sym_declaration] = STATE(7),
    [sym_string_value] = STATE(179),
    [aux_sym_stylesheet_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(9),
    [anon_sym_ATimport] = ACTIONS(11),
    [anon_sym_ATmedia] = ACTIONS(13),
    [anon_sym_ATcharset] = ACTIONS(15),
    [anon_sym_ATnamespace] = ACTIONS(17),
    [anon_sym_ATkeyframes] = ACTIONS(19),
    [aux_sym_keyframes_statement_token1] = ACTIONS(19),
    [anon_sym_ATsupports] = ACTIONS(21),
    [sym_nesting_selector] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_at_keyword] = ACTIONS(49),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__pseudo_class_selector_colon] = ACTIONS(51),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(11), 1,
      anon_sym_ATimport,
    ACTIONS(13), 1,
      anon_sym_ATmedia,
    ACTIONS(15), 1,
      anon_sym_ATcharset,
    ACTIONS(17), 1,
      anon_sym_ATnamespace,
    ACTIONS(21), 1,
      anon_sym_ATsupports,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_at_keyword,
    STATE(305), 1,
      sym_selectors,
    STATE(329), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(4), 11,
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
    STATE(179), 13,
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
  [106] = 27,
    ACTIONS(11), 1,
      anon_sym_ATimport,
    ACTIONS(13), 1,
      anon_sym_ATmedia,
    ACTIONS(15), 1,
      anon_sym_ATcharset,
    ACTIONS(17), 1,
      anon_sym_ATnamespace,
    ACTIONS(21), 1,
      anon_sym_ATsupports,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_at_keyword,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(305), 1,
      sym_selectors,
    STATE(330), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(19), 2,
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
    STATE(179), 13,
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
  [212] = 27,
    ACTIONS(11), 1,
      anon_sym_ATimport,
    ACTIONS(13), 1,
      anon_sym_ATmedia,
    ACTIONS(15), 1,
      anon_sym_ATcharset,
    ACTIONS(17), 1,
      anon_sym_ATnamespace,
    ACTIONS(21), 1,
      anon_sym_ATsupports,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_at_keyword,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(305), 1,
      sym_selectors,
    STATE(316), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 11,
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
    STATE(179), 13,
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
  [318] = 27,
    ACTIONS(11), 1,
      anon_sym_ATimport,
    ACTIONS(13), 1,
      anon_sym_ATmedia,
    ACTIONS(15), 1,
      anon_sym_ATcharset,
    ACTIONS(17), 1,
      anon_sym_ATnamespace,
    ACTIONS(21), 1,
      anon_sym_ATsupports,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(305), 1,
      sym_selectors,
    STATE(318), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 11,
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
    STATE(179), 13,
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
  [424] = 27,
    ACTIONS(11), 1,
      anon_sym_ATimport,
    ACTIONS(13), 1,
      anon_sym_ATmedia,
    ACTIONS(15), 1,
      anon_sym_ATcharset,
    ACTIONS(17), 1,
      anon_sym_ATnamespace,
    ACTIONS(21), 1,
      anon_sym_ATsupports,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym_at_keyword,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_BQUOTE,
    STATE(305), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 10,
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
    STATE(179), 13,
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
  [529] = 27,
    ACTIONS(11), 1,
      anon_sym_ATimport,
    ACTIONS(13), 1,
      anon_sym_ATmedia,
    ACTIONS(15), 1,
      anon_sym_ATcharset,
    ACTIONS(17), 1,
      anon_sym_ATnamespace,
    ACTIONS(21), 1,
      anon_sym_ATsupports,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym_at_keyword,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_BQUOTE,
    STATE(305), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 10,
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
    STATE(179), 13,
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
  [634] = 26,
    ACTIONS(75), 1,
      anon_sym_ATimport,
    ACTIONS(78), 1,
      anon_sym_ATmedia,
    ACTIONS(81), 1,
      anon_sym_ATcharset,
    ACTIONS(84), 1,
      anon_sym_ATnamespace,
    ACTIONS(90), 1,
      anon_sym_ATsupports,
    ACTIONS(93), 1,
      sym_nesting_selector,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(99), 1,
      anon_sym_DOT,
    ACTIONS(102), 1,
      anon_sym_COLON_COLON,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_GT,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(117), 1,
      anon_sym_PLUS,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(132), 1,
      sym_at_keyword,
    ACTIONS(135), 1,
      sym__pseudo_class_selector_colon,
    STATE(305), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
    ACTIONS(87), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 10,
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
    STATE(179), 13,
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
  [737] = 27,
    ACTIONS(11), 1,
      anon_sym_ATimport,
    ACTIONS(13), 1,
      anon_sym_ATmedia,
    ACTIONS(15), 1,
      anon_sym_ATcharset,
    ACTIONS(17), 1,
      anon_sym_ATnamespace,
    ACTIONS(21), 1,
      anon_sym_ATsupports,
    ACTIONS(23), 1,
      sym_nesting_selector,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym_at_keyword,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_BQUOTE,
    STATE(305), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(6), 10,
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
    STATE(179), 13,
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
  [842] = 26,
    ACTIONS(138), 1,
      anon_sym_ATimport,
    ACTIONS(141), 1,
      anon_sym_ATmedia,
    ACTIONS(144), 1,
      anon_sym_ATcharset,
    ACTIONS(147), 1,
      anon_sym_ATnamespace,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    ACTIONS(155), 1,
      anon_sym_ATsupports,
    ACTIONS(158), 1,
      sym_nesting_selector,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(167), 1,
      anon_sym_COLON_COLON,
    ACTIONS(170), 1,
      anon_sym_POUND,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(176), 1,
      anon_sym_GT,
    ACTIONS(179), 1,
      anon_sym_TILDE,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_at_keyword,
    ACTIONS(200), 1,
      sym__pseudo_class_selector_colon,
    STATE(305), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(150), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 11,
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
    STATE(179), 13,
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
  [945] = 27,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(203), 1,
      sym_nesting_selector,
    ACTIONS(205), 1,
      anon_sym_DOT,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      anon_sym_PLUS,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(225), 1,
      anon_sym_LBRACK2,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      sym_plain_value,
    STATE(58), 1,
      sym_string_value,
    STATE(66), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(182), 12,
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
  [1045] = 27,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(205), 1,
      anon_sym_DOT,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      anon_sym_PLUS,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(225), 1,
      anon_sym_LBRACK2,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(231), 1,
      sym_nesting_selector,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_string_value,
    STATE(65), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(177), 12,
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
  [1145] = 26,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(205), 1,
      anon_sym_DOT,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      anon_sym_PLUS,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(225), 1,
      anon_sym_LBRACK2,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(235), 1,
      sym_nesting_selector,
    STATE(58), 1,
      sym_string_value,
    STATE(80), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(184), 12,
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
  [1242] = 20,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LPAREN2,
    ACTIONS(247), 1,
      anon_sym_selector,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(255), 1,
      sym_identifier,
    STATE(38), 1,
      sym_block,
    STATE(84), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(227), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1317] = 17,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(257), 1,
      sym_nesting_selector,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(176), 13,
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
  [1382] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_selector,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      sym_important,
    ACTIONS(267), 1,
      anon_sym_LPAREN2,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_integer_value_token1,
    ACTIONS(275), 1,
      aux_sym_float_value_token1,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      sym_plain_value,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(299), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(243), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1445] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_selector,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_LPAREN2,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_integer_value_token1,
    ACTIONS(275), 1,
      aux_sym_float_value_token1,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_important,
    ACTIONS(285), 1,
      sym_plain_value,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(299), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
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
  [1508] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    ACTIONS(293), 1,
      anon_sym_STAR,
    ACTIONS(297), 1,
      sym_important,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(301), 1,
      sym_plain_value,
    STATE(71), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(295), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1576] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(126), 13,
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
  [1638] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(100), 13,
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
  [1700] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(180), 13,
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
  [1762] = 17,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(309), 1,
      sym_nesting_selector,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(170), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
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
      sym_string_value,
  [1826] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(313), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(127), 13,
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
  [1888] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(315), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(95), 13,
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
  [1950] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(317), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(97), 13,
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
  [2012] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(319), 1,
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
  [2074] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(321), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(99), 13,
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
  [2136] = 17,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(309), 1,
      sym_nesting_selector,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(162), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
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
      sym_string_value,
  [2200] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(325), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(107), 13,
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
  [2262] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(327), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(105), 13,
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
  [2324] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(329), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(194), 13,
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
  [2386] = 16,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(331), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(125), 13,
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
  [2448] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(293), 1,
      anon_sym_STAR,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(301), 1,
      sym_plain_value,
    ACTIONS(333), 1,
      sym_important,
    STATE(79), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(295), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2513] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_arguments,
    ACTIONS(339), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(337), 4,
      anon_sym_STAR,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(343), 8,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(335), 10,
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
  [2558] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(347), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(345), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [2592] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(351), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(349), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [2626] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(355), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(353), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [2660] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(359), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(357), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [2694] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(363), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(361), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [2728] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(367), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(365), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [2762] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(371), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(369), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [2796] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(375), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(373), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [2830] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(379), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(377), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [2864] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(383), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(381), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [2898] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(387), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(385), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [2932] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(391), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(389), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [2966] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(395), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(393), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [3000] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(399), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(397), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [3034] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(403), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(401), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [3068] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(407), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(405), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [3102] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(411), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(409), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [3136] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(415), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(413), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [3170] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(419), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(417), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [3204] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(423), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(421), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [3238] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(427), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(425), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [3272] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(431), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(429), 17,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [3306] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(258), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3367] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(439), 5,
      anon_sym_STAR,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(443), 7,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(437), 10,
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
  [3406] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(275), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3467] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(449), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(447), 15,
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
  [3502] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(453), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(451), 15,
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
  [3537] = 5,
    STATE(62), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(457), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(459), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(455), 19,
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
  [3574] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(282), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3635] = 5,
    STATE(62), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(468), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(464), 19,
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
  [3672] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(292), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3732] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(302), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3792] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_POUND,
    ACTIONS(481), 1,
      sym_important,
    ACTIONS(484), 1,
      anon_sym_LPAREN2,
    ACTIONS(487), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_DQUOTE,
    ACTIONS(493), 1,
      aux_sym_integer_value_token1,
    ACTIONS(496), 1,
      aux_sym_float_value_token1,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(502), 1,
      sym_identifier,
    ACTIONS(505), 1,
      sym_plain_value,
    STATE(67), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(476), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3848] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      sym_important,
    ACTIONS(519), 1,
      anon_sym_LPAREN2,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    ACTIONS(528), 1,
      aux_sym_integer_value_token1,
    ACTIONS(531), 1,
      aux_sym_float_value_token1,
    ACTIONS(534), 1,
      anon_sym_LBRACK2,
    ACTIONS(537), 1,
      sym_identifier,
    ACTIONS(540), 1,
      sym_plain_value,
    STATE(68), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(511), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3906] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(543), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(545), 15,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [3938] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(67), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(547), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3994] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(301), 1,
      sym_plain_value,
    ACTIONS(549), 1,
      anon_sym_SEMI,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      sym_important,
    STATE(68), 1,
      aux_sym_declaration_repeat1,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4054] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(359), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(357), 15,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4086] = 5,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_pseudo_class_with_selector_arguments,
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
  [4121] = 5,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(563), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(561), 18,
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
  [4156] = 5,
    ACTIONS(571), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_pseudo_class_arguments,
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
  [4191] = 5,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_pseudo_element_arguments,
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
  [4226] = 5,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_pseudo_class_with_selector_arguments,
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
  [4261] = 5,
    ACTIONS(571), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_pseudo_class_arguments,
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
  [4296] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(301), 1,
      sym_plain_value,
    ACTIONS(549), 1,
      anon_sym_SEMI,
    ACTIONS(585), 1,
      sym_important,
    STATE(68), 1,
      aux_sym_declaration_repeat1,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4353] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(67), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(587), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4408] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4462] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4516] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4570] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(595), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4624] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_arguments,
    ACTIONS(599), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(597), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(337), 6,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
    ACTIONS(343), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [4664] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4718] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_arguments,
    ACTIONS(343), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(337), 10,
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
  [4753] = 3,
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
  [4782] = 3,
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
  [4811] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(611), 18,
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
  [4840] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(617), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(615), 18,
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
  [4869] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(621), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(619), 18,
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
  [4898] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(625), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(623), 18,
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
  [4927] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(629), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(627), 18,
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
  [4956] = 4,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(635), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(631), 17,
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
  [4987] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(639), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(637), 18,
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
  [5016] = 4,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(643), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(641), 17,
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
  [5047] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(70), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5098] = 4,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(647), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(645), 17,
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
  [5129] = 4,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(651), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(649), 17,
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
  [5160] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(655), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(653), 18,
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
  [5189] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(659), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(657), 18,
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
  [5218] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(663), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(661), 18,
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
  [5247] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(667), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(665), 18,
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
  [5276] = 4,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(671), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(669), 17,
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
  [5307] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(449), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(447), 18,
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
  [5336] = 4,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(675), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(673), 17,
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
  [5367] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(679), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(677), 18,
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
  [5396] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(683), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(681), 18,
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
  [5425] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(687), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(685), 18,
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
  [5454] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(691), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(689), 18,
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
  [5483] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_important,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(82), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5534] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(695), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(693), 18,
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
  [5563] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(699), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(697), 18,
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
  [5592] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(703), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(701), 18,
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
  [5621] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(707), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(705), 18,
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
  [5650] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(711), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(709), 18,
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
  [5679] = 3,
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
  [5708] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(715), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(713), 18,
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
  [5737] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(719), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(717), 18,
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
  [5766] = 3,
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
  [5795] = 3,
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
  [5824] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(723), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(721), 18,
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
  [5853] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(335), 18,
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
  [5882] = 4,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(727), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(725), 17,
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
  [5913] = 4,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(729), 17,
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
  [5944] = 4,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(735), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(733), 17,
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
  [5975] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(739), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(737), 18,
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
  [6004] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(743), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(741), 18,
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
  [6033] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_unit,
    ACTIONS(747), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(745), 11,
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
  [6065] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_POUND,
    ACTIONS(753), 1,
      sym_important,
    ACTIONS(755), 1,
      anon_sym_LPAREN2,
    ACTIONS(757), 1,
      anon_sym_SQUOTE,
    ACTIONS(759), 1,
      anon_sym_DQUOTE,
    ACTIONS(761), 1,
      aux_sym_integer_value_token1,
    ACTIONS(763), 1,
      aux_sym_float_value_token1,
    ACTIONS(765), 1,
      anon_sym_LBRACK2,
    ACTIONS(767), 1,
      sym_identifier,
    ACTIONS(769), 1,
      sym_plain_value,
    STATE(210), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6113] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(771), 1,
      sym_important,
    ACTIONS(773), 1,
      sym_plain_value,
    STATE(168), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6161] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_POUND,
    ACTIONS(755), 1,
      anon_sym_LPAREN2,
    ACTIONS(757), 1,
      anon_sym_SQUOTE,
    ACTIONS(759), 1,
      anon_sym_DQUOTE,
    ACTIONS(761), 1,
      aux_sym_integer_value_token1,
    ACTIONS(763), 1,
      aux_sym_float_value_token1,
    ACTIONS(765), 1,
      anon_sym_LBRACK2,
    ACTIONS(767), 1,
      sym_identifier,
    ACTIONS(775), 1,
      sym_important,
    ACTIONS(777), 1,
      sym_plain_value,
    STATE(172), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6209] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(779), 1,
      sym_important,
    ACTIONS(781), 1,
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
  [6257] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_integer_value_token1,
    ACTIONS(275), 1,
      aux_sym_float_value_token1,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(783), 1,
      sym_important,
    ACTIONS(785), 1,
      anon_sym_LPAREN2,
    ACTIONS(787), 1,
      sym_identifier,
    ACTIONS(789), 1,
      sym_plain_value,
    STATE(247), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6305] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(791), 1,
      sym_important,
    ACTIONS(793), 1,
      sym_plain_value,
    STATE(33), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6353] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_integer_value_token1,
    ACTIONS(275), 1,
      aux_sym_float_value_token1,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(785), 1,
      anon_sym_LPAREN2,
    ACTIONS(787), 1,
      sym_identifier,
    ACTIONS(795), 1,
      sym_important,
    ACTIONS(797), 1,
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
  [6401] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_integer_value_token1,
    ACTIONS(275), 1,
      aux_sym_float_value_token1,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(785), 1,
      anon_sym_LPAREN2,
    ACTIONS(787), 1,
      sym_identifier,
    ACTIONS(799), 1,
      sym_important,
    ACTIONS(801), 1,
      sym_plain_value,
    STATE(228), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6449] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_integer_value_token1,
    ACTIONS(275), 1,
      aux_sym_float_value_token1,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(785), 1,
      anon_sym_LPAREN2,
    ACTIONS(787), 1,
      sym_identifier,
    ACTIONS(803), 1,
      sym_important,
    ACTIONS(805), 1,
      sym_plain_value,
    STATE(246), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6497] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_integer_value_token1,
    ACTIONS(275), 1,
      aux_sym_float_value_token1,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(785), 1,
      anon_sym_LPAREN2,
    ACTIONS(787), 1,
      sym_identifier,
    ACTIONS(807), 1,
      sym_important,
    ACTIONS(809), 1,
      sym_plain_value,
    STATE(232), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6545] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_integer_value_token1,
    ACTIONS(275), 1,
      aux_sym_float_value_token1,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(785), 1,
      anon_sym_LPAREN2,
    ACTIONS(787), 1,
      sym_identifier,
    ACTIONS(811), 1,
      sym_important,
    ACTIONS(813), 1,
      sym_plain_value,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6593] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym_unit,
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
  [6625] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_integer_value_token1,
    ACTIONS(275), 1,
      aux_sym_float_value_token1,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(785), 1,
      anon_sym_LPAREN2,
    ACTIONS(787), 1,
      sym_identifier,
    ACTIONS(821), 1,
      sym_important,
    ACTIONS(823), 1,
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
  [6673] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      aux_sym_integer_value_token1,
    ACTIONS(223), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(825), 1,
      sym_important,
    ACTIONS(827), 1,
      sym_plain_value,
    STATE(160), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6721] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_integer_value_token1,
    ACTIONS(275), 1,
      aux_sym_float_value_token1,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(785), 1,
      anon_sym_LPAREN2,
    ACTIONS(787), 1,
      sym_identifier,
    ACTIONS(829), 1,
      sym_important,
    ACTIONS(831), 1,
      sym_plain_value,
    STATE(237), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6769] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      sym_important,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_integer_value_token1,
    ACTIONS(275), 1,
      aux_sym_float_value_token1,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_plain_value,
    ACTIONS(785), 1,
      anon_sym_LPAREN2,
    ACTIONS(787), 1,
      sym_identifier,
    STATE(243), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6817] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_integer_value_token1,
    ACTIONS(275), 1,
      aux_sym_float_value_token1,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(785), 1,
      anon_sym_LPAREN2,
    ACTIONS(787), 1,
      sym_identifier,
    ACTIONS(833), 1,
      sym_important,
    ACTIONS(835), 1,
      sym_plain_value,
    STATE(230), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6865] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_integer_value_token1,
    ACTIONS(275), 1,
      aux_sym_float_value_token1,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(283), 1,
      sym_important,
    ACTIONS(285), 1,
      sym_plain_value,
    ACTIONS(785), 1,
      anon_sym_LPAREN2,
    ACTIONS(787), 1,
      sym_identifier,
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
  [6913] = 4,
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
  [6942] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(843), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(841), 11,
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
  [6971] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(847), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(845), 11,
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
  [7000] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(851), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(849), 11,
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
  [7029] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(855), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(853), 11,
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
  [7058] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(859), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(857), 11,
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
  [7087] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(863), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(861), 11,
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
  [7116] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(867), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(865), 11,
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
  [7145] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(871), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(869), 11,
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
  [7174] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(449), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(447), 11,
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
  [7203] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(453), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(451), 11,
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
  [7232] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(875), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(873), 11,
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
  [7261] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(879), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(877), 11,
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
  [7290] = 5,
    ACTIONS(883), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(881), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(437), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7320] = 5,
    ACTIONS(883), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(881), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(335), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7350] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_SEMI,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(439), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7382] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_STAR,
    ACTIONS(295), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(887), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(885), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7414] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(439), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7446] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_STAR,
    ACTIONS(295), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(895), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(893), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7478] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_STAR,
    ACTIONS(295), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(897), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(511), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7510] = 5,
    ACTIONS(901), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(335), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7540] = 5,
    ACTIONS(901), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(437), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7570] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_SEMI,
    ACTIONS(443), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(439), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7599] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_selector,
    ACTIONS(903), 1,
      anon_sym_SEMI,
    ACTIONS(907), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(905), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(909), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(245), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7638] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    ACTIONS(443), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(439), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7667] = 9,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(247), 1,
      anon_sym_selector,
    ACTIONS(907), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(913), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(227), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7702] = 3,
    ACTIONS(915), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(335), 12,
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
  [7724] = 14,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    ACTIONS(919), 1,
      anon_sym_COLON_COLON,
    ACTIONS(921), 1,
      anon_sym_POUND,
    ACTIONS(923), 1,
      anon_sym_LBRACK,
    ACTIONS(925), 1,
      anon_sym_GT,
    ACTIONS(927), 1,
      anon_sym_TILDE,
    ACTIONS(929), 1,
      anon_sym_PLUS,
    ACTIONS(931), 1,
      anon_sym_PIPE,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    STATE(300), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [7768] = 14,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(919), 1,
      anon_sym_COLON_COLON,
    ACTIONS(921), 1,
      anon_sym_POUND,
    ACTIONS(923), 1,
      anon_sym_LBRACK,
    ACTIONS(925), 1,
      anon_sym_GT,
    ACTIONS(927), 1,
      anon_sym_TILDE,
    ACTIONS(929), 1,
      anon_sym_PLUS,
    ACTIONS(931), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    STATE(292), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [7812] = 9,
    ACTIONS(941), 1,
      anon_sym_host,
    ACTIONS(945), 1,
      sym_escape_sequence,
    ACTIONS(947), 1,
      sym_identifier,
    STATE(64), 1,
      aux_sym_class_name_repeat1,
    STATE(75), 1,
      sym_class_name,
    STATE(122), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(943), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(939), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [7846] = 14,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    ACTIONS(919), 1,
      anon_sym_COLON_COLON,
    ACTIONS(921), 1,
      anon_sym_POUND,
    ACTIONS(923), 1,
      anon_sym_LBRACK,
    ACTIONS(925), 1,
      anon_sym_GT,
    ACTIONS(927), 1,
      anon_sym_TILDE,
    ACTIONS(929), 1,
      anon_sym_PLUS,
    ACTIONS(931), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(949), 1,
      anon_sym_LBRACE,
    STATE(293), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [7890] = 12,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(919), 1,
      anon_sym_COLON_COLON,
    ACTIONS(921), 1,
      anon_sym_POUND,
    ACTIONS(923), 1,
      anon_sym_LBRACK,
    ACTIONS(925), 1,
      anon_sym_GT,
    ACTIONS(927), 1,
      anon_sym_TILDE,
    ACTIONS(929), 1,
      anon_sym_PLUS,
    ACTIONS(931), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(951), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [7930] = 3,
    ACTIONS(953), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(335), 12,
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
  [7952] = 14,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(919), 1,
      anon_sym_COLON_COLON,
    ACTIONS(921), 1,
      anon_sym_POUND,
    ACTIONS(923), 1,
      anon_sym_LBRACK,
    ACTIONS(925), 1,
      anon_sym_GT,
    ACTIONS(927), 1,
      anon_sym_TILDE,
    ACTIONS(929), 1,
      anon_sym_PLUS,
    ACTIONS(931), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    STATE(302), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [7996] = 9,
    ACTIONS(945), 1,
      sym_escape_sequence,
    ACTIONS(947), 1,
      sym_identifier,
    ACTIONS(957), 1,
      anon_sym_host,
    STATE(64), 1,
      aux_sym_class_name_repeat1,
    STATE(78), 1,
      sym_class_name,
    STATE(121), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(943), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(955), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [8030] = 12,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(919), 1,
      anon_sym_COLON_COLON,
    ACTIONS(921), 1,
      anon_sym_POUND,
    ACTIONS(923), 1,
      anon_sym_LBRACK,
    ACTIONS(925), 1,
      anon_sym_GT,
    ACTIONS(927), 1,
      anon_sym_TILDE,
    ACTIONS(929), 1,
      anon_sym_PLUS,
    ACTIONS(931), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8069] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(337), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(343), 7,
      anon_sym_not,
      anon_sym_LPAREN2,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8096] = 6,
    ACTIONS(247), 1,
      anon_sym_selector,
    ACTIONS(907), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(274), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8122] = 6,
    ACTIONS(247), 1,
      anon_sym_selector,
    ACTIONS(907), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(251), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8148] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym_unit,
    ACTIONS(745), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(747), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8172] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym_unit,
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
  [8196] = 6,
    ACTIONS(247), 1,
      anon_sym_selector,
    ACTIONS(907), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(239), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8222] = 6,
    ACTIONS(247), 1,
      anon_sym_selector,
    ACTIONS(907), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(241), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8248] = 6,
    ACTIONS(247), 1,
      anon_sym_selector,
    ACTIONS(907), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(242), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8274] = 6,
    ACTIONS(247), 1,
      anon_sym_selector,
    ACTIONS(907), 1,
      anon_sym_LPAREN2,
    ACTIONS(965), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(299), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8300] = 12,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(919), 1,
      anon_sym_COLON_COLON,
    ACTIONS(921), 1,
      anon_sym_POUND,
    ACTIONS(923), 1,
      anon_sym_LBRACK,
    ACTIONS(925), 1,
      anon_sym_GT,
    ACTIONS(927), 1,
      anon_sym_TILDE,
    ACTIONS(929), 1,
      anon_sym_PLUS,
    ACTIONS(931), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8338] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(841), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(843), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8360] = 12,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(919), 1,
      anon_sym_COLON_COLON,
    ACTIONS(921), 1,
      anon_sym_POUND,
    ACTIONS(923), 1,
      anon_sym_LBRACK,
    ACTIONS(925), 1,
      anon_sym_GT,
    ACTIONS(927), 1,
      anon_sym_TILDE,
    ACTIONS(929), 1,
      anon_sym_PLUS,
    ACTIONS(931), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8398] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(877), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(879), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8419] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(869), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(871), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8440] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(865), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(867), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8461] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
    STATE(220), 1,
      sym_arguments,
    ACTIONS(337), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8486] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(447), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(449), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8507] = 4,
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
  [8528] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(451), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(453), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8549] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(857), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(859), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8570] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
    ACTIONS(973), 1,
      anon_sym_COLON,
    STATE(220), 1,
      sym_arguments,
    ACTIONS(337), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(597), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [8599] = 11,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(919), 1,
      anon_sym_COLON_COLON,
    ACTIONS(921), 1,
      anon_sym_POUND,
    ACTIONS(923), 1,
      anon_sym_LBRACK,
    ACTIONS(925), 1,
      anon_sym_GT,
    ACTIONS(927), 1,
      anon_sym_TILDE,
    ACTIONS(929), 1,
      anon_sym_PLUS,
    ACTIONS(931), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8634] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(861), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(863), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8655] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(849), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(851), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8676] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(853), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(855), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8697] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(873), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(875), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8718] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(845), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(847), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8739] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_SLASH,
    ACTIONS(975), 1,
      sym_unit,
    ACTIONS(815), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8761] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_SLASH,
    ACTIONS(841), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_DASH,
  [8781] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_SLASH,
    ACTIONS(977), 1,
      sym_unit,
    ACTIONS(745), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8803] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_SLASH,
    ACTIONS(865), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8822] = 4,
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
  [8841] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_SLASH,
    ACTIONS(845), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8860] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(447), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8879] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_SLASH,
    ACTIONS(857), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8898] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_SLASH,
    ACTIONS(877), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8917] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(451), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8936] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_SLASH,
    ACTIONS(849), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8955] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_SLASH,
    ACTIONS(853), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8974] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_SLASH,
    ACTIONS(873), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8993] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_SLASH,
    ACTIONS(861), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9012] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_SLASH,
    ACTIONS(869), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9031] = 7,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    ACTIONS(981), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_block,
    STATE(244), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_and,
      anon_sym_or,
  [9055] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    ACTIONS(989), 1,
      anon_sym_RBRACK,
    ACTIONS(991), 1,
      anon_sym_SLASH,
    STATE(297), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(987), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9079] = 6,
    ACTIONS(993), 1,
      anon_sym_RBRACE,
    ACTIONS(997), 1,
      aux_sym_integer_value_token1,
    STATE(303), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(995), 2,
      sym_from,
      sym_to,
    STATE(231), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9101] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    ACTIONS(991), 1,
      anon_sym_SLASH,
    ACTIONS(999), 1,
      anon_sym_RBRACK,
    STATE(294), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(987), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9125] = 6,
    ACTIONS(997), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1001), 1,
      anon_sym_RBRACE,
    STATE(303), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(995), 2,
      sym_from,
      sym_to,
    STATE(234), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9147] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    ACTIONS(991), 1,
      anon_sym_SLASH,
    ACTIONS(1003), 1,
      anon_sym_RBRACK,
    STATE(296), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(987), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9171] = 7,
    ACTIONS(757), 1,
      anon_sym_SQUOTE,
    ACTIONS(759), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      anon_sym_LPAREN,
    ACTIONS(1005), 1,
      sym_identifier,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(313), 2,
      sym_string_value,
      sym_call_expression,
  [9195] = 6,
    ACTIONS(1007), 1,
      anon_sym_RBRACE,
    ACTIONS(1012), 1,
      aux_sym_integer_value_token1,
    STATE(303), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1009), 2,
      sym_from,
      sym_to,
    STATE(234), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9217] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1015), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9230] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1017), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9243] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_SLASH,
    ACTIONS(1019), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(987), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9262] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(597), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9275] = 6,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      sym_block,
    STATE(266), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_and,
      anon_sym_or,
  [9296] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1021), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9309] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1023), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9322] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1025), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9335] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_SLASH,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    ACTIONS(987), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9353] = 6,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    ACTIONS(1029), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_block,
    STATE(261), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9373] = 5,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    ACTIONS(1031), 1,
      anon_sym_SEMI,
    STATE(291), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_and,
      anon_sym_or,
  [9391] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_SLASH,
    ACTIONS(1033), 1,
      anon_sym_RBRACK,
    ACTIONS(987), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9409] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_SLASH,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    ACTIONS(987), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9427] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_SLASH,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    ACTIONS(987), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9445] = 5,
    ACTIONS(757), 1,
      anon_sym_SQUOTE,
    ACTIONS(759), 1,
      anon_sym_DQUOTE,
    ACTIONS(1039), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(328), 2,
      sym_string_value,
      sym_call_expression,
  [9463] = 4,
    ACTIONS(1043), 1,
      aux_sym_integer_value_token1,
    STATE(311), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1041), 3,
      anon_sym_even,
      anon_sym_odd,
      sym__nth_functional_notation,
  [9479] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1045), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [9493] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_SLASH,
    ACTIONS(1047), 1,
      anon_sym_RBRACK,
    ACTIONS(987), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9511] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_SLASH,
    ACTIONS(1049), 1,
      anon_sym_SEMI,
    ACTIONS(987), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9529] = 4,
    ACTIONS(1051), 1,
      anon_sym_SQUOTE,
    STATE(288), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1053), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [9544] = 4,
    STATE(64), 1,
      aux_sym_class_name_repeat1,
    STATE(128), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(945), 2,
      sym_escape_sequence,
      sym_identifier,
  [9559] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(429), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [9570] = 4,
    ACTIONS(1055), 1,
      anon_sym_SQUOTE,
    STATE(268), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1057), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [9585] = 4,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9600] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(381), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [9611] = 4,
    ACTIONS(1055), 1,
      anon_sym_DQUOTE,
    STATE(269), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1061), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [9626] = 4,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1045), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [9641] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(409), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [9652] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1066), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [9663] = 3,
    ACTIONS(973), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(597), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9676] = 4,
    STATE(64), 1,
      aux_sym_class_name_repeat1,
    STATE(108), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(945), 2,
      sym_escape_sequence,
      sym_identifier,
  [9691] = 5,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      sym_block,
    STATE(261), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9708] = 4,
    ACTIONS(1068), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(951), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [9723] = 4,
    ACTIONS(1071), 1,
      anon_sym_SQUOTE,
    STATE(280), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1073), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [9738] = 4,
    ACTIONS(1071), 1,
      anon_sym_DQUOTE,
    STATE(281), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1075), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [9753] = 4,
    ACTIONS(1077), 1,
      anon_sym_SQUOTE,
    STATE(290), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1079), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [9768] = 4,
    ACTIONS(1077), 1,
      anon_sym_DQUOTE,
    STATE(272), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1081), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [9783] = 4,
    ACTIONS(1083), 1,
      anon_sym_DQUOTE,
    STATE(281), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1075), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [9798] = 4,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1085), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9813] = 4,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_and,
      anon_sym_or,
  [9828] = 4,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9843] = 4,
    ACTIONS(1090), 1,
      anon_sym_SQUOTE,
    STATE(278), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1092), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [9858] = 4,
    ACTIONS(1090), 1,
      anon_sym_DQUOTE,
    STATE(279), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1094), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [9873] = 4,
    ACTIONS(1096), 1,
      anon_sym_SQUOTE,
    STATE(280), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1073), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [9888] = 4,
    ACTIONS(1096), 1,
      anon_sym_DQUOTE,
    STATE(281), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1075), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [9903] = 4,
    ACTIONS(1098), 1,
      anon_sym_SQUOTE,
    STATE(280), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1100), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [9918] = 4,
    ACTIONS(1103), 1,
      anon_sym_DQUOTE,
    STATE(281), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1105), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [9933] = 4,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9948] = 4,
    ACTIONS(1110), 1,
      anon_sym_SQUOTE,
    STATE(285), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1112), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [9963] = 4,
    ACTIONS(1110), 1,
      anon_sym_DQUOTE,
    STATE(286), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1114), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [9978] = 4,
    ACTIONS(1116), 1,
      anon_sym_SQUOTE,
    STATE(280), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1073), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [9993] = 4,
    ACTIONS(1116), 1,
      anon_sym_DQUOTE,
    STATE(281), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1075), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10008] = 4,
    ACTIONS(1051), 1,
      anon_sym_DQUOTE,
    STATE(289), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1118), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10023] = 4,
    ACTIONS(1120), 1,
      anon_sym_SQUOTE,
    STATE(280), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1073), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10038] = 4,
    ACTIONS(1120), 1,
      anon_sym_DQUOTE,
    STATE(281), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1075), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10053] = 4,
    ACTIONS(1083), 1,
      anon_sym_SQUOTE,
    STATE(280), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1073), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10068] = 4,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_SEMI,
    STATE(261), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10082] = 4,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10096] = 4,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    STATE(267), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10110] = 4,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      anon_sym_RBRACK,
    STATE(295), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10124] = 4,
    ACTIONS(1019), 1,
      anon_sym_RBRACK,
    ACTIONS(1130), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10138] = 4,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    ACTIONS(1133), 1,
      anon_sym_RBRACK,
    STATE(295), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10152] = 4,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    ACTIONS(1135), 1,
      anon_sym_RBRACK,
    STATE(295), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10166] = 4,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    ACTIONS(1137), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10180] = 3,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_and,
      anon_sym_or,
  [10192] = 4,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10206] = 4,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    ACTIONS(747), 1,
      anon_sym_of,
    ACTIONS(1144), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10220] = 4,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10234] = 3,
    ACTIONS(1148), 1,
      anon_sym_LBRACE,
    STATE(263), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10245] = 3,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10256] = 3,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10267] = 3,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10278] = 3,
    ACTIONS(959), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10289] = 3,
    ACTIONS(1152), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_pseudo_class_nth_child_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10300] = 3,
    ACTIONS(1154), 1,
      aux_sym_color_value_token1,
    ACTIONS(1156), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10311] = 3,
    ACTIONS(745), 1,
      anon_sym_LBRACE,
    ACTIONS(1158), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10322] = 3,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    ACTIONS(1162), 1,
      anon_sym_of,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10333] = 3,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10344] = 2,
    ACTIONS(1164), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10352] = 2,
    ACTIONS(1166), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10360] = 2,
    ACTIONS(1168), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10368] = 2,
    ACTIONS(1170), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10376] = 2,
    ACTIONS(1172), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10384] = 2,
    ACTIONS(1174), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10392] = 2,
    ACTIONS(1176), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10400] = 2,
    ACTIONS(1178), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10408] = 2,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10416] = 2,
    ACTIONS(1180), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10424] = 2,
    ACTIONS(1182), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10432] = 2,
    ACTIONS(1184), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10440] = 2,
    ACTIONS(1186), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10448] = 2,
    ACTIONS(1188), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10456] = 2,
    ACTIONS(1190), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10464] = 2,
    ACTIONS(1192), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10472] = 2,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10480] = 2,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 106,
  [SMALL_STATE(4)] = 212,
  [SMALL_STATE(5)] = 318,
  [SMALL_STATE(6)] = 424,
  [SMALL_STATE(7)] = 529,
  [SMALL_STATE(8)] = 634,
  [SMALL_STATE(9)] = 737,
  [SMALL_STATE(10)] = 842,
  [SMALL_STATE(11)] = 945,
  [SMALL_STATE(12)] = 1045,
  [SMALL_STATE(13)] = 1145,
  [SMALL_STATE(14)] = 1242,
  [SMALL_STATE(15)] = 1317,
  [SMALL_STATE(16)] = 1382,
  [SMALL_STATE(17)] = 1445,
  [SMALL_STATE(18)] = 1508,
  [SMALL_STATE(19)] = 1576,
  [SMALL_STATE(20)] = 1638,
  [SMALL_STATE(21)] = 1700,
  [SMALL_STATE(22)] = 1762,
  [SMALL_STATE(23)] = 1826,
  [SMALL_STATE(24)] = 1888,
  [SMALL_STATE(25)] = 1950,
  [SMALL_STATE(26)] = 2012,
  [SMALL_STATE(27)] = 2074,
  [SMALL_STATE(28)] = 2136,
  [SMALL_STATE(29)] = 2200,
  [SMALL_STATE(30)] = 2262,
  [SMALL_STATE(31)] = 2324,
  [SMALL_STATE(32)] = 2386,
  [SMALL_STATE(33)] = 2448,
  [SMALL_STATE(34)] = 2513,
  [SMALL_STATE(35)] = 2558,
  [SMALL_STATE(36)] = 2592,
  [SMALL_STATE(37)] = 2626,
  [SMALL_STATE(38)] = 2660,
  [SMALL_STATE(39)] = 2694,
  [SMALL_STATE(40)] = 2728,
  [SMALL_STATE(41)] = 2762,
  [SMALL_STATE(42)] = 2796,
  [SMALL_STATE(43)] = 2830,
  [SMALL_STATE(44)] = 2864,
  [SMALL_STATE(45)] = 2898,
  [SMALL_STATE(46)] = 2932,
  [SMALL_STATE(47)] = 2966,
  [SMALL_STATE(48)] = 3000,
  [SMALL_STATE(49)] = 3034,
  [SMALL_STATE(50)] = 3068,
  [SMALL_STATE(51)] = 3102,
  [SMALL_STATE(52)] = 3136,
  [SMALL_STATE(53)] = 3170,
  [SMALL_STATE(54)] = 3204,
  [SMALL_STATE(55)] = 3238,
  [SMALL_STATE(56)] = 3272,
  [SMALL_STATE(57)] = 3306,
  [SMALL_STATE(58)] = 3367,
  [SMALL_STATE(59)] = 3406,
  [SMALL_STATE(60)] = 3467,
  [SMALL_STATE(61)] = 3502,
  [SMALL_STATE(62)] = 3537,
  [SMALL_STATE(63)] = 3574,
  [SMALL_STATE(64)] = 3635,
  [SMALL_STATE(65)] = 3672,
  [SMALL_STATE(66)] = 3732,
  [SMALL_STATE(67)] = 3792,
  [SMALL_STATE(68)] = 3848,
  [SMALL_STATE(69)] = 3906,
  [SMALL_STATE(70)] = 3938,
  [SMALL_STATE(71)] = 3994,
  [SMALL_STATE(72)] = 4054,
  [SMALL_STATE(73)] = 4086,
  [SMALL_STATE(74)] = 4121,
  [SMALL_STATE(75)] = 4156,
  [SMALL_STATE(76)] = 4191,
  [SMALL_STATE(77)] = 4226,
  [SMALL_STATE(78)] = 4261,
  [SMALL_STATE(79)] = 4296,
  [SMALL_STATE(80)] = 4353,
  [SMALL_STATE(81)] = 4408,
  [SMALL_STATE(82)] = 4462,
  [SMALL_STATE(83)] = 4516,
  [SMALL_STATE(84)] = 4570,
  [SMALL_STATE(85)] = 4624,
  [SMALL_STATE(86)] = 4664,
  [SMALL_STATE(87)] = 4718,
  [SMALL_STATE(88)] = 4753,
  [SMALL_STATE(89)] = 4782,
  [SMALL_STATE(90)] = 4811,
  [SMALL_STATE(91)] = 4840,
  [SMALL_STATE(92)] = 4869,
  [SMALL_STATE(93)] = 4898,
  [SMALL_STATE(94)] = 4927,
  [SMALL_STATE(95)] = 4956,
  [SMALL_STATE(96)] = 4987,
  [SMALL_STATE(97)] = 5016,
  [SMALL_STATE(98)] = 5047,
  [SMALL_STATE(99)] = 5098,
  [SMALL_STATE(100)] = 5129,
  [SMALL_STATE(101)] = 5160,
  [SMALL_STATE(102)] = 5189,
  [SMALL_STATE(103)] = 5218,
  [SMALL_STATE(104)] = 5247,
  [SMALL_STATE(105)] = 5276,
  [SMALL_STATE(106)] = 5307,
  [SMALL_STATE(107)] = 5336,
  [SMALL_STATE(108)] = 5367,
  [SMALL_STATE(109)] = 5396,
  [SMALL_STATE(110)] = 5425,
  [SMALL_STATE(111)] = 5454,
  [SMALL_STATE(112)] = 5483,
  [SMALL_STATE(113)] = 5534,
  [SMALL_STATE(114)] = 5563,
  [SMALL_STATE(115)] = 5592,
  [SMALL_STATE(116)] = 5621,
  [SMALL_STATE(117)] = 5650,
  [SMALL_STATE(118)] = 5679,
  [SMALL_STATE(119)] = 5708,
  [SMALL_STATE(120)] = 5737,
  [SMALL_STATE(121)] = 5766,
  [SMALL_STATE(122)] = 5795,
  [SMALL_STATE(123)] = 5824,
  [SMALL_STATE(124)] = 5853,
  [SMALL_STATE(125)] = 5882,
  [SMALL_STATE(126)] = 5913,
  [SMALL_STATE(127)] = 5944,
  [SMALL_STATE(128)] = 5975,
  [SMALL_STATE(129)] = 6004,
  [SMALL_STATE(130)] = 6033,
  [SMALL_STATE(131)] = 6065,
  [SMALL_STATE(132)] = 6113,
  [SMALL_STATE(133)] = 6161,
  [SMALL_STATE(134)] = 6209,
  [SMALL_STATE(135)] = 6257,
  [SMALL_STATE(136)] = 6305,
  [SMALL_STATE(137)] = 6353,
  [SMALL_STATE(138)] = 6401,
  [SMALL_STATE(139)] = 6449,
  [SMALL_STATE(140)] = 6497,
  [SMALL_STATE(141)] = 6545,
  [SMALL_STATE(142)] = 6593,
  [SMALL_STATE(143)] = 6625,
  [SMALL_STATE(144)] = 6673,
  [SMALL_STATE(145)] = 6721,
  [SMALL_STATE(146)] = 6769,
  [SMALL_STATE(147)] = 6817,
  [SMALL_STATE(148)] = 6865,
  [SMALL_STATE(149)] = 6913,
  [SMALL_STATE(150)] = 6942,
  [SMALL_STATE(151)] = 6971,
  [SMALL_STATE(152)] = 7000,
  [SMALL_STATE(153)] = 7029,
  [SMALL_STATE(154)] = 7058,
  [SMALL_STATE(155)] = 7087,
  [SMALL_STATE(156)] = 7116,
  [SMALL_STATE(157)] = 7145,
  [SMALL_STATE(158)] = 7174,
  [SMALL_STATE(159)] = 7203,
  [SMALL_STATE(160)] = 7232,
  [SMALL_STATE(161)] = 7261,
  [SMALL_STATE(162)] = 7290,
  [SMALL_STATE(163)] = 7320,
  [SMALL_STATE(164)] = 7350,
  [SMALL_STATE(165)] = 7382,
  [SMALL_STATE(166)] = 7414,
  [SMALL_STATE(167)] = 7446,
  [SMALL_STATE(168)] = 7478,
  [SMALL_STATE(169)] = 7510,
  [SMALL_STATE(170)] = 7540,
  [SMALL_STATE(171)] = 7570,
  [SMALL_STATE(172)] = 7599,
  [SMALL_STATE(173)] = 7638,
  [SMALL_STATE(174)] = 7667,
  [SMALL_STATE(175)] = 7702,
  [SMALL_STATE(176)] = 7724,
  [SMALL_STATE(177)] = 7768,
  [SMALL_STATE(178)] = 7812,
  [SMALL_STATE(179)] = 7846,
  [SMALL_STATE(180)] = 7890,
  [SMALL_STATE(181)] = 7930,
  [SMALL_STATE(182)] = 7952,
  [SMALL_STATE(183)] = 7996,
  [SMALL_STATE(184)] = 8030,
  [SMALL_STATE(185)] = 8069,
  [SMALL_STATE(186)] = 8096,
  [SMALL_STATE(187)] = 8122,
  [SMALL_STATE(188)] = 8148,
  [SMALL_STATE(189)] = 8172,
  [SMALL_STATE(190)] = 8196,
  [SMALL_STATE(191)] = 8222,
  [SMALL_STATE(192)] = 8248,
  [SMALL_STATE(193)] = 8274,
  [SMALL_STATE(194)] = 8300,
  [SMALL_STATE(195)] = 8338,
  [SMALL_STATE(196)] = 8360,
  [SMALL_STATE(197)] = 8398,
  [SMALL_STATE(198)] = 8419,
  [SMALL_STATE(199)] = 8440,
  [SMALL_STATE(200)] = 8461,
  [SMALL_STATE(201)] = 8486,
  [SMALL_STATE(202)] = 8507,
  [SMALL_STATE(203)] = 8528,
  [SMALL_STATE(204)] = 8549,
  [SMALL_STATE(205)] = 8570,
  [SMALL_STATE(206)] = 8599,
  [SMALL_STATE(207)] = 8634,
  [SMALL_STATE(208)] = 8655,
  [SMALL_STATE(209)] = 8676,
  [SMALL_STATE(210)] = 8697,
  [SMALL_STATE(211)] = 8718,
  [SMALL_STATE(212)] = 8739,
  [SMALL_STATE(213)] = 8761,
  [SMALL_STATE(214)] = 8781,
  [SMALL_STATE(215)] = 8803,
  [SMALL_STATE(216)] = 8822,
  [SMALL_STATE(217)] = 8841,
  [SMALL_STATE(218)] = 8860,
  [SMALL_STATE(219)] = 8879,
  [SMALL_STATE(220)] = 8898,
  [SMALL_STATE(221)] = 8917,
  [SMALL_STATE(222)] = 8936,
  [SMALL_STATE(223)] = 8955,
  [SMALL_STATE(224)] = 8974,
  [SMALL_STATE(225)] = 8993,
  [SMALL_STATE(226)] = 9012,
  [SMALL_STATE(227)] = 9031,
  [SMALL_STATE(228)] = 9055,
  [SMALL_STATE(229)] = 9079,
  [SMALL_STATE(230)] = 9101,
  [SMALL_STATE(231)] = 9125,
  [SMALL_STATE(232)] = 9147,
  [SMALL_STATE(233)] = 9171,
  [SMALL_STATE(234)] = 9195,
  [SMALL_STATE(235)] = 9217,
  [SMALL_STATE(236)] = 9230,
  [SMALL_STATE(237)] = 9243,
  [SMALL_STATE(238)] = 9262,
  [SMALL_STATE(239)] = 9275,
  [SMALL_STATE(240)] = 9296,
  [SMALL_STATE(241)] = 9309,
  [SMALL_STATE(242)] = 9322,
  [SMALL_STATE(243)] = 9335,
  [SMALL_STATE(244)] = 9353,
  [SMALL_STATE(245)] = 9373,
  [SMALL_STATE(246)] = 9391,
  [SMALL_STATE(247)] = 9409,
  [SMALL_STATE(248)] = 9427,
  [SMALL_STATE(249)] = 9445,
  [SMALL_STATE(250)] = 9463,
  [SMALL_STATE(251)] = 9479,
  [SMALL_STATE(252)] = 9493,
  [SMALL_STATE(253)] = 9511,
  [SMALL_STATE(254)] = 9529,
  [SMALL_STATE(255)] = 9544,
  [SMALL_STATE(256)] = 9559,
  [SMALL_STATE(257)] = 9570,
  [SMALL_STATE(258)] = 9585,
  [SMALL_STATE(259)] = 9600,
  [SMALL_STATE(260)] = 9611,
  [SMALL_STATE(261)] = 9626,
  [SMALL_STATE(262)] = 9641,
  [SMALL_STATE(263)] = 9652,
  [SMALL_STATE(264)] = 9663,
  [SMALL_STATE(265)] = 9676,
  [SMALL_STATE(266)] = 9691,
  [SMALL_STATE(267)] = 9708,
  [SMALL_STATE(268)] = 9723,
  [SMALL_STATE(269)] = 9738,
  [SMALL_STATE(270)] = 9753,
  [SMALL_STATE(271)] = 9768,
  [SMALL_STATE(272)] = 9783,
  [SMALL_STATE(273)] = 9798,
  [SMALL_STATE(274)] = 9813,
  [SMALL_STATE(275)] = 9828,
  [SMALL_STATE(276)] = 9843,
  [SMALL_STATE(277)] = 9858,
  [SMALL_STATE(278)] = 9873,
  [SMALL_STATE(279)] = 9888,
  [SMALL_STATE(280)] = 9903,
  [SMALL_STATE(281)] = 9918,
  [SMALL_STATE(282)] = 9933,
  [SMALL_STATE(283)] = 9948,
  [SMALL_STATE(284)] = 9963,
  [SMALL_STATE(285)] = 9978,
  [SMALL_STATE(286)] = 9993,
  [SMALL_STATE(287)] = 10008,
  [SMALL_STATE(288)] = 10023,
  [SMALL_STATE(289)] = 10038,
  [SMALL_STATE(290)] = 10053,
  [SMALL_STATE(291)] = 10068,
  [SMALL_STATE(292)] = 10082,
  [SMALL_STATE(293)] = 10096,
  [SMALL_STATE(294)] = 10110,
  [SMALL_STATE(295)] = 10124,
  [SMALL_STATE(296)] = 10138,
  [SMALL_STATE(297)] = 10152,
  [SMALL_STATE(298)] = 10166,
  [SMALL_STATE(299)] = 10180,
  [SMALL_STATE(300)] = 10192,
  [SMALL_STATE(301)] = 10206,
  [SMALL_STATE(302)] = 10220,
  [SMALL_STATE(303)] = 10234,
  [SMALL_STATE(304)] = 10245,
  [SMALL_STATE(305)] = 10256,
  [SMALL_STATE(306)] = 10267,
  [SMALL_STATE(307)] = 10278,
  [SMALL_STATE(308)] = 10289,
  [SMALL_STATE(309)] = 10300,
  [SMALL_STATE(310)] = 10311,
  [SMALL_STATE(311)] = 10322,
  [SMALL_STATE(312)] = 10333,
  [SMALL_STATE(313)] = 10344,
  [SMALL_STATE(314)] = 10352,
  [SMALL_STATE(315)] = 10360,
  [SMALL_STATE(316)] = 10368,
  [SMALL_STATE(317)] = 10376,
  [SMALL_STATE(318)] = 10384,
  [SMALL_STATE(319)] = 10392,
  [SMALL_STATE(320)] = 10400,
  [SMALL_STATE(321)] = 10408,
  [SMALL_STATE(322)] = 10416,
  [SMALL_STATE(323)] = 10424,
  [SMALL_STATE(324)] = 10432,
  [SMALL_STATE(325)] = 10440,
  [SMALL_STATE(326)] = 10448,
  [SMALL_STATE(327)] = 10456,
  [SMALL_STATE(328)] = 10464,
  [SMALL_STATE(329)] = 10472,
  [SMALL_STATE(330)] = 10480,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, 0, 14),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, 0, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, 0, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, 0, 14),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, 0, 14),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, 0, 13),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, 0, 13),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, 0, 14),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, 0, 14),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, 0, 14),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, 0, 14),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, 0, 8),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, 0, 8),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [493] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcss_statement, 3, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcss_statement, 3, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, 0, 14),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 10),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 10),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, 0, 11),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, 0, 11),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, 0, 5),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, 0, 5),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, 0, 2),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, 0, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, 0, 4),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, 0, 4),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, 0, 10),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, 0, 10),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, 0, 11),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, 0, 11),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, 0, 15),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, 0, 15),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, 0, 12),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, 0, 12),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3, 0, 0),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, 0, 9),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, 0, 9),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 2, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 2, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 2, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 2, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 2),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, 0, 5),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, 0, 5),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, 0, 9),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, 0, 9),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, 0, 15),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, 0, 15),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nth_child_pseudo_class_selector, 2, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nth_child_pseudo_class_selector, 2, 0, 0),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, 0, 6),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, 0, 6),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3, 0, 0),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3, 0, 0),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 2, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 2, 0, 0),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 2, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 2, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1, 0, 0),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2, 0, 0),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2, 0, 0),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2, 0, 0),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3, 0, 0),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3, 0, 0),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3, 0, 0),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4, 0, 0),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4, 0, 0),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, 0, 0),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, 0, 0),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 7),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 7),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1, 0, 0),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1, 0, 0),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, 0, 14),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 0),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1, 0, 0),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2, 0, 0),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0),
  [1009] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3, 0, 0),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, 0, 16),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2, 0, 0),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4, 0, 0),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3, 0, 0),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2, 0, 0),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2, 0, 0),
  [1068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1085] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2, 0, 0),
  [1100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [1103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2, 0, 0),
  [1105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2, 0, 0), SHIFT_REPEAT(281),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2, 0, 0),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 3, 0, 0),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1190] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
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
