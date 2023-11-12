#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 360
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 10
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
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
  anon_sym_SLASH = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_COLON = 18,
  anon_sym_ = 19,
  anon_sym_POUND_LBRACE_BANGimportant_RBRACE = 20,
  sym_nesting_selector = 21,
  anon_sym_STAR = 22,
  anon_sym_DOT = 23,
  anon_sym_COLON_COLON = 24,
  anon_sym_POUND = 25,
  anon_sym_EQ = 26,
  anon_sym_TILDE_EQ = 27,
  anon_sym_CARET_EQ = 28,
  anon_sym_PIPE_EQ = 29,
  anon_sym_STAR_EQ = 30,
  anon_sym_DOLLAR_EQ = 31,
  anon_sym_GT = 32,
  anon_sym_TILDE = 33,
  anon_sym_PLUS = 34,
  anon_sym_PIPE = 35,
  anon_sym_LPAREN = 36,
  anon_sym_RPAREN = 37,
  sym_important = 38,
  anon_sym_LPAREN2 = 39,
  anon_sym_and = 40,
  anon_sym_or = 41,
  anon_sym_not = 42,
  anon_sym_only = 43,
  anon_sym_selector = 44,
  aux_sym_color_value_token1 = 45,
  sym_string_value = 46,
  aux_sym_integer_value_token1 = 47,
  aux_sym_float_value_token1 = 48,
  sym_unit = 49,
  anon_sym_DASH = 50,
  sym_identifier = 51,
  sym_at_keyword = 52,
  sym_comment = 53,
  sym_plain_value = 54,
  sym__descendant_operator = 55,
  sym__pseudo_class_selector_colon = 56,
  sym_stylesheet = 57,
  sym_import_statement = 58,
  sym_media_statement = 59,
  sym_charset_statement = 60,
  sym_namespace_statement = 61,
  sym_keyframes_statement = 62,
  sym_keyframe_block_list = 63,
  sym_keyframe_block = 64,
  sym_supports_statement = 65,
  sym_at_rule = 66,
  sym_rule_set = 67,
  sym_selectors = 68,
  sym_block = 69,
  sym_apply_directive = 70,
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
  sym__query = 87,
  sym_feature_query = 88,
  sym_parenthesized_query = 89,
  sym_binary_query = 90,
  sym_unary_query = 91,
  sym_selector_query = 92,
  sym__value = 93,
  sym_parenthesized_value = 94,
  sym_color_value = 95,
  sym_integer_value = 96,
  sym_float_value = 97,
  sym_grid_value = 98,
  sym_call_expression = 99,
  sym_binary_expression = 100,
  sym_arguments = 101,
  aux_sym_stylesheet_repeat1 = 102,
  aux_sym_import_statement_repeat1 = 103,
  aux_sym_keyframe_block_list_repeat1 = 104,
  aux_sym_selectors_repeat1 = 105,
  aux_sym_block_repeat1 = 106,
  aux_sym_apply_directive_repeat1 = 107,
  aux_sym_apply_directive_repeat2 = 108,
  aux_sym_pseudo_class_arguments_repeat1 = 109,
  aux_sym_pseudo_class_arguments_repeat2 = 110,
  aux_sym_declaration_repeat1 = 111,
  aux_sym_grid_value_repeat1 = 112,
  aux_sym_arguments_repeat1 = 113,
  alias_sym_attribute_name = 114,
  alias_sym_class_name = 115,
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
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_] = " ",
  [anon_sym_POUND_LBRACE_BANGimportant_RBRACE] = "#{!important}",
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
  [aux_sym_apply_directive_repeat2] = "apply_directive_repeat2",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_pseudo_class_arguments_repeat2] = "pseudo_class_arguments_repeat2",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_grid_value_repeat1] = "grid_value_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_class_name] = "class_name",
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
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_] = anon_sym_,
  [anon_sym_POUND_LBRACE_BANGimportant_RBRACE] = anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
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
  [aux_sym_apply_directive_repeat2] = aux_sym_apply_directive_repeat2,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_pseudo_class_arguments_repeat2] = aux_sym_pseudo_class_arguments_repeat2,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_grid_value_repeat1] = aux_sym_grid_value_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_class_name] = alias_sym_class_name,
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
  [anon_sym_SLASH] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACE_BANGimportant_RBRACE] = {
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
  [aux_sym_apply_directive_repeat2] = {
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
    [1] = alias_sym_class_name,
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
  [6] = 3,
  [7] = 2,
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
  [32] = 25,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 25,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 43,
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
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 97,
  [104] = 72,
  [105] = 98,
  [106] = 74,
  [107] = 71,
  [108] = 96,
  [109] = 85,
  [110] = 73,
  [111] = 90,
  [112] = 89,
  [113] = 95,
  [114] = 114,
  [115] = 88,
  [116] = 77,
  [117] = 99,
  [118] = 92,
  [119] = 87,
  [120] = 76,
  [121] = 101,
  [122] = 122,
  [123] = 75,
  [124] = 100,
  [125] = 91,
  [126] = 126,
  [127] = 126,
  [128] = 93,
  [129] = 126,
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
  [150] = 149,
  [151] = 151,
  [152] = 152,
  [153] = 152,
  [154] = 154,
  [155] = 154,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 151,
  [162] = 157,
  [163] = 163,
  [164] = 164,
  [165] = 147,
  [166] = 164,
  [167] = 164,
  [168] = 152,
  [169] = 151,
  [170] = 170,
  [171] = 171,
  [172] = 34,
  [173] = 173,
  [174] = 173,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 175,
  [180] = 180,
  [181] = 130,
  [182] = 182,
  [183] = 81,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 122,
  [189] = 185,
  [190] = 190,
  [191] = 191,
  [192] = 186,
  [193] = 193,
  [194] = 194,
  [195] = 102,
  [196] = 196,
  [197] = 137,
  [198] = 138,
  [199] = 144,
  [200] = 140,
  [201] = 132,
  [202] = 135,
  [203] = 136,
  [204] = 141,
  [205] = 142,
  [206] = 81,
  [207] = 143,
  [208] = 102,
  [209] = 122,
  [210] = 210,
  [211] = 135,
  [212] = 136,
  [213] = 144,
  [214] = 214,
  [215] = 130,
  [216] = 143,
  [217] = 142,
  [218] = 137,
  [219] = 141,
  [220] = 140,
  [221] = 132,
  [222] = 138,
  [223] = 223,
  [224] = 224,
  [225] = 224,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 226,
  [231] = 228,
  [232] = 232,
  [233] = 227,
  [234] = 234,
  [235] = 226,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 238,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 102,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 251,
  [257] = 257,
  [258] = 253,
  [259] = 259,
  [260] = 260,
  [261] = 253,
  [262] = 260,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 263,
  [269] = 269,
  [270] = 270,
  [271] = 259,
  [272] = 272,
  [273] = 273,
  [274] = 89,
  [275] = 275,
  [276] = 273,
  [277] = 277,
  [278] = 278,
  [279] = 273,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 93,
  [284] = 280,
  [285] = 130,
  [286] = 88,
  [287] = 282,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 291,
  [297] = 297,
  [298] = 298,
  [299] = 295,
  [300] = 300,
  [301] = 292,
  [302] = 291,
  [303] = 102,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 304,
  [308] = 308,
  [309] = 309,
  [310] = 306,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 312,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 320,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 320,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 333,
  [336] = 323,
  [337] = 337,
  [338] = 338,
  [339] = 333,
  [340] = 334,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 332,
  [345] = 345,
  [346] = 327,
  [347] = 347,
  [348] = 332,
  [349] = 349,
  [350] = 328,
  [351] = 319,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
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
      if (eof) ADVANCE(91);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '&') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '^') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '~') ADVANCE(130);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '_') ADVANCE(213);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '&') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '_') ADVANCE(213);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '~') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '_') ADVANCE(213);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '~') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '_') ADVANCE(213);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '~') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '_') ADVANCE(213);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '&') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '^') ADVANCE(33);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '~') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '^') ADVANCE(33);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '~') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '~') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '~') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '_') ADVANCE(230);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(222);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(222);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(222);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(119);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'c') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == 'k') ADVANCE(239);
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == 'k') ADVANCE(239);
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 73:
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 74:
      if (lookahead == '{') ADVANCE(8);
      END_STATE();
    case 75:
      if (lookahead == '}') ADVANCE(113);
      END_STATE();
    case 76:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(79);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 83:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 84:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(30);
      END_STATE();
    case 85:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 86:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(10);
      if (lookahead == '"') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(87);
      END_STATE();
    case 88:
      if (eof) ADVANCE(91);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '&') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '^') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '~') ADVANCE(130);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 89:
      if (eof) ADVANCE(91);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '&') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '~') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 90:
      if (eof) ADVANCE(91);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '&') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '~') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_ATapply);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(22);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(22);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(30);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE_BANGimportant_RBRACE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(8);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(284);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == 'c') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == 'y') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(206);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '_') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(284);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(206);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(284);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(284);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(213);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '/') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(284);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(284);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(284);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(231);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'm') ADVANCE(259);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'm') ADVANCE(244);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'p') ADVANCE(258);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'p') ADVANCE(233);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'p') ADVANCE(257);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'p') ADVANCE(262);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(263);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'y') ADVANCE(247);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'y') ADVANCE(105);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'y') ADVANCE(248);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(85);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(284);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 89, .external_lex_state = 2},
  [2] = {.lex_state = 9, .external_lex_state = 2},
  [3] = {.lex_state = 9, .external_lex_state = 2},
  [4] = {.lex_state = 9, .external_lex_state = 2},
  [5] = {.lex_state = 9, .external_lex_state = 2},
  [6] = {.lex_state = 9, .external_lex_state = 2},
  [7] = {.lex_state = 9, .external_lex_state = 2},
  [8] = {.lex_state = 9, .external_lex_state = 2},
  [9] = {.lex_state = 89, .external_lex_state = 2},
  [10] = {.lex_state = 89, .external_lex_state = 2},
  [11] = {.lex_state = 4, .external_lex_state = 2},
  [12] = {.lex_state = 4, .external_lex_state = 2},
  [13] = {.lex_state = 4, .external_lex_state = 2},
  [14] = {.lex_state = 4, .external_lex_state = 2},
  [15] = {.lex_state = 4, .external_lex_state = 2},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 5, .external_lex_state = 1},
  [20] = {.lex_state = 11, .external_lex_state = 1},
  [21] = {.lex_state = 11, .external_lex_state = 1},
  [22] = {.lex_state = 11, .external_lex_state = 1},
  [23] = {.lex_state = 11, .external_lex_state = 1},
  [24] = {.lex_state = 11, .external_lex_state = 1},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 89, .external_lex_state = 2},
  [29] = {.lex_state = 89, .external_lex_state = 2},
  [30] = {.lex_state = 89, .external_lex_state = 2},
  [31] = {.lex_state = 89, .external_lex_state = 2},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 89, .external_lex_state = 2},
  [34] = {.lex_state = 4, .external_lex_state = 1},
  [35] = {.lex_state = 89, .external_lex_state = 2},
  [36] = {.lex_state = 89, .external_lex_state = 2},
  [37] = {.lex_state = 89, .external_lex_state = 2},
  [38] = {.lex_state = 89, .external_lex_state = 2},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 11, .external_lex_state = 1},
  [41] = {.lex_state = 11, .external_lex_state = 1},
  [42] = {.lex_state = 11, .external_lex_state = 1},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 11, .external_lex_state = 1},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 11, .external_lex_state = 1},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 11, .external_lex_state = 1},
  [50] = {.lex_state = 11, .external_lex_state = 1},
  [51] = {.lex_state = 11, .external_lex_state = 1},
  [52] = {.lex_state = 11, .external_lex_state = 1},
  [53] = {.lex_state = 11, .external_lex_state = 1},
  [54] = {.lex_state = 11, .external_lex_state = 1},
  [55] = {.lex_state = 11, .external_lex_state = 1},
  [56] = {.lex_state = 11, .external_lex_state = 1},
  [57] = {.lex_state = 11, .external_lex_state = 1},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 11, .external_lex_state = 1},
  [60] = {.lex_state = 11, .external_lex_state = 1},
  [61] = {.lex_state = 11, .external_lex_state = 1},
  [62] = {.lex_state = 11, .external_lex_state = 1},
  [63] = {.lex_state = 11, .external_lex_state = 1},
  [64] = {.lex_state = 11, .external_lex_state = 1},
  [65] = {.lex_state = 11, .external_lex_state = 1},
  [66] = {.lex_state = 11, .external_lex_state = 1},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 11, .external_lex_state = 1},
  [69] = {.lex_state = 11, .external_lex_state = 1},
  [70] = {.lex_state = 11, .external_lex_state = 1},
  [71] = {.lex_state = 9, .external_lex_state = 2},
  [72] = {.lex_state = 9, .external_lex_state = 2},
  [73] = {.lex_state = 9, .external_lex_state = 2},
  [74] = {.lex_state = 9, .external_lex_state = 2},
  [75] = {.lex_state = 9, .external_lex_state = 2},
  [76] = {.lex_state = 9, .external_lex_state = 2},
  [77] = {.lex_state = 9, .external_lex_state = 2},
  [78] = {.lex_state = 9, .external_lex_state = 2},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 9, .external_lex_state = 2},
  [81] = {.lex_state = 5},
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
  [98] = {.lex_state = 9, .external_lex_state = 2},
  [99] = {.lex_state = 9, .external_lex_state = 2},
  [100] = {.lex_state = 9, .external_lex_state = 2},
  [101] = {.lex_state = 9, .external_lex_state = 2},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 89, .external_lex_state = 2},
  [104] = {.lex_state = 89, .external_lex_state = 2},
  [105] = {.lex_state = 89, .external_lex_state = 2},
  [106] = {.lex_state = 89, .external_lex_state = 2},
  [107] = {.lex_state = 89, .external_lex_state = 2},
  [108] = {.lex_state = 89, .external_lex_state = 2},
  [109] = {.lex_state = 89, .external_lex_state = 2},
  [110] = {.lex_state = 89, .external_lex_state = 2},
  [111] = {.lex_state = 89, .external_lex_state = 2},
  [112] = {.lex_state = 89, .external_lex_state = 2},
  [113] = {.lex_state = 89, .external_lex_state = 2},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 89, .external_lex_state = 2},
  [116] = {.lex_state = 89, .external_lex_state = 2},
  [117] = {.lex_state = 89, .external_lex_state = 2},
  [118] = {.lex_state = 89, .external_lex_state = 2},
  [119] = {.lex_state = 89, .external_lex_state = 2},
  [120] = {.lex_state = 89, .external_lex_state = 2},
  [121] = {.lex_state = 89, .external_lex_state = 2},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 89, .external_lex_state = 2},
  [124] = {.lex_state = 89, .external_lex_state = 2},
  [125] = {.lex_state = 89, .external_lex_state = 2},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 89, .external_lex_state = 2},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 11, .external_lex_state = 1},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 11, .external_lex_state = 1},
  [134] = {.lex_state = 11, .external_lex_state = 1},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 11, .external_lex_state = 1},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 18},
  [155] = {.lex_state = 18},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 13, .external_lex_state = 1},
  [173] = {.lex_state = 18},
  [174] = {.lex_state = 18},
  [175] = {.lex_state = 89, .external_lex_state = 1},
  [176] = {.lex_state = 89, .external_lex_state = 1},
  [177] = {.lex_state = 89, .external_lex_state = 1},
  [178] = {.lex_state = 89, .external_lex_state = 1},
  [179] = {.lex_state = 89, .external_lex_state = 1},
  [180] = {.lex_state = 89, .external_lex_state = 1},
  [181] = {.lex_state = 18},
  [182] = {.lex_state = 89, .external_lex_state = 1},
  [183] = {.lex_state = 17},
  [184] = {.lex_state = 89, .external_lex_state = 1},
  [185] = {.lex_state = 18},
  [186] = {.lex_state = 18},
  [187] = {.lex_state = 18},
  [188] = {.lex_state = 15},
  [189] = {.lex_state = 18},
  [190] = {.lex_state = 18},
  [191] = {.lex_state = 18},
  [192] = {.lex_state = 18},
  [193] = {.lex_state = 18},
  [194] = {.lex_state = 89, .external_lex_state = 1},
  [195] = {.lex_state = 15},
  [196] = {.lex_state = 89, .external_lex_state = 1},
  [197] = {.lex_state = 18},
  [198] = {.lex_state = 18},
  [199] = {.lex_state = 18},
  [200] = {.lex_state = 18},
  [201] = {.lex_state = 18},
  [202] = {.lex_state = 18},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 18},
  [205] = {.lex_state = 18},
  [206] = {.lex_state = 13},
  [207] = {.lex_state = 18},
  [208] = {.lex_state = 13},
  [209] = {.lex_state = 13},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 13},
  [212] = {.lex_state = 13},
  [213] = {.lex_state = 13},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 13},
  [216] = {.lex_state = 13},
  [217] = {.lex_state = 13},
  [218] = {.lex_state = 13},
  [219] = {.lex_state = 13},
  [220] = {.lex_state = 13},
  [221] = {.lex_state = 13},
  [222] = {.lex_state = 13},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 76},
  [225] = {.lex_state = 76},
  [226] = {.lex_state = 13},
  [227] = {.lex_state = 76},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 13},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 76},
  [233] = {.lex_state = 76},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 13},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 13},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 89},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 13},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 89},
  [257] = {.lex_state = 13},
  [258] = {.lex_state = 13},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 13},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 13},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 13},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 13},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 76},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 76},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 76},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 76},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 89},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 89},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 11},
  [304] = {.lex_state = 23},
  [305] = {.lex_state = 9},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 23},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 9},
  [314] = {.lex_state = 9},
  [315] = {.lex_state = 9},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 9},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 89},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 89},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 89},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 89},
  [329] = {.lex_state = 89},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 29},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 29},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 89},
  [339] = {.lex_state = 29},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 89},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 89},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 89},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 89},
  [353] = {.lex_state = 89},
  [354] = {.lex_state = 89},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 9},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 89},
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
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_POUND_LBRACE_BANGimportant_RBRACE] = ACTIONS(1),
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
    [sym_stylesheet] = STATE(343),
    [sym_import_statement] = STATE(9),
    [sym_media_statement] = STATE(9),
    [sym_charset_statement] = STATE(9),
    [sym_namespace_statement] = STATE(9),
    [sym_keyframes_statement] = STATE(9),
    [sym_supports_statement] = STATE(9),
    [sym_at_rule] = STATE(9),
    [sym_rule_set] = STATE(9),
    [sym_selectors] = STATE(310),
    [sym__selector] = STATE(178),
    [sym_universal_selector] = STATE(178),
    [sym_class_selector] = STATE(178),
    [sym_pseudo_class_selector] = STATE(178),
    [sym_pseudo_element_selector] = STATE(178),
    [sym_id_selector] = STATE(178),
    [sym_attribute_selector] = STATE(178),
    [sym_child_selector] = STATE(178),
    [sym_descendant_selector] = STATE(178),
    [sym_sibling_selector] = STATE(178),
    [sym_adjacent_sibling_selector] = STATE(178),
    [sym_namespace_selector] = STATE(178),
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
    STATE(306), 1,
      sym_selectors,
    STATE(325), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(6), 11,
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
    STATE(178), 12,
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
    STATE(306), 1,
      sym_selectors,
    STATE(344), 1,
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
    STATE(178), 12,
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
    STATE(306), 1,
      sym_selectors,
    STATE(320), 1,
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
    STATE(178), 12,
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
    STATE(306), 1,
      sym_selectors,
    STATE(348), 1,
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
    STATE(178), 12,
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
    STATE(306), 1,
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
    STATE(178), 12,
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
    STATE(306), 1,
      sym_selectors,
    STATE(330), 1,
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
    STATE(178), 12,
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
    STATE(306), 1,
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
    STATE(178), 12,
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
    STATE(310), 1,
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
    STATE(178), 12,
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
    STATE(310), 1,
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
    STATE(178), 12,
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
    STATE(58), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
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
    STATE(47), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(171), 8,
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
    STATE(171), 8,
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
    STATE(145), 1,
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
    STATE(196), 11,
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
    STATE(145), 1,
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
    STATE(196), 11,
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
    ACTIONS(222), 1,
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
    STATE(27), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(220), 3,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(158), 8,
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
    ACTIONS(216), 1,
      anon_sym_SEMI,
    ACTIONS(222), 1,
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
      sym_important,
    STATE(43), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(220), 3,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(158), 8,
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
    ACTIONS(222), 1,
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
    ACTIONS(238), 1,
      anon_sym_SEMI,
    ACTIONS(240), 1,
      sym_important,
    STATE(48), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(220), 3,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(158), 8,
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
    STATE(142), 1,
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
    STATE(217), 1,
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
    STATE(61), 1,
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
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_pseudo_element_arguments,
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
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_pseudo_class_arguments,
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
  [1542] = 14,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      sym_string_value,
    STATE(45), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(276), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1593] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      anon_sym_LPAREN2,
    ACTIONS(298), 1,
      sym_string_value,
    ACTIONS(301), 1,
      aux_sym_integer_value_token1,
    ACTIONS(304), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(310), 1,
      sym_plain_value,
    STATE(26), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(287), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(158), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1642] = 15,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      sym_string_value,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_plain_value,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    ACTIONS(317), 1,
      sym_important,
    STATE(26), 1,
      aux_sym_declaration_repeat1,
    STATE(158), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1695] = 10,
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
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(319), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(194), 12,
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
  [1738] = 10,
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
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(323), 2,
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
  [1781] = 10,
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
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(325), 2,
      sym_nesting_selector,
      sym_string_value,
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
  [1824] = 11,
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
    ACTIONS(327), 1,
      sym_identifier,
    STATE(134), 1,
      sym_namespace_selector,
    ACTIONS(196), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(196), 11,
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
  [1869] = 14,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(279), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1920] = 11,
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
    ACTIONS(331), 1,
      sym_identifier,
    STATE(145), 1,
      sym_namespace_selector,
    ACTIONS(196), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(196), 11,
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
  [1965] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(337), 3,
      anon_sym_STAR,
      anon_sym_LPAREN2,
      sym_string_value,
    ACTIONS(335), 6,
      anon_sym_SLASH,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(333), 10,
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
  [1998] = 10,
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
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(341), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(54), 12,
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
  [2041] = 10,
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
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(343), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(53), 12,
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
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(345), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(52), 12,
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
  [2127] = 10,
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
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(347), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(51), 12,
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
  [2170] = 14,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(273), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
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
  [2277] = 3,
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
  [2305] = 14,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      sym_string_value,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_plain_value,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(359), 1,
      sym_important,
    STATE(26), 1,
      aux_sym_declaration_repeat1,
    STATE(158), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(361), 18,
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
  [2383] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_POUND,
    ACTIONS(373), 1,
      anon_sym_LPAREN2,
    ACTIONS(376), 1,
      sym_string_value,
    ACTIONS(379), 1,
      aux_sym_integer_value_token1,
    ACTIONS(382), 1,
      aux_sym_float_value_token1,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(388), 1,
      sym_plain_value,
    STATE(45), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(365), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(391), 18,
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
  [2457] = 14,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(298), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2507] = 14,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      sym_string_value,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_plain_value,
    ACTIONS(399), 1,
      anon_sym_SEMI,
    ACTIONS(401), 1,
      sym_important,
    STATE(26), 1,
      aux_sym_declaration_repeat1,
    STATE(158), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(403), 18,
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
  [2585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(407), 18,
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
  [2613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DOT,
    ACTIONS(415), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(411), 17,
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
  [2643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DOT,
    ACTIONS(419), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(417), 17,
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
  [2673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DOT,
    ACTIONS(423), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(421), 17,
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
  [2703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DOT,
    ACTIONS(427), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(425), 17,
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
  [2733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(429), 18,
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
  [2761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(433), 18,
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
  [2789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(437), 18,
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
  [2817] = 14,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(290), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DOT,
    ACTIONS(445), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(443), 17,
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
  [2897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(447), 18,
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
  [2925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(451), 18,
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
  [2953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(455), 18,
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
  [2981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(459), 18,
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
  [3009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(463), 18,
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
  [3037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(467), 18,
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
  [3065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(471), 18,
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
  [3093] = 12,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    STATE(45), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(475), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3139] = 3,
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
  [3167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(481), 18,
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
  [3250] = 3,
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
  [3277] = 3,
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
  [3304] = 3,
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
  [3331] = 3,
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
  [3358] = 3,
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
  [3385] = 3,
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
  [3412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(519), 10,
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
  [3439] = 12,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    STATE(45), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(521), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3484] = 3,
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
  [3511] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
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
    ACTIONS(591), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(593), 10,
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
  [4001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(597), 10,
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
  [4028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(601), 10,
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
  [4055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATapply,
      sym_at_keyword,
    ACTIONS(605), 10,
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
  [4082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym_unit,
    ACTIONS(609), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(607), 10,
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
  [4110] = 3,
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
  [4136] = 3,
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
  [4162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(593), 10,
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
  [4188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(503), 10,
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
  [4214] = 3,
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
  [4240] = 3,
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
  [4266] = 3,
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
  [4292] = 3,
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
  [4318] = 3,
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
  [4344] = 3,
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
  [4370] = 3,
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
  [4396] = 12,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4440] = 3,
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
  [4466] = 3,
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
  [4492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(597), 10,
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
  [4518] = 3,
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
  [4544] = 3,
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
  [4570] = 3,
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
  [4596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(605), 10,
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
  [4622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym_unit,
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
  [4650] = 3,
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
  [4676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(601), 10,
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
  [4702] = 3,
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
  [4728] = 12,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4772] = 12,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4816] = 3,
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
  [4842] = 12,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(627), 10,
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
  [4911] = 5,
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
  [4940] = 3,
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
  [4965] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACK,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(637), 6,
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
  [4994] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACK,
    ACTIONS(339), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(637), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(333), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
  [5023] = 3,
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
  [5048] = 3,
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
  [5073] = 3,
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
  [5098] = 3,
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
  [5123] = 11,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    STATE(67), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5164] = 3,
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
  [5189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(659), 10,
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
  [5214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(663), 10,
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
  [5239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(667), 10,
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
  [5264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(671), 10,
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
  [5289] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
    ACTIONS(339), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(254), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(333), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
  [5318] = 11,
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
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    STATE(114), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(171), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5359] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(675), 1,
      anon_sym_LBRACK,
    ACTIONS(677), 1,
      anon_sym_POUND,
    ACTIONS(679), 1,
      sym_string_value,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(683), 1,
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
  [5397] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(685), 1,
      sym_string_value,
    ACTIONS(687), 1,
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
  [5435] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(689), 1,
      sym_string_value,
    ACTIONS(691), 1,
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
  [5473] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(693), 1,
      sym_string_value,
    ACTIONS(695), 1,
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
  [5511] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(675), 1,
      anon_sym_LBRACK,
    ACTIONS(677), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(697), 1,
      sym_string_value,
    ACTIONS(699), 1,
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
  [5549] = 10,
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
    ACTIONS(675), 1,
      anon_sym_LBRACK,
    ACTIONS(677), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(701), 1,
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
  [5587] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(675), 1,
      anon_sym_LBRACK,
    ACTIONS(677), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(703), 1,
      sym_string_value,
    ACTIONS(705), 1,
      sym_plain_value,
    STATE(235), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5625] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_SEMI,
    ACTIONS(713), 1,
      anon_sym_LPAREN2,
    ACTIONS(717), 1,
      anon_sym_selector,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(709), 2,
      anon_sym_SLASH,
      anon_sym_DASH,
    ACTIONS(711), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(715), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(262), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5661] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_LPAREN2,
    ACTIONS(717), 1,
      anon_sym_selector,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    ACTIONS(709), 2,
      anon_sym_SLASH,
      anon_sym_DASH,
    ACTIONS(711), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(715), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(260), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5697] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(723), 1,
      sym_string_value,
    ACTIONS(725), 1,
      sym_plain_value,
    STATE(160), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5735] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_LBRACK,
    ACTIONS(729), 1,
      anon_sym_POUND,
    ACTIONS(731), 1,
      anon_sym_LPAREN2,
    ACTIONS(733), 1,
      sym_string_value,
    ACTIONS(735), 1,
      aux_sym_integer_value_token1,
    ACTIONS(737), 1,
      aux_sym_float_value_token1,
    ACTIONS(739), 1,
      sym_identifier,
    ACTIONS(741), 1,
      sym_plain_value,
    STATE(154), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5773] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(220), 3,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(745), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(743), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5801] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(675), 1,
      anon_sym_LBRACK,
    ACTIONS(677), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(747), 1,
      sym_string_value,
    ACTIONS(749), 1,
      sym_plain_value,
    STATE(257), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5839] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(220), 3,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(751), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(287), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5867] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(675), 1,
      anon_sym_LBRACK,
    ACTIONS(677), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(753), 1,
      sym_string_value,
    ACTIONS(755), 1,
      sym_plain_value,
    STATE(258), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5905] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_LBRACK,
    ACTIONS(729), 1,
      anon_sym_POUND,
    ACTIONS(731), 1,
      anon_sym_LPAREN2,
    ACTIONS(735), 1,
      aux_sym_integer_value_token1,
    ACTIONS(737), 1,
      aux_sym_float_value_token1,
    ACTIONS(739), 1,
      sym_identifier,
    ACTIONS(757), 1,
      sym_string_value,
    ACTIONS(759), 1,
      sym_plain_value,
    STATE(155), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5943] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(675), 1,
      anon_sym_LBRACK,
    ACTIONS(677), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(761), 1,
      sym_string_value,
    ACTIONS(763), 1,
      sym_plain_value,
    STATE(272), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5981] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(675), 1,
      anon_sym_LBRACK,
    ACTIONS(677), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(765), 1,
      sym_string_value,
    ACTIONS(767), 1,
      sym_plain_value,
    STATE(222), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6019] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(675), 1,
      anon_sym_LBRACK,
    ACTIONS(677), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(769), 1,
      sym_string_value,
    ACTIONS(771), 1,
      sym_plain_value,
    STATE(268), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6057] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN2,
    ACTIONS(180), 1,
      aux_sym_integer_value_token1,
    ACTIONS(182), 1,
      aux_sym_float_value_token1,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(773), 1,
      sym_string_value,
    ACTIONS(775), 1,
      sym_plain_value,
    STATE(138), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6095] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_LBRACK,
    ACTIONS(729), 1,
      anon_sym_POUND,
    ACTIONS(731), 1,
      anon_sym_LPAREN2,
    ACTIONS(735), 1,
      aux_sym_integer_value_token1,
    ACTIONS(737), 1,
      aux_sym_float_value_token1,
    ACTIONS(739), 1,
      sym_identifier,
    ACTIONS(777), 1,
      sym_string_value,
    ACTIONS(779), 1,
      sym_plain_value,
    STATE(198), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6133] = 10,
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
    ACTIONS(675), 1,
      anon_sym_LBRACK,
    ACTIONS(677), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(781), 1,
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
  [6171] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(675), 1,
      anon_sym_LBRACK,
    ACTIONS(677), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(783), 1,
      sym_string_value,
    ACTIONS(785), 1,
      sym_plain_value,
    STATE(253), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6209] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
    ACTIONS(204), 1,
      aux_sym_integer_value_token1,
    ACTIONS(206), 1,
      aux_sym_float_value_token1,
    ACTIONS(675), 1,
      anon_sym_LBRACK,
    ACTIONS(677), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(787), 1,
      sym_string_value,
    ACTIONS(789), 1,
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
  [6247] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(220), 3,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(793), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(791), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_string_value,
  [6274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(337), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DASH,
    ACTIONS(333), 10,
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
  [6299] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_LPAREN2,
    ACTIONS(717), 1,
      anon_sym_selector,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(795), 1,
      anon_sym_SEMI,
    ACTIONS(797), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_block,
    ACTIONS(715), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(228), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6333] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_LPAREN2,
    ACTIONS(717), 1,
      anon_sym_selector,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(799), 1,
      anon_sym_SEMI,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_block,
    ACTIONS(715), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(231), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
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
  [6388] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_LBRACK,
    ACTIONS(807), 1,
      anon_sym_COLON_COLON,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(811), 1,
      anon_sym_GT,
    ACTIONS(813), 1,
      anon_sym_TILDE,
    ACTIONS(815), 1,
      anon_sym_PLUS,
    ACTIONS(817), 1,
      anon_sym_PIPE,
    ACTIONS(819), 1,
      sym__descendant_operator,
    ACTIONS(821), 1,
      sym__pseudo_class_selector_colon,
    STATE(298), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
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
  [6452] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_LBRACK,
    ACTIONS(807), 1,
      anon_sym_COLON_COLON,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(811), 1,
      anon_sym_GT,
    ACTIONS(813), 1,
      anon_sym_TILDE,
    ACTIONS(815), 1,
      anon_sym_PLUS,
    ACTIONS(817), 1,
      anon_sym_PIPE,
    ACTIONS(819), 1,
      sym__descendant_operator,
    ACTIONS(821), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    STATE(294), 1,
      aux_sym_selectors_repeat1,
  [6495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
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
  [6516] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_DOT,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    ACTIONS(805), 1,
      anon_sym_LBRACK,
    ACTIONS(807), 1,
      anon_sym_COLON_COLON,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(811), 1,
      anon_sym_GT,
    ACTIONS(813), 1,
      anon_sym_TILDE,
    ACTIONS(815), 1,
      anon_sym_PLUS,
    ACTIONS(817), 1,
      anon_sym_PIPE,
    ACTIONS(819), 1,
      sym__descendant_operator,
    ACTIONS(821), 1,
      sym__pseudo_class_selector_colon,
    STATE(290), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(629), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [6579] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_LBRACK,
    ACTIONS(807), 1,
      anon_sym_COLON_COLON,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(811), 1,
      anon_sym_GT,
    ACTIONS(813), 1,
      anon_sym_TILDE,
    ACTIONS(815), 1,
      anon_sym_PLUS,
    ACTIONS(817), 1,
      anon_sym_PIPE,
    ACTIONS(819), 1,
      sym__descendant_operator,
    ACTIONS(821), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(521), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6617] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
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
  [6641] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_LBRACK,
    ACTIONS(807), 1,
      anon_sym_COLON_COLON,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(811), 1,
      anon_sym_GT,
    ACTIONS(813), 1,
      anon_sym_TILDE,
    ACTIONS(815), 1,
      anon_sym_PLUS,
    ACTIONS(817), 1,
      anon_sym_PIPE,
    ACTIONS(819), 1,
      sym__descendant_operator,
    ACTIONS(821), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(833), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [6679] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_LPAREN2,
    ACTIONS(717), 1,
      anon_sym_selector,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(715), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(245), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6704] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_LPAREN2,
    ACTIONS(717), 1,
      anon_sym_selector,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(715), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(280), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6729] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_LPAREN2,
    ACTIONS(717), 1,
      anon_sym_selector,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(715), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(240), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      sym_unit,
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
  [6775] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_LPAREN2,
    ACTIONS(717), 1,
      anon_sym_selector,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(715), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(238), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_LPAREN2,
    ACTIONS(717), 1,
      anon_sym_selector,
    ACTIONS(837), 1,
      sym_identifier,
    ACTIONS(715), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(293), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6825] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_LPAREN2,
    ACTIONS(717), 1,
      anon_sym_selector,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(715), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(246), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6850] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_LPAREN2,
    ACTIONS(717), 1,
      anon_sym_selector,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(715), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(284), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6875] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_LPAREN2,
    ACTIONS(717), 1,
      anon_sym_selector,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(715), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(252), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6900] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_LBRACK,
    ACTIONS(807), 1,
      anon_sym_COLON_COLON,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(811), 1,
      anon_sym_GT,
    ACTIONS(813), 1,
      anon_sym_TILDE,
    ACTIONS(815), 1,
      anon_sym_PLUS,
    ACTIONS(817), 1,
      anon_sym_PIPE,
    ACTIONS(819), 1,
      sym__descendant_operator,
    ACTIONS(821), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
  [6937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      sym_unit,
    ACTIONS(607), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(609), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [6958] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_LBRACK,
    ACTIONS(807), 1,
      anon_sym_COLON_COLON,
    ACTIONS(809), 1,
      anon_sym_POUND,
    ACTIONS(811), 1,
      anon_sym_GT,
    ACTIONS(813), 1,
      anon_sym_TILDE,
    ACTIONS(815), 1,
      anon_sym_PLUS,
    ACTIONS(817), 1,
      anon_sym_PIPE,
    ACTIONS(819), 1,
      sym__descendant_operator,
    ACTIONS(821), 1,
      sym__pseudo_class_selector_colon,
  [6992] = 3,
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
  [7010] = 3,
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
  [7028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(673), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [7046] = 3,
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
  [7064] = 3,
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
  [7082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 4,
      anon_sym_SEMI,
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
  [7100] = 3,
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
  [7118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(661), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [7136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(665), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [7154] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym_arguments,
    ACTIONS(246), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(669), 6,
      anon_sym_SLASH,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      sym_identifier,
  [7194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SLASH,
    ACTIONS(843), 1,
      sym_unit,
    ACTIONS(607), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_SLASH,
    ACTIONS(845), 1,
      sym_unit,
    ACTIONS(615), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7232] = 9,
    ACTIONS(847), 1,
      anon_sym_SEMI,
    ACTIONS(849), 1,
      anon_sym_SLASH,
    ACTIONS(851), 1,
      anon_sym_LBRACK,
    ACTIONS(853), 1,
      anon_sym_COLON,
    ACTIONS(855), 1,
      anon_sym_,
    ACTIONS(859), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_apply_directive_repeat1,
    STATE(264), 1,
      aux_sym_apply_directive_repeat2,
    ACTIONS(857), 2,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [7261] = 3,
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
  [7277] = 3,
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
  [7293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_SLASH,
    ACTIONS(671), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7309] = 7,
    ACTIONS(853), 1,
      anon_sym_COLON,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_SLASH,
    ACTIONS(865), 1,
      anon_sym_LBRACK,
    ACTIONS(867), 1,
      anon_sym_,
    STATE(247), 1,
      aux_sym_apply_directive_repeat1,
    ACTIONS(861), 3,
      anon_sym_SEMI,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [7333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_SLASH,
    ACTIONS(627), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_SLASH,
    ACTIONS(667), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_SLASH,
    ACTIONS(663), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7381] = 3,
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
  [7397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_SLASH,
    ACTIONS(659), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7413] = 3,
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
  [7429] = 3,
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
  [7445] = 3,
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
  [7461] = 7,
    ACTIONS(853), 1,
      anon_sym_COLON,
    ACTIONS(855), 1,
      anon_sym_,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SEMI,
    STATE(249), 1,
      aux_sym_apply_directive_repeat1,
    STATE(255), 1,
      aux_sym_apply_directive_repeat2,
    ACTIONS(871), 2,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [7484] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
    ACTIONS(877), 1,
      aux_sym_integer_value_token1,
    STATE(308), 1,
      sym_integer_value,
    ACTIONS(875), 2,
      sym_from,
      sym_to,
    STATE(232), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7505] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym_integer_value_token1,
    ACTIONS(879), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      sym_integer_value,
    ACTIONS(875), 2,
      sym_from,
      sym_to,
    STATE(232), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7526] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(883), 1,
      anon_sym_SLASH,
    ACTIONS(885), 1,
      anon_sym_RBRACK,
    STATE(302), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(887), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7547] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym_integer_value_token1,
    ACTIONS(889), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      sym_integer_value,
    ACTIONS(875), 2,
      sym_from,
      sym_to,
    STATE(225), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7568] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_LBRACE,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    ACTIONS(893), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      sym_block,
    STATE(259), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(895), 2,
      anon_sym_and,
      anon_sym_or,
  [7591] = 7,
    ACTIONS(853), 1,
      anon_sym_COLON,
    ACTIONS(855), 1,
      anon_sym_,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_SEMI,
    STATE(249), 1,
      aux_sym_apply_directive_repeat1,
    STATE(270), 1,
      aux_sym_apply_directive_repeat2,
    ACTIONS(899), 2,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [7614] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(883), 1,
      anon_sym_SLASH,
    ACTIONS(901), 1,
      anon_sym_RBRACK,
    STATE(296), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(887), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7635] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    ACTIONS(903), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_block,
    STATE(271), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(895), 2,
      anon_sym_and,
      anon_sym_or,
  [7658] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
    ACTIONS(910), 1,
      aux_sym_integer_value_token1,
    STATE(308), 1,
      sym_integer_value,
    ACTIONS(907), 2,
      sym_from,
      sym_to,
    STATE(232), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7679] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym_integer_value_token1,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      sym_integer_value,
    ACTIONS(875), 2,
      sym_from,
      sym_to,
    STATE(224), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7700] = 7,
    ACTIONS(853), 1,
      anon_sym_COLON,
    ACTIONS(855), 1,
      anon_sym_,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_SEMI,
    STATE(223), 1,
      aux_sym_apply_directive_repeat1,
    STATE(266), 1,
      aux_sym_apply_directive_repeat2,
    ACTIONS(917), 2,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [7723] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(883), 1,
      anon_sym_SLASH,
    ACTIONS(919), 1,
      anon_sym_RBRACK,
    STATE(291), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(887), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7768] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      sym_block,
    STATE(287), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(895), 2,
      anon_sym_and,
      anon_sym_or,
  [7788] = 5,
    ACTIONS(853), 1,
      anon_sym_COLON,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_,
    STATE(242), 1,
      aux_sym_apply_directive_repeat1,
    ACTIONS(925), 3,
      anon_sym_SEMI,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [7806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7818] = 4,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_LBRACK,
    ACTIONS(935), 1,
      anon_sym_,
    ACTIONS(931), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [7834] = 5,
    ACTIONS(853), 1,
      anon_sym_COLON,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_,
    STATE(249), 1,
      aux_sym_apply_directive_repeat1,
    ACTIONS(937), 3,
      anon_sym_SEMI,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [7852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7876] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_LBRACE,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      sym_block,
    STATE(282), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(895), 2,
      anon_sym_and,
      anon_sym_or,
  [7896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7908] = 5,
    ACTIONS(853), 1,
      anon_sym_COLON,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_,
    STATE(249), 1,
      aux_sym_apply_directive_repeat1,
    ACTIONS(947), 3,
      anon_sym_SEMI,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [7926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_SLASH,
    ACTIONS(951), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(887), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7942] = 5,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_,
    ACTIONS(953), 1,
      anon_sym_COLON,
    STATE(249), 1,
      aux_sym_apply_directive_repeat1,
    ACTIONS(931), 3,
      anon_sym_SEMI,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [7960] = 4,
    ACTIONS(607), 1,
      anon_sym_,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(956), 1,
      sym_unit,
    ACTIONS(609), 3,
      anon_sym_SEMI,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [7975] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
    ACTIONS(958), 1,
      sym_string_value,
    ACTIONS(960), 1,
      sym_identifier,
    STATE(205), 1,
      sym_arguments,
    STATE(336), 1,
      sym_call_expression,
  [7994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(962), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [8007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_SLASH,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
    ACTIONS(887), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8022] = 3,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_,
    ACTIONS(966), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [8035] = 5,
    ACTIONS(855), 1,
      anon_sym_,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_SEMI,
    STATE(267), 1,
      aux_sym_apply_directive_repeat2,
    ACTIONS(972), 2,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [8052] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
    ACTIONS(960), 1,
      sym_identifier,
    ACTIONS(974), 1,
      sym_string_value,
    STATE(205), 1,
      sym_arguments,
    STATE(323), 1,
      sym_call_expression,
  [8071] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_SLASH,
    ACTIONS(976), 1,
      anon_sym_RBRACK,
    ACTIONS(887), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_SLASH,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
    ACTIONS(887), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8101] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_LBRACE,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    ACTIONS(980), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      sym_block,
    STATE(275), 1,
      aux_sym_import_statement_repeat1,
  [8120] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    ACTIONS(982), 1,
      anon_sym_SEMI,
    STATE(301), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(895), 2,
      anon_sym_and,
      anon_sym_or,
  [8137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_SLASH,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
    ACTIONS(887), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    ACTIONS(986), 1,
      anon_sym_SEMI,
    STATE(292), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(895), 2,
      anon_sym_and,
      anon_sym_or,
  [8169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_SLASH,
    ACTIONS(988), 1,
      anon_sym_SEMI,
    ACTIONS(887), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8184] = 5,
    ACTIONS(855), 1,
      anon_sym_,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_SEMI,
    STATE(267), 1,
      aux_sym_apply_directive_repeat2,
    ACTIONS(899), 2,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [8201] = 5,
    ACTIONS(855), 1,
      anon_sym_,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_SEMI,
    STATE(269), 1,
      aux_sym_apply_directive_repeat2,
    ACTIONS(992), 2,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [8218] = 5,
    ACTIONS(855), 1,
      anon_sym_,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SEMI,
    STATE(267), 1,
      aux_sym_apply_directive_repeat2,
    ACTIONS(871), 2,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [8235] = 4,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_,
    STATE(267), 1,
      aux_sym_apply_directive_repeat2,
    ACTIONS(861), 3,
      anon_sym_SEMI,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [8250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_SLASH,
    ACTIONS(997), 1,
      anon_sym_SEMI,
    ACTIONS(887), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8265] = 5,
    ACTIONS(855), 1,
      anon_sym_,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_SEMI,
    STATE(267), 1,
      aux_sym_apply_directive_repeat2,
    ACTIONS(917), 2,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [8282] = 5,
    ACTIONS(855), 1,
      anon_sym_,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_SEMI,
    STATE(267), 1,
      aux_sym_apply_directive_repeat2,
    ACTIONS(992), 2,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [8299] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    ACTIONS(999), 1,
      anon_sym_SEMI,
    STATE(118), 1,
      sym_block,
    STATE(275), 1,
      aux_sym_import_statement_repeat1,
  [8318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_SLASH,
    ACTIONS(1001), 1,
      anon_sym_RBRACK,
    ACTIONS(887), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [8357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(962), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [8371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_COLON,
    ACTIONS(923), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [8397] = 3,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_,
    ACTIONS(1012), 3,
      anon_sym_SEMI,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [8409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_block,
    ACTIONS(895), 2,
      anon_sym_and,
      anon_sym_or,
  [8437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [8447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_LBRACE,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      sym_block,
    STATE(275), 1,
      aux_sym_import_statement_repeat1,
  [8463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [8473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_block,
    ACTIONS(895), 2,
      anon_sym_and,
      anon_sym_or,
  [8487] = 3,
    ACTIONS(627), 1,
      anon_sym_,
    ACTIONS(859), 1,
      sym_comment,
    ACTIONS(629), 3,
      anon_sym_SEMI,
      anon_sym_POUND_LBRACE_BANGimportant_RBRACE,
      sym_important,
  [8499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [8509] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      sym_block,
    STATE(275), 1,
      aux_sym_import_statement_repeat1,
  [8525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(1020), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_RBRACK,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
    STATE(289), 1,
      aux_sym_grid_value_repeat1,
  [8552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [8565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      aux_sym_grid_value_repeat1,
  [8578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    ACTIONS(1030), 1,
      anon_sym_SEMI,
    STATE(275), 1,
      aux_sym_import_statement_repeat1,
  [8591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
    ACTIONS(895), 2,
      anon_sym_and,
      anon_sym_or,
  [8602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(1034), 1,
      anon_sym_LBRACE,
    STATE(300), 1,
      aux_sym_selectors_repeat1,
  [8615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      sym_string_value,
    ACTIONS(1038), 1,
      sym_identifier,
    STATE(346), 1,
      sym_call_expression,
  [8628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(1040), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      aux_sym_grid_value_repeat1,
  [8641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [8654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [8667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      sym_string_value,
    ACTIONS(1049), 1,
      sym_identifier,
    STATE(327), 1,
      sym_call_expression,
  [8680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_LBRACE,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_selectors_repeat1,
  [8693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    ACTIONS(1054), 1,
      anon_sym_SEMI,
    STATE(275), 1,
      aux_sym_import_statement_repeat1,
  [8706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(1056), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      aux_sym_grid_value_repeat1,
  [8719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      sym_unit,
    ACTIONS(607), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [8730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      aux_sym_color_value_token1,
    ACTIONS(1062), 1,
      sym_identifier,
  [8740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym_integer_value_token1,
    STATE(322), 1,
      sym_integer_value,
  [8750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_block,
  [8760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym_identifier,
    ACTIONS(1064), 1,
      aux_sym_color_value_token1,
  [8770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_LBRACE,
    STATE(281), 1,
      sym_block,
  [8780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
  [8790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_block,
  [8800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_SEMI,
    ACTIONS(1070), 1,
      anon_sym_RBRACE,
  [8810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_keyframe_block_list,
  [8820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym_integer_value_token1,
    STATE(337), 1,
      sym_integer_value,
  [8830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym_integer_value_token1,
    STATE(341), 1,
      sym_integer_value,
  [8840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      aux_sym_integer_value_token1,
    STATE(265), 1,
      sym_integer_value,
  [8850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym_arguments,
  [8860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      aux_sym_integer_value_token1,
    STATE(278), 1,
      sym_integer_value,
  [8870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_keyframe_block_list,
  [8880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_SEMI,
  [8887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
  [8894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      sym_identifier,
  [8901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_RBRACK,
  [8908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_SEMI,
  [8915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym_identifier,
  [8922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
  [8929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      sym_identifier,
  [8936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_SEMI,
  [8943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym_identifier,
  [8950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      sym_identifier,
  [8957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
  [8964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_SEMI,
  [8971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_RBRACE,
  [8978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_color_value_token1,
  [8985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_SEMI,
  [8992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      aux_sym_color_value_token1,
  [8999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_SEMI,
  [9006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_RBRACK,
  [9013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      sym_identifier,
  [9020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      aux_sym_color_value_token1,
  [9027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_SEMI,
  [9034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_RBRACK,
  [9041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_SEMI,
  [9048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      ts_builtin_sym_end,
  [9055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_RBRACE,
  [9062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      sym_identifier,
  [9069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      anon_sym_SEMI,
  [9076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      sym_identifier,
  [9083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_RBRACE,
  [9090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_SEMI,
  [9097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      sym_identifier,
  [9104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_SEMI,
  [9111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      sym_identifier,
  [9118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      sym_identifier,
  [9125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      sym_identifier,
  [9132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_SEMI,
  [9139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_SEMI,
  [9146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_LPAREN2,
  [9153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_SEMI,
  [9160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
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
  [SMALL_STATE(26)] = 1593,
  [SMALL_STATE(27)] = 1642,
  [SMALL_STATE(28)] = 1695,
  [SMALL_STATE(29)] = 1738,
  [SMALL_STATE(30)] = 1781,
  [SMALL_STATE(31)] = 1824,
  [SMALL_STATE(32)] = 1869,
  [SMALL_STATE(33)] = 1920,
  [SMALL_STATE(34)] = 1965,
  [SMALL_STATE(35)] = 1998,
  [SMALL_STATE(36)] = 2041,
  [SMALL_STATE(37)] = 2084,
  [SMALL_STATE(38)] = 2127,
  [SMALL_STATE(39)] = 2170,
  [SMALL_STATE(40)] = 2221,
  [SMALL_STATE(41)] = 2249,
  [SMALL_STATE(42)] = 2277,
  [SMALL_STATE(43)] = 2305,
  [SMALL_STATE(44)] = 2355,
  [SMALL_STATE(45)] = 2383,
  [SMALL_STATE(46)] = 2429,
  [SMALL_STATE(47)] = 2457,
  [SMALL_STATE(48)] = 2507,
  [SMALL_STATE(49)] = 2557,
  [SMALL_STATE(50)] = 2585,
  [SMALL_STATE(51)] = 2613,
  [SMALL_STATE(52)] = 2643,
  [SMALL_STATE(53)] = 2673,
  [SMALL_STATE(54)] = 2703,
  [SMALL_STATE(55)] = 2733,
  [SMALL_STATE(56)] = 2761,
  [SMALL_STATE(57)] = 2789,
  [SMALL_STATE(58)] = 2817,
  [SMALL_STATE(59)] = 2867,
  [SMALL_STATE(60)] = 2897,
  [SMALL_STATE(61)] = 2925,
  [SMALL_STATE(62)] = 2953,
  [SMALL_STATE(63)] = 2981,
  [SMALL_STATE(64)] = 3009,
  [SMALL_STATE(65)] = 3037,
  [SMALL_STATE(66)] = 3065,
  [SMALL_STATE(67)] = 3093,
  [SMALL_STATE(68)] = 3139,
  [SMALL_STATE(69)] = 3167,
  [SMALL_STATE(70)] = 3195,
  [SMALL_STATE(71)] = 3223,
  [SMALL_STATE(72)] = 3250,
  [SMALL_STATE(73)] = 3277,
  [SMALL_STATE(74)] = 3304,
  [SMALL_STATE(75)] = 3331,
  [SMALL_STATE(76)] = 3358,
  [SMALL_STATE(77)] = 3385,
  [SMALL_STATE(78)] = 3412,
  [SMALL_STATE(79)] = 3439,
  [SMALL_STATE(80)] = 3484,
  [SMALL_STATE(81)] = 3511,
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
  [SMALL_STATE(99)] = 4001,
  [SMALL_STATE(100)] = 4028,
  [SMALL_STATE(101)] = 4055,
  [SMALL_STATE(102)] = 4082,
  [SMALL_STATE(103)] = 4110,
  [SMALL_STATE(104)] = 4136,
  [SMALL_STATE(105)] = 4162,
  [SMALL_STATE(106)] = 4188,
  [SMALL_STATE(107)] = 4214,
  [SMALL_STATE(108)] = 4240,
  [SMALL_STATE(109)] = 4266,
  [SMALL_STATE(110)] = 4292,
  [SMALL_STATE(111)] = 4318,
  [SMALL_STATE(112)] = 4344,
  [SMALL_STATE(113)] = 4370,
  [SMALL_STATE(114)] = 4396,
  [SMALL_STATE(115)] = 4440,
  [SMALL_STATE(116)] = 4466,
  [SMALL_STATE(117)] = 4492,
  [SMALL_STATE(118)] = 4518,
  [SMALL_STATE(119)] = 4544,
  [SMALL_STATE(120)] = 4570,
  [SMALL_STATE(121)] = 4596,
  [SMALL_STATE(122)] = 4622,
  [SMALL_STATE(123)] = 4650,
  [SMALL_STATE(124)] = 4676,
  [SMALL_STATE(125)] = 4702,
  [SMALL_STATE(126)] = 4728,
  [SMALL_STATE(127)] = 4772,
  [SMALL_STATE(128)] = 4816,
  [SMALL_STATE(129)] = 4842,
  [SMALL_STATE(130)] = 4886,
  [SMALL_STATE(131)] = 4911,
  [SMALL_STATE(132)] = 4940,
  [SMALL_STATE(133)] = 4965,
  [SMALL_STATE(134)] = 4994,
  [SMALL_STATE(135)] = 5023,
  [SMALL_STATE(136)] = 5048,
  [SMALL_STATE(137)] = 5073,
  [SMALL_STATE(138)] = 5098,
  [SMALL_STATE(139)] = 5123,
  [SMALL_STATE(140)] = 5164,
  [SMALL_STATE(141)] = 5189,
  [SMALL_STATE(142)] = 5214,
  [SMALL_STATE(143)] = 5239,
  [SMALL_STATE(144)] = 5264,
  [SMALL_STATE(145)] = 5289,
  [SMALL_STATE(146)] = 5318,
  [SMALL_STATE(147)] = 5359,
  [SMALL_STATE(148)] = 5397,
  [SMALL_STATE(149)] = 5435,
  [SMALL_STATE(150)] = 5473,
  [SMALL_STATE(151)] = 5511,
  [SMALL_STATE(152)] = 5549,
  [SMALL_STATE(153)] = 5587,
  [SMALL_STATE(154)] = 5625,
  [SMALL_STATE(155)] = 5661,
  [SMALL_STATE(156)] = 5697,
  [SMALL_STATE(157)] = 5735,
  [SMALL_STATE(158)] = 5773,
  [SMALL_STATE(159)] = 5801,
  [SMALL_STATE(160)] = 5839,
  [SMALL_STATE(161)] = 5867,
  [SMALL_STATE(162)] = 5905,
  [SMALL_STATE(163)] = 5943,
  [SMALL_STATE(164)] = 5981,
  [SMALL_STATE(165)] = 6019,
  [SMALL_STATE(166)] = 6057,
  [SMALL_STATE(167)] = 6095,
  [SMALL_STATE(168)] = 6133,
  [SMALL_STATE(169)] = 6171,
  [SMALL_STATE(170)] = 6209,
  [SMALL_STATE(171)] = 6247,
  [SMALL_STATE(172)] = 6274,
  [SMALL_STATE(173)] = 6299,
  [SMALL_STATE(174)] = 6333,
  [SMALL_STATE(175)] = 6367,
  [SMALL_STATE(176)] = 6388,
  [SMALL_STATE(177)] = 6431,
  [SMALL_STATE(178)] = 6452,
  [SMALL_STATE(179)] = 6495,
  [SMALL_STATE(180)] = 6516,
  [SMALL_STATE(181)] = 6559,
  [SMALL_STATE(182)] = 6579,
  [SMALL_STATE(183)] = 6617,
  [SMALL_STATE(184)] = 6641,
  [SMALL_STATE(185)] = 6679,
  [SMALL_STATE(186)] = 6704,
  [SMALL_STATE(187)] = 6729,
  [SMALL_STATE(188)] = 6754,
  [SMALL_STATE(189)] = 6775,
  [SMALL_STATE(190)] = 6800,
  [SMALL_STATE(191)] = 6825,
  [SMALL_STATE(192)] = 6850,
  [SMALL_STATE(193)] = 6875,
  [SMALL_STATE(194)] = 6900,
  [SMALL_STATE(195)] = 6937,
  [SMALL_STATE(196)] = 6958,
  [SMALL_STATE(197)] = 6992,
  [SMALL_STATE(198)] = 7010,
  [SMALL_STATE(199)] = 7028,
  [SMALL_STATE(200)] = 7046,
  [SMALL_STATE(201)] = 7064,
  [SMALL_STATE(202)] = 7082,
  [SMALL_STATE(203)] = 7100,
  [SMALL_STATE(204)] = 7118,
  [SMALL_STATE(205)] = 7136,
  [SMALL_STATE(206)] = 7154,
  [SMALL_STATE(207)] = 7176,
  [SMALL_STATE(208)] = 7194,
  [SMALL_STATE(209)] = 7213,
  [SMALL_STATE(210)] = 7232,
  [SMALL_STATE(211)] = 7261,
  [SMALL_STATE(212)] = 7277,
  [SMALL_STATE(213)] = 7293,
  [SMALL_STATE(214)] = 7309,
  [SMALL_STATE(215)] = 7333,
  [SMALL_STATE(216)] = 7349,
  [SMALL_STATE(217)] = 7365,
  [SMALL_STATE(218)] = 7381,
  [SMALL_STATE(219)] = 7397,
  [SMALL_STATE(220)] = 7413,
  [SMALL_STATE(221)] = 7429,
  [SMALL_STATE(222)] = 7445,
  [SMALL_STATE(223)] = 7461,
  [SMALL_STATE(224)] = 7484,
  [SMALL_STATE(225)] = 7505,
  [SMALL_STATE(226)] = 7526,
  [SMALL_STATE(227)] = 7547,
  [SMALL_STATE(228)] = 7568,
  [SMALL_STATE(229)] = 7591,
  [SMALL_STATE(230)] = 7614,
  [SMALL_STATE(231)] = 7635,
  [SMALL_STATE(232)] = 7658,
  [SMALL_STATE(233)] = 7679,
  [SMALL_STATE(234)] = 7700,
  [SMALL_STATE(235)] = 7723,
  [SMALL_STATE(236)] = 7744,
  [SMALL_STATE(237)] = 7756,
  [SMALL_STATE(238)] = 7768,
  [SMALL_STATE(239)] = 7788,
  [SMALL_STATE(240)] = 7806,
  [SMALL_STATE(241)] = 7818,
  [SMALL_STATE(242)] = 7834,
  [SMALL_STATE(243)] = 7852,
  [SMALL_STATE(244)] = 7864,
  [SMALL_STATE(245)] = 7876,
  [SMALL_STATE(246)] = 7896,
  [SMALL_STATE(247)] = 7908,
  [SMALL_STATE(248)] = 7926,
  [SMALL_STATE(249)] = 7942,
  [SMALL_STATE(250)] = 7960,
  [SMALL_STATE(251)] = 7975,
  [SMALL_STATE(252)] = 7994,
  [SMALL_STATE(253)] = 8007,
  [SMALL_STATE(254)] = 8022,
  [SMALL_STATE(255)] = 8035,
  [SMALL_STATE(256)] = 8052,
  [SMALL_STATE(257)] = 8071,
  [SMALL_STATE(258)] = 8086,
  [SMALL_STATE(259)] = 8101,
  [SMALL_STATE(260)] = 8120,
  [SMALL_STATE(261)] = 8137,
  [SMALL_STATE(262)] = 8152,
  [SMALL_STATE(263)] = 8169,
  [SMALL_STATE(264)] = 8184,
  [SMALL_STATE(265)] = 8201,
  [SMALL_STATE(266)] = 8218,
  [SMALL_STATE(267)] = 8235,
  [SMALL_STATE(268)] = 8250,
  [SMALL_STATE(269)] = 8265,
  [SMALL_STATE(270)] = 8282,
  [SMALL_STATE(271)] = 8299,
  [SMALL_STATE(272)] = 8318,
  [SMALL_STATE(273)] = 8333,
  [SMALL_STATE(274)] = 8347,
  [SMALL_STATE(275)] = 8357,
  [SMALL_STATE(276)] = 8371,
  [SMALL_STATE(277)] = 8385,
  [SMALL_STATE(278)] = 8397,
  [SMALL_STATE(279)] = 8409,
  [SMALL_STATE(280)] = 8423,
  [SMALL_STATE(281)] = 8437,
  [SMALL_STATE(282)] = 8447,
  [SMALL_STATE(283)] = 8463,
  [SMALL_STATE(284)] = 8473,
  [SMALL_STATE(285)] = 8487,
  [SMALL_STATE(286)] = 8499,
  [SMALL_STATE(287)] = 8509,
  [SMALL_STATE(288)] = 8525,
  [SMALL_STATE(289)] = 8539,
  [SMALL_STATE(290)] = 8552,
  [SMALL_STATE(291)] = 8565,
  [SMALL_STATE(292)] = 8578,
  [SMALL_STATE(293)] = 8591,
  [SMALL_STATE(294)] = 8602,
  [SMALL_STATE(295)] = 8615,
  [SMALL_STATE(296)] = 8628,
  [SMALL_STATE(297)] = 8641,
  [SMALL_STATE(298)] = 8654,
  [SMALL_STATE(299)] = 8667,
  [SMALL_STATE(300)] = 8680,
  [SMALL_STATE(301)] = 8693,
  [SMALL_STATE(302)] = 8706,
  [SMALL_STATE(303)] = 8719,
  [SMALL_STATE(304)] = 8730,
  [SMALL_STATE(305)] = 8740,
  [SMALL_STATE(306)] = 8750,
  [SMALL_STATE(307)] = 8760,
  [SMALL_STATE(308)] = 8770,
  [SMALL_STATE(309)] = 8780,
  [SMALL_STATE(310)] = 8790,
  [SMALL_STATE(311)] = 8800,
  [SMALL_STATE(312)] = 8810,
  [SMALL_STATE(313)] = 8820,
  [SMALL_STATE(314)] = 8830,
  [SMALL_STATE(315)] = 8840,
  [SMALL_STATE(316)] = 8850,
  [SMALL_STATE(317)] = 8860,
  [SMALL_STATE(318)] = 8870,
  [SMALL_STATE(319)] = 8880,
  [SMALL_STATE(320)] = 8887,
  [SMALL_STATE(321)] = 8894,
  [SMALL_STATE(322)] = 8901,
  [SMALL_STATE(323)] = 8908,
  [SMALL_STATE(324)] = 8915,
  [SMALL_STATE(325)] = 8922,
  [SMALL_STATE(326)] = 8929,
  [SMALL_STATE(327)] = 8936,
  [SMALL_STATE(328)] = 8943,
  [SMALL_STATE(329)] = 8950,
  [SMALL_STATE(330)] = 8957,
  [SMALL_STATE(331)] = 8964,
  [SMALL_STATE(332)] = 8971,
  [SMALL_STATE(333)] = 8978,
  [SMALL_STATE(334)] = 8985,
  [SMALL_STATE(335)] = 8992,
  [SMALL_STATE(336)] = 8999,
  [SMALL_STATE(337)] = 9006,
  [SMALL_STATE(338)] = 9013,
  [SMALL_STATE(339)] = 9020,
  [SMALL_STATE(340)] = 9027,
  [SMALL_STATE(341)] = 9034,
  [SMALL_STATE(342)] = 9041,
  [SMALL_STATE(343)] = 9048,
  [SMALL_STATE(344)] = 9055,
  [SMALL_STATE(345)] = 9062,
  [SMALL_STATE(346)] = 9069,
  [SMALL_STATE(347)] = 9076,
  [SMALL_STATE(348)] = 9083,
  [SMALL_STATE(349)] = 9090,
  [SMALL_STATE(350)] = 9097,
  [SMALL_STATE(351)] = 9104,
  [SMALL_STATE(352)] = 9111,
  [SMALL_STATE(353)] = 9118,
  [SMALL_STATE(354)] = 9125,
  [SMALL_STATE(355)] = 9132,
  [SMALL_STATE(356)] = 9139,
  [SMALL_STATE(357)] = 9146,
  [SMALL_STATE(358)] = 9153,
  [SMALL_STATE(359)] = 9160,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(162),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(185),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(147),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(295),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(350),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(192),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(324),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(178),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(44),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(347),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(354),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(329),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(179),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(173),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(345),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(157),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(189),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(165),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(299),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(328),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(186),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(33),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(178),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(44),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(347),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(354),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(329),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(175),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(174),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(345),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 14),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(156),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(168),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(335),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(161),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(158),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(102),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(122),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(81),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(158),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 14),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(168),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(335),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(161),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(171),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(102),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(122),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(81),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(171),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_directive, 9),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_directive, 9),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_directive, 8),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_directive, 8),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_directive, 7),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_directive, 7),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_directive, 6),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_directive, 6),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_directive, 5),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_directive, 5),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_directive, 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_directive, 4),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_directive, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_directive, 3),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apply_directive_repeat2, 2),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_directive_repeat2, 2),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(308),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(303),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apply_directive_repeat2, 5),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_directive_repeat2, 5),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apply_directive_repeat1, 2),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_directive_repeat1, 2),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apply_directive_repeat2, 6),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_directive_repeat2, 6),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 16),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apply_directive_repeat2, 3),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_directive_repeat2, 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2),
  [953] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_directive_repeat1, 2), SHIFT_REPEAT(353),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apply_directive_repeat1, 5),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_directive_repeat1, 5),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_directive_repeat2, 2), SHIFT_REPEAT(359),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(193),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apply_directive_repeat2, 4),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_directive_repeat2, 4),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [1020] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(139),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2), SHIFT_REPEAT(170),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1042] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(13),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1051] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(30),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 14),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1116] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
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
