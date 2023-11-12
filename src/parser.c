#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 345
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 9
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 2
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
  anon_sym_ATapply = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_SLASH = 17,
  anon_sym_COLON = 18,
  sym_nesting_selector = 19,
  anon_sym_STAR = 20,
  anon_sym_DOT = 21,
  anon_sym_COLON_COLON = 22,
  anon_sym_POUND = 23,
  anon_sym_EQ = 24,
  anon_sym_TILDE_EQ = 25,
  anon_sym_CARET_EQ = 26,
  anon_sym_PIPE_EQ = 27,
  anon_sym_STAR_EQ = 28,
  anon_sym_DOLLAR_EQ = 29,
  anon_sym_GT = 30,
  anon_sym_TILDE = 31,
  anon_sym_PLUS = 32,
  anon_sym_PIPE = 33,
  anon_sym_LPAREN = 34,
  anon_sym_RPAREN = 35,
  sym_important = 36,
  anon_sym_POUND_LBRACE = 37,
  anon_sym_LPAREN2 = 38,
  anon_sym_and = 39,
  anon_sym_or = 40,
  anon_sym_not = 41,
  anon_sym_only = 42,
  anon_sym_selector = 43,
  aux_sym_color_value_token1 = 44,
  sym_string_value = 45,
  aux_sym_integer_value_token1 = 46,
  aux_sym_float_value_token1 = 47,
  sym_unit = 48,
  anon_sym_DASH = 49,
  sym_identifier = 50,
  sym_at_keyword = 51,
  sym_comment = 52,
  sym_plain_value = 53,
  sym__descendant_operator = 54,
  sym__pseudo_class_selector_colon = 55,
  sym_stylesheet = 56,
  sym_import_statement = 57,
  sym_media_statement = 58,
  sym_charset_statement = 59,
  sym_namespace_statement = 60,
  sym_keyframes_statement = 61,
  sym_keyframe_block_list = 62,
  sym_keyframe_block = 63,
  sym_supports_statement = 64,
  sym_at_rule = 65,
  sym_rule_set = 66,
  sym_selectors = 67,
  sym_block = 68,
  sym_apply_directive = 69,
  sym_class_name = 70,
  sym__selector = 71,
  sym_universal_selector = 72,
  sym_class_selector = 73,
  sym_pseudo_class_selector = 74,
  sym_pseudo_element_selector = 75,
  sym_id_selector = 76,
  sym_attribute_selector = 77,
  sym_child_selector = 78,
  sym_descendant_selector = 79,
  sym_sibling_selector = 80,
  sym_adjacent_sibling_selector = 81,
  sym_namespace_selector = 82,
  sym_pseudo_class_arguments = 83,
  sym_pseudo_element_arguments = 84,
  sym_declaration = 85,
  sym_last_declaration = 86,
  sym_important_interpolation = 87,
  sym__query = 88,
  sym_feature_query = 89,
  sym_parenthesized_query = 90,
  sym_binary_query = 91,
  sym_unary_query = 92,
  sym_selector_query = 93,
  sym__value = 94,
  sym_parenthesized_value = 95,
  sym_color_value = 96,
  sym_integer_value = 97,
  sym_float_value = 98,
  sym_grid_value = 99,
  sym_call_expression = 100,
  sym_binary_expression = 101,
  sym_arguments = 102,
  aux_sym_stylesheet_repeat1 = 103,
  aux_sym_import_statement_repeat1 = 104,
  aux_sym_keyframe_block_list_repeat1 = 105,
  aux_sym_selectors_repeat1 = 106,
  aux_sym_block_repeat1 = 107,
  aux_sym_apply_directive_repeat1 = 108,
  aux_sym_class_name_repeat1 = 109,
  aux_sym_pseudo_class_arguments_repeat1 = 110,
  aux_sym_pseudo_class_arguments_repeat2 = 111,
  aux_sym_declaration_repeat1 = 112,
  aux_sym_grid_value_repeat1 = 113,
  aux_sym_arguments_repeat1 = 114,
  alias_sym_attribute_name = 115,
  alias_sym_feature_name = 116,
  alias_sym_function_name = 117,
  alias_sym_id_name = 118,
  alias_sym_keyframes_name = 119,
  alias_sym_keyword_query = 120,
  alias_sym_namespace_name = 121,
  alias_sym_property_name = 122,
  alias_sym_tag_name = 123,
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
  [anon_sym_ATapply] = "@apply",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_important] = "important",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [sym_string_value] = "string_value",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [sym_identifier] = "identifier",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_plain_value] = "plain_value",
  [sym__descendant_operator] = "_descendant_operator",
  [sym__pseudo_class_selector_colon] = ":",
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
  [sym_apply_directive] = "apply_directive",
  [sym_class_name] = "class_name",
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
  [sym_pseudo_element_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_last_declaration] = "declaration",
  [sym_important_interpolation] = "important_interpolation",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_grid_value] = "grid_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_apply_directive_repeat1] = "apply_directive_repeat1",
  [aux_sym_class_name_repeat1] = "class_name_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_pseudo_class_arguments_repeat2] = "pseudo_class_arguments_repeat2",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_grid_value_repeat1] = "grid_value_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
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
  [anon_sym_ATapply] = anon_sym_ATapply,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_important] = sym_important,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [sym_string_value] = sym_string_value,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_identifier] = sym_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_comment] = sym_comment,
  [sym_plain_value] = sym_plain_value,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym__pseudo_class_selector_colon] = anon_sym_COLON,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_supports_statement] = sym_supports_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_rule_set] = sym_rule_set,
  [sym_selectors] = sym_selectors,
  [sym_block] = sym_block,
  [sym_apply_directive] = sym_apply_directive,
  [sym_class_name] = sym_class_name,
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
  [sym_pseudo_element_arguments] = sym_arguments,
  [sym_declaration] = sym_declaration,
  [sym_last_declaration] = sym_declaration,
  [sym_important_interpolation] = sym_important_interpolation,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym__value] = sym__value,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_color_value] = sym_color_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_grid_value] = sym_grid_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_apply_directive_repeat1] = aux_sym_apply_directive_repeat1,
  [aux_sym_class_name_repeat1] = aux_sym_class_name_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_pseudo_class_arguments_repeat2] = aux_sym_pseudo_class_arguments_repeat2,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_grid_value_repeat1] = aux_sym_grid_value_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
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
  [anon_sym_ATapply] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
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
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
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
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_value] = {
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
  [anon_sym_DASH] = {
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
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__pseudo_class_selector_colon] = {
    .visible = true,
    .named = false,
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
  [sym_apply_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
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
  [sym_important_interpolation] = {
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
  [aux_sym_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_apply_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_name_repeat1] = {
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
  [aux_sym_grid_value_repeat1] = {
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
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 17,
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
  [34] = 32,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 32,
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
  [58] = 49,
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
  [98] = 85,
  [99] = 97,
  [100] = 92,
  [101] = 76,
  [102] = 84,
  [103] = 96,
  [104] = 83,
  [105] = 77,
  [106] = 82,
  [107] = 91,
  [108] = 80,
  [109] = 94,
  [110] = 90,
  [111] = 87,
  [112] = 112,
  [113] = 88,
  [114] = 78,
  [115] = 115,
  [116] = 89,
  [117] = 117,
  [118] = 73,
  [119] = 74,
  [120] = 115,
  [121] = 115,
  [122] = 71,
  [123] = 93,
  [124] = 95,
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
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 151,
  [154] = 151,
  [155] = 155,
  [156] = 144,
  [157] = 143,
  [158] = 158,
  [159] = 147,
  [160] = 144,
  [161] = 143,
  [162] = 145,
  [163] = 163,
  [164] = 164,
  [165] = 163,
  [166] = 164,
  [167] = 28,
  [168] = 168,
  [169] = 169,
  [170] = 169,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 172,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 138,
  [179] = 72,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 125,
  [184] = 184,
  [185] = 117,
  [186] = 186,
  [187] = 184,
  [188] = 186,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 72,
  [193] = 131,
  [194] = 127,
  [195] = 142,
  [196] = 139,
  [197] = 136,
  [198] = 126,
  [199] = 129,
  [200] = 140,
  [201] = 137,
  [202] = 141,
  [203] = 203,
  [204] = 117,
  [205] = 125,
  [206] = 142,
  [207] = 138,
  [208] = 137,
  [209] = 129,
  [210] = 140,
  [211] = 139,
  [212] = 136,
  [213] = 141,
  [214] = 126,
  [215] = 215,
  [216] = 127,
  [217] = 131,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 223,
  [227] = 218,
  [228] = 225,
  [229] = 220,
  [230] = 223,
  [231] = 231,
  [232] = 232,
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
  [243] = 125,
  [244] = 244,
  [245] = 245,
  [246] = 244,
  [247] = 247,
  [248] = 248,
  [249] = 248,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 138,
  [255] = 251,
  [256] = 256,
  [257] = 252,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 258,
  [263] = 251,
  [264] = 259,
  [265] = 85,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 266,
  [271] = 271,
  [272] = 268,
  [273] = 273,
  [274] = 266,
  [275] = 92,
  [276] = 76,
  [277] = 277,
  [278] = 267,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 281,
  [285] = 125,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 282,
  [290] = 286,
  [291] = 291,
  [292] = 282,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 297,
  [299] = 294,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 296,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 314,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 319,
  [323] = 323,
  [324] = 324,
  [325] = 311,
  [326] = 326,
  [327] = 327,
  [328] = 326,
  [329] = 317,
  [330] = 320,
  [331] = 331,
  [332] = 317,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 320,
  [337] = 316,
  [338] = 338,
  [339] = 311,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 335,
  [344] = 344,
};

static inline bool sym_plain_value_character_set_1(int32_t c) {
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

static inline bool sym_plain_value_character_set_2(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(81);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '&') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(116);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == '^') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '|') ADVANCE(122);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '~') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '_') ADVANCE(202);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '&') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '>') ADVANCE(116);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '_') ADVANCE(202);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '>') ADVANCE(116);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '_') ADVANCE(202);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '>') ADVANCE(116);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '_') ADVANCE(202);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '_') ADVANCE(202);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '&') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(116);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == '^') ADVANCE(33);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '|') ADVANCE(122);
      if (lookahead == '~') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(116);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == '^') ADVANCE(33);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '|') ADVANCE(122);
      if (lookahead == '~') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '>') ADVANCE(116);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '>') ADVANCE(116);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(272);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(107);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(115);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == 's') ADVANCE(266);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == 's') ADVANCE(266);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 65:
      if (lookahead == '{') ADVANCE(126);
      END_STATE();
    case 66:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 74:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(30);
      END_STATE();
    case 75:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(273);
      END_STATE();
    case 76:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(10);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(77);
      END_STATE();
    case 78:
      if (eof) ADVANCE(81);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '&') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(116);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == '^') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '|') ADVANCE(122);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '~') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 79:
      if (eof) ADVANCE(81);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '&') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '>') ADVANCE(116);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(80)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '&') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '>') ADVANCE(116);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(80)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_ATapply);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(22);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(22);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(30);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(114);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(126);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(273);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == 'y') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(195);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '_') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(273);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(195);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(273);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(273);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(202);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '/') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(273);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(273);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(273);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(239);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(256);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(220);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'm') ADVANCE(248);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'm') ADVANCE(233);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'm') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(254);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(245);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(247);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(225);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 's') ADVANCE(232);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'u') ADVANCE(252);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'y') ADVANCE(236);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'y') ADVANCE(95);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'y') ADVANCE(237);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(75);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(273);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 79, .external_lex_state = 2},
  [2] = {.lex_state = 9, .external_lex_state = 2},
  [3] = {.lex_state = 9, .external_lex_state = 2},
  [4] = {.lex_state = 9, .external_lex_state = 2},
  [5] = {.lex_state = 9, .external_lex_state = 2},
  [6] = {.lex_state = 9, .external_lex_state = 2},
  [7] = {.lex_state = 9, .external_lex_state = 2},
  [8] = {.lex_state = 9, .external_lex_state = 2},
  [9] = {.lex_state = 79, .external_lex_state = 2},
  [10] = {.lex_state = 79, .external_lex_state = 2},
  [11] = {.lex_state = 2, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 2},
  [13] = {.lex_state = 2, .external_lex_state = 2},
  [14] = {.lex_state = 2, .external_lex_state = 2},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 3, .external_lex_state = 1},
  [20] = {.lex_state = 11, .external_lex_state = 1},
  [21] = {.lex_state = 11, .external_lex_state = 1},
  [22] = {.lex_state = 11, .external_lex_state = 1},
  [23] = {.lex_state = 11, .external_lex_state = 1},
  [24] = {.lex_state = 11, .external_lex_state = 1},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 79, .external_lex_state = 2},
  [27] = {.lex_state = 79, .external_lex_state = 2},
  [28] = {.lex_state = 2, .external_lex_state = 1},
  [29] = {.lex_state = 79, .external_lex_state = 2},
  [30] = {.lex_state = 79, .external_lex_state = 2},
  [31] = {.lex_state = 79, .external_lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 79, .external_lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 79, .external_lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 79, .external_lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 79, .external_lex_state = 2},
  [40] = {.lex_state = 11, .external_lex_state = 1},
  [41] = {.lex_state = 11, .external_lex_state = 1},
  [42] = {.lex_state = 11, .external_lex_state = 1},
  [43] = {.lex_state = 11, .external_lex_state = 1},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 11, .external_lex_state = 1},
  [46] = {.lex_state = 11, .external_lex_state = 1},
  [47] = {.lex_state = 11, .external_lex_state = 1},
  [48] = {.lex_state = 11, .external_lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 11, .external_lex_state = 1},
  [52] = {.lex_state = 11, .external_lex_state = 1},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 11, .external_lex_state = 1},
  [55] = {.lex_state = 11, .external_lex_state = 1},
  [56] = {.lex_state = 11, .external_lex_state = 1},
  [57] = {.lex_state = 11, .external_lex_state = 1},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 11, .external_lex_state = 1},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 11, .external_lex_state = 1},
  [62] = {.lex_state = 11, .external_lex_state = 1},
  [63] = {.lex_state = 11, .external_lex_state = 1},
  [64] = {.lex_state = 11, .external_lex_state = 1},
  [65] = {.lex_state = 11, .external_lex_state = 1},
  [66] = {.lex_state = 11, .external_lex_state = 1},
  [67] = {.lex_state = 11, .external_lex_state = 1},
  [68] = {.lex_state = 11, .external_lex_state = 1},
  [69] = {.lex_state = 11, .external_lex_state = 1},
  [70] = {.lex_state = 11, .external_lex_state = 1},
  [71] = {.lex_state = 9, .external_lex_state = 2},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 9, .external_lex_state = 2},
  [74] = {.lex_state = 9, .external_lex_state = 2},
  [75] = {.lex_state = 9, .external_lex_state = 2},
  [76] = {.lex_state = 9, .external_lex_state = 2},
  [77] = {.lex_state = 9, .external_lex_state = 2},
  [78] = {.lex_state = 9, .external_lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 9, .external_lex_state = 2},
  [81] = {.lex_state = 9, .external_lex_state = 2},
  [82] = {.lex_state = 9, .external_lex_state = 2},
  [83] = {.lex_state = 9, .external_lex_state = 2},
  [84] = {.lex_state = 9, .external_lex_state = 2},
  [85] = {.lex_state = 9, .external_lex_state = 2},
  [86] = {.lex_state = 9, .external_lex_state = 2},
  [87] = {.lex_state = 9, .external_lex_state = 2},
  [88] = {.lex_state = 9, .external_lex_state = 2},
  [89] = {.lex_state = 9, .external_lex_state = 2},
  [90] = {.lex_state = 9, .external_lex_state = 2},
  [91] = {.lex_state = 9, .external_lex_state = 2},
  [92] = {.lex_state = 9, .external_lex_state = 2},
  [93] = {.lex_state = 9, .external_lex_state = 2},
  [94] = {.lex_state = 9, .external_lex_state = 2},
  [95] = {.lex_state = 9, .external_lex_state = 2},
  [96] = {.lex_state = 9, .external_lex_state = 2},
  [97] = {.lex_state = 9, .external_lex_state = 2},
  [98] = {.lex_state = 79, .external_lex_state = 2},
  [99] = {.lex_state = 79, .external_lex_state = 2},
  [100] = {.lex_state = 79, .external_lex_state = 2},
  [101] = {.lex_state = 79, .external_lex_state = 2},
  [102] = {.lex_state = 79, .external_lex_state = 2},
  [103] = {.lex_state = 79, .external_lex_state = 2},
  [104] = {.lex_state = 79, .external_lex_state = 2},
  [105] = {.lex_state = 79, .external_lex_state = 2},
  [106] = {.lex_state = 79, .external_lex_state = 2},
  [107] = {.lex_state = 79, .external_lex_state = 2},
  [108] = {.lex_state = 79, .external_lex_state = 2},
  [109] = {.lex_state = 79, .external_lex_state = 2},
  [110] = {.lex_state = 79, .external_lex_state = 2},
  [111] = {.lex_state = 79, .external_lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 79, .external_lex_state = 2},
  [114] = {.lex_state = 79, .external_lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 79, .external_lex_state = 2},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 79, .external_lex_state = 2},
  [119] = {.lex_state = 79, .external_lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 79, .external_lex_state = 2},
  [123] = {.lex_state = 79, .external_lex_state = 2},
  [124] = {.lex_state = 79, .external_lex_state = 2},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 11, .external_lex_state = 1},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 11, .external_lex_state = 1},
  [134] = {.lex_state = 11, .external_lex_state = 1},
  [135] = {.lex_state = 11, .external_lex_state = 1},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 18},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 18},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 13, .external_lex_state = 1},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 18},
  [170] = {.lex_state = 18},
  [171] = {.lex_state = 79, .external_lex_state = 1},
  [172] = {.lex_state = 79, .external_lex_state = 1},
  [173] = {.lex_state = 79, .external_lex_state = 1},
  [174] = {.lex_state = 79, .external_lex_state = 1},
  [175] = {.lex_state = 79, .external_lex_state = 1},
  [176] = {.lex_state = 79, .external_lex_state = 1},
  [177] = {.lex_state = 79, .external_lex_state = 1},
  [178] = {.lex_state = 18},
  [179] = {.lex_state = 17},
  [180] = {.lex_state = 79, .external_lex_state = 1},
  [181] = {.lex_state = 18},
  [182] = {.lex_state = 18},
  [183] = {.lex_state = 15},
  [184] = {.lex_state = 18},
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 18},
  [187] = {.lex_state = 18},
  [188] = {.lex_state = 18},
  [189] = {.lex_state = 79, .external_lex_state = 1},
  [190] = {.lex_state = 18},
  [191] = {.lex_state = 18},
  [192] = {.lex_state = 13},
  [193] = {.lex_state = 18},
  [194] = {.lex_state = 18},
  [195] = {.lex_state = 18},
  [196] = {.lex_state = 18},
  [197] = {.lex_state = 18},
  [198] = {.lex_state = 18},
  [199] = {.lex_state = 18},
  [200] = {.lex_state = 18},
  [201] = {.lex_state = 18},
  [202] = {.lex_state = 18},
  [203] = {.lex_state = 79, .external_lex_state = 1},
  [204] = {.lex_state = 13},
  [205] = {.lex_state = 13},
  [206] = {.lex_state = 13},
  [207] = {.lex_state = 13},
  [208] = {.lex_state = 13},
  [209] = {.lex_state = 13},
  [210] = {.lex_state = 13},
  [211] = {.lex_state = 13},
  [212] = {.lex_state = 13},
  [213] = {.lex_state = 13},
  [214] = {.lex_state = 13},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 13},
  [217] = {.lex_state = 13},
  [218] = {.lex_state = 66},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 66},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 13},
  [224] = {.lex_state = 66},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 13},
  [227] = {.lex_state = 66},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 66},
  [230] = {.lex_state = 13},
  [231] = {.lex_state = 7},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 7},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 7},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 13},
  [242] = {.lex_state = 7},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 13},
  [249] = {.lex_state = 13},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 13},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 13},
  [256] = {.lex_state = 7},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 79},
  [260] = {.lex_state = 13},
  [261] = {.lex_state = 13},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 13},
  [264] = {.lex_state = 79},
  [265] = {.lex_state = 66},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 66},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 66},
  [276] = {.lex_state = 66},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 79},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 79},
  [285] = {.lex_state = 11},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 23},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 9},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 9},
  [306] = {.lex_state = 23},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 79},
  [310] = {.lex_state = 79},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 79},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 79},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 29},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 79},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 29},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 9},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 79},
  [336] = {.lex_state = 29},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 79},
  [341] = {.lex_state = 79},
  [342] = {.lex_state = 79},
  [343] = {.lex_state = 79},
  [344] = {.lex_state = 79},
};

