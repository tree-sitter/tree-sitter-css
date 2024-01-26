#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
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
#define STATE_COUNT 360
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 8
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

enum {
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
  anon_sym_PIPE = 32,
  anon_sym_LPAREN = 33,
  anon_sym_RPAREN = 34,
  anon_sym_COLON = 35,
  sym_important = 36,
  anon_sym_LPAREN2 = 37,
  anon_sym_and = 38,
  anon_sym_or = 39,
  anon_sym_only = 40,
  anon_sym_selector = 41,
  aux_sym_color_value_token1 = 42,
  anon_sym_SQUOTE = 43,
  aux_sym_string_value_token1 = 44,
  anon_sym_DQUOTE = 45,
  aux_sym_string_value_token2 = 46,
  aux_sym_integer_value_token1 = 47,
  aux_sym_float_value_token1 = 48,
  sym_unit = 49,
  anon_sym_DASH = 50,
  anon_sym_SLASH = 51,
  sym_identifier = 52,
  sym_at_keyword = 53,
  sym_js_comment = 54,
  sym_comment = 55,
  sym_plain_value = 56,
  sym__descendant_operator = 57,
  sym__pseudo_class_selector_colon = 58,
  sym___error_recovery = 59,
  sym_stylesheet = 60,
  sym_import_statement = 61,
  sym_media_statement = 62,
  sym_charset_statement = 63,
  sym_namespace_statement = 64,
  sym_keyframes_statement = 65,
  sym_keyframe_block_list = 66,
  sym_keyframe_block = 67,
  sym_supports_statement = 68,
  sym_postcss_statement = 69,
  sym_at_rule = 70,
  sym_rule_set = 71,
  sym_selectors = 72,
  sym_block = 73,
  sym__selector = 74,
  sym_universal_selector = 75,
  sym_class_selector = 76,
  sym_pseudo_class_selector = 77,
  sym_pseudo_element_selector = 78,
  sym_id_selector = 79,
  sym_attribute_selector = 80,
  sym_child_selector = 81,
  sym_descendant_selector = 82,
  sym_sibling_selector = 83,
  sym_adjacent_sibling_selector = 84,
  sym_namespace_selector = 85,
  sym_pseudo_class_arguments = 86,
  sym_pseudo_class_has_or_not_arguments = 87,
  sym_pseudo_element_arguments = 88,
  sym_declaration = 89,
  sym_last_declaration = 90,
  sym__query = 91,
  sym_feature_query = 92,
  sym_parenthesized_query = 93,
  sym_binary_query = 94,
  sym_unary_query = 95,
  sym_selector_query = 96,
  sym__value = 97,
  sym_parenthesized_value = 98,
  sym_color_value = 99,
  sym_string_value = 100,
  sym_integer_value = 101,
  sym_float_value = 102,
  sym_grid_value = 103,
  sym_call_expression = 104,
  sym_binary_expression = 105,
  sym_arguments = 106,
  aux_sym_stylesheet_repeat1 = 107,
  aux_sym_import_statement_repeat1 = 108,
  aux_sym_keyframe_block_list_repeat1 = 109,
  aux_sym_postcss_statement_repeat1 = 110,
  aux_sym_selectors_repeat1 = 111,
  aux_sym_block_repeat1 = 112,
  aux_sym_pseudo_class_arguments_repeat1 = 113,
  aux_sym_declaration_repeat1 = 114,
  aux_sym_grid_value_repeat1 = 115,
  aux_sym_arguments_repeat1 = 116,
  alias_sym_feature_name = 117,
  alias_sym_function_name = 118,
  alias_sym_id_name = 119,
  alias_sym_keyframes_name = 120,
  alias_sym_keyword_query = 121,
  alias_sym_namespace_name = 122,
  alias_sym_property_name = 123,
  alias_sym_tag_name = 124,
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
  [anon_sym_COLON] = ":",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_value_token1] = "string_value_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_value_token2] = "string_value_token2",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "attribute_name",
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
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_namespace_selector] = "namespace_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_pseudo_class_has_or_not_arguments] = "arguments",
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
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_postcss_statement_repeat1] = "postcss_statement_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_grid_value_repeat1] = "grid_value_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
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
  [anon_sym_has] = anon_sym_has,
  [anon_sym_not] = anon_sym_not,
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
  [aux_sym_string_value_token2] = aux_sym_string_value_token2,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
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
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_namespace_selector] = sym_namespace_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_pseudo_class_has_or_not_arguments] = sym_arguments,
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
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_postcss_statement_repeat1] = aux_sym_postcss_statement_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_grid_value_repeat1] = aux_sym_grid_value_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
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
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token2] = {
    .visible = false,
    .named = false,
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
  [sym_pseudo_class_has_or_not_arguments] = {
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
  [aux_sym_grid_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
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
    [1] = anon_sym_has,
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
    [1] = sym_identifier,
  },
  [10] = {
    [2] = anon_sym_has,
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
    [2] = sym_identifier,
  },
  [16] = {
    [1] = alias_sym_feature_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_namespace_selector, 2,
    sym_namespace_selector,
    sym_identifier,
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
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 24,
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
  [50] = 48,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 54,
  [56] = 54,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 33,
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
  [108] = 103,
  [109] = 102,
  [110] = 98,
  [111] = 96,
  [112] = 91,
  [113] = 93,
  [114] = 94,
  [115] = 101,
  [116] = 116,
  [117] = 106,
  [118] = 105,
  [119] = 119,
  [120] = 104,
  [121] = 121,
  [122] = 90,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 116,
  [130] = 107,
  [131] = 99,
  [132] = 132,
  [133] = 95,
  [134] = 119,
  [135] = 135,
  [136] = 123,
  [137] = 124,
  [138] = 125,
  [139] = 139,
  [140] = 102,
  [141] = 141,
  [142] = 126,
  [143] = 100,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 127,
  [150] = 146,
  [151] = 128,
  [152] = 100,
  [153] = 121,
  [154] = 154,
  [155] = 148,
  [156] = 146,
  [157] = 147,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 33,
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
  [182] = 179,
  [183] = 181,
  [184] = 180,
  [185] = 39,
  [186] = 33,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 189,
  [195] = 195,
  [196] = 196,
  [197] = 85,
  [198] = 198,
  [199] = 199,
  [200] = 163,
  [201] = 199,
  [202] = 135,
  [203] = 203,
  [204] = 204,
  [205] = 139,
  [206] = 203,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 161,
  [212] = 166,
  [213] = 158,
  [214] = 167,
  [215] = 215,
  [216] = 160,
  [217] = 159,
  [218] = 33,
  [219] = 162,
  [220] = 165,
  [221] = 164,
  [222] = 168,
  [223] = 85,
  [224] = 139,
  [225] = 135,
  [226] = 158,
  [227] = 163,
  [228] = 168,
  [229] = 162,
  [230] = 33,
  [231] = 165,
  [232] = 166,
  [233] = 161,
  [234] = 160,
  [235] = 167,
  [236] = 164,
  [237] = 159,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 240,
  [245] = 243,
  [246] = 242,
  [247] = 239,
  [248] = 241,
  [249] = 239,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 253,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 260,
  [265] = 263,
  [266] = 266,
  [267] = 261,
  [268] = 260,
  [269] = 259,
  [270] = 270,
  [271] = 271,
  [272] = 271,
  [273] = 273,
  [274] = 127,
  [275] = 275,
  [276] = 276,
  [277] = 99,
  [278] = 276,
  [279] = 279,
  [280] = 276,
  [281] = 101,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 283,
  [286] = 273,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 291,
  [295] = 289,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 289,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 304,
  [307] = 305,
  [308] = 308,
  [309] = 309,
  [310] = 135,
  [311] = 311,
  [312] = 303,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 315,
  [321] = 314,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 314,
  [326] = 313,
  [327] = 319,
  [328] = 322,
  [329] = 314,
  [330] = 322,
  [331] = 314,
  [332] = 322,
  [333] = 314,
  [334] = 322,
  [335] = 335,
  [336] = 313,
  [337] = 337,
  [338] = 324,
  [339] = 339,
  [340] = 340,
  [341] = 337,
  [342] = 335,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 319,
  [348] = 339,
  [349] = 337,
  [350] = 335,
  [351] = 340,
  [352] = 315,
  [353] = 337,
  [354] = 335,
  [355] = 337,
  [356] = 335,
  [357] = 337,
  [358] = 335,
  [359] = 322,
};

static inline bool sym_js_comment_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= '*')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_plain_value_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= '*')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(70);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '&') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'f') ADVANCE(255);
      if (lookahead == 'h') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(220);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '&') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(220);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(220);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(220);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(220);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(220);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(220);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 's') ADVANCE(224);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(38);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(38);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(316);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(313);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(317);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(95);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 37:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == 'k') ADVANCE(273);
      if (lookahead == 'm') ADVANCE(274);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 57:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 58:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(220);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 64:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 65:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 66:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(318);
      END_STATE();
    case 67:
      if (eof) ADVANCE(70);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '&') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(247);
      if (lookahead == 'f') ADVANCE(256);
      if (lookahead == 'h') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 68:
      if (eof) ADVANCE(70);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '&') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '&') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_from);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_to);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_has);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(95);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(25);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(25);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(169);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(25);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(25);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '\\') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '\\') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(179);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == 'y') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(209);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '_') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(209);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(220);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(25);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(313);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '/') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'y') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(286);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(298);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(265);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'm') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'm') ADVANCE(278);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'm') ADVANCE(279);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(289);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(267);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(293);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'u') ADVANCE(294);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'y') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == 'y') ADVANCE(282);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '/') ADVANCE(314);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_js_comment);
      if (sym_js_comment_character_set_1(lookahead)) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_js_comment);
      if (sym_js_comment_character_set_1(lookahead)) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(66);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(315);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(319);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 68, .external_lex_state = 2},
  [2] = {.lex_state = 68, .external_lex_state = 2},
  [3] = {.lex_state = 68, .external_lex_state = 2},
  [4] = {.lex_state = 68, .external_lex_state = 2},
  [5] = {.lex_state = 68, .external_lex_state = 2},
  [6] = {.lex_state = 68, .external_lex_state = 2},
  [7] = {.lex_state = 68, .external_lex_state = 2},
  [8] = {.lex_state = 68, .external_lex_state = 2},
  [9] = {.lex_state = 68, .external_lex_state = 2},
  [10] = {.lex_state = 68, .external_lex_state = 2},
  [11] = {.lex_state = 2, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 2},
  [13] = {.lex_state = 2, .external_lex_state = 2},
  [14] = {.lex_state = 2, .external_lex_state = 2},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 3, .external_lex_state = 3},
  [23] = {.lex_state = 68, .external_lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 68, .external_lex_state = 2},
  [28] = {.lex_state = 68, .external_lex_state = 2},
  [29] = {.lex_state = 68, .external_lex_state = 2},
  [30] = {.lex_state = 68, .external_lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 10, .external_lex_state = 3},
  [33] = {.lex_state = 5, .external_lex_state = 3},
  [34] = {.lex_state = 68, .external_lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 68, .external_lex_state = 2},
  [37] = {.lex_state = 68, .external_lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 5, .external_lex_state = 3},
  [40] = {.lex_state = 68, .external_lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 68, .external_lex_state = 2},
  [45] = {.lex_state = 9, .external_lex_state = 3},
  [46] = {.lex_state = 9, .external_lex_state = 3},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 9, .external_lex_state = 3},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 9, .external_lex_state = 3},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 9, .external_lex_state = 3},
  [59] = {.lex_state = 9, .external_lex_state = 3},
  [60] = {.lex_state = 9, .external_lex_state = 3},
  [61] = {.lex_state = 9, .external_lex_state = 3},
  [62] = {.lex_state = 9, .external_lex_state = 3},
  [63] = {.lex_state = 9, .external_lex_state = 3},
  [64] = {.lex_state = 9, .external_lex_state = 3},
  [65] = {.lex_state = 9, .external_lex_state = 3},
  [66] = {.lex_state = 9, .external_lex_state = 3},
  [67] = {.lex_state = 9, .external_lex_state = 3},
  [68] = {.lex_state = 9, .external_lex_state = 3},
  [69] = {.lex_state = 9, .external_lex_state = 3},
  [70] = {.lex_state = 9, .external_lex_state = 3},
  [71] = {.lex_state = 9, .external_lex_state = 3},
  [72] = {.lex_state = 9, .external_lex_state = 3},
  [73] = {.lex_state = 9, .external_lex_state = 3},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 9, .external_lex_state = 3},
  [76] = {.lex_state = 9, .external_lex_state = 3},
  [77] = {.lex_state = 9, .external_lex_state = 3},
  [78] = {.lex_state = 9, .external_lex_state = 3},
  [79] = {.lex_state = 9, .external_lex_state = 3},
  [80] = {.lex_state = 9, .external_lex_state = 3},
  [81] = {.lex_state = 9, .external_lex_state = 3},
  [82] = {.lex_state = 9, .external_lex_state = 3},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 9, .external_lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 9, .external_lex_state = 3},
  [87] = {.lex_state = 9, .external_lex_state = 3},
  [88] = {.lex_state = 9, .external_lex_state = 3},
  [89] = {.lex_state = 9, .external_lex_state = 3},
  [90] = {.lex_state = 68, .external_lex_state = 2},
  [91] = {.lex_state = 68, .external_lex_state = 2},
  [92] = {.lex_state = 68, .external_lex_state = 2},
  [93] = {.lex_state = 68, .external_lex_state = 2},
  [94] = {.lex_state = 68, .external_lex_state = 2},
  [95] = {.lex_state = 68, .external_lex_state = 2},
  [96] = {.lex_state = 68, .external_lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 68, .external_lex_state = 2},
  [99] = {.lex_state = 68, .external_lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 68, .external_lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 68, .external_lex_state = 2},
  [104] = {.lex_state = 68, .external_lex_state = 2},
  [105] = {.lex_state = 68, .external_lex_state = 2},
  [106] = {.lex_state = 68, .external_lex_state = 2},
  [107] = {.lex_state = 68, .external_lex_state = 2},
  [108] = {.lex_state = 68, .external_lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 68, .external_lex_state = 2},
  [111] = {.lex_state = 68, .external_lex_state = 2},
  [112] = {.lex_state = 68, .external_lex_state = 2},
  [113] = {.lex_state = 68, .external_lex_state = 2},
  [114] = {.lex_state = 68, .external_lex_state = 2},
  [115] = {.lex_state = 68, .external_lex_state = 2},
  [116] = {.lex_state = 68, .external_lex_state = 2},
  [117] = {.lex_state = 68, .external_lex_state = 2},
  [118] = {.lex_state = 68, .external_lex_state = 2},
  [119] = {.lex_state = 68, .external_lex_state = 2},
  [120] = {.lex_state = 68, .external_lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 68, .external_lex_state = 2},
  [123] = {.lex_state = 68, .external_lex_state = 2},
  [124] = {.lex_state = 68, .external_lex_state = 2},
  [125] = {.lex_state = 68, .external_lex_state = 2},
  [126] = {.lex_state = 68, .external_lex_state = 2},
  [127] = {.lex_state = 68, .external_lex_state = 2},
  [128] = {.lex_state = 68, .external_lex_state = 2},
  [129] = {.lex_state = 68, .external_lex_state = 2},
  [130] = {.lex_state = 68, .external_lex_state = 2},
  [131] = {.lex_state = 68, .external_lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 68, .external_lex_state = 2},
  [134] = {.lex_state = 68, .external_lex_state = 2},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 68, .external_lex_state = 2},
  [137] = {.lex_state = 68, .external_lex_state = 2},
  [138] = {.lex_state = 68, .external_lex_state = 2},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 68, .external_lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 68, .external_lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 68, .external_lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 68, .external_lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 9, .external_lex_state = 3},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 9, .external_lex_state = 3},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 9, .external_lex_state = 3},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 9, .external_lex_state = 3},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 17},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 17},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 13, .external_lex_state = 3},
  [186] = {.lex_state = 13, .external_lex_state = 3},
  [187] = {.lex_state = 19},
  [188] = {.lex_state = 68, .external_lex_state = 3},
  [189] = {.lex_state = 68, .external_lex_state = 3},
  [190] = {.lex_state = 68, .external_lex_state = 3},
  [191] = {.lex_state = 68, .external_lex_state = 3},
  [192] = {.lex_state = 68, .external_lex_state = 3},
  [193] = {.lex_state = 68, .external_lex_state = 3},
  [194] = {.lex_state = 68, .external_lex_state = 3},
  [195] = {.lex_state = 68, .external_lex_state = 3},
  [196] = {.lex_state = 68, .external_lex_state = 3},
  [197] = {.lex_state = 16},
  [198] = {.lex_state = 19},
  [199] = {.lex_state = 19},
  [200] = {.lex_state = 17},
  [201] = {.lex_state = 19},
  [202] = {.lex_state = 15},
  [203] = {.lex_state = 19},
  [204] = {.lex_state = 19},
  [205] = {.lex_state = 15},
  [206] = {.lex_state = 19},
  [207] = {.lex_state = 19},
  [208] = {.lex_state = 68, .external_lex_state = 3},
  [209] = {.lex_state = 19},
  [210] = {.lex_state = 13},
  [211] = {.lex_state = 17},
  [212] = {.lex_state = 17},
  [213] = {.lex_state = 17},
  [214] = {.lex_state = 17},
  [215] = {.lex_state = 68, .external_lex_state = 3},
  [216] = {.lex_state = 17},
  [217] = {.lex_state = 17},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 17},
  [220] = {.lex_state = 17},
  [221] = {.lex_state = 17},
  [222] = {.lex_state = 17},
  [223] = {.lex_state = 13},
  [224] = {.lex_state = 21},
  [225] = {.lex_state = 21},
  [226] = {.lex_state = 13},
  [227] = {.lex_state = 13},
  [228] = {.lex_state = 13},
  [229] = {.lex_state = 13},
  [230] = {.lex_state = 13},
  [231] = {.lex_state = 13},
  [232] = {.lex_state = 13},
  [233] = {.lex_state = 13},
  [234] = {.lex_state = 13},
  [235] = {.lex_state = 13},
  [236] = {.lex_state = 13},
  [237] = {.lex_state = 13},
  [238] = {.lex_state = 57},
  [239] = {.lex_state = 13},
  [240] = {.lex_state = 57},
  [241] = {.lex_state = 68},
  [242] = {.lex_state = 9},
  [243] = {.lex_state = 57},
  [244] = {.lex_state = 57},
  [245] = {.lex_state = 57},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 13},
  [248] = {.lex_state = 68},
  [249] = {.lex_state = 13},
  [250] = {.lex_state = 9},
  [251] = {.lex_state = 9},
  [252] = {.lex_state = 9},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 13},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 9},
  [257] = {.lex_state = 9},
  [258] = {.lex_state = 9},
  [259] = {.lex_state = 68},
  [260] = {.lex_state = 13},
  [261] = {.lex_state = 9},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 13},
  [264] = {.lex_state = 13},
  [265] = {.lex_state = 13},
  [266] = {.lex_state = 13},
  [267] = {.lex_state = 9},
  [268] = {.lex_state = 13},
  [269] = {.lex_state = 68},
  [270] = {.lex_state = 13},
  [271] = {.lex_state = 68},
  [272] = {.lex_state = 68},
  [273] = {.lex_state = 68},
  [274] = {.lex_state = 57},
  [275] = {.lex_state = 68},
  [276] = {.lex_state = 68},
  [277] = {.lex_state = 57},
  [278] = {.lex_state = 68},
  [279] = {.lex_state = 57},
  [280] = {.lex_state = 68},
  [281] = {.lex_state = 57},
  [282] = {.lex_state = 68},
  [283] = {.lex_state = 9},
  [284] = {.lex_state = 68},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 68},
  [287] = {.lex_state = 9},
  [288] = {.lex_state = 68},
  [289] = {.lex_state = 68},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 68},
  [292] = {.lex_state = 68},
  [293] = {.lex_state = 26},
  [294] = {.lex_state = 68},
  [295] = {.lex_state = 68},
  [296] = {.lex_state = 68},
  [297] = {.lex_state = 68},
  [298] = {.lex_state = 26},
  [299] = {.lex_state = 68},
  [300] = {.lex_state = 68},
  [301] = {.lex_state = 68},
  [302] = {.lex_state = 68},
  [303] = {.lex_state = 68},
  [304] = {.lex_state = 27},
  [305] = {.lex_state = 68},
  [306] = {.lex_state = 27},
  [307] = {.lex_state = 68},
  [308] = {.lex_state = 68},
  [309] = {.lex_state = 68},
  [310] = {.lex_state = 33},
  [311] = {.lex_state = 68},
  [312] = {.lex_state = 68},
  [313] = {.lex_state = 68},
  [314] = {.lex_state = 68},
  [315] = {.lex_state = 9},
  [316] = {.lex_state = 68},
  [317] = {.lex_state = 68},
  [318] = {.lex_state = 68},
  [319] = {.lex_state = 68},
  [320] = {.lex_state = 9},
  [321] = {.lex_state = 68},
  [322] = {.lex_state = 68},
  [323] = {.lex_state = 68},
  [324] = {.lex_state = 68},
  [325] = {.lex_state = 68},
  [326] = {.lex_state = 68},
  [327] = {.lex_state = 68},
  [328] = {.lex_state = 68},
  [329] = {.lex_state = 68},
  [330] = {.lex_state = 68},
  [331] = {.lex_state = 68},
  [332] = {.lex_state = 68},
  [333] = {.lex_state = 68},
  [334] = {.lex_state = 68},
  [335] = {.lex_state = 180},
  [336] = {.lex_state = 68},
  [337] = {.lex_state = 170},
  [338] = {.lex_state = 68},
  [339] = {.lex_state = 68},
  [340] = {.lex_state = 68},
  [341] = {.lex_state = 170},
  [342] = {.lex_state = 180},
  [343] = {.lex_state = 68},
  [344] = {.lex_state = 68},
  [345] = {.lex_state = 19},
  [346] = {.lex_state = 68},
  [347] = {.lex_state = 68},
  [348] = {.lex_state = 68},
  [349] = {.lex_state = 170},
  [350] = {.lex_state = 180},
  [351] = {.lex_state = 68},
  [352] = {.lex_state = 9},
  [353] = {.lex_state = 170},
  [354] = {.lex_state = 180},
  [355] = {.lex_state = 170},
  [356] = {.lex_state = 180},
  [357] = {.lex_state = 170},
  [358] = {.lex_state = 180},
  [359] = {.lex_state = 68},
};