enum {
  ts_external_token__descendant_operator = 0,
  ts_external_token__pseudo_class_selector_colon = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
  [ts_external_token__pseudo_class_selector_colon] = sym__pseudo_class_selector_colon,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
  [2] = {
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
    [anon_sym_ATapply] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(1),
    [sym__pseudo_class_selector_colon] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(338),
    [sym_import_statement] = STATE(9),
    [sym_media_statement] = STATE(9),
    [sym_charset_statement] = STATE(9),
    [sym_namespace_statement] = STATE(9),
    [sym_keyframes_statement] = STATE(9),
    [sym_supports_statement] = STATE(9),
    [sym_at_rule] = STATE(9),
    [sym_rule_set] = STATE(9),
    [sym_selectors] = STATE(297),
    [sym__selector] = STATE(173),
    [sym_universal_selector] = STATE(173),
    [sym_class_selector] = STATE(173),
    [sym_pseudo_class_selector] = STATE(173),
    [sym_pseudo_element_selector] = STATE(173),
    [sym_id_selector] = STATE(173),
    [sym_attribute_selector] = STATE(173),
    [sym_child_selector] = STATE(173),
    [sym_descendant_selector] = STATE(173),
    [sym_sibling_selector] = STATE(173),
    [sym_adjacent_sibling_selector] = STATE(173),
    [sym_namespace_selector] = STATE(173),
    [sym_declaration] = STATE(9),
    [aux_sym_stylesheet_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [sym_string_value] = ACTIONS(21),
    [sym_identifier] = ACTIONS(31),
    [sym_at_keyword] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [sym__pseudo_class_selector_colon] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      anon_sym_ATapply,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    STATE(298), 1,
      sym_selectors,
    STATE(325), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(3), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_apply_directive,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(173), 12,
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
  [90] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      anon_sym_ATapply,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_selectors,
    STATE(329), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_apply_directive,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(173), 12,
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
  [180] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      anon_sym_ATapply,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_selectors,
    STATE(311), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(5), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_apply_directive,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(173), 12,
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
  [270] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      anon_sym_ATapply,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_selectors,
    STATE(317), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_apply_directive,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(173), 12,
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
  [360] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      anon_sym_ATapply,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_selectors,
    STATE(339), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(7), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_apply_directive,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(173), 12,
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
  [450] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      anon_sym_ATapply,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_selectors,
    STATE(332), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_apply_directive,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(173), 12,
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
  [540] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_ATimport,
    ACTIONS(70), 1,
      anon_sym_ATmedia,
    ACTIONS(73), 1,
      anon_sym_ATcharset,
    ACTIONS(76), 1,
      anon_sym_ATnamespace,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      anon_sym_ATsupports,
    ACTIONS(87), 1,
      anon_sym_ATapply,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(99), 1,
      anon_sym_DOT,
    ACTIONS(102), 1,
      anon_sym_COLON_COLON,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(111), 1,
      sym_at_keyword,
    ACTIONS(114), 1,
      sym__pseudo_class_selector_colon,
    STATE(298), 1,
      sym_selectors,
    ACTIONS(79), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(93), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_apply_directive,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(173), 12,
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
  [627] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_ATimport,
    ACTIONS(9), 1,
      anon_sym_ATmedia,
    ACTIONS(11), 1,
      anon_sym_ATcharset,
    ACTIONS(13), 1,
      anon_sym_ATnamespace,
    ACTIONS(17), 1,
      anon_sym_ATsupports,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_at_keyword,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(297), 1,
      sym_selectors,
    ACTIONS(15), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
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
    STATE(173), 12,
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
  [710] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_ATimport,
    ACTIONS(124), 1,
      anon_sym_ATmedia,
    ACTIONS(127), 1,
      anon_sym_ATcharset,
    ACTIONS(130), 1,
      anon_sym_ATnamespace,
    ACTIONS(136), 1,
      anon_sym_ATsupports,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_STAR,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(151), 1,
      anon_sym_COLON_COLON,
    ACTIONS(154), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(160), 1,
      sym_at_keyword,
    ACTIONS(163), 1,
      sym__pseudo_class_selector_colon,
    STATE(297), 1,
      sym_selectors,
    ACTIONS(133), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(142), 2,
      sym_nesting_selector,
      sym_string_value,
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
    STATE(173), 12,
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
  [793] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      sym_nesting_selector,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_POUND,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      sym_string_value,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      sym_plain_value,
    STATE(53), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(171), 12,
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
  [866] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_POUND,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      sym_string_value,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      sym_plain_value,
    ACTIONS(188), 1,
      sym_nesting_selector,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(176), 12,
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
  [939] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_POUND,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      sym_string_value,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      sym_plain_value,
    ACTIONS(192), 1,
      sym_nesting_selector,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(168), 8,
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
  [1009] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      sym_nesting_selector,
    ACTIONS(198), 1,
      anon_sym_POUND,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(202), 1,
      sym_string_value,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_plain_value,
    STATE(133), 1,
      sym_namespace_selector,
    STATE(226), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(203), 11,
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
  [1078] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      sym_nesting_selector,
    ACTIONS(198), 1,
      anon_sym_POUND,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(202), 1,
      sym_string_value,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym_plain_value,
    STATE(133), 1,
      sym_namespace_selector,
    STATE(230), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(203), 11,
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
  [1147] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_SEMI,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(228), 1,
      sym_important,
    ACTIONS(230), 1,
      sym_string_value,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_plain_value,
    STATE(25), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(222), 3,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(146), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1208] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      sym_string_value,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_plain_value,
    ACTIONS(236), 1,
      anon_sym_SEMI,
    ACTIONS(238), 1,
      sym_important,
    STATE(49), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(222), 3,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(146), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1266] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_SEMI,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      sym_string_value,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_plain_value,
    ACTIONS(240), 1,
      sym_important,
    STATE(58), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(222), 3,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(146), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1324] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym_arguments,
    ACTIONS(246), 2,
      anon_sym_STAR,
      sym_string_value,
    ACTIONS(248), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(244), 7,
      anon_sym_SLASH,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(242), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [1363] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      sym_arguments,
    ACTIONS(244), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_DASH,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(254), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(242), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
  [1406] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_pseudo_class_arguments,
    ACTIONS(260), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(258), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [1440] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_pseudo_element_arguments,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(264), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [1474] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_pseudo_class_arguments,
    ACTIONS(272), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(270), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [1508] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_pseudo_element_arguments,
    ACTIONS(276), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(274), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [1542] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      sym_string_value,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_plain_value,
    ACTIONS(278), 1,
      anon_sym_SEMI,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    ACTIONS(282), 1,
      sym_important,
    STATE(36), 1,
      aux_sym_declaration_repeat1,
    STATE(146), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1595] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(284), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(189), 12,
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
  [1638] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(69), 12,
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
  [1681] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(294), 3,
      anon_sym_STAR,
      anon_sym_LPAREN2,
      sym_string_value,
    ACTIONS(292), 6,
      anon_sym_SLASH,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(290), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [1714] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(298), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(180), 12,
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
  [1757] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(134), 1,
      sym_namespace_selector,
    ACTIONS(196), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(203), 11,
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
  [1802] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(302), 1,
      sym_identifier,
    STATE(133), 1,
      sym_namespace_selector,
    ACTIONS(196), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(203), 11,
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
  [1847] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(186), 1,
      sym_plain_value,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    ACTIONS(308), 1,
      sym_string_value,
    STATE(44), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(274), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1898] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(310), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(61), 12,
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
  [1941] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(186), 1,
      sym_plain_value,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(308), 1,
      sym_string_value,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(266), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1992] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(314), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(59), 12,
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
  [2035] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LPAREN2,
    ACTIONS(330), 1,
      sym_string_value,
    ACTIONS(333), 1,
      aux_sym_integer_value_token1,
    ACTIONS(336), 1,
      aux_sym_float_value_token1,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(342), 1,
      sym_plain_value,
    STATE(36), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(319), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(146), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2084] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(345), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(57), 12,
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
  [2127] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(186), 1,
      sym_plain_value,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(308), 1,
      sym_string_value,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(270), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2178] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(349), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(56), 12,
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
  [2221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(351), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(355), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(359), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(363), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2333] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LBRACK,
    ACTIONS(372), 1,
      anon_sym_POUND,
    ACTIONS(375), 1,
      anon_sym_LPAREN2,
    ACTIONS(378), 1,
      sym_string_value,
    ACTIONS(381), 1,
      aux_sym_integer_value_token1,
    ACTIONS(384), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_identifier,
    ACTIONS(390), 1,
      sym_plain_value,
    STATE(44), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(367), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(393), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(397), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(401), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(405), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2491] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      sym_string_value,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_plain_value,
    ACTIONS(409), 1,
      anon_sym_SEMI,
    ACTIONS(411), 1,
      sym_important,
    STATE(36), 1,
      aux_sym_declaration_repeat1,
    STATE(146), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2541] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(186), 1,
      sym_plain_value,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(308), 1,
      sym_string_value,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(280), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(417), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(421), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2647] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(186), 1,
      sym_plain_value,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(308), 1,
      sym_string_value,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(287), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(427), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(431), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(435), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(443), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(441), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2813] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      sym_string_value,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_plain_value,
    ACTIONS(278), 1,
      anon_sym_SEMI,
    ACTIONS(445), 1,
      sym_important,
    STATE(36), 1,
      aux_sym_declaration_repeat1,
    STATE(146), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(449), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(447), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2893] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(186), 1,
      sym_plain_value,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(308), 1,
      sym_string_value,
    STATE(44), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(451), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(455), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(453), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(457), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [2997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(461), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(465), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(469), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(473), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(242), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(477), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(483), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(481), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(485), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(491), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3250] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym_arguments,
    ACTIONS(244), 8,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(246), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      sym_string_value,
  [3281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(495), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(499), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(503), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(507), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(511), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(515), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3443] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(186), 1,
      sym_plain_value,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(308), 1,
      sym_string_value,
    STATE(44), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(517), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(521), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(525), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(529), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(533), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(537), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(541), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(545), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(549), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(553), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(557), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(561), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(565), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(569), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(573), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(577), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(581), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(585), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(589), 10,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [3974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(541), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(589), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(569), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(507), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(537), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(585), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(533), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(511), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(529), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(565), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(521), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(577), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(561), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(549), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4338] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(186), 1,
      sym_plain_value,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(308), 1,
      sym_string_value,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(553), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(515), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4434] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(186), 1,
      sym_plain_value,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(308), 1,
      sym_string_value,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(557), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym_unit,
    ACTIONS(597), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(595), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(495), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(499), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4584] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(186), 1,
      sym_plain_value,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(308), 1,
      sym_string_value,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4628] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(186), 1,
      sym_plain_value,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(308), 1,
      sym_string_value,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(491), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(573), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(581), 10,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      sym_string_value,
      sym_identifier,
  [4750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym_unit,
    ACTIONS(607), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(605), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(611), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(615), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4828] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(186), 1,
      sym_plain_value,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(308), 1,
      sym_string_value,
    STATE(60), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(619), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4894] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(254), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(242), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
  [4923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(623), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4948] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(186), 1,
      sym_plain_value,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(308), 1,
      sym_string_value,
    STATE(112), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4989] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
    ACTIONS(296), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(254), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(290), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
  [5018] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
    ACTIONS(296), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(629), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(290), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
  [5047] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(629), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(242), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
  [5076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(631), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(635), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(639), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(643), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(647), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(651), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(655), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5251] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(659), 1,
      anon_sym_LBRACK,
    ACTIONS(661), 1,
      anon_sym_POUND,
    ACTIONS(663), 1,
      sym_string_value,
    ACTIONS(665), 1,
      sym_identifier,
    ACTIONS(667), 1,
      sym_plain_value,
    STATE(251), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5289] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(659), 1,
      anon_sym_LBRACK,
    ACTIONS(661), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      sym_identifier,
    ACTIONS(669), 1,
      sym_string_value,
    ACTIONS(671), 1,
      sym_plain_value,
    STATE(223), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5327] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_SEMI,
    ACTIONS(679), 1,
      anon_sym_LPAREN2,
    ACTIONS(683), 1,
      anon_sym_selector,
    ACTIONS(685), 1,
      sym_identifier,
    ACTIONS(675), 2,
      anon_sym_SLASH,
      anon_sym_DASH,
    ACTIONS(677), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(681), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(252), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5363] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(222), 3,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(689), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(687), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5391] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(659), 1,
      anon_sym_LBRACK,
    ACTIONS(661), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      sym_identifier,
    ACTIONS(691), 1,
      sym_string_value,
    ACTIONS(693), 1,
      sym_plain_value,
    STATE(249), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5429] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(222), 3,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(695), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(319), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5457] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(697), 1,
      sym_string_value,
    ACTIONS(699), 1,
      sym_plain_value,
    STATE(148), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5495] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(659), 1,
      anon_sym_LBRACK,
    ACTIONS(661), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      sym_identifier,
    ACTIONS(701), 1,
      sym_string_value,
    ACTIONS(703), 1,
      sym_plain_value,
    STATE(260), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5533] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(705), 1,
      sym_string_value,
    ACTIONS(707), 1,
      sym_plain_value,
    STATE(131), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5571] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(709), 1,
      sym_string_value,
    ACTIONS(711), 1,
      sym_plain_value,
    STATE(16), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5609] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(659), 1,
      anon_sym_LBRACK,
    ACTIONS(661), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      sym_identifier,
    ACTIONS(713), 1,
      sym_string_value,
    ACTIONS(715), 1,
      sym_plain_value,
    STATE(217), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5647] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_LBRACK,
    ACTIONS(719), 1,
      anon_sym_POUND,
    ACTIONS(721), 1,
      anon_sym_LPAREN2,
    ACTIONS(723), 1,
      sym_string_value,
    ACTIONS(725), 1,
      aux_sym_integer_value_token1,
    ACTIONS(727), 1,
      aux_sym_float_value_token1,
    ACTIONS(729), 1,
      sym_identifier,
    ACTIONS(731), 1,
      sym_plain_value,
    STATE(193), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5685] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(659), 1,
      anon_sym_LBRACK,
    ACTIONS(661), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      sym_identifier,
    ACTIONS(733), 1,
      sym_string_value,
    ACTIONS(735), 1,
      sym_plain_value,
    STATE(241), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5723] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(210), 1,
      sym_plain_value,
    ACTIONS(659), 1,
      anon_sym_LBRACK,
    ACTIONS(661), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      sym_identifier,
    ACTIONS(737), 1,
      sym_string_value,
    STATE(226), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5761] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(659), 1,
      anon_sym_LBRACK,
    ACTIONS(661), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      sym_identifier,
    ACTIONS(739), 1,
      sym_string_value,
    ACTIONS(741), 1,
      sym_plain_value,
    STATE(255), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5799] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(659), 1,
      anon_sym_LBRACK,
    ACTIONS(661), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      sym_identifier,
    ACTIONS(743), 1,
      sym_string_value,
    ACTIONS(745), 1,
      sym_plain_value,
    STATE(261), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5837] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(659), 1,
      anon_sym_LBRACK,
    ACTIONS(661), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      sym_identifier,
    ACTIONS(747), 1,
      sym_string_value,
    ACTIONS(749), 1,
      sym_plain_value,
    STATE(248), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5875] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(212), 1,
      sym_plain_value,
    ACTIONS(659), 1,
      anon_sym_LBRACK,
    ACTIONS(661), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      sym_identifier,
    ACTIONS(751), 1,
      sym_string_value,
    STATE(230), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5913] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(659), 1,
      anon_sym_LBRACK,
    ACTIONS(661), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      sym_identifier,
    ACTIONS(753), 1,
      sym_string_value,
    ACTIONS(755), 1,
      sym_plain_value,
    STATE(263), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5951] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LPAREN2,
    ACTIONS(683), 1,
      anon_sym_selector,
    ACTIONS(685), 1,
      sym_identifier,
    ACTIONS(757), 1,
      anon_sym_SEMI,
    ACTIONS(675), 2,
      anon_sym_SLASH,
      anon_sym_DASH,
    ACTIONS(677), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(681), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(257), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5987] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_LBRACK,
    ACTIONS(719), 1,
      anon_sym_POUND,
    ACTIONS(721), 1,
      anon_sym_LPAREN2,
    ACTIONS(725), 1,
      aux_sym_integer_value_token1,
    ACTIONS(727), 1,
      aux_sym_float_value_token1,
    ACTIONS(729), 1,
      sym_identifier,
    ACTIONS(759), 1,
      sym_string_value,
    ACTIONS(761), 1,
      sym_plain_value,
    STATE(162), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6025] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(763), 1,
      sym_string_value,
    ACTIONS(765), 1,
      sym_plain_value,
    STATE(17), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6063] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_LBRACK,
    ACTIONS(719), 1,
      anon_sym_POUND,
    ACTIONS(721), 1,
      anon_sym_LPAREN2,
    ACTIONS(725), 1,
      aux_sym_integer_value_token1,
    ACTIONS(727), 1,
      aux_sym_float_value_token1,
    ACTIONS(729), 1,
      sym_identifier,
    ACTIONS(767), 1,
      sym_string_value,
    ACTIONS(769), 1,
      sym_plain_value,
    STATE(145), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6101] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(771), 1,
      sym_string_value,
    ACTIONS(773), 1,
      sym_plain_value,
    STATE(18), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_SLASH,
    ACTIONS(294), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DASH,
    ACTIONS(290), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [6164] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(222), 3,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(777), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(775), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_string_value,
  [6191] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LPAREN2,
    ACTIONS(683), 1,
      anon_sym_selector,
    ACTIONS(685), 1,
      sym_identifier,
    ACTIONS(779), 1,
      anon_sym_SEMI,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_block,
    ACTIONS(681), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(228), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6225] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LPAREN2,
    ACTIONS(683), 1,
      anon_sym_selector,
    ACTIONS(685), 1,
      sym_identifier,
    ACTIONS(783), 1,
      anon_sym_SEMI,
    ACTIONS(785), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_block,
    ACTIONS(681), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(225), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6259] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(787), 1,
      anon_sym_LBRACK,
    ACTIONS(789), 1,
      anon_sym_COLON_COLON,
    ACTIONS(791), 1,
      anon_sym_POUND,
    ACTIONS(793), 1,
      anon_sym_GT,
    ACTIONS(795), 1,
      anon_sym_TILDE,
    ACTIONS(797), 1,
      anon_sym_PLUS,
    ACTIONS(799), 1,
      anon_sym_PIPE,
    ACTIONS(801), 1,
      sym__descendant_operator,
    ACTIONS(803), 1,
      sym__pseudo_class_selector_colon,
    STATE(287), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_COLON,
    ACTIONS(242), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [6323] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(787), 1,
      anon_sym_LBRACK,
    ACTIONS(789), 1,
      anon_sym_COLON_COLON,
    ACTIONS(791), 1,
      anon_sym_POUND,
    ACTIONS(793), 1,
      anon_sym_GT,
    ACTIONS(795), 1,
      anon_sym_TILDE,
    ACTIONS(797), 1,
      anon_sym_PLUS,
    ACTIONS(799), 1,
      anon_sym_PIPE,
    ACTIONS(801), 1,
      sym__descendant_operator,
    ACTIONS(803), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      anon_sym_LBRACE,
    STATE(291), 1,
      aux_sym_selectors_repeat1,
  [6366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_COLON,
    ACTIONS(242), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [6387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_COLON,
    ACTIONS(242), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [6408] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(787), 1,
      anon_sym_LBRACK,
    ACTIONS(789), 1,
      anon_sym_COLON_COLON,
    ACTIONS(791), 1,
      anon_sym_POUND,
    ACTIONS(793), 1,
      anon_sym_GT,
    ACTIONS(795), 1,
      anon_sym_TILDE,
    ACTIONS(797), 1,
      anon_sym_PLUS,
    ACTIONS(799), 1,
      anon_sym_PIPE,
    ACTIONS(801), 1,
      sym__descendant_operator,
    ACTIONS(803), 1,
      sym__pseudo_class_selector_colon,
    STATE(280), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6451] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(787), 1,
      anon_sym_LBRACK,
    ACTIONS(789), 1,
      anon_sym_COLON_COLON,
    ACTIONS(791), 1,
      anon_sym_POUND,
    ACTIONS(793), 1,
      anon_sym_GT,
    ACTIONS(795), 1,
      anon_sym_TILDE,
    ACTIONS(797), 1,
      anon_sym_PLUS,
    ACTIONS(799), 1,
      anon_sym_PIPE,
    ACTIONS(801), 1,
      sym__descendant_operator,
    ACTIONS(803), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(517), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(641), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [6509] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym_arguments,
    ACTIONS(246), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(244), 7,
      anon_sym_SLASH,
      anon_sym_LPAREN2,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [6533] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(787), 1,
      anon_sym_LBRACK,
    ACTIONS(789), 1,
      anon_sym_COLON_COLON,
    ACTIONS(791), 1,
      anon_sym_POUND,
    ACTIONS(793), 1,
      anon_sym_GT,
    ACTIONS(795), 1,
      anon_sym_TILDE,
    ACTIONS(797), 1,
      anon_sym_PLUS,
    ACTIONS(799), 1,
      anon_sym_PIPE,
    ACTIONS(801), 1,
      sym__descendant_operator,
    ACTIONS(803), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(817), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [6571] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LPAREN2,
    ACTIONS(683), 1,
      anon_sym_selector,
    ACTIONS(685), 1,
      sym_identifier,
    ACTIONS(681), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(253), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6596] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LPAREN2,
    ACTIONS(683), 1,
      anon_sym_selector,
    ACTIONS(685), 1,
      sym_identifier,
    ACTIONS(681), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(233), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym_unit,
    ACTIONS(605), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(607), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [6642] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LPAREN2,
    ACTIONS(683), 1,
      anon_sym_selector,
    ACTIONS(685), 1,
      sym_identifier,
    ACTIONS(681), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(246), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      sym_unit,
    ACTIONS(595), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(597), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [6688] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LPAREN2,
    ACTIONS(683), 1,
      anon_sym_selector,
    ACTIONS(685), 1,
      sym_identifier,
    ACTIONS(681), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(268), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6713] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LPAREN2,
    ACTIONS(683), 1,
      anon_sym_selector,
    ACTIONS(685), 1,
      sym_identifier,
    ACTIONS(681), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(244), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6738] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LPAREN2,
    ACTIONS(683), 1,
      anon_sym_selector,
    ACTIONS(685), 1,
      sym_identifier,
    ACTIONS(681), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(272), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6763] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(787), 1,
      anon_sym_LBRACK,
    ACTIONS(789), 1,
      anon_sym_COLON_COLON,
    ACTIONS(791), 1,
      anon_sym_POUND,
    ACTIONS(793), 1,
      anon_sym_GT,
    ACTIONS(795), 1,
      anon_sym_TILDE,
    ACTIONS(797), 1,
      anon_sym_PLUS,
    ACTIONS(799), 1,
      anon_sym_PIPE,
    ACTIONS(801), 1,
      sym__descendant_operator,
    ACTIONS(803), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
  [6800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LPAREN2,
    ACTIONS(683), 1,
      anon_sym_selector,
    ACTIONS(685), 1,
      sym_identifier,
    ACTIONS(681), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(236), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6825] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LPAREN2,
    ACTIONS(683), 1,
      anon_sym_selector,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(681), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(293), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6850] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      sym_arguments,
    ACTIONS(246), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(625), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [6890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(617), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [6908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(657), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [6926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(645), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [6944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(633), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [6962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(613), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [6980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(621), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [6998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(649), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [7016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(637), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [7034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(653), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [7052] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(787), 1,
      anon_sym_LBRACK,
    ACTIONS(789), 1,
      anon_sym_COLON_COLON,
    ACTIONS(791), 1,
      anon_sym_POUND,
    ACTIONS(793), 1,
      anon_sym_GT,
    ACTIONS(795), 1,
      anon_sym_TILDE,
    ACTIONS(797), 1,
      anon_sym_PLUS,
    ACTIONS(799), 1,
      anon_sym_PIPE,
    ACTIONS(801), 1,
      sym__descendant_operator,
    ACTIONS(803), 1,
      sym__pseudo_class_selector_colon,
  [7086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_SLASH,
    ACTIONS(827), 1,
      sym_unit,
    ACTIONS(595), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_SLASH,
    ACTIONS(829), 1,
      sym_unit,
    ACTIONS(605), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_SLASH,
    ACTIONS(655), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_SLASH,
    ACTIONS(639), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SLASH,
    ACTIONS(635), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SLASH,
    ACTIONS(619), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_SLASH,
    ACTIONS(647), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SLASH,
    ACTIONS(643), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_SLASH,
    ACTIONS(631), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SLASH,
    ACTIONS(651), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SLASH,
    ACTIONS(611), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_LBRACK,
    ACTIONS(835), 1,
      anon_sym_SLASH,
    ACTIONS(837), 1,
      anon_sym_COLON,
    STATE(231), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(831), 4,
      anon_sym_SEMI,
      sym_important,
      anon_sym_POUND_LBRACE,
      sym_identifier,
  [7290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_SLASH,
    ACTIONS(615), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SLASH,
    ACTIONS(623), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7322] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
    ACTIONS(843), 1,
      aux_sym_integer_value_token1,
    STATE(301), 1,
      sym_integer_value,
    ACTIONS(841), 2,
      sym_from,
      sym_to,
    STATE(220), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_LBRACK,
    ACTIONS(849), 1,
      anon_sym_SLASH,
    ACTIONS(845), 5,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_important,
      anon_sym_POUND_LBRACE,
      sym_identifier,
  [7360] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      aux_sym_integer_value_token1,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      sym_integer_value,
    ACTIONS(841), 2,
      sym_from,
      sym_to,
    STATE(224), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7381] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_SEMI,
    ACTIONS(855), 1,
      sym_important,
    ACTIONS(857), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(859), 1,
      sym_identifier,
    STATE(334), 1,
      sym_important_interpolation,
    STATE(222), 2,
      sym_class_name,
      aux_sym_apply_directive_repeat1,
  [7404] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(859), 1,
      sym_identifier,
    ACTIONS(861), 1,
      anon_sym_SEMI,
    ACTIONS(863), 1,
      sym_important,
    STATE(312), 1,
      sym_important_interpolation,
    STATE(239), 2,
      sym_class_name,
      aux_sym_apply_directive_repeat1,
  [7427] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(867), 1,
      anon_sym_RBRACK,
    ACTIONS(869), 1,
      anon_sym_SLASH,
    STATE(292), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(871), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7448] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
    ACTIONS(878), 1,
      aux_sym_integer_value_token1,
    STATE(301), 1,
      sym_integer_value,
    ACTIONS(875), 2,
      sym_from,
      sym_to,
    STATE(224), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7469] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_LBRACE,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(883), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_block,
    STATE(258), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(885), 2,
      anon_sym_and,
      anon_sym_or,
  [7492] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(869), 1,
      anon_sym_SLASH,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    STATE(282), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(871), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7513] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      aux_sym_integer_value_token1,
    ACTIONS(889), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      sym_integer_value,
    ACTIONS(841), 2,
      sym_from,
      sym_to,
    STATE(229), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7534] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(891), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_block,
    STATE(262), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(885), 2,
      anon_sym_and,
      anon_sym_or,
  [7557] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      aux_sym_integer_value_token1,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      sym_integer_value,
    ACTIONS(841), 2,
      sym_from,
      sym_to,
    STATE(224), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7578] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(869), 1,
      anon_sym_SLASH,
    ACTIONS(895), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(871), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_COLON,
    STATE(234), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(897), 4,
      anon_sym_SEMI,
      sym_important,
      anon_sym_POUND_LBRACE,
      sym_identifier,
  [7615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_COLON,
    STATE(234), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(845), 4,
      anon_sym_SEMI,
      sym_important,
      anon_sym_POUND_LBRACE,
      sym_identifier,
  [7655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_COLON,
    STATE(238), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(906), 4,
      anon_sym_SEMI,
      sym_important,
      anon_sym_POUND_LBRACE,
      sym_identifier,
  [7671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_COLON,
    STATE(234), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(912), 4,
      anon_sym_SEMI,
      sym_important,
      anon_sym_POUND_LBRACE,
      sym_identifier,
  [7711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_identifier,
    STATE(239), 2,
      sym_class_name,
      aux_sym_apply_directive_repeat1,
    ACTIONS(914), 3,
      anon_sym_SEMI,
      sym_important,
      anon_sym_POUND_LBRACE,
  [7727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SLASH,
    ACTIONS(921), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(871), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_COLON,
    STATE(247), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(912), 4,
      anon_sym_SEMI,
      sym_important,
      anon_sym_POUND_LBRACE,
      sym_identifier,
  [7771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym_identifier,
    ACTIONS(923), 1,
      sym_unit,
    ACTIONS(605), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_important,
      anon_sym_POUND_LBRACE,
  [7787] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      sym_block,
    STATE(278), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(885), 2,
      anon_sym_and,
      anon_sym_or,
  [7807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7819] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_LBRACE,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      sym_block,
    STATE(267), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(885), 2,
      anon_sym_and,
      anon_sym_or,
  [7839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_COLON,
    STATE(234), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(927), 4,
      anon_sym_SEMI,
      sym_important,
      anon_sym_POUND_LBRACE,
      sym_identifier,
  [7855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SLASH,
    ACTIONS(929), 1,
      anon_sym_SEMI,
    ACTIONS(871), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SLASH,
    ACTIONS(931), 1,
      anon_sym_SEMI,
    ACTIONS(871), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 5,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_important,
      anon_sym_POUND_LBRACE,
      sym_identifier,
  [7896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SLASH,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
    ACTIONS(871), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7911] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(937), 1,
      anon_sym_SEMI,
    STATE(286), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(885), 2,
      anon_sym_and,
      anon_sym_or,
  [7928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(939), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [7941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 5,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_important,
      anon_sym_POUND_LBRACE,
      sym_identifier,
  [7952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SLASH,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
    ACTIONS(871), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 5,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_important,
      anon_sym_POUND_LBRACE,
      sym_identifier,
  [7978] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(945), 1,
      anon_sym_SEMI,
    STATE(290), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(885), 2,
      anon_sym_and,
      anon_sym_or,
  [7995] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_LBRACE,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_block,
    STATE(269), 1,
      aux_sym_import_statement_repeat1,
  [8014] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_LPAREN,
    ACTIONS(949), 1,
      sym_string_value,
    ACTIONS(951), 1,
      sym_identifier,
    STATE(199), 1,
      sym_arguments,
    STATE(316), 1,
      sym_call_expression,
  [8033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SLASH,
    ACTIONS(953), 1,
      anon_sym_RBRACK,
    ACTIONS(871), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SLASH,
    ACTIONS(955), 1,
      anon_sym_RBRACK,
    ACTIONS(871), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8063] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(957), 1,
      anon_sym_SEMI,
    STATE(122), 1,
      sym_block,
    STATE(269), 1,
      aux_sym_import_statement_repeat1,
  [8082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SLASH,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    ACTIONS(871), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8097] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_LPAREN,
    ACTIONS(951), 1,
      sym_identifier,
    ACTIONS(961), 1,
      sym_string_value,
    STATE(199), 1,
      sym_arguments,
    STATE(337), 1,
      sym_call_expression,
  [8116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [8126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8140] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_LBRACE,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      sym_block,
    STATE(269), 1,
      aux_sym_import_statement_repeat1,
  [8156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_block,
    ACTIONS(885), 2,
      anon_sym_and,
      anon_sym_or,
  [8170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(939), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [8184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(970), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_block,
    ACTIONS(885), 2,
      anon_sym_and,
      anon_sym_or,
  [8226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [8236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [8260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [8270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_COLON,
    ACTIONS(899), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [8282] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      sym_block,
    STATE(269), 1,
      aux_sym_import_statement_repeat1,
  [8298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_selectors_repeat1,
  [8311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [8324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      sym_string_value,
    ACTIONS(986), 1,
      sym_identifier,
    STATE(328), 1,
      sym_call_expression,
  [8337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(988), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_grid_value_repeat1,
  [8350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [8363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym_string_value,
    ACTIONS(995), 1,
      sym_identifier,
    STATE(326), 1,
      sym_call_expression,
  [8376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym_unit,
    ACTIONS(605), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [8387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(999), 1,
      anon_sym_SEMI,
    STATE(269), 1,
      aux_sym_import_statement_repeat1,
  [8400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [8413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_RBRACK,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_grid_value_repeat1,
  [8426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_grid_value_repeat1,
  [8439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(1008), 1,
      anon_sym_SEMI,
    STATE(269), 1,
      aux_sym_import_statement_repeat1,
  [8452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    ACTIONS(1010), 1,
      anon_sym_LBRACE,
    STATE(279), 1,
      aux_sym_selectors_repeat1,
  [8465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_grid_value_repeat1,
  [8478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    ACTIONS(885), 2,
      anon_sym_and,
      anon_sym_or,
  [8489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_keyframe_block_list,
  [8499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_SEMI,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
  [8509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      aux_sym_color_value_token1,
    ACTIONS(1020), 1,
      sym_identifier,
  [8519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_block,
  [8529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_block,
  [8539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym_keyframe_block_list,
  [8549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      aux_sym_integer_value_token1,
    STATE(250), 1,
      sym_integer_value,
  [8559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      anon_sym_LBRACE,
    STATE(273), 1,
      sym_block,
  [8569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      aux_sym_integer_value_token1,
    STATE(324), 1,
      sym_integer_value,
  [8579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_SEMI,
    ACTIONS(1030), 1,
      anon_sym_RBRACE,
  [8589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym_arguments,
  [8599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      aux_sym_integer_value_token1,
    STATE(235), 1,
      sym_integer_value,
  [8609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      sym_identifier,
    ACTIONS(1032), 1,
      aux_sym_color_value_token1,
  [8619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      aux_sym_integer_value_token1,
    STATE(331), 1,
      sym_integer_value,
  [8629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      sym_important,
  [8636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      sym_identifier,
  [8643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      sym_identifier,
  [8650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
  [8657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_SEMI,
  [8664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym_identifier,
  [8671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_SEMI,
  [8678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_SEMI,
  [8685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_SEMI,
  [8692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_RBRACE,
  [8699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      sym_identifier,
  [8706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_SEMI,
  [8713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      aux_sym_color_value_token1,
  [8720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_RBRACE,
  [8727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_SEMI,
  [8734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_SEMI,
  [8741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_RBRACK,
  [8748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
  [8755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_SEMI,
  [8762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym_identifier,
  [8769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_SEMI,
  [8776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_RBRACE,
  [8783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      aux_sym_color_value_token1,
  [8790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_RBRACK,
  [8797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_RBRACE,
  [8804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_LPAREN2,
  [8811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_SEMI,
  [8818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym_identifier,
  [8825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      aux_sym_color_value_token1,
  [8832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_SEMI,
  [8839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      ts_builtin_sym_end,
  [8846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
  [8853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym_identifier,
  [8860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      sym_identifier,
  [8867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym_identifier,
  [8874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym_identifier,
  [8881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 90,
  [SMALL_STATE(4)] = 180,
  [SMALL_STATE(5)] = 270,
  [SMALL_STATE(6)] = 360,
  [SMALL_STATE(7)] = 450,
  [SMALL_STATE(8)] = 540,
  [SMALL_STATE(9)] = 627,
  [SMALL_STATE(10)] = 710,
  [SMALL_STATE(11)] = 793,
  [SMALL_STATE(12)] = 866,
  [SMALL_STATE(13)] = 939,
  [SMALL_STATE(14)] = 1009,
  [SMALL_STATE(15)] = 1078,
  [SMALL_STATE(16)] = 1147,
  [SMALL_STATE(17)] = 1208,
  [SMALL_STATE(18)] = 1266,
  [SMALL_STATE(19)] = 1324,
  [SMALL_STATE(20)] = 1363,
  [SMALL_STATE(21)] = 1406,
  [SMALL_STATE(22)] = 1440,
  [SMALL_STATE(23)] = 1474,
  [SMALL_STATE(24)] = 1508,
  [SMALL_STATE(25)] = 1542,
  [SMALL_STATE(26)] = 1595,
  [SMALL_STATE(27)] = 1638,
  [SMALL_STATE(28)] = 1681,
  [SMALL_STATE(29)] = 1714,
  [SMALL_STATE(30)] = 1757,
  [SMALL_STATE(31)] = 1802,
  [SMALL_STATE(32)] = 1847,
  [SMALL_STATE(33)] = 1898,
  [SMALL_STATE(34)] = 1941,
  [SMALL_STATE(35)] = 1992,
  [SMALL_STATE(36)] = 2035,
  [SMALL_STATE(37)] = 2084,
  [SMALL_STATE(38)] = 2127,
  [SMALL_STATE(39)] = 2178,
  [SMALL_STATE(40)] = 2221,
  [SMALL_STATE(41)] = 2249,
  [SMALL_STATE(42)] = 2277,
  [SMALL_STATE(43)] = 2305,
  [SMALL_STATE(44)] = 2333,
  [SMALL_STATE(45)] = 2379,
  [SMALL_STATE(46)] = 2407,
  [SMALL_STATE(47)] = 2435,
  [SMALL_STATE(48)] = 2463,
  [SMALL_STATE(49)] = 2491,
  [SMALL_STATE(50)] = 2541,
  [SMALL_STATE(51)] = 2591,
  [SMALL_STATE(52)] = 2619,
  [SMALL_STATE(53)] = 2647,
  [SMALL_STATE(54)] = 2697,
  [SMALL_STATE(55)] = 2725,
  [SMALL_STATE(56)] = 2753,
  [SMALL_STATE(57)] = 2783,
  [SMALL_STATE(58)] = 2813,
  [SMALL_STATE(59)] = 2863,
  [SMALL_STATE(60)] = 2893,
  [SMALL_STATE(61)] = 2939,
  [SMALL_STATE(62)] = 2969,
  [SMALL_STATE(63)] = 2997,
  [SMALL_STATE(64)] = 3025,
  [SMALL_STATE(65)] = 3053,
  [SMALL_STATE(66)] = 3081,
  [SMALL_STATE(67)] = 3109,
  [SMALL_STATE(68)] = 3137,
  [SMALL_STATE(69)] = 3165,
  [SMALL_STATE(70)] = 3195,
  [SMALL_STATE(71)] = 3223,
  [SMALL_STATE(72)] = 3250,
  [SMALL_STATE(73)] = 3281,
  [SMALL_STATE(74)] = 3308,
  [SMALL_STATE(75)] = 3335,
  [SMALL_STATE(76)] = 3362,
  [SMALL_STATE(77)] = 3389,
  [SMALL_STATE(78)] = 3416,
  [SMALL_STATE(79)] = 3443,
  [SMALL_STATE(80)] = 3488,
  [SMALL_STATE(81)] = 3515,
  [SMALL_STATE(82)] = 3542,
  [SMALL_STATE(83)] = 3569,
  [SMALL_STATE(84)] = 3596,
  [SMALL_STATE(85)] = 3623,
  [SMALL_STATE(86)] = 3650,
  [SMALL_STATE(87)] = 3677,
  [SMALL_STATE(88)] = 3704,
  [SMALL_STATE(89)] = 3731,
  [SMALL_STATE(90)] = 3758,
  [SMALL_STATE(91)] = 3785,
  [SMALL_STATE(92)] = 3812,
  [SMALL_STATE(93)] = 3839,
  [SMALL_STATE(94)] = 3866,
  [SMALL_STATE(95)] = 3893,
  [SMALL_STATE(96)] = 3920,
  [SMALL_STATE(97)] = 3947,
  [SMALL_STATE(98)] = 3974,
  [SMALL_STATE(99)] = 4000,
  [SMALL_STATE(100)] = 4026,
  [SMALL_STATE(101)] = 4052,
  [SMALL_STATE(102)] = 4078,
  [SMALL_STATE(103)] = 4104,
  [SMALL_STATE(104)] = 4130,
  [SMALL_STATE(105)] = 4156,
  [SMALL_STATE(106)] = 4182,
  [SMALL_STATE(107)] = 4208,
  [SMALL_STATE(108)] = 4234,
  [SMALL_STATE(109)] = 4260,
  [SMALL_STATE(110)] = 4286,
  [SMALL_STATE(111)] = 4312,
  [SMALL_STATE(112)] = 4338,
  [SMALL_STATE(113)] = 4382,
  [SMALL_STATE(114)] = 4408,
  [SMALL_STATE(115)] = 4434,
  [SMALL_STATE(116)] = 4478,
  [SMALL_STATE(117)] = 4504,
  [SMALL_STATE(118)] = 4532,
  [SMALL_STATE(119)] = 4558,
  [SMALL_STATE(120)] = 4584,
  [SMALL_STATE(121)] = 4628,
  [SMALL_STATE(122)] = 4672,
  [SMALL_STATE(123)] = 4698,
  [SMALL_STATE(124)] = 4724,
  [SMALL_STATE(125)] = 4750,
  [SMALL_STATE(126)] = 4778,
  [SMALL_STATE(127)] = 4803,
  [SMALL_STATE(128)] = 4828,
  [SMALL_STATE(129)] = 4869,
  [SMALL_STATE(130)] = 4894,
  [SMALL_STATE(131)] = 4923,
  [SMALL_STATE(132)] = 4948,
  [SMALL_STATE(133)] = 4989,
  [SMALL_STATE(134)] = 5018,
  [SMALL_STATE(135)] = 5047,
  [SMALL_STATE(136)] = 5076,
  [SMALL_STATE(137)] = 5101,
  [SMALL_STATE(138)] = 5126,
  [SMALL_STATE(139)] = 5151,
  [SMALL_STATE(140)] = 5176,
  [SMALL_STATE(141)] = 5201,
  [SMALL_STATE(142)] = 5226,
  [SMALL_STATE(143)] = 5251,
  [SMALL_STATE(144)] = 5289,
  [SMALL_STATE(145)] = 5327,
  [SMALL_STATE(146)] = 5363,
  [SMALL_STATE(147)] = 5391,
  [SMALL_STATE(148)] = 5429,
  [SMALL_STATE(149)] = 5457,
  [SMALL_STATE(150)] = 5495,
  [SMALL_STATE(151)] = 5533,
  [SMALL_STATE(152)] = 5571,
  [SMALL_STATE(153)] = 5609,
  [SMALL_STATE(154)] = 5647,
  [SMALL_STATE(155)] = 5685,
  [SMALL_STATE(156)] = 5723,
  [SMALL_STATE(157)] = 5761,
  [SMALL_STATE(158)] = 5799,
  [SMALL_STATE(159)] = 5837,
  [SMALL_STATE(160)] = 5875,
  [SMALL_STATE(161)] = 5913,
  [SMALL_STATE(162)] = 5951,
  [SMALL_STATE(163)] = 5987,
  [SMALL_STATE(164)] = 6025,
  [SMALL_STATE(165)] = 6063,
  [SMALL_STATE(166)] = 6101,
  [SMALL_STATE(167)] = 6139,
  [SMALL_STATE(168)] = 6164,
  [SMALL_STATE(169)] = 6191,
  [SMALL_STATE(170)] = 6225,
  [SMALL_STATE(171)] = 6259,
  [SMALL_STATE(172)] = 6302,
  [SMALL_STATE(173)] = 6323,
  [SMALL_STATE(174)] = 6366,
  [SMALL_STATE(175)] = 6387,
  [SMALL_STATE(176)] = 6408,
  [SMALL_STATE(177)] = 6451,
  [SMALL_STATE(178)] = 6489,
  [SMALL_STATE(179)] = 6509,
  [SMALL_STATE(180)] = 6533,
  [SMALL_STATE(181)] = 6571,
  [SMALL_STATE(182)] = 6596,
  [SMALL_STATE(183)] = 6621,
  [SMALL_STATE(184)] = 6642,
  [SMALL_STATE(185)] = 6667,
  [SMALL_STATE(186)] = 6688,
  [SMALL_STATE(187)] = 6713,
  [SMALL_STATE(188)] = 6738,
  [SMALL_STATE(189)] = 6763,
  [SMALL_STATE(190)] = 6800,
  [SMALL_STATE(191)] = 6825,
  [SMALL_STATE(192)] = 6850,
  [SMALL_STATE(193)] = 6872,
  [SMALL_STATE(194)] = 6890,
  [SMALL_STATE(195)] = 6908,
  [SMALL_STATE(196)] = 6926,
  [SMALL_STATE(197)] = 6944,
  [SMALL_STATE(198)] = 6962,
  [SMALL_STATE(199)] = 6980,
  [SMALL_STATE(200)] = 6998,
  [SMALL_STATE(201)] = 7016,
  [SMALL_STATE(202)] = 7034,
  [SMALL_STATE(203)] = 7052,
  [SMALL_STATE(204)] = 7086,
  [SMALL_STATE(205)] = 7105,
  [SMALL_STATE(206)] = 7124,
  [SMALL_STATE(207)] = 7140,
  [SMALL_STATE(208)] = 7156,
  [SMALL_STATE(209)] = 7172,
  [SMALL_STATE(210)] = 7188,
  [SMALL_STATE(211)] = 7204,
  [SMALL_STATE(212)] = 7220,
  [SMALL_STATE(213)] = 7236,
  [SMALL_STATE(214)] = 7252,
  [SMALL_STATE(215)] = 7268,
  [SMALL_STATE(216)] = 7290,
  [SMALL_STATE(217)] = 7306,
  [SMALL_STATE(218)] = 7322,
  [SMALL_STATE(219)] = 7343,
  [SMALL_STATE(220)] = 7360,
  [SMALL_STATE(221)] = 7381,
  [SMALL_STATE(222)] = 7404,
  [SMALL_STATE(223)] = 7427,
  [SMALL_STATE(224)] = 7448,
  [SMALL_STATE(225)] = 7469,
  [SMALL_STATE(226)] = 7492,
  [SMALL_STATE(227)] = 7513,
  [SMALL_STATE(228)] = 7534,
  [SMALL_STATE(229)] = 7557,
  [SMALL_STATE(230)] = 7578,
  [SMALL_STATE(231)] = 7599,
  [SMALL_STATE(232)] = 7615,
  [SMALL_STATE(233)] = 7627,
  [SMALL_STATE(234)] = 7639,
  [SMALL_STATE(235)] = 7655,
  [SMALL_STATE(236)] = 7671,
  [SMALL_STATE(237)] = 7683,
  [SMALL_STATE(238)] = 7695,
  [SMALL_STATE(239)] = 7711,
  [SMALL_STATE(240)] = 7727,
  [SMALL_STATE(241)] = 7739,
  [SMALL_STATE(242)] = 7755,
  [SMALL_STATE(243)] = 7771,
  [SMALL_STATE(244)] = 7787,
  [SMALL_STATE(245)] = 7807,
  [SMALL_STATE(246)] = 7819,
  [SMALL_STATE(247)] = 7839,
  [SMALL_STATE(248)] = 7855,
  [SMALL_STATE(249)] = 7870,
  [SMALL_STATE(250)] = 7885,
  [SMALL_STATE(251)] = 7896,
  [SMALL_STATE(252)] = 7911,
  [SMALL_STATE(253)] = 7928,
  [SMALL_STATE(254)] = 7941,
  [SMALL_STATE(255)] = 7952,
  [SMALL_STATE(256)] = 7967,
  [SMALL_STATE(257)] = 7978,
  [SMALL_STATE(258)] = 7995,
  [SMALL_STATE(259)] = 8014,
  [SMALL_STATE(260)] = 8033,
  [SMALL_STATE(261)] = 8048,
  [SMALL_STATE(262)] = 8063,
  [SMALL_STATE(263)] = 8082,
  [SMALL_STATE(264)] = 8097,
  [SMALL_STATE(265)] = 8116,
  [SMALL_STATE(266)] = 8126,
  [SMALL_STATE(267)] = 8140,
  [SMALL_STATE(268)] = 8156,
  [SMALL_STATE(269)] = 8170,
  [SMALL_STATE(270)] = 8184,
  [SMALL_STATE(271)] = 8198,
  [SMALL_STATE(272)] = 8212,
  [SMALL_STATE(273)] = 8226,
  [SMALL_STATE(274)] = 8236,
  [SMALL_STATE(275)] = 8250,
  [SMALL_STATE(276)] = 8260,
  [SMALL_STATE(277)] = 8270,
  [SMALL_STATE(278)] = 8282,
  [SMALL_STATE(279)] = 8298,
  [SMALL_STATE(280)] = 8311,
  [SMALL_STATE(281)] = 8324,
  [SMALL_STATE(282)] = 8337,
  [SMALL_STATE(283)] = 8350,
  [SMALL_STATE(284)] = 8363,
  [SMALL_STATE(285)] = 8376,
  [SMALL_STATE(286)] = 8387,
  [SMALL_STATE(287)] = 8400,
  [SMALL_STATE(288)] = 8413,
  [SMALL_STATE(289)] = 8426,
  [SMALL_STATE(290)] = 8439,
  [SMALL_STATE(291)] = 8452,
  [SMALL_STATE(292)] = 8465,
  [SMALL_STATE(293)] = 8478,
  [SMALL_STATE(294)] = 8489,
  [SMALL_STATE(295)] = 8499,
  [SMALL_STATE(296)] = 8509,
  [SMALL_STATE(297)] = 8519,
  [SMALL_STATE(298)] = 8529,
  [SMALL_STATE(299)] = 8539,
  [SMALL_STATE(300)] = 8549,
  [SMALL_STATE(301)] = 8559,
  [SMALL_STATE(302)] = 8569,
  [SMALL_STATE(303)] = 8579,
  [SMALL_STATE(304)] = 8589,
  [SMALL_STATE(305)] = 8599,
  [SMALL_STATE(306)] = 8609,
  [SMALL_STATE(307)] = 8619,
  [SMALL_STATE(308)] = 8629,
  [SMALL_STATE(309)] = 8636,
  [SMALL_STATE(310)] = 8643,
  [SMALL_STATE(311)] = 8650,
  [SMALL_STATE(312)] = 8657,
  [SMALL_STATE(313)] = 8664,
  [SMALL_STATE(314)] = 8671,
  [SMALL_STATE(315)] = 8678,
  [SMALL_STATE(316)] = 8685,
  [SMALL_STATE(317)] = 8692,
  [SMALL_STATE(318)] = 8699,
  [SMALL_STATE(319)] = 8706,
  [SMALL_STATE(320)] = 8713,
  [SMALL_STATE(321)] = 8720,
  [SMALL_STATE(322)] = 8727,
  [SMALL_STATE(323)] = 8734,
  [SMALL_STATE(324)] = 8741,
  [SMALL_STATE(325)] = 8748,
  [SMALL_STATE(326)] = 8755,
  [SMALL_STATE(327)] = 8762,
  [SMALL_STATE(328)] = 8769,
  [SMALL_STATE(329)] = 8776,
  [SMALL_STATE(330)] = 8783,
  [SMALL_STATE(331)] = 8790,
  [SMALL_STATE(332)] = 8797,
  [SMALL_STATE(333)] = 8804,
  [SMALL_STATE(334)] = 8811,
  [SMALL_STATE(335)] = 8818,
  [SMALL_STATE(336)] = 8825,
  [SMALL_STATE(337)] = 8832,
  [SMALL_STATE(338)] = 8839,
  [SMALL_STATE(339)] = 8846,
  [SMALL_STATE(340)] = 8853,
  [SMALL_STATE(341)] = 8860,
  [SMALL_STATE(342)] = 8867,
  [SMALL_STATE(343)] = 8874,
  [SMALL_STATE(344)] = 8881,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(165),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(184),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(159),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(281),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(335),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(188),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(221),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(173),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(52),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(342),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(341),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(340),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(172),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(170),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(344),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(163),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(187),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(147),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(284),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(343),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(186),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(31),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(173),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(52),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(342),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(341),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(340),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(174),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(169),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(344),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 14),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 14),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(149),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(160),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(320),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(161),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(146),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(125),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(117),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(72),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(146),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(160),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(320),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(161),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(168),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(125),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(117),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(72),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(168),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_directive, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_directive, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_directive, 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_directive, 4),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_directive, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_directive, 2),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(301),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(285),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [903] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2), SHIFT_REPEAT(309),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 3),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 16),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 4),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_directive_repeat1, 2),
  [916] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_directive_repeat1, 2), SHIFT_REPEAT(215),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 5),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 4),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 5),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(181),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(128),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(29),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(13),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2), SHIFT_REPEAT(155),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 14),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important_interpolation, 3),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1082] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