enum {
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
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_js_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym__descendant_operator] = ACTIONS(1),
    [sym__pseudo_class_selector_colon] = ACTIONS(1),
    [sym___error_recovery] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(323),
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(307),
    [sym__selector] = STATE(195),
    [sym_universal_selector] = STATE(195),
    [sym_class_selector] = STATE(195),
    [sym_pseudo_class_selector] = STATE(195),
    [sym_pseudo_element_selector] = STATE(195),
    [sym_id_selector] = STATE(195),
    [sym_attribute_selector] = STATE(195),
    [sym_child_selector] = STATE(195),
    [sym_descendant_selector] = STATE(195),
    [sym_sibling_selector] = STATE(195),
    [sym_adjacent_sibling_selector] = STATE(195),
    [sym_namespace_selector] = STATE(195),
    [sym_declaration] = STATE(10),
    [sym_string_value] = STATE(195),
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
    STATE(305), 1,
      sym_selectors,
    STATE(347), 1,
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
    STATE(195), 13,
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
    STATE(305), 1,
      sym_selectors,
    STATE(319), 1,
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
    STATE(195), 13,
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
    STATE(305), 1,
      sym_selectors,
    STATE(336), 1,
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
    STATE(195), 13,
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
    STATE(305), 1,
      sym_selectors,
    STATE(313), 1,
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
    STATE(195), 13,
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
    STATE(305), 1,
      sym_selectors,
    STATE(327), 1,
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
    STATE(195), 13,
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
    STATE(305), 1,
      sym_selectors,
    STATE(326), 1,
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
    STATE(195), 13,
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
    STATE(305), 1,
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
    STATE(195), 13,
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
    STATE(307), 1,
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
    STATE(195), 13,
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
    STATE(307), 1,
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
    STATE(195), 13,
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
  [835] = 22,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(179), 1,
      sym_nesting_selector,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      sym_plain_value,
    STATE(38), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(39), 1,
      sym_string_value,
    STATE(173), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(192), 12,
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
  [920] = 22,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(205), 1,
      sym_nesting_selector,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(39), 1,
      sym_string_value,
    STATE(173), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(193), 12,
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
  [1005] = 21,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(209), 1,
      sym_nesting_selector,
    STATE(39), 1,
      sym_string_value,
    STATE(47), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(173), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(196), 12,
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
  [1087] = 21,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(211), 1,
      sym_nesting_selector,
    ACTIONS(213), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      sym_important,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      anon_sym_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_plain_value,
    STATE(176), 1,
      sym_namespace_selector,
    STATE(185), 1,
      sym_string_value,
    STATE(247), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(215), 11,
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
  [1168] = 21,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(211), 1,
      sym_nesting_selector,
    ACTIONS(213), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(221), 1,
      anon_sym_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(233), 1,
      sym_important,
    ACTIONS(235), 1,
      sym_plain_value,
    STATE(176), 1,
      sym_namespace_selector,
    STATE(185), 1,
      sym_string_value,
    STATE(249), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(215), 11,
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
  [1249] = 20,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(247), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      sym_identifier,
    STATE(52), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(104), 1,
      sym_block,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(246), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(173), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1324] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      sym_important,
    ACTIONS(263), 1,
      anon_sym_LPAREN2,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(271), 1,
      sym_plain_value,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(290), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(268), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1387] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_LPAREN2,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(273), 1,
      sym_important,
    ACTIONS(275), 1,
      sym_plain_value,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(290), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(264), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1450] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      sym_important,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_plain_value,
    STATE(41), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(285), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
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
  [1518] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_plain_value,
    ACTIONS(293), 1,
      sym_important,
    STATE(50), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(285), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
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
  [1583] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_plain_value,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    ACTIONS(297), 1,
      sym_important,
    STATE(48), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(285), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
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
  [1648] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_arguments,
    ACTIONS(303), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(301), 4,
      anon_sym_STAR,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(307), 7,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(299), 10,
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
  [1692] = 13,
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
    ACTIONS(309), 1,
      sym_nesting_selector,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(190), 13,
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
  [1745] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(278), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(173), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1806] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(280), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(173), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1867] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(276), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(173), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1928] = 12,
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
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(323), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(65), 13,
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
  [1978] = 12,
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
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(325), 1,
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
  [2028] = 12,
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
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(327), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(71), 13,
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
  [2078] = 12,
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
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(329), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(64), 13,
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
  [2128] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(300), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(173), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2188] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_DASH,
    ACTIONS(303), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(307), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(335), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(299), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [2234] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(343), 8,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(341), 15,
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
  [2268] = 12,
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
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(345), 1,
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
  [2318] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(347), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(173), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2374] = 12,
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
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(349), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(208), 13,
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
  [2424] = 12,
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
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(351), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(188), 13,
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
  [2474] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(296), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(173), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2534] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(357), 5,
      anon_sym_STAR,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(361), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(355), 10,
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
  [2572] = 13,
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
    ACTIONS(211), 1,
      sym_nesting_selector,
    ACTIONS(363), 1,
      sym_identifier,
    STATE(176), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(215), 12,
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
  [2624] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_plain_value,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 1,
      sym_important,
    STATE(42), 1,
      aux_sym_declaration_repeat1,
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
  [2684] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_POUND,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      sym_important,
    ACTIONS(385), 1,
      anon_sym_LPAREN2,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    ACTIONS(391), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      aux_sym_integer_value_token1,
    ACTIONS(397), 1,
      aux_sym_float_value_token1,
    ACTIONS(400), 1,
      sym_identifier,
    ACTIONS(403), 1,
      sym_plain_value,
    STATE(42), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(374), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
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
  [2742] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_POUND,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    ACTIONS(414), 1,
      sym_important,
    ACTIONS(417), 1,
      anon_sym_LPAREN2,
    ACTIONS(420), 1,
      anon_sym_SQUOTE,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      aux_sym_integer_value_token1,
    ACTIONS(429), 1,
      aux_sym_float_value_token1,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(435), 1,
      sym_plain_value,
    STATE(43), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(406), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(173), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2798] = 13,
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
    ACTIONS(211), 1,
      sym_nesting_selector,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(170), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(215), 12,
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
  [2850] = 5,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(440), 18,
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
  [2885] = 5,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(446), 18,
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
  [2920] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(452), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(173), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2975] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_plain_value,
    ACTIONS(454), 1,
      anon_sym_SEMI,
    ACTIONS(456), 1,
      sym_important,
    STATE(42), 1,
      aux_sym_declaration_repeat1,
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
  [3032] = 5,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(458), 18,
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
  [3067] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_plain_value,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(462), 1,
      sym_important,
    STATE(42), 1,
      aux_sym_declaration_repeat1,
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
  [3124] = 5,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(464), 18,
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
  [3159] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(173), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3213] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_arguments,
    ACTIONS(472), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(470), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(301), 6,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(307), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [3253] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(173), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3307] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(173), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3361] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(173), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3415] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(173), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3469] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(482), 18,
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
  [3498] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(486), 18,
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
  [3527] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(490), 18,
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
  [3556] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(494), 18,
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
  [3585] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(498), 18,
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
  [3614] = 4,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(506), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(502), 17,
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
  [3645] = 4,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(510), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(508), 17,
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
  [3676] = 4,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(514), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(512), 17,
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
  [3707] = 4,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(518), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(516), 17,
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
  [3738] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(341), 18,
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
    ACTIONS(522), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(520), 18,
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
  [3796] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(526), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(524), 18,
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
  [3825] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(530), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(528), 18,
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
  [3854] = 4,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(534), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(532), 17,
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
  [3885] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(299), 18,
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
  [3914] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(538), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(536), 18,
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
  [3943] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(173), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3994] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(542), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(540), 18,
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
    ACTIONS(546), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(544), 18,
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
    ACTIONS(550), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(548), 18,
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
  [4081] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(554), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(552), 18,
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
  [4110] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(558), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(556), 18,
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
  [4139] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(562), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(560), 18,
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
  [4168] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(566), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(564), 18,
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
  [4197] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(570), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(568), 18,
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
  [4226] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_important,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      sym_plain_value,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(57), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(173), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4277] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(574), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(572), 18,
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
  [4306] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_arguments,
    ACTIONS(307), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(301), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [4341] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(578), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(576), 18,
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
    ACTIONS(582), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(580), 18,
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
  [4399] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(586), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(584), 18,
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
  [4428] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(588), 18,
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
  [4457] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(592), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(594), 11,
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
  [4485] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(598), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(596), 11,
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
  [4513] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(600), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(602), 11,
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
  [4541] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(606), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(604), 11,
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
  [4569] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(610), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(608), 11,
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
  [4597] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(614), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(612), 11,
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
  [4625] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(618), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(616), 11,
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
  [4653] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(620), 1,
      sym_important,
    ACTIONS(622), 1,
      sym_identifier,
    ACTIONS(624), 1,
      sym_plain_value,
    STATE(266), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4701] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(628), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(626), 11,
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
  [4729] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(632), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(630), 11,
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
  [4757] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      sym_important,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_plain_value,
    ACTIONS(622), 1,
      sym_identifier,
    STATE(268), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4805] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(636), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(634), 11,
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
  [4833] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      sym_important,
    ACTIONS(644), 1,
      anon_sym_LPAREN2,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_DQUOTE,
    ACTIONS(650), 1,
      aux_sym_integer_value_token1,
    ACTIONS(652), 1,
      aux_sym_float_value_token1,
    ACTIONS(654), 1,
      sym_identifier,
    ACTIONS(656), 1,
      sym_plain_value,
    STATE(216), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4881] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(660), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(658), 11,
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
  [4909] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(662), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(664), 11,
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
  [4937] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(666), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(668), 11,
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
  [4965] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(672), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(670), 11,
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
  [4993] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(676), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(674), 11,
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
  [5021] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(660), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(658), 11,
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
  [5049] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      sym_identifier,
    ACTIONS(678), 1,
      sym_important,
    ACTIONS(680), 1,
      sym_plain_value,
    STATE(234), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5097] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(628), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(626), 11,
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
  [5125] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(618), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(616), 11,
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
  [5153] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(598), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(596), 11,
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
  [5181] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(606), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(604), 11,
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
  [5209] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(610), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(608), 11,
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
  [5237] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(636), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(634), 11,
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
  [5265] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(684), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(682), 11,
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
  [5293] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(672), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(670), 11,
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
  [5321] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(666), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(668), 11,
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
  [5349] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(686), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(688), 11,
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
  [5377] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(662), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(664), 11,
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
  [5405] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(690), 1,
      sym_important,
    ACTIONS(692), 1,
      sym_plain_value,
    STATE(21), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5453] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(592), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(594), 11,
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
  [5481] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(694), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(696), 11,
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
  [5509] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(698), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(700), 11,
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
  [5537] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(702), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(704), 11,
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
  [5565] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(706), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(708), 11,
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
  [5593] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(710), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(712), 11,
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
  [5621] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(714), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(716), 11,
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
  [5649] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(684), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(682), 11,
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
  [5677] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(676), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(674), 11,
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
  [5705] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(632), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(630), 11,
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
  [5733] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      sym_identifier,
    ACTIONS(718), 1,
      sym_important,
    ACTIONS(720), 1,
      sym_plain_value,
    STATE(254), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5781] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(614), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(612), 11,
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
  [5809] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(686), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(688), 11,
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
  [5837] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym_unit,
    ACTIONS(724), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(722), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [5869] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(694), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(696), 11,
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
  [5897] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(698), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(700), 11,
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
  [5925] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(702), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(704), 11,
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
  [5953] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym_unit,
    ACTIONS(730), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(728), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [5985] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(734), 1,
      sym_important,
    ACTIONS(736), 1,
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
  [6033] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(738), 1,
      sym_important,
    ACTIONS(740), 1,
      sym_plain_value,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6081] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(706), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(708), 11,
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
  [6109] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      sym_identifier,
    ACTIONS(742), 1,
      sym_important,
    ACTIONS(744), 1,
      sym_plain_value,
    STATE(260), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6157] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(746), 1,
      sym_important,
    ACTIONS(748), 1,
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
  [6205] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(662), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(664), 11,
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
  [6233] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      sym_identifier,
    ACTIONS(750), 1,
      sym_important,
    ACTIONS(752), 1,
      sym_plain_value,
    STATE(239), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6281] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      anon_sym_LPAREN2,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_DQUOTE,
    ACTIONS(650), 1,
      aux_sym_integer_value_token1,
    ACTIONS(652), 1,
      aux_sym_float_value_token1,
    ACTIONS(654), 1,
      sym_identifier,
    ACTIONS(754), 1,
      sym_important,
    ACTIONS(756), 1,
      sym_plain_value,
    STATE(183), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6329] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      sym_identifier,
    ACTIONS(758), 1,
      sym_important,
    ACTIONS(760), 1,
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
  [6377] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(710), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(712), 11,
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
  [6405] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_important,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(231), 1,
      sym_plain_value,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      sym_identifier,
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
  [6453] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(714), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(716), 11,
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
  [6481] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym_important,
    ACTIONS(275), 1,
      sym_plain_value,
    ACTIONS(622), 1,
      sym_identifier,
    STATE(264), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6529] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN2,
    ACTIONS(197), 1,
      aux_sym_integer_value_token1,
    ACTIONS(199), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(762), 1,
      sym_important,
    ACTIONS(764), 1,
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
  [6577] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      sym_identifier,
    ACTIONS(766), 1,
      sym_important,
    ACTIONS(768), 1,
      sym_plain_value,
    STATE(270), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6625] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      sym_identifier,
    ACTIONS(770), 1,
      sym_important,
    ACTIONS(772), 1,
      sym_plain_value,
    STATE(263), 9,
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
    ACTIONS(219), 1,
      anon_sym_LPAREN2,
    ACTIONS(225), 1,
      aux_sym_integer_value_token1,
    ACTIONS(227), 1,
      aux_sym_float_value_token1,
    ACTIONS(233), 1,
      sym_important,
    ACTIONS(235), 1,
      sym_plain_value,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      sym_identifier,
    STATE(249), 9,
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
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      anon_sym_LPAREN2,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_DQUOTE,
    ACTIONS(650), 1,
      aux_sym_integer_value_token1,
    ACTIONS(652), 1,
      aux_sym_float_value_token1,
    ACTIONS(654), 1,
      sym_identifier,
    ACTIONS(774), 1,
      sym_important,
    ACTIONS(776), 1,
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
  [6769] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(780), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(778), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6798] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(784), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(782), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6827] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(788), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(786), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6856] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(792), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(790), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6885] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(796), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(794), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6914] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(800), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(798), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6943] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(804), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(802), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6972] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(808), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(806), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7001] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(812), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(810), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7030] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(816), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(814), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7059] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(820), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(818), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7088] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(343), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(341), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7117] = 5,
    ACTIONS(824), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(822), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(355), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7147] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(285), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(826), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(374), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7179] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(285), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(830), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(828), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7211] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(285), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(834), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(832), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7243] = 5,
    ACTIONS(824), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(822), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(299), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7273] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    ACTIONS(361), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(357), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7305] = 5,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(335), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(355), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7335] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SEMI,
    ACTIONS(838), 1,
      anon_sym_RBRACE,
    ACTIONS(361), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(357), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7367] = 5,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(335), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(299), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7397] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_SEMI,
    ACTIONS(361), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(357), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7426] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(361), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(357), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7455] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(842), 1,
      anon_sym_SEMI,
    ACTIONS(846), 1,
      anon_sym_LPAREN2,
    ACTIONS(850), 1,
      sym_identifier,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(844), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(848), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(261), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7494] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SEMI,
    ACTIONS(361), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(357), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7523] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(846), 1,
      anon_sym_LPAREN2,
    ACTIONS(850), 1,
      sym_identifier,
    ACTIONS(852), 1,
      anon_sym_SEMI,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(844), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(848), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(267), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7562] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_SEMI,
    ACTIONS(361), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(357), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7591] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(357), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_DASH,
    ACTIONS(355), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [7619] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    ACTIONS(341), 14,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_DASH,
  [7645] = 9,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(846), 1,
      anon_sym_LPAREN2,
    ACTIONS(850), 1,
      sym_identifier,
    ACTIONS(854), 1,
      anon_sym_SEMI,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_block,
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
  [7680] = 12,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(860), 1,
      anon_sym_COLON_COLON,
    ACTIONS(862), 1,
      anon_sym_POUND,
    ACTIONS(864), 1,
      anon_sym_LBRACK,
    ACTIONS(866), 1,
      anon_sym_GT,
    ACTIONS(868), 1,
      anon_sym_TILDE,
    ACTIONS(870), 1,
      anon_sym_PLUS,
    ACTIONS(872), 1,
      anon_sym_PIPE,
    ACTIONS(874), 1,
      sym__descendant_operator,
    ACTIONS(876), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(858), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [7720] = 3,
    ACTIONS(878), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(299), 12,
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
  [7742] = 14,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(860), 1,
      anon_sym_COLON_COLON,
    ACTIONS(862), 1,
      anon_sym_POUND,
    ACTIONS(864), 1,
      anon_sym_LBRACK,
    ACTIONS(866), 1,
      anon_sym_GT,
    ACTIONS(868), 1,
      anon_sym_TILDE,
    ACTIONS(870), 1,
      anon_sym_PLUS,
    ACTIONS(872), 1,
      anon_sym_PIPE,
    ACTIONS(874), 1,
      sym__descendant_operator,
    ACTIONS(876), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [7786] = 3,
    ACTIONS(884), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(299), 12,
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
  [7808] = 14,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(860), 1,
      anon_sym_COLON_COLON,
    ACTIONS(862), 1,
      anon_sym_POUND,
    ACTIONS(864), 1,
      anon_sym_LBRACK,
    ACTIONS(866), 1,
      anon_sym_GT,
    ACTIONS(868), 1,
      anon_sym_TILDE,
    ACTIONS(870), 1,
      anon_sym_PLUS,
    ACTIONS(872), 1,
      anon_sym_PIPE,
    ACTIONS(874), 1,
      sym__descendant_operator,
    ACTIONS(876), 1,
      sym__pseudo_class_selector_colon,
    STATE(296), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [7852] = 14,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(860), 1,
      anon_sym_COLON_COLON,
    ACTIONS(862), 1,
      anon_sym_POUND,
    ACTIONS(864), 1,
      anon_sym_LBRACK,
    ACTIONS(866), 1,
      anon_sym_GT,
    ACTIONS(868), 1,
      anon_sym_TILDE,
    ACTIONS(870), 1,
      anon_sym_PLUS,
    ACTIONS(872), 1,
      anon_sym_PIPE,
    ACTIONS(874), 1,
      sym__descendant_operator,
    ACTIONS(876), 1,
      sym__pseudo_class_selector_colon,
    STATE(300), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [7896] = 3,
    ACTIONS(886), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(299), 12,
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
  [7918] = 14,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(860), 1,
      anon_sym_COLON_COLON,
    ACTIONS(862), 1,
      anon_sym_POUND,
    ACTIONS(864), 1,
      anon_sym_LBRACK,
    ACTIONS(866), 1,
      anon_sym_GT,
    ACTIONS(868), 1,
      anon_sym_TILDE,
    ACTIONS(870), 1,
      anon_sym_PLUS,
    ACTIONS(872), 1,
      anon_sym_PIPE,
    ACTIONS(874), 1,
      sym__descendant_operator,
    ACTIONS(876), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    STATE(299), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [7962] = 12,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(860), 1,
      anon_sym_COLON_COLON,
    ACTIONS(862), 1,
      anon_sym_POUND,
    ACTIONS(864), 1,
      anon_sym_LBRACK,
    ACTIONS(866), 1,
      anon_sym_GT,
    ACTIONS(868), 1,
      anon_sym_TILDE,
    ACTIONS(870), 1,
      anon_sym_PLUS,
    ACTIONS(872), 1,
      anon_sym_PIPE,
    ACTIONS(874), 1,
      sym__descendant_operator,
    ACTIONS(876), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8001] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_LPAREN,
    STATE(219), 1,
      sym_arguments,
    ACTIONS(301), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(307), 7,
      anon_sym_not,
      anon_sym_LPAREN2,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8028] = 6,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(846), 1,
      anon_sym_LPAREN2,
    ACTIONS(850), 1,
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
  [8054] = 6,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(846), 1,
      anon_sym_LPAREN2,
    ACTIONS(850), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(283), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8080] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(798), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(800), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8102] = 6,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(846), 1,
      anon_sym_LPAREN2,
    ACTIONS(850), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(285), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8128] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym_unit,
    ACTIONS(722), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(724), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8152] = 6,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(846), 1,
      anon_sym_LPAREN2,
    ACTIONS(850), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(255), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8178] = 6,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(846), 1,
      anon_sym_LPAREN2,
    ACTIONS(850), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(262), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8204] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym_unit,
    ACTIONS(728), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(730), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8228] = 6,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(846), 1,
      anon_sym_LPAREN2,
    ACTIONS(850), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(253), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8254] = 6,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(846), 1,
      anon_sym_LPAREN2,
    ACTIONS(896), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(290), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8280] = 12,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(860), 1,
      anon_sym_COLON_COLON,
    ACTIONS(862), 1,
      anon_sym_POUND,
    ACTIONS(864), 1,
      anon_sym_LBRACK,
    ACTIONS(866), 1,
      anon_sym_GT,
    ACTIONS(868), 1,
      anon_sym_TILDE,
    ACTIONS(870), 1,
      anon_sym_PLUS,
    ACTIONS(872), 1,
      anon_sym_PIPE,
    ACTIONS(874), 1,
      sym__descendant_operator,
    ACTIONS(876), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8318] = 6,
    ACTIONS(249), 1,
      anon_sym_selector,
    ACTIONS(846), 1,
      anon_sym_LPAREN2,
    ACTIONS(850), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(252), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8344] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(900), 1,
      anon_sym_COLON,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(301), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(470), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [8373] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(790), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(792), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8394] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(810), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(812), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8415] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(778), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(780), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8436] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(814), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(816), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8457] = 11,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(860), 1,
      anon_sym_COLON_COLON,
    ACTIONS(862), 1,
      anon_sym_POUND,
    ACTIONS(864), 1,
      anon_sym_LBRACK,
    ACTIONS(866), 1,
      anon_sym_GT,
    ACTIONS(868), 1,
      anon_sym_TILDE,
    ACTIONS(870), 1,
      anon_sym_PLUS,
    ACTIONS(872), 1,
      anon_sym_PIPE,
    ACTIONS(874), 1,
      sym__descendant_operator,
    ACTIONS(876), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8492] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(786), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(788), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8513] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(782), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(784), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8534] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(341), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(343), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8555] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(794), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(796), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8576] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(806), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(808), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8597] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(802), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(804), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8618] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(818), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(820), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8639] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(301), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8664] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_SLASH,
    ACTIONS(902), 1,
      sym_unit,
    ACTIONS(728), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8686] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_SLASH,
    ACTIONS(904), 1,
      sym_unit,
    ACTIONS(722), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8708] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_SLASH,
    ACTIONS(778), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8727] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_SLASH,
    ACTIONS(798), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8746] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_SLASH,
    ACTIONS(818), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8765] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SLASH,
    ACTIONS(794), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8784] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    ACTIONS(341), 7,
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
    ACTIONS(808), 1,
      anon_sym_SLASH,
    ACTIONS(806), 7,
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
    ACTIONS(812), 1,
      anon_sym_SLASH,
    ACTIONS(810), 7,
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
    ACTIONS(792), 1,
      anon_sym_SLASH,
    ACTIONS(790), 7,
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
    ACTIONS(788), 1,
      anon_sym_SLASH,
    ACTIONS(786), 7,
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
    ACTIONS(816), 1,
      anon_sym_SLASH,
    ACTIONS(814), 7,
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
    ACTIONS(804), 1,
      anon_sym_SLASH,
    ACTIONS(802), 7,
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
    ACTIONS(784), 1,
      anon_sym_SLASH,
    ACTIONS(782), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8936] = 6,
    ACTIONS(906), 1,
      anon_sym_RBRACE,
    ACTIONS(911), 1,
      aux_sym_integer_value_token1,
    STATE(309), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(908), 2,
      sym_from,
      sym_to,
    STATE(238), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [8958] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    ACTIONS(918), 1,
      anon_sym_RBRACK,
    ACTIONS(920), 1,
      anon_sym_SLASH,
    STATE(295), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(916), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8982] = 6,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
    ACTIONS(926), 1,
      aux_sym_integer_value_token1,
    STATE(309), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(924), 2,
      sym_from,
      sym_to,
    STATE(238), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9004] = 7,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_DQUOTE,
    ACTIONS(890), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      sym_identifier,
    STATE(219), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(324), 2,
      sym_string_value,
      sym_call_expression,
  [9028] = 7,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(932), 1,
      anon_sym_SEMI,
    STATE(106), 1,
      sym_block,
    STATE(271), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      anon_sym_and,
      anon_sym_or,
  [9052] = 6,
    ACTIONS(926), 1,
      aux_sym_integer_value_token1,
    ACTIONS(936), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(924), 2,
      sym_from,
      sym_to,
    STATE(240), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9074] = 6,
    ACTIONS(926), 1,
      aux_sym_integer_value_token1,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(924), 2,
      sym_from,
      sym_to,
    STATE(238), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9096] = 6,
    ACTIONS(926), 1,
      aux_sym_integer_value_token1,
    ACTIONS(940), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(924), 2,
      sym_from,
      sym_to,
    STATE(244), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9118] = 7,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(942), 1,
      anon_sym_SEMI,
    STATE(117), 1,
      sym_block,
    STATE(272), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      anon_sym_and,
      anon_sym_or,
  [9142] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    ACTIONS(920), 1,
      anon_sym_SLASH,
    ACTIONS(944), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(916), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9166] = 7,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_DQUOTE,
    ACTIONS(890), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      sym_identifier,
    STATE(219), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(338), 2,
      sym_string_value,
      sym_call_expression,
  [9190] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    ACTIONS(920), 1,
      anon_sym_SLASH,
    ACTIONS(946), 1,
      anon_sym_RBRACK,
    STATE(301), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(916), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9214] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(948), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9227] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(950), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9240] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(952), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9253] = 6,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      sym_block,
    STATE(286), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      anon_sym_and,
      anon_sym_or,
  [9274] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_SLASH,
    ACTIONS(954), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(916), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9293] = 6,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      sym_block,
    STATE(273), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      anon_sym_and,
      anon_sym_or,
  [9314] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(470), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9327] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(956), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9340] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(958), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9353] = 5,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_DQUOTE,
    ACTIONS(960), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(351), 2,
      sym_string_value,
      sym_call_expression,
  [9371] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_SLASH,
    ACTIONS(962), 1,
      anon_sym_RPAREN,
    ACTIONS(916), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9389] = 5,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(964), 1,
      anon_sym_SEMI,
    STATE(294), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      anon_sym_and,
      anon_sym_or,
  [9407] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(966), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [9421] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_SLASH,
    ACTIONS(968), 1,
      anon_sym_SEMI,
    ACTIONS(916), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9439] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_SLASH,
    ACTIONS(970), 1,
      anon_sym_RPAREN,
    ACTIONS(916), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9457] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_SLASH,
    ACTIONS(972), 1,
      anon_sym_SEMI,
    ACTIONS(916), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9475] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_SLASH,
    ACTIONS(974), 1,
      anon_sym_RBRACK,
    ACTIONS(916), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9493] = 5,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(976), 1,
      anon_sym_SEMI,
    STATE(291), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      anon_sym_and,
      anon_sym_or,
  [9511] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_SLASH,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
    ACTIONS(916), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9529] = 5,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_DQUOTE,
    ACTIONS(980), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(340), 2,
      sym_string_value,
      sym_call_expression,
  [9547] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_SLASH,
    ACTIONS(982), 1,
      anon_sym_RBRACK,
    ACTIONS(916), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9565] = 6,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(984), 1,
      anon_sym_SEMI,
    STATE(151), 1,
      sym_block,
    STATE(282), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9585] = 6,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(986), 1,
      anon_sym_SEMI,
    STATE(128), 1,
      sym_block,
    STATE(282), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9605] = 5,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      sym_block,
    STATE(282), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9622] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(712), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [9633] = 4,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(858), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [9648] = 4,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9663] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(630), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [9674] = 4,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9689] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(995), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [9700] = 4,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9715] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(634), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [9726] = 4,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    STATE(282), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(966), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [9741] = 4,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      anon_sym_and,
      anon_sym_or,
  [9756] = 4,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1002), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9771] = 4,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      anon_sym_and,
      anon_sym_or,
  [9786] = 5,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      sym_block,
    STATE(282), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9803] = 3,
    ACTIONS(900), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(470), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9816] = 4,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9830] = 4,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    ACTIONS(1008), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9844] = 3,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      anon_sym_and,
      anon_sym_or,
  [9856] = 4,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      anon_sym_SEMI,
    STATE(282), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9870] = 4,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9884] = 3,
    ACTIONS(1018), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1016), 2,
      anon_sym_has,
      anon_sym_not,
  [9896] = 4,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(1020), 1,
      anon_sym_SEMI,
    STATE(282), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9910] = 4,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    ACTIONS(1022), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9924] = 4,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9938] = 4,
    ACTIONS(954), 1,
      anon_sym_RBRACK,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9952] = 3,
    ACTIONS(1031), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1029), 2,
      anon_sym_has,
      anon_sym_not,
  [9964] = 4,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(1033), 1,
      anon_sym_LBRACE,
    STATE(275), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9978] = 4,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9992] = 4,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    ACTIONS(1037), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10006] = 3,
    ACTIONS(1039), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_pseudo_class_has_or_not_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10017] = 3,
    ACTIONS(1041), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10028] = 3,
    ACTIONS(1043), 1,
      aux_sym_color_value_token1,
    ACTIONS(1045), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10039] = 3,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10050] = 3,
    ACTIONS(1045), 1,
      sym_identifier,
    ACTIONS(1047), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10061] = 3,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10072] = 3,
    ACTIONS(1039), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_pseudo_class_has_or_not_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10083] = 3,
    ACTIONS(1049), 1,
      anon_sym_LBRACE,
    STATE(279), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10094] = 3,
    ACTIONS(722), 1,
      anon_sym_LBRACE,
    ACTIONS(1051), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10105] = 3,
    ACTIONS(890), 1,
      anon_sym_LPAREN,
    STATE(219), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10116] = 3,
    ACTIONS(1053), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10127] = 2,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10135] = 2,
    ACTIONS(1055), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10143] = 2,
    ACTIONS(1057), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10151] = 2,
    ACTIONS(1059), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10159] = 2,
    ACTIONS(1061), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10167] = 2,
    ACTIONS(1063), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10175] = 2,
    ACTIONS(1065), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10183] = 2,
    ACTIONS(1067), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10191] = 2,
    ACTIONS(1069), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10199] = 2,
    ACTIONS(1069), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10207] = 2,
    ACTIONS(1071), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10215] = 2,
    ACTIONS(1073), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10223] = 2,
    ACTIONS(1075), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10231] = 2,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10239] = 2,
    ACTIONS(1077), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10247] = 2,
    ACTIONS(1055), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10255] = 2,
    ACTIONS(1079), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10263] = 2,
    ACTIONS(1079), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10271] = 2,
    ACTIONS(1081), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10279] = 2,
    ACTIONS(1081), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10287] = 2,
    ACTIONS(1083), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10295] = 2,
    ACTIONS(1083), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10303] = 2,
    ACTIONS(1085), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10311] = 2,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10319] = 2,
    ACTIONS(1087), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10327] = 2,
    ACTIONS(1089), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10335] = 2,
    ACTIONS(1091), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10343] = 2,
    ACTIONS(1093), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10351] = 2,
    ACTIONS(1095), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10359] = 2,
    ACTIONS(1097), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10367] = 2,
    ACTIONS(1099), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10375] = 2,
    ACTIONS(1101), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10383] = 2,
    ACTIONS(1103), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10391] = 2,
    ACTIONS(1105), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10399] = 2,
    ACTIONS(1107), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10407] = 2,
    ACTIONS(1109), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10415] = 2,
    ACTIONS(1111), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10423] = 2,
    ACTIONS(1113), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10431] = 2,
    ACTIONS(1115), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10439] = 2,
    ACTIONS(1117), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10447] = 2,
    ACTIONS(1119), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10455] = 2,
    ACTIONS(1121), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10463] = 2,
    ACTIONS(1123), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10471] = 2,
    ACTIONS(1125), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10479] = 2,
    ACTIONS(1127), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10487] = 2,
    ACTIONS(1129), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10495] = 2,
    ACTIONS(1075), 1,
      anon_sym_DQUOTE,
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
  [SMALL_STATE(12)] = 920,
  [SMALL_STATE(13)] = 1005,
  [SMALL_STATE(14)] = 1087,
  [SMALL_STATE(15)] = 1168,
  [SMALL_STATE(16)] = 1249,
  [SMALL_STATE(17)] = 1324,
  [SMALL_STATE(18)] = 1387,
  [SMALL_STATE(19)] = 1450,
  [SMALL_STATE(20)] = 1518,
  [SMALL_STATE(21)] = 1583,
  [SMALL_STATE(22)] = 1648,
  [SMALL_STATE(23)] = 1692,
  [SMALL_STATE(24)] = 1745,
  [SMALL_STATE(25)] = 1806,
  [SMALL_STATE(26)] = 1867,
  [SMALL_STATE(27)] = 1928,
  [SMALL_STATE(28)] = 1978,
  [SMALL_STATE(29)] = 2028,
  [SMALL_STATE(30)] = 2078,
  [SMALL_STATE(31)] = 2128,
  [SMALL_STATE(32)] = 2188,
  [SMALL_STATE(33)] = 2234,
  [SMALL_STATE(34)] = 2268,
  [SMALL_STATE(35)] = 2318,
  [SMALL_STATE(36)] = 2374,
  [SMALL_STATE(37)] = 2424,
  [SMALL_STATE(38)] = 2474,
  [SMALL_STATE(39)] = 2534,
  [SMALL_STATE(40)] = 2572,
  [SMALL_STATE(41)] = 2624,
  [SMALL_STATE(42)] = 2684,
  [SMALL_STATE(43)] = 2742,
  [SMALL_STATE(44)] = 2798,
  [SMALL_STATE(45)] = 2850,
  [SMALL_STATE(46)] = 2885,
  [SMALL_STATE(47)] = 2920,
  [SMALL_STATE(48)] = 2975,
  [SMALL_STATE(49)] = 3032,
  [SMALL_STATE(50)] = 3067,
  [SMALL_STATE(51)] = 3124,
  [SMALL_STATE(52)] = 3159,
  [SMALL_STATE(53)] = 3213,
  [SMALL_STATE(54)] = 3253,
  [SMALL_STATE(55)] = 3307,
  [SMALL_STATE(56)] = 3361,
  [SMALL_STATE(57)] = 3415,
  [SMALL_STATE(58)] = 3469,
  [SMALL_STATE(59)] = 3498,
  [SMALL_STATE(60)] = 3527,
  [SMALL_STATE(61)] = 3556,
  [SMALL_STATE(62)] = 3585,
  [SMALL_STATE(63)] = 3614,
  [SMALL_STATE(64)] = 3645,
  [SMALL_STATE(65)] = 3676,
  [SMALL_STATE(66)] = 3707,
  [SMALL_STATE(67)] = 3738,
  [SMALL_STATE(68)] = 3767,
  [SMALL_STATE(69)] = 3796,
  [SMALL_STATE(70)] = 3825,
  [SMALL_STATE(71)] = 3854,
  [SMALL_STATE(72)] = 3885,
  [SMALL_STATE(73)] = 3914,
  [SMALL_STATE(74)] = 3943,
  [SMALL_STATE(75)] = 3994,
  [SMALL_STATE(76)] = 4023,
  [SMALL_STATE(77)] = 4052,
  [SMALL_STATE(78)] = 4081,
  [SMALL_STATE(79)] = 4110,
  [SMALL_STATE(80)] = 4139,
  [SMALL_STATE(81)] = 4168,
  [SMALL_STATE(82)] = 4197,
  [SMALL_STATE(83)] = 4226,
  [SMALL_STATE(84)] = 4277,
  [SMALL_STATE(85)] = 4306,
  [SMALL_STATE(86)] = 4341,
  [SMALL_STATE(87)] = 4370,
  [SMALL_STATE(88)] = 4399,
  [SMALL_STATE(89)] = 4428,
  [SMALL_STATE(90)] = 4457,
  [SMALL_STATE(91)] = 4485,
  [SMALL_STATE(92)] = 4513,
  [SMALL_STATE(93)] = 4541,
  [SMALL_STATE(94)] = 4569,
  [SMALL_STATE(95)] = 4597,
  [SMALL_STATE(96)] = 4625,
  [SMALL_STATE(97)] = 4653,
  [SMALL_STATE(98)] = 4701,
  [SMALL_STATE(99)] = 4729,
  [SMALL_STATE(100)] = 4757,
  [SMALL_STATE(101)] = 4805,
  [SMALL_STATE(102)] = 4833,
  [SMALL_STATE(103)] = 4881,
  [SMALL_STATE(104)] = 4909,
  [SMALL_STATE(105)] = 4937,
  [SMALL_STATE(106)] = 4965,
  [SMALL_STATE(107)] = 4993,
  [SMALL_STATE(108)] = 5021,
  [SMALL_STATE(109)] = 5049,
  [SMALL_STATE(110)] = 5097,
  [SMALL_STATE(111)] = 5125,
  [SMALL_STATE(112)] = 5153,
  [SMALL_STATE(113)] = 5181,
  [SMALL_STATE(114)] = 5209,
  [SMALL_STATE(115)] = 5237,
  [SMALL_STATE(116)] = 5265,
  [SMALL_STATE(117)] = 5293,
  [SMALL_STATE(118)] = 5321,
  [SMALL_STATE(119)] = 5349,
  [SMALL_STATE(120)] = 5377,
  [SMALL_STATE(121)] = 5405,
  [SMALL_STATE(122)] = 5453,
  [SMALL_STATE(123)] = 5481,
  [SMALL_STATE(124)] = 5509,
  [SMALL_STATE(125)] = 5537,
  [SMALL_STATE(126)] = 5565,
  [SMALL_STATE(127)] = 5593,
  [SMALL_STATE(128)] = 5621,
  [SMALL_STATE(129)] = 5649,
  [SMALL_STATE(130)] = 5677,
  [SMALL_STATE(131)] = 5705,
  [SMALL_STATE(132)] = 5733,
  [SMALL_STATE(133)] = 5781,
  [SMALL_STATE(134)] = 5809,
  [SMALL_STATE(135)] = 5837,
  [SMALL_STATE(136)] = 5869,
  [SMALL_STATE(137)] = 5897,
  [SMALL_STATE(138)] = 5925,
  [SMALL_STATE(139)] = 5953,
  [SMALL_STATE(140)] = 5985,
  [SMALL_STATE(141)] = 6033,
  [SMALL_STATE(142)] = 6081,
  [SMALL_STATE(143)] = 6109,
  [SMALL_STATE(144)] = 6157,
  [SMALL_STATE(145)] = 6205,
  [SMALL_STATE(146)] = 6233,
  [SMALL_STATE(147)] = 6281,
  [SMALL_STATE(148)] = 6329,
  [SMALL_STATE(149)] = 6377,
  [SMALL_STATE(150)] = 6405,
  [SMALL_STATE(151)] = 6453,
  [SMALL_STATE(152)] = 6481,
  [SMALL_STATE(153)] = 6529,
  [SMALL_STATE(154)] = 6577,
  [SMALL_STATE(155)] = 6625,
  [SMALL_STATE(156)] = 6673,
  [SMALL_STATE(157)] = 6721,
  [SMALL_STATE(158)] = 6769,
  [SMALL_STATE(159)] = 6798,
  [SMALL_STATE(160)] = 6827,
  [SMALL_STATE(161)] = 6856,
  [SMALL_STATE(162)] = 6885,
  [SMALL_STATE(163)] = 6914,
  [SMALL_STATE(164)] = 6943,
  [SMALL_STATE(165)] = 6972,
  [SMALL_STATE(166)] = 7001,
  [SMALL_STATE(167)] = 7030,
  [SMALL_STATE(168)] = 7059,
  [SMALL_STATE(169)] = 7088,
  [SMALL_STATE(170)] = 7117,
  [SMALL_STATE(171)] = 7147,
  [SMALL_STATE(172)] = 7179,
  [SMALL_STATE(173)] = 7211,
  [SMALL_STATE(174)] = 7243,
  [SMALL_STATE(175)] = 7273,
  [SMALL_STATE(176)] = 7305,
  [SMALL_STATE(177)] = 7335,
  [SMALL_STATE(178)] = 7367,
  [SMALL_STATE(179)] = 7397,
  [SMALL_STATE(180)] = 7426,
  [SMALL_STATE(181)] = 7455,
  [SMALL_STATE(182)] = 7494,
  [SMALL_STATE(183)] = 7523,
  [SMALL_STATE(184)] = 7562,
  [SMALL_STATE(185)] = 7591,
  [SMALL_STATE(186)] = 7619,
  [SMALL_STATE(187)] = 7645,
  [SMALL_STATE(188)] = 7680,
  [SMALL_STATE(189)] = 7720,
  [SMALL_STATE(190)] = 7742,
  [SMALL_STATE(191)] = 7786,
  [SMALL_STATE(192)] = 7808,
  [SMALL_STATE(193)] = 7852,
  [SMALL_STATE(194)] = 7896,
  [SMALL_STATE(195)] = 7918,
  [SMALL_STATE(196)] = 7962,
  [SMALL_STATE(197)] = 8001,
  [SMALL_STATE(198)] = 8028,
  [SMALL_STATE(199)] = 8054,
  [SMALL_STATE(200)] = 8080,
  [SMALL_STATE(201)] = 8102,
  [SMALL_STATE(202)] = 8128,
  [SMALL_STATE(203)] = 8152,
  [SMALL_STATE(204)] = 8178,
  [SMALL_STATE(205)] = 8204,
  [SMALL_STATE(206)] = 8228,
  [SMALL_STATE(207)] = 8254,
  [SMALL_STATE(208)] = 8280,
  [SMALL_STATE(209)] = 8318,
  [SMALL_STATE(210)] = 8344,
  [SMALL_STATE(211)] = 8373,
  [SMALL_STATE(212)] = 8394,
  [SMALL_STATE(213)] = 8415,
  [SMALL_STATE(214)] = 8436,
  [SMALL_STATE(215)] = 8457,
  [SMALL_STATE(216)] = 8492,
  [SMALL_STATE(217)] = 8513,
  [SMALL_STATE(218)] = 8534,
  [SMALL_STATE(219)] = 8555,
  [SMALL_STATE(220)] = 8576,
  [SMALL_STATE(221)] = 8597,
  [SMALL_STATE(222)] = 8618,
  [SMALL_STATE(223)] = 8639,
  [SMALL_STATE(224)] = 8664,
  [SMALL_STATE(225)] = 8686,
  [SMALL_STATE(226)] = 8708,
  [SMALL_STATE(227)] = 8727,
  [SMALL_STATE(228)] = 8746,
  [SMALL_STATE(229)] = 8765,
  [SMALL_STATE(230)] = 8784,
  [SMALL_STATE(231)] = 8803,
  [SMALL_STATE(232)] = 8822,
  [SMALL_STATE(233)] = 8841,
  [SMALL_STATE(234)] = 8860,
  [SMALL_STATE(235)] = 8879,
  [SMALL_STATE(236)] = 8898,
  [SMALL_STATE(237)] = 8917,
  [SMALL_STATE(238)] = 8936,
  [SMALL_STATE(239)] = 8958,
  [SMALL_STATE(240)] = 8982,
  [SMALL_STATE(241)] = 9004,
  [SMALL_STATE(242)] = 9028,
  [SMALL_STATE(243)] = 9052,
  [SMALL_STATE(244)] = 9074,
  [SMALL_STATE(245)] = 9096,
  [SMALL_STATE(246)] = 9118,
  [SMALL_STATE(247)] = 9142,
  [SMALL_STATE(248)] = 9166,
  [SMALL_STATE(249)] = 9190,
  [SMALL_STATE(250)] = 9214,
  [SMALL_STATE(251)] = 9227,
  [SMALL_STATE(252)] = 9240,
  [SMALL_STATE(253)] = 9253,
  [SMALL_STATE(254)] = 9274,
  [SMALL_STATE(255)] = 9293,
  [SMALL_STATE(256)] = 9314,
  [SMALL_STATE(257)] = 9327,
  [SMALL_STATE(258)] = 9340,
  [SMALL_STATE(259)] = 9353,
  [SMALL_STATE(260)] = 9371,
  [SMALL_STATE(261)] = 9389,
  [SMALL_STATE(262)] = 9407,
  [SMALL_STATE(263)] = 9421,
  [SMALL_STATE(264)] = 9439,
  [SMALL_STATE(265)] = 9457,
  [SMALL_STATE(266)] = 9475,
  [SMALL_STATE(267)] = 9493,
  [SMALL_STATE(268)] = 9511,
  [SMALL_STATE(269)] = 9529,
  [SMALL_STATE(270)] = 9547,
  [SMALL_STATE(271)] = 9565,
  [SMALL_STATE(272)] = 9585,
  [SMALL_STATE(273)] = 9605,
  [SMALL_STATE(274)] = 9622,
  [SMALL_STATE(275)] = 9633,
  [SMALL_STATE(276)] = 9648,
  [SMALL_STATE(277)] = 9663,
  [SMALL_STATE(278)] = 9674,
  [SMALL_STATE(279)] = 9689,
  [SMALL_STATE(280)] = 9700,
  [SMALL_STATE(281)] = 9715,
  [SMALL_STATE(282)] = 9726,
  [SMALL_STATE(283)] = 9741,
  [SMALL_STATE(284)] = 9756,
  [SMALL_STATE(285)] = 9771,
  [SMALL_STATE(286)] = 9786,
  [SMALL_STATE(287)] = 9803,
  [SMALL_STATE(288)] = 9816,
  [SMALL_STATE(289)] = 9830,
  [SMALL_STATE(290)] = 9844,
  [SMALL_STATE(291)] = 9856,
  [SMALL_STATE(292)] = 9870,
  [SMALL_STATE(293)] = 9884,
  [SMALL_STATE(294)] = 9896,
  [SMALL_STATE(295)] = 9910,
  [SMALL_STATE(296)] = 9924,
  [SMALL_STATE(297)] = 9938,
  [SMALL_STATE(298)] = 9952,
  [SMALL_STATE(299)] = 9964,
  [SMALL_STATE(300)] = 9978,
  [SMALL_STATE(301)] = 9992,
  [SMALL_STATE(302)] = 10006,
  [SMALL_STATE(303)] = 10017,
  [SMALL_STATE(304)] = 10028,
  [SMALL_STATE(305)] = 10039,
  [SMALL_STATE(306)] = 10050,
  [SMALL_STATE(307)] = 10061,
  [SMALL_STATE(308)] = 10072,
  [SMALL_STATE(309)] = 10083,
  [SMALL_STATE(310)] = 10094,
  [SMALL_STATE(311)] = 10105,
  [SMALL_STATE(312)] = 10116,
  [SMALL_STATE(313)] = 10127,
  [SMALL_STATE(314)] = 10135,
  [SMALL_STATE(315)] = 10143,
  [SMALL_STATE(316)] = 10151,
  [SMALL_STATE(317)] = 10159,
  [SMALL_STATE(318)] = 10167,
  [SMALL_STATE(319)] = 10175,
  [SMALL_STATE(320)] = 10183,
  [SMALL_STATE(321)] = 10191,
  [SMALL_STATE(322)] = 10199,
  [SMALL_STATE(323)] = 10207,
  [SMALL_STATE(324)] = 10215,
  [SMALL_STATE(325)] = 10223,
  [SMALL_STATE(326)] = 10231,
  [SMALL_STATE(327)] = 10239,
  [SMALL_STATE(328)] = 10247,
  [SMALL_STATE(329)] = 10255,
  [SMALL_STATE(330)] = 10263,
  [SMALL_STATE(331)] = 10271,
  [SMALL_STATE(332)] = 10279,
  [SMALL_STATE(333)] = 10287,
  [SMALL_STATE(334)] = 10295,
  [SMALL_STATE(335)] = 10303,
  [SMALL_STATE(336)] = 10311,
  [SMALL_STATE(337)] = 10319,
  [SMALL_STATE(338)] = 10327,
  [SMALL_STATE(339)] = 10335,
  [SMALL_STATE(340)] = 10343,
  [SMALL_STATE(341)] = 10351,
  [SMALL_STATE(342)] = 10359,
  [SMALL_STATE(343)] = 10367,
  [SMALL_STATE(344)] = 10375,
  [SMALL_STATE(345)] = 10383,
  [SMALL_STATE(346)] = 10391,
  [SMALL_STATE(347)] = 10399,
  [SMALL_STATE(348)] = 10407,
  [SMALL_STATE(349)] = 10415,
  [SMALL_STATE(350)] = 10423,
  [SMALL_STATE(351)] = 10431,
  [SMALL_STATE(352)] = 10439,
  [SMALL_STATE(353)] = 10447,
  [SMALL_STATE(354)] = 10455,
  [SMALL_STATE(355)] = 10463,
  [SMALL_STATE(356)] = 10471,
  [SMALL_STATE(357)] = 10479,
  [SMALL_STATE(358)] = 10487,
  [SMALL_STATE(359)] = 10495,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(147),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(206),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(148),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(259),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(339),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(201),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(195),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(73),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(346),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(344),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(343),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(40),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(337),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(335),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(189),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(16),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(298),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(157),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(203),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(155),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(269),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(348),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(199),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(195),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(73),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(346),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(344),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(343),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(40),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(337),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(335),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(194),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(187),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(298),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 14),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 14),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(141),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(320),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(156),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(172),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(100),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(353),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(354),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(135),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(139),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(85),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(172),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(320),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(156),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(173),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(100),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(353),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(354),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(135),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(139),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(85),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(173),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, .production_id = 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_has_or_not_arguments, 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_has_or_not_arguments, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_has_or_not_arguments, 4),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_has_or_not_arguments, 4),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_has_or_not_arguments, 3),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_has_or_not_arguments, 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcss_statement, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcss_statement, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 14),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [908] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(309),
  [911] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(310),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 16),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [988] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(37),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [999] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(204),
  [1002] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(74),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(13),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1026] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2), SHIFT_REPEAT(132),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1071] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_css_external_scanner_create(void);
void tree_sitter_css_external_scanner_destroy(void *);
bool tree_sitter_css_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_css_external_scanner_serialize(void *, char *);
void tree_sitter_css_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_css(void) {
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
