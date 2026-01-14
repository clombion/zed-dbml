#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 189
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 13

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_Project = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_Table = 5,
  anon_sym_as = 6,
  anon_sym_TablePartial = 7,
  anon_sym_enum = 8,
  anon_sym_Enum = 9,
  anon_sym_Ref = 10,
  anon_sym_COLON = 11,
  anon_sym_TableGroup = 12,
  anon_sym_TILDE = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_COMMA = 16,
  anon_sym_indexes = 17,
  anon_sym_checks = 18,
  anon_sym_Note = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_pk = 22,
  anon_sym_primarykey = 23,
  anon_sym_null = 24,
  anon_sym_notnull = 25,
  anon_sym_unique = 26,
  anon_sym_increment = 27,
  anon_sym_true = 28,
  anon_sym_false = 29,
  anon_sym_cascade = 30,
  anon_sym_restrict = 31,
  anon_sym_noaction = 32,
  anon_sym_setnull = 33,
  anon_sym_setdefault = 34,
  anon_sym_ref = 35,
  anon_sym_LT_GT = 36,
  anon_sym_LT = 37,
  anon_sym_GT = 38,
  anon_sym_DASH = 39,
  anon_sym_DOT = 40,
  anon_sym_SQUOTE = 41,
  aux_sym_single_quote_string_token1 = 42,
  aux_sym_single_quote_string_token2 = 43,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 44,
  aux_sym_triple_quote_string_token1 = 45,
  aux_sym_triple_quote_string_token2 = 46,
  anon_sym_DQUOTE = 47,
  aux_sym_quoted_identifier_token1 = 48,
  anon_sym_BQUOTE = 49,
  aux_sym_expression_literal_token1 = 50,
  sym_number_literal = 51,
  sym_hex_color = 52,
  sym_comment = 53,
  sym_source_file = 54,
  sym__definition = 55,
  sym_project_definition = 56,
  sym_table_definition = 57,
  sym_table_partial_definition = 58,
  sym_enum_definition = 59,
  sym_ref_definition = 60,
  sym_table_group_definition = 61,
  sym__table_group_item = 62,
  sym_table_body = 63,
  sym__table_body_item = 64,
  sym_partial_injection = 65,
  sym_column_definition = 66,
  sym__column_type = 67,
  sym_indexes_definition = 68,
  sym_index_item = 69,
  sym_composite_index = 70,
  sym_checks_definition = 71,
  sym_check_item = 72,
  sym_note_definition = 73,
  sym_sticky_note_definition = 74,
  sym__settings_block = 75,
  sym_inline_settings = 76,
  sym_block_settings = 77,
  sym__setting = 78,
  sym_setting_kv = 79,
  sym_setting_keyword = 80,
  sym__setting_value = 81,
  sym_ref_action = 82,
  sym_inline_ref_setting = 83,
  sym_relationship_body = 84,
  sym_ref_settings = 85,
  sym_relationship_operator = 86,
  sym__column_ref = 87,
  sym_composite_column_ref = 88,
  sym_enum_value = 89,
  sym__qualified_identifier = 90,
  sym__identifier = 91,
  sym__string_literal = 92,
  sym_single_quote_string = 93,
  sym_triple_quote_string = 94,
  sym_quoted_identifier = 95,
  sym_expression_literal = 96,
  aux_sym_source_file_repeat1 = 97,
  aux_sym_project_definition_repeat1 = 98,
  aux_sym_enum_definition_repeat1 = 99,
  aux_sym_table_group_definition_repeat1 = 100,
  aux_sym_table_body_repeat1 = 101,
  aux_sym_indexes_definition_repeat1 = 102,
  aux_sym_composite_index_repeat1 = 103,
  aux_sym_checks_definition_repeat1 = 104,
  aux_sym__settings_block_repeat1 = 105,
  aux_sym_setting_kv_repeat1 = 106,
  aux_sym_composite_column_ref_repeat1 = 107,
  aux_sym__qualified_identifier_repeat1 = 108,
  aux_sym_single_quote_string_repeat1 = 109,
  aux_sym_triple_quote_string_repeat1 = 110,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_Project] = "Project",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_Table] = "Table",
  [anon_sym_as] = "as",
  [anon_sym_TablePartial] = "TablePartial",
  [anon_sym_enum] = "enum",
  [anon_sym_Enum] = "Enum",
  [anon_sym_Ref] = "Ref",
  [anon_sym_COLON] = ":",
  [anon_sym_TableGroup] = "TableGroup",
  [anon_sym_TILDE] = "~",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_indexes] = "indexes",
  [anon_sym_checks] = "checks",
  [anon_sym_Note] = "Note",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_pk] = "pk",
  [anon_sym_primarykey] = "primary key",
  [anon_sym_null] = "null",
  [anon_sym_notnull] = "not null",
  [anon_sym_unique] = "unique",
  [anon_sym_increment] = "increment",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_cascade] = "cascade",
  [anon_sym_restrict] = "restrict",
  [anon_sym_noaction] = "no action",
  [anon_sym_setnull] = "set null",
  [anon_sym_setdefault] = "set default",
  [anon_sym_ref] = "ref",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quote_string_token1] = "single_quote_string_token1",
  [aux_sym_single_quote_string_token2] = "single_quote_string_token2",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_triple_quote_string_token1] = "triple_quote_string_token1",
  [aux_sym_triple_quote_string_token2] = "triple_quote_string_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_identifier_token1] = "quoted_identifier_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_expression_literal_token1] = "expression_literal_token1",
  [sym_number_literal] = "number_literal",
  [sym_hex_color] = "hex_color",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_project_definition] = "project_definition",
  [sym_table_definition] = "table_definition",
  [sym_table_partial_definition] = "table_partial_definition",
  [sym_enum_definition] = "enum_definition",
  [sym_ref_definition] = "ref_definition",
  [sym_table_group_definition] = "table_group_definition",
  [sym__table_group_item] = "_table_group_item",
  [sym_table_body] = "table_body",
  [sym__table_body_item] = "_table_body_item",
  [sym_partial_injection] = "partial_injection",
  [sym_column_definition] = "column_definition",
  [sym__column_type] = "_column_type",
  [sym_indexes_definition] = "indexes_definition",
  [sym_index_item] = "index_item",
  [sym_composite_index] = "composite_index",
  [sym_checks_definition] = "checks_definition",
  [sym_check_item] = "check_item",
  [sym_note_definition] = "note_definition",
  [sym_sticky_note_definition] = "sticky_note_definition",
  [sym__settings_block] = "_settings_block",
  [sym_inline_settings] = "inline_settings",
  [sym_block_settings] = "block_settings",
  [sym__setting] = "_setting",
  [sym_setting_kv] = "setting_kv",
  [sym_setting_keyword] = "setting_keyword",
  [sym__setting_value] = "_setting_value",
  [sym_ref_action] = "ref_action",
  [sym_inline_ref_setting] = "inline_ref_setting",
  [sym_relationship_body] = "relationship_body",
  [sym_ref_settings] = "ref_settings",
  [sym_relationship_operator] = "relationship_operator",
  [sym__column_ref] = "_column_ref",
  [sym_composite_column_ref] = "composite_column_ref",
  [sym_enum_value] = "enum_value",
  [sym__qualified_identifier] = "_qualified_identifier",
  [sym__identifier] = "_identifier",
  [sym__string_literal] = "_string_literal",
  [sym_single_quote_string] = "single_quote_string",
  [sym_triple_quote_string] = "triple_quote_string",
  [sym_quoted_identifier] = "quoted_identifier",
  [sym_expression_literal] = "expression_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_project_definition_repeat1] = "project_definition_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_table_group_definition_repeat1] = "table_group_definition_repeat1",
  [aux_sym_table_body_repeat1] = "table_body_repeat1",
  [aux_sym_indexes_definition_repeat1] = "indexes_definition_repeat1",
  [aux_sym_composite_index_repeat1] = "composite_index_repeat1",
  [aux_sym_checks_definition_repeat1] = "checks_definition_repeat1",
  [aux_sym__settings_block_repeat1] = "_settings_block_repeat1",
  [aux_sym_setting_kv_repeat1] = "setting_kv_repeat1",
  [aux_sym_composite_column_ref_repeat1] = "composite_column_ref_repeat1",
  [aux_sym__qualified_identifier_repeat1] = "_qualified_identifier_repeat1",
  [aux_sym_single_quote_string_repeat1] = "single_quote_string_repeat1",
  [aux_sym_triple_quote_string_repeat1] = "triple_quote_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_Project] = anon_sym_Project,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_Table] = anon_sym_Table,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_TablePartial] = anon_sym_TablePartial,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_Enum] = anon_sym_Enum,
  [anon_sym_Ref] = anon_sym_Ref,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_TableGroup] = anon_sym_TableGroup,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_indexes] = anon_sym_indexes,
  [anon_sym_checks] = anon_sym_checks,
  [anon_sym_Note] = anon_sym_Note,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_pk] = anon_sym_pk,
  [anon_sym_primarykey] = anon_sym_primarykey,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_notnull] = anon_sym_notnull,
  [anon_sym_unique] = anon_sym_unique,
  [anon_sym_increment] = anon_sym_increment,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_cascade] = anon_sym_cascade,
  [anon_sym_restrict] = anon_sym_restrict,
  [anon_sym_noaction] = anon_sym_noaction,
  [anon_sym_setnull] = anon_sym_setnull,
  [anon_sym_setdefault] = anon_sym_setdefault,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quote_string_token1] = aux_sym_single_quote_string_token1,
  [aux_sym_single_quote_string_token2] = aux_sym_single_quote_string_token2,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_triple_quote_string_token1] = aux_sym_triple_quote_string_token1,
  [aux_sym_triple_quote_string_token2] = aux_sym_triple_quote_string_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_identifier_token1] = aux_sym_quoted_identifier_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_expression_literal_token1] = aux_sym_expression_literal_token1,
  [sym_number_literal] = sym_number_literal,
  [sym_hex_color] = sym_hex_color,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_project_definition] = sym_project_definition,
  [sym_table_definition] = sym_table_definition,
  [sym_table_partial_definition] = sym_table_partial_definition,
  [sym_enum_definition] = sym_enum_definition,
  [sym_ref_definition] = sym_ref_definition,
  [sym_table_group_definition] = sym_table_group_definition,
  [sym__table_group_item] = sym__table_group_item,
  [sym_table_body] = sym_table_body,
  [sym__table_body_item] = sym__table_body_item,
  [sym_partial_injection] = sym_partial_injection,
  [sym_column_definition] = sym_column_definition,
  [sym__column_type] = sym__column_type,
  [sym_indexes_definition] = sym_indexes_definition,
  [sym_index_item] = sym_index_item,
  [sym_composite_index] = sym_composite_index,
  [sym_checks_definition] = sym_checks_definition,
  [sym_check_item] = sym_check_item,
  [sym_note_definition] = sym_note_definition,
  [sym_sticky_note_definition] = sym_sticky_note_definition,
  [sym__settings_block] = sym__settings_block,
  [sym_inline_settings] = sym_inline_settings,
  [sym_block_settings] = sym_block_settings,
  [sym__setting] = sym__setting,
  [sym_setting_kv] = sym_setting_kv,
  [sym_setting_keyword] = sym_setting_keyword,
  [sym__setting_value] = sym__setting_value,
  [sym_ref_action] = sym_ref_action,
  [sym_inline_ref_setting] = sym_inline_ref_setting,
  [sym_relationship_body] = sym_relationship_body,
  [sym_ref_settings] = sym_ref_settings,
  [sym_relationship_operator] = sym_relationship_operator,
  [sym__column_ref] = sym__column_ref,
  [sym_composite_column_ref] = sym_composite_column_ref,
  [sym_enum_value] = sym_enum_value,
  [sym__qualified_identifier] = sym__qualified_identifier,
  [sym__identifier] = sym__identifier,
  [sym__string_literal] = sym__string_literal,
  [sym_single_quote_string] = sym_single_quote_string,
  [sym_triple_quote_string] = sym_triple_quote_string,
  [sym_quoted_identifier] = sym_quoted_identifier,
  [sym_expression_literal] = sym_expression_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_project_definition_repeat1] = aux_sym_project_definition_repeat1,
  [aux_sym_enum_definition_repeat1] = aux_sym_enum_definition_repeat1,
  [aux_sym_table_group_definition_repeat1] = aux_sym_table_group_definition_repeat1,
  [aux_sym_table_body_repeat1] = aux_sym_table_body_repeat1,
  [aux_sym_indexes_definition_repeat1] = aux_sym_indexes_definition_repeat1,
  [aux_sym_composite_index_repeat1] = aux_sym_composite_index_repeat1,
  [aux_sym_checks_definition_repeat1] = aux_sym_checks_definition_repeat1,
  [aux_sym__settings_block_repeat1] = aux_sym__settings_block_repeat1,
  [aux_sym_setting_kv_repeat1] = aux_sym_setting_kv_repeat1,
  [aux_sym_composite_column_ref_repeat1] = aux_sym_composite_column_ref_repeat1,
  [aux_sym__qualified_identifier_repeat1] = aux_sym__qualified_identifier_repeat1,
  [aux_sym_single_quote_string_repeat1] = aux_sym_single_quote_string_repeat1,
  [aux_sym_triple_quote_string_repeat1] = aux_sym_triple_quote_string_repeat1,
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
  [anon_sym_Project] = {
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
  [anon_sym_Table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TablePartial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TableGroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indexes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_checks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Note] = {
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
  [anon_sym_pk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primarykey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notnull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unique] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_increment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cascade] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restrict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setnull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setdefault] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quote_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_triple_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_triple_quote_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expression_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_color] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
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
  [sym_project_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_table_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_table_partial_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_ref_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_table_group_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__table_group_item] = {
    .visible = false,
    .named = true,
  },
  [sym_table_body] = {
    .visible = true,
    .named = true,
  },
  [sym__table_body_item] = {
    .visible = false,
    .named = true,
  },
  [sym_partial_injection] = {
    .visible = true,
    .named = true,
  },
  [sym_column_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__column_type] = {
    .visible = false,
    .named = true,
  },
  [sym_indexes_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_index_item] = {
    .visible = true,
    .named = true,
  },
  [sym_composite_index] = {
    .visible = true,
    .named = true,
  },
  [sym_checks_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_check_item] = {
    .visible = true,
    .named = true,
  },
  [sym_note_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_sticky_note_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__settings_block] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_block_settings] = {
    .visible = true,
    .named = true,
  },
  [sym__setting] = {
    .visible = false,
    .named = true,
  },
  [sym_setting_kv] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__setting_value] = {
    .visible = false,
    .named = true,
  },
  [sym_ref_action] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_ref_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_body] = {
    .visible = true,
    .named = true,
  },
  [sym_ref_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__column_ref] = {
    .visible = false,
    .named = true,
  },
  [sym_composite_column_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_value] = {
    .visible = true,
    .named = true,
  },
  [sym__qualified_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_single_quote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_triple_quote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_project_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_group_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indexes_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_composite_index_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_checks_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__settings_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_kv_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_composite_column_ref_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__qualified_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quote_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_triple_quote_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_body = 2,
  field_key = 3,
  field_name = 4,
  field_operator = 5,
  field_settings = 6,
  field_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_body] = "body",
  [field_key] = "key",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_settings] = "settings",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 3},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1},
  [2] =
    {field_body, 2},
  [3] =
    {field_name, 1},
  [4] =
    {field_body, 3},
    {field_name, 1},
  [6] =
    {field_name, 0},
  [7] =
    {field_name, 0},
    {field_type, 1},
  [9] =
    {field_alias, 3},
    {field_body, 4},
    {field_name, 1},
  [12] =
    {field_operator, 1},
  [13] =
    {field_key, 0},
  [14] =
    {field_alias, 3},
    {field_body, 5},
    {field_name, 1},
  [17] =
    {field_operator, 1},
    {field_settings, 3},
  [19] =
    {field_operator, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 4,
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
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 3,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 18,
  [30] = 30,
  [31] = 21,
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
  [99] = 91,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 18,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 105,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 21,
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
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 103,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 117,
  [140] = 138,
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
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
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
  [179] = 159,
  [180] = 180,
  [181] = 160,
  [182] = 182,
  [183] = 164,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      ADVANCE_MAP(
        '"', 92,
        '#', 38,
        '\'', 81,
        '(', 46,
        ')', 47,
        ',', 48,
        '-', 60,
        '.', 61,
        '/', 7,
        ':', 44,
        '<', 57,
        '>', 58,
        '[', 49,
        '\\', 39,
        ']', 50,
        '`', 99,
        'n', 71,
        'p', 74,
        's', 68,
        '{', 42,
        '}', 43,
        '~', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '`') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 's') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(89);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(89);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(115);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'k') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      ADVANCE_MAP(
        '"', 92,
        '(', 46,
        ')', 47,
        ',', 48,
        '-', 59,
        '.', 61,
        '/', 7,
        ':', 44,
        '<', 57,
        '>', 58,
        '[', 49,
        ']', 50,
        '`', 99,
        '{', 42,
        '}', 43,
        '~', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_noaction);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_setnull);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_setdefault);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(2);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(115);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '/') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token2);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_triple_quote_string_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_triple_quote_string_token2);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_quoted_identifier_token1);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_quoted_identifier_token1);
      if (lookahead == '/') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_quoted_identifier_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_expression_literal_token1);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_expression_literal_token1);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_expression_literal_token1);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '`') ADVANCE(9);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_expression_literal_token1);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '`') ADVANCE(9);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_expression_literal_token1);
      if (lookahead == '/') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_expression_literal_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_hex_color);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_hex_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_hex_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_hex_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_hex_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_hex_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
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
      ADVANCE_MAP(
        'E', 1,
        'N', 2,
        'P', 3,
        'R', 4,
        'T', 5,
        'a', 6,
        'c', 7,
        'e', 8,
        'f', 9,
        'i', 10,
        'n', 11,
        'p', 12,
        'r', 13,
        't', 14,
        'u', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'k') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'j') ADVANCE(50);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'q') ADVANCE(61);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'k') ADVANCE(65);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'x') ADVANCE(68);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(72);
      if (lookahead == 'P') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_checks);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_cascade);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_indexes);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_TablePartial);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 40},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 40},
  [8] = {.lex_state = 40},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 40},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 40},
  [14] = {.lex_state = 40},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 40},
  [24] = {.lex_state = 40},
  [25] = {.lex_state = 40},
  [26] = {.lex_state = 40},
  [27] = {.lex_state = 40},
  [28] = {.lex_state = 40},
  [29] = {.lex_state = 40},
  [30] = {.lex_state = 40},
  [31] = {.lex_state = 40},
  [32] = {.lex_state = 40},
  [33] = {.lex_state = 40},
  [34] = {.lex_state = 40},
  [35] = {.lex_state = 40},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 40},
  [38] = {.lex_state = 40},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 40},
  [42] = {.lex_state = 40},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 40},
  [49] = {.lex_state = 40},
  [50] = {.lex_state = 40},
  [51] = {.lex_state = 40},
  [52] = {.lex_state = 40},
  [53] = {.lex_state = 40},
  [54] = {.lex_state = 40},
  [55] = {.lex_state = 40},
  [56] = {.lex_state = 40},
  [57] = {.lex_state = 40},
  [58] = {.lex_state = 40},
  [59] = {.lex_state = 40},
  [60] = {.lex_state = 40},
  [61] = {.lex_state = 40},
  [62] = {.lex_state = 40},
  [63] = {.lex_state = 40},
  [64] = {.lex_state = 40},
  [65] = {.lex_state = 40},
  [66] = {.lex_state = 40},
  [67] = {.lex_state = 40},
  [68] = {.lex_state = 40},
  [69] = {.lex_state = 40},
  [70] = {.lex_state = 40},
  [71] = {.lex_state = 40},
  [72] = {.lex_state = 40},
  [73] = {.lex_state = 40},
  [74] = {.lex_state = 40},
  [75] = {.lex_state = 40},
  [76] = {.lex_state = 40},
  [77] = {.lex_state = 40},
  [78] = {.lex_state = 40},
  [79] = {.lex_state = 40},
  [80] = {.lex_state = 40},
  [81] = {.lex_state = 40},
  [82] = {.lex_state = 40},
  [83] = {.lex_state = 40},
  [84] = {.lex_state = 40},
  [85] = {.lex_state = 40},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 40},
  [88] = {.lex_state = 40},
  [89] = {.lex_state = 40},
  [90] = {.lex_state = 40},
  [91] = {.lex_state = 40},
  [92] = {.lex_state = 40},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 40},
  [95] = {.lex_state = 40},
  [96] = {.lex_state = 40},
  [97] = {.lex_state = 40},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 40},
  [100] = {.lex_state = 40},
  [101] = {.lex_state = 40},
  [102] = {.lex_state = 40},
  [103] = {.lex_state = 40},
  [104] = {.lex_state = 40},
  [105] = {.lex_state = 40},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 40},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 40},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 40},
  [114] = {.lex_state = 40},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 40},
  [118] = {.lex_state = 40},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 40},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 40},
  [125] = {.lex_state = 40},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 40},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 40},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 40},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 40},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 40},
  [143] = {.lex_state = 40},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 40},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 40},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 97},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 40},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 40},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 40},
  [181] = {.lex_state = 97},
  [182] = {.lex_state = 40},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 40},
  [187] = {.lex_state = 104},
  [188] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_Project] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_Table] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_TablePartial] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_Enum] = ACTIONS(1),
    [anon_sym_Ref] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_TableGroup] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_indexes] = ACTIONS(1),
    [anon_sym_checks] = ACTIONS(1),
    [anon_sym_Note] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_pk] = ACTIONS(1),
    [anon_sym_primarykey] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_notnull] = ACTIONS(1),
    [anon_sym_unique] = ACTIONS(1),
    [anon_sym_increment] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_cascade] = ACTIONS(1),
    [anon_sym_restrict] = ACTIONS(1),
    [anon_sym_noaction] = ACTIONS(1),
    [anon_sym_setnull] = ACTIONS(1),
    [anon_sym_setdefault] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_single_quote_string_token2] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_hex_color] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(175),
    [sym__definition] = STATE(8),
    [sym_project_definition] = STATE(8),
    [sym_table_definition] = STATE(8),
    [sym_table_partial_definition] = STATE(8),
    [sym_enum_definition] = STATE(8),
    [sym_ref_definition] = STATE(8),
    [sym_table_group_definition] = STATE(8),
    [sym_sticky_note_definition] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Project] = ACTIONS(7),
    [anon_sym_Table] = ACTIONS(9),
    [anon_sym_TablePartial] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
    [anon_sym_Enum] = ACTIONS(13),
    [anon_sym_Ref] = ACTIONS(15),
    [anon_sym_TableGroup] = ACTIONS(17),
    [anon_sym_Note] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_Table,
      anon_sym_LT,
    ACTIONS(21), 18,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_as,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_COMMA,
      anon_sym_Note,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_DOT,
  [28] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 6,
      anon_sym_as,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(27), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [56] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 2,
      anon_sym_cascade,
      anon_sym_restrict,
    ACTIONS(41), 2,
      sym_number_literal,
      sym_hex_color,
    ACTIONS(29), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(33), 3,
      anon_sym_noaction,
      anon_sym_setnull,
      anon_sym_setdefault,
    STATE(103), 6,
      sym__setting_value,
      sym_ref_action,
      sym__string_literal,
      sym_single_quote_string,
      sym_triple_quote_string,
      sym_expression_literal,
  [95] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 2,
      anon_sym_cascade,
      anon_sym_restrict,
    ACTIONS(45), 2,
      sym_number_literal,
      sym_hex_color,
    ACTIONS(33), 3,
      anon_sym_noaction,
      anon_sym_setnull,
      anon_sym_setdefault,
    ACTIONS(43), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(118), 6,
      sym__setting_value,
      sym_ref_action,
      sym__string_literal,
      sym_single_quote_string,
      sym_triple_quote_string,
      sym_expression_literal,
  [134] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 2,
      anon_sym_cascade,
      anon_sym_restrict,
    ACTIONS(49), 2,
      sym_number_literal,
      sym_hex_color,
    ACTIONS(33), 3,
      anon_sym_noaction,
      anon_sym_setnull,
      anon_sym_setdefault,
    ACTIONS(47), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(135), 6,
      sym__setting_value,
      sym_ref_action,
      sym__string_literal,
      sym_single_quote_string,
      sym_triple_quote_string,
      sym_expression_literal,
  [173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(53), 2,
      anon_sym_Table,
      anon_sym_LT,
    ACTIONS(51), 15,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_COMMA,
      anon_sym_Note,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_DASH,
  [201] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_Project,
    ACTIONS(9), 1,
      anon_sym_Table,
    ACTIONS(11), 1,
      anon_sym_TablePartial,
    ACTIONS(15), 1,
      anon_sym_Ref,
    ACTIONS(17), 1,
      anon_sym_TableGroup,
    ACTIONS(19), 1,
      anon_sym_Note,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_enum,
      anon_sym_Enum,
    STATE(9), 9,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_table_partial_definition,
      sym_enum_definition,
      sym_ref_definition,
      sym_table_group_definition,
      sym_sticky_note_definition,
      aux_sym_source_file_repeat1,
  [241] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_Project,
    ACTIONS(64), 1,
      anon_sym_Table,
    ACTIONS(67), 1,
      anon_sym_TablePartial,
    ACTIONS(73), 1,
      anon_sym_Ref,
    ACTIONS(76), 1,
      anon_sym_TableGroup,
    ACTIONS(79), 1,
      anon_sym_Note,
    ACTIONS(70), 2,
      anon_sym_enum,
      anon_sym_Enum,
    STATE(9), 9,
      sym__definition,
      sym_project_definition,
      sym_table_definition,
      sym_table_partial_definition,
      sym_enum_definition,
      sym_ref_definition,
      sym_table_group_definition,
      sym_sticky_note_definition,
      aux_sym_source_file_repeat1,
  [281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 2,
      anon_sym_Table,
      anon_sym_LT,
    ACTIONS(82), 15,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_COMMA,
      anon_sym_Note,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_DASH,
  [306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_Table,
      anon_sym_LT,
    ACTIONS(86), 15,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_COMMA,
      anon_sym_Note,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_DASH,
  [331] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      anon_sym_TILDE,
    ACTIONS(98), 1,
      anon_sym_indexes,
    ACTIONS(101), 1,
      anon_sym_checks,
    ACTIONS(104), 1,
      anon_sym_Note,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    STATE(122), 2,
      sym__identifier,
      sym_quoted_identifier,
    STATE(12), 7,
      sym__table_body_item,
      sym_partial_injection,
      sym_column_definition,
      sym_indexes_definition,
      sym_checks_definition,
      sym_note_definition,
      aux_sym_table_body_repeat1,
  [369] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(116), 1,
      anon_sym_indexes,
    ACTIONS(118), 1,
      anon_sym_checks,
    ACTIONS(120), 1,
      anon_sym_Note,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    STATE(122), 2,
      sym__identifier,
      sym_quoted_identifier,
    STATE(14), 7,
      sym__table_body_item,
      sym_partial_injection,
      sym_column_definition,
      sym_indexes_definition,
      sym_checks_definition,
      sym_note_definition,
      aux_sym_table_body_repeat1,
  [407] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(116), 1,
      anon_sym_indexes,
    ACTIONS(118), 1,
      anon_sym_checks,
    ACTIONS(120), 1,
      anon_sym_Note,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(122), 2,
      sym__identifier,
      sym_quoted_identifier,
    STATE(12), 7,
      sym__table_body_item,
      sym_partial_injection,
      sym_column_definition,
      sym_indexes_definition,
      sym_checks_definition,
      sym_note_definition,
      aux_sym_table_body_repeat1,
  [445] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    ACTIONS(134), 1,
      anon_sym_ref,
    ACTIONS(132), 2,
      anon_sym_primarykey,
      anon_sym_notnull,
    ACTIONS(130), 4,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_unique,
      anon_sym_increment,
    STATE(146), 4,
      sym__setting,
      sym_setting_kv,
      sym_setting_keyword,
      sym_inline_ref_setting,
  [474] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(134), 1,
      anon_sym_ref,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    ACTIONS(132), 2,
      anon_sym_primarykey,
      anon_sym_notnull,
    ACTIONS(130), 4,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_unique,
      anon_sym_increment,
    STATE(137), 4,
      sym__setting,
      sym_setting_kv,
      sym_setting_keyword,
      sym_inline_ref_setting,
  [503] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(134), 1,
      anon_sym_ref,
    ACTIONS(132), 2,
      anon_sym_primarykey,
      anon_sym_notnull,
    ACTIONS(130), 4,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_unique,
      anon_sym_increment,
    STATE(156), 4,
      sym__setting,
      sym_setting_kv,
      sym_setting_keyword,
      sym_inline_ref_setting,
  [529] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_Table,
    ACTIONS(142), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym__qualified_identifier_repeat1,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
      anon_sym_LBRACK,
  [553] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_Table,
    ACTIONS(145), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym__qualified_identifier_repeat1,
    ACTIONS(21), 9,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
      anon_sym_LBRACK,
  [577] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_Table,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_ref_settings,
    ACTIONS(148), 9,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [601] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_Table,
    ACTIONS(158), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym__qualified_identifier_repeat1,
    ACTIONS(154), 9,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
      anon_sym_LBRACK,
  [625] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(161), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym__qualified_identifier_repeat1,
    ACTIONS(21), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_DASH,
  [649] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    STATE(24), 2,
      sym_index_item,
      aux_sym_indexes_definition_repeat1,
    STATE(69), 4,
      sym_composite_index,
      sym__identifier,
      sym_quoted_identifier,
      sym_expression_literal,
  [678] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_index_item,
      aux_sym_indexes_definition_repeat1,
    STATE(69), 4,
      sym_composite_index,
      sym__identifier,
      sym_quoted_identifier,
      sym_expression_literal,
  [707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_Table,
    ACTIONS(27), 10,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [726] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      anon_sym_BQUOTE,
    STATE(26), 2,
      sym_index_item,
      aux_sym_indexes_definition_repeat1,
    STATE(69), 4,
      sym_composite_index,
      sym__identifier,
      sym_quoted_identifier,
      sym_expression_literal,
  [755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 2,
      anon_sym_Note,
      sym_identifier,
    ACTIONS(188), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_Table,
    ACTIONS(190), 9,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [791] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LT,
    ACTIONS(194), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym__qualified_identifier_repeat1,
    ACTIONS(138), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_DASH,
  [813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
    ACTIONS(199), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [831] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym__qualified_identifier_repeat1,
    ACTIONS(154), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_DASH,
  [853] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__settings_block,
    STATE(83), 1,
      sym_inline_settings,
    ACTIONS(206), 3,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
    ACTIONS(204), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
  [877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_Table,
    ACTIONS(210), 9,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
    ACTIONS(216), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
    ACTIONS(220), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_Table,
    ACTIONS(222), 9,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_Table,
    ACTIONS(226), 9,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_Table,
    ACTIONS(230), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_Table,
    ACTIONS(234), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1001] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(243), 1,
      anon_sym_Note,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    STATE(40), 5,
      sym__table_group_item,
      sym_note_definition,
      sym__identifier,
      sym_quoted_identifier,
      aux_sym_table_group_definition_repeat1,
  [1024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_Table,
    ACTIONS(249), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_Table,
    ACTIONS(253), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_Table,
    ACTIONS(257), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_Table,
    ACTIONS(261), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_Table,
    ACTIONS(265), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_Table,
    ACTIONS(269), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
    ACTIONS(275), 5,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1143] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_Note,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_identifier,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(40), 5,
      sym__table_group_item,
      sym_note_definition,
      sym__identifier,
      sym_quoted_identifier,
      aux_sym_table_group_definition_repeat1,
  [1166] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_Note,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(66), 5,
      sym__table_group_item,
      sym_note_definition,
      sym__identifier,
      sym_quoted_identifier,
      aux_sym_table_group_definition_repeat1,
  [1189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
    ACTIONS(287), 5,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
    ACTIONS(291), 5,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_Table,
    ACTIONS(293), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
    ACTIONS(299), 5,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_Table,
    ACTIONS(301), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_Table,
    ACTIONS(305), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_Table,
    ACTIONS(309), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_Table,
    ACTIONS(313), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
    ACTIONS(319), 4,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [1344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_Table,
    ACTIONS(323), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
    ACTIONS(329), 5,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_Table,
    ACTIONS(331), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_Table,
    ACTIONS(335), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_Table,
    ACTIONS(339), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1429] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_Note,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(48), 5,
      sym__table_group_item,
      sym_note_definition,
      sym__identifier,
      sym_quoted_identifier,
      aux_sym_table_group_definition_repeat1,
  [1452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_Table,
    ACTIONS(347), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1469] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_Note,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(40), 5,
      sym__table_group_item,
      sym_note_definition,
      sym__identifier,
      sym_quoted_identifier,
      aux_sym_table_group_definition_repeat1,
  [1492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_Table,
    ACTIONS(351), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_Table,
    ACTIONS(355), 8,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TablePartial,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_TableGroup,
      anon_sym_Note,
  [1526] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__settings_block,
    STATE(102), 1,
      sym_inline_settings,
    ACTIONS(359), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
    ACTIONS(363), 4,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [1562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
    ACTIONS(367), 4,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [1578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 3,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
    ACTIONS(369), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
  [1593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 3,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
    ACTIONS(373), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
  [1608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 3,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
    ACTIONS(377), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
  [1623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 3,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
    ACTIONS(381), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
  [1638] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    STATE(77), 2,
      sym_enum_value,
      aux_sym_enum_definition_repeat1,
    STATE(100), 2,
      sym__identifier,
      sym_quoted_identifier,
  [1659] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    STATE(79), 2,
      sym_enum_value,
      aux_sym_enum_definition_repeat1,
    STATE(100), 2,
      sym__identifier,
      sym_quoted_identifier,
  [1680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 3,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
    ACTIONS(391), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
  [1695] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    ACTIONS(400), 1,
      anon_sym_DQUOTE,
    STATE(79), 2,
      sym_enum_value,
      aux_sym_enum_definition_repeat1,
    STATE(100), 2,
      sym__identifier,
      sym_quoted_identifier,
  [1716] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(7), 1,
      sym__qualified_identifier,
    STATE(31), 1,
      sym_quoted_identifier,
    STATE(172), 1,
      sym_relationship_body,
    STATE(105), 2,
      sym__column_ref,
      sym_composite_column_ref,
  [1739] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(7), 1,
      sym__qualified_identifier,
    STATE(31), 1,
      sym_quoted_identifier,
    STATE(185), 1,
      sym_relationship_body,
    STATE(105), 2,
      sym__column_ref,
      sym_composite_column_ref,
  [1762] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(7), 1,
      sym__qualified_identifier,
    STATE(31), 1,
      sym_quoted_identifier,
    STATE(39), 1,
      sym_relationship_body,
    STATE(109), 2,
      sym__column_ref,
      sym_composite_column_ref,
  [1785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 3,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
    ACTIONS(405), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
  [1800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 3,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
    ACTIONS(409), 4,
      anon_sym_indexes,
      anon_sym_checks,
      anon_sym_Note,
      sym_identifier,
  [1815] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(7), 1,
      sym__qualified_identifier,
    STATE(31), 1,
      sym_quoted_identifier,
    STATE(46), 1,
      sym_relationship_body,
    STATE(109), 2,
      sym__column_ref,
      sym_composite_column_ref,
  [1838] = 4,
    ACTIONS(415), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(417), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym_triple_quote_string_repeat1,
    ACTIONS(413), 4,
      aux_sym_single_quote_string_token1,
      aux_sym_single_quote_string_token2,
      aux_sym_triple_quote_string_token1,
      aux_sym_triple_quote_string_token2,
  [1854] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    STATE(141), 3,
      sym__identifier,
      sym_quoted_identifier,
      sym_expression_literal,
  [1872] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_setting_kv_repeat1,
    ACTIONS(421), 2,
      anon_sym_Note,
      sym_identifier,
    ACTIONS(423), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1890] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(7), 1,
      sym__qualified_identifier,
    STATE(31), 1,
      sym_quoted_identifier,
    STATE(149), 2,
      sym__column_ref,
      sym_composite_column_ref,
  [1910] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    ACTIONS(433), 1,
      anon_sym_Note,
    STATE(90), 3,
      sym_note_definition,
      sym_setting_kv,
      aux_sym_project_definition_repeat1,
  [1928] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(438), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym__qualified_identifier,
    STATE(21), 1,
      sym_quoted_identifier,
    STATE(20), 2,
      sym__column_ref,
      sym_composite_column_ref,
  [1948] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_Note,
    ACTIONS(440), 1,
      sym_identifier,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(90), 3,
      sym_note_definition,
      sym_setting_kv,
      aux_sym_project_definition_repeat1,
  [1966] = 4,
    ACTIONS(417), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(93), 1,
      aux_sym_triple_quote_string_repeat1,
    ACTIONS(444), 4,
      aux_sym_single_quote_string_token1,
      aux_sym_single_quote_string_token2,
      aux_sym_triple_quote_string_token1,
      aux_sym_triple_quote_string_token2,
  [1982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 6,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1994] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(451), 1,
      sym_identifier,
    STATE(157), 3,
      sym__identifier,
      sym_quoted_identifier,
      sym_expression_literal,
  [2012] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    ACTIONS(455), 1,
      anon_sym_as,
    STATE(41), 1,
      sym_table_body,
    STATE(153), 1,
      sym_block_settings,
    STATE(168), 1,
      sym__settings_block,
  [2034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 6,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [2046] = 4,
    ACTIONS(417), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(93), 1,
      aux_sym_triple_quote_string_repeat1,
    ACTIONS(459), 4,
      aux_sym_single_quote_string_token1,
      aux_sym_single_quote_string_token2,
      aux_sym_triple_quote_string_token1,
      aux_sym_triple_quote_string_token2,
  [2062] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(7), 1,
      sym__qualified_identifier,
    STATE(31), 1,
      sym_quoted_identifier,
    STATE(20), 2,
      sym__column_ref,
      sym_composite_column_ref,
  [2082] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__settings_block,
    STATE(131), 1,
      sym_inline_settings,
    ACTIONS(463), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DQUOTE,
  [2100] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_Note,
    ACTIONS(440), 1,
      sym_identifier,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    STATE(92), 3,
      sym_note_definition,
      sym_setting_kv,
      aux_sym_project_definition_repeat1,
  [2118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [2129] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_setting_kv_repeat1,
    ACTIONS(469), 2,
      anon_sym_Note,
      sym_identifier,
  [2146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym__qualified_identifier_repeat1,
    ACTIONS(138), 3,
      anon_sym_LBRACE,
      anon_sym_as,
      anon_sym_LBRACK,
  [2161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LT,
    STATE(99), 1,
      sym_relationship_operator,
    ACTIONS(477), 3,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_DASH,
  [2176] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_table_body,
    STATE(155), 1,
      sym_block_settings,
    STATE(168), 1,
      sym__settings_block,
  [2195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LT,
    STATE(89), 1,
      sym_relationship_operator,
    ACTIONS(477), 3,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_DASH,
  [2210] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_table_body,
    STATE(151), 1,
      sym_block_settings,
    STATE(168), 1,
      sym__settings_block,
  [2229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LT,
    STATE(91), 1,
      sym_relationship_operator,
    ACTIONS(477), 3,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_DASH,
  [2244] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_expression_literal,
    STATE(115), 2,
      sym_check_item,
      aux_sym_checks_definition_repeat1,
  [2261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(78), 3,
      sym__string_literal,
      sym_single_quote_string,
      sym_triple_quote_string,
  [2276] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    STATE(116), 1,
      sym_expression_literal,
    STATE(112), 2,
      sym_check_item,
      aux_sym_checks_definition_repeat1,
  [2293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_Note,
      sym_identifier,
    ACTIONS(490), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_DOT,
    STATE(104), 1,
      aux_sym__qualified_identifier_repeat1,
    ACTIONS(154), 3,
      anon_sym_LBRACE,
      anon_sym_as,
      anon_sym_LBRACK,
  [2321] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_expression_literal,
    STATE(112), 2,
      sym_check_item,
      aux_sym_checks_definition_repeat1,
  [2338] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__settings_block,
    STATE(154), 1,
      sym_inline_settings,
    ACTIONS(494), 2,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [2355] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      aux_sym_setting_kv_repeat1,
    ACTIONS(496), 2,
      anon_sym_Note,
      sym_identifier,
  [2372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 2,
      anon_sym_Note,
      sym_identifier,
    ACTIONS(423), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(188), 3,
      sym__string_literal,
      sym_single_quote_string,
      sym_triple_quote_string,
  [2400] = 4,
    ACTIONS(417), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    STATE(120), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(502), 2,
      aux_sym_single_quote_string_token1,
      aux_sym_single_quote_string_token2,
  [2414] = 4,
    ACTIONS(417), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_SQUOTE,
    STATE(126), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(507), 2,
      aux_sym_single_quote_string_token1,
      aux_sym_single_quote_string_token2,
  [2428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(509), 1,
      sym_identifier,
    STATE(32), 2,
      sym__column_type,
      sym_quoted_identifier,
  [2442] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(168), 1,
      sym__settings_block,
    STATE(170), 1,
      sym_block_settings,
  [2458] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      sym_identifier,
    STATE(114), 1,
      sym_quoted_identifier,
    STATE(166), 1,
      sym__qualified_identifier,
  [2474] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      sym_identifier,
    STATE(96), 1,
      sym__qualified_identifier,
    STATE(114), 1,
      sym_quoted_identifier,
  [2490] = 4,
    ACTIONS(417), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    STATE(120), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(517), 2,
      aux_sym_single_quote_string_token1,
      aux_sym_single_quote_string_token2,
  [2504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      sym_identifier,
    STATE(173), 2,
      sym__identifier,
      sym_quoted_identifier,
  [2518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_composite_index_repeat1,
  [2531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      aux_sym__settings_block_repeat1,
  [2544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_composite_column_ref_repeat1,
  [2557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DQUOTE,
  [2566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_composite_column_ref_repeat1,
  [2579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(544), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      aux_sym__settings_block_repeat1,
  [2592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      aux_sym__settings_block_repeat1,
  [2605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(139), 1,
      aux_sym_setting_kv_repeat1,
    ACTIONS(471), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_composite_index_repeat1,
  [2629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym__settings_block_repeat1,
  [2642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(554), 1,
      sym_identifier,
    STATE(2), 1,
      sym_quoted_identifier,
  [2655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_setting_kv_repeat1,
    ACTIONS(498), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_DQUOTE,
    ACTIONS(554), 1,
      sym_identifier,
    STATE(2), 1,
      sym_quoted_identifier,
  [2679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_composite_index_repeat1,
  [2692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym_identifier,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    ACTIONS(562), 1,
      anon_sym_COLON,
  [2705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(564), 1,
      sym_identifier,
    STATE(132), 1,
      sym_quoted_identifier,
  [2718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_composite_column_ref_repeat1,
  [2731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(568), 1,
      sym_identifier,
    STATE(147), 1,
      sym_quoted_identifier,
  [2744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      aux_sym__settings_block_repeat1,
  [2757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_LBRACE,
    ACTIONS(574), 1,
      anon_sym_COLON,
  [2775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 2,
      sym_identifier,
      anon_sym_DQUOTE,
  [2791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_table_body,
  [2801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_table_body,
  [2819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 2,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [2827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_table_body,
  [2837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    ACTIONS(586), 1,
      anon_sym_COMMA,
  [2863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
  [2870] = 2,
    ACTIONS(417), 1,
      sym_comment,
    ACTIONS(590), 1,
      aux_sym_quoted_identifier_token1,
  [2877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_BQUOTE,
  [2884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_COLON,
  [2891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym_number_literal,
  [2898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COLON,
  [2905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym_identifier,
  [2912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
  [2919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
  [2926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
  [2933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_LBRACE,
  [2940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
  [2947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
  [2954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
  [2961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
  [2968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
  [2975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      ts_builtin_sym_end,
  [2982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym_identifier,
  [2989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_COLON,
  [2996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym_number_literal,
  [3003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_DQUOTE,
  [3010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_identifier,
  [3017] = 2,
    ACTIONS(417), 1,
      sym_comment,
    ACTIONS(632), 1,
      aux_sym_quoted_identifier_token1,
  [3024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym_identifier,
  [3031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_COLON,
  [3038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
  [3045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
  [3052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_identifier,
  [3059] = 2,
    ACTIONS(417), 1,
      sym_comment,
    ACTIONS(644), 1,
      aux_sym_expression_literal_token1,
  [3066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 134,
  [SMALL_STATE(7)] = 173,
  [SMALL_STATE(8)] = 201,
  [SMALL_STATE(9)] = 241,
  [SMALL_STATE(10)] = 281,
  [SMALL_STATE(11)] = 306,
  [SMALL_STATE(12)] = 331,
  [SMALL_STATE(13)] = 369,
  [SMALL_STATE(14)] = 407,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 474,
  [SMALL_STATE(17)] = 503,
  [SMALL_STATE(18)] = 529,
  [SMALL_STATE(19)] = 553,
  [SMALL_STATE(20)] = 577,
  [SMALL_STATE(21)] = 601,
  [SMALL_STATE(22)] = 625,
  [SMALL_STATE(23)] = 649,
  [SMALL_STATE(24)] = 678,
  [SMALL_STATE(25)] = 707,
  [SMALL_STATE(26)] = 726,
  [SMALL_STATE(27)] = 755,
  [SMALL_STATE(28)] = 773,
  [SMALL_STATE(29)] = 791,
  [SMALL_STATE(30)] = 813,
  [SMALL_STATE(31)] = 831,
  [SMALL_STATE(32)] = 853,
  [SMALL_STATE(33)] = 877,
  [SMALL_STATE(34)] = 895,
  [SMALL_STATE(35)] = 913,
  [SMALL_STATE(36)] = 931,
  [SMALL_STATE(37)] = 949,
  [SMALL_STATE(38)] = 967,
  [SMALL_STATE(39)] = 984,
  [SMALL_STATE(40)] = 1001,
  [SMALL_STATE(41)] = 1024,
  [SMALL_STATE(42)] = 1041,
  [SMALL_STATE(43)] = 1058,
  [SMALL_STATE(44)] = 1075,
  [SMALL_STATE(45)] = 1092,
  [SMALL_STATE(46)] = 1109,
  [SMALL_STATE(47)] = 1126,
  [SMALL_STATE(48)] = 1143,
  [SMALL_STATE(49)] = 1166,
  [SMALL_STATE(50)] = 1189,
  [SMALL_STATE(51)] = 1206,
  [SMALL_STATE(52)] = 1223,
  [SMALL_STATE(53)] = 1240,
  [SMALL_STATE(54)] = 1257,
  [SMALL_STATE(55)] = 1274,
  [SMALL_STATE(56)] = 1291,
  [SMALL_STATE(57)] = 1308,
  [SMALL_STATE(58)] = 1325,
  [SMALL_STATE(59)] = 1344,
  [SMALL_STATE(60)] = 1361,
  [SMALL_STATE(61)] = 1378,
  [SMALL_STATE(62)] = 1395,
  [SMALL_STATE(63)] = 1412,
  [SMALL_STATE(64)] = 1429,
  [SMALL_STATE(65)] = 1452,
  [SMALL_STATE(66)] = 1469,
  [SMALL_STATE(67)] = 1492,
  [SMALL_STATE(68)] = 1509,
  [SMALL_STATE(69)] = 1526,
  [SMALL_STATE(70)] = 1546,
  [SMALL_STATE(71)] = 1562,
  [SMALL_STATE(72)] = 1578,
  [SMALL_STATE(73)] = 1593,
  [SMALL_STATE(74)] = 1608,
  [SMALL_STATE(75)] = 1623,
  [SMALL_STATE(76)] = 1638,
  [SMALL_STATE(77)] = 1659,
  [SMALL_STATE(78)] = 1680,
  [SMALL_STATE(79)] = 1695,
  [SMALL_STATE(80)] = 1716,
  [SMALL_STATE(81)] = 1739,
  [SMALL_STATE(82)] = 1762,
  [SMALL_STATE(83)] = 1785,
  [SMALL_STATE(84)] = 1800,
  [SMALL_STATE(85)] = 1815,
  [SMALL_STATE(86)] = 1838,
  [SMALL_STATE(87)] = 1854,
  [SMALL_STATE(88)] = 1872,
  [SMALL_STATE(89)] = 1890,
  [SMALL_STATE(90)] = 1910,
  [SMALL_STATE(91)] = 1928,
  [SMALL_STATE(92)] = 1948,
  [SMALL_STATE(93)] = 1966,
  [SMALL_STATE(94)] = 1982,
  [SMALL_STATE(95)] = 1994,
  [SMALL_STATE(96)] = 2012,
  [SMALL_STATE(97)] = 2034,
  [SMALL_STATE(98)] = 2046,
  [SMALL_STATE(99)] = 2062,
  [SMALL_STATE(100)] = 2082,
  [SMALL_STATE(101)] = 2100,
  [SMALL_STATE(102)] = 2118,
  [SMALL_STATE(103)] = 2129,
  [SMALL_STATE(104)] = 2146,
  [SMALL_STATE(105)] = 2161,
  [SMALL_STATE(106)] = 2176,
  [SMALL_STATE(107)] = 2195,
  [SMALL_STATE(108)] = 2210,
  [SMALL_STATE(109)] = 2229,
  [SMALL_STATE(110)] = 2244,
  [SMALL_STATE(111)] = 2261,
  [SMALL_STATE(112)] = 2276,
  [SMALL_STATE(113)] = 2293,
  [SMALL_STATE(114)] = 2306,
  [SMALL_STATE(115)] = 2321,
  [SMALL_STATE(116)] = 2338,
  [SMALL_STATE(117)] = 2355,
  [SMALL_STATE(118)] = 2372,
  [SMALL_STATE(119)] = 2385,
  [SMALL_STATE(120)] = 2400,
  [SMALL_STATE(121)] = 2414,
  [SMALL_STATE(122)] = 2428,
  [SMALL_STATE(123)] = 2442,
  [SMALL_STATE(124)] = 2458,
  [SMALL_STATE(125)] = 2474,
  [SMALL_STATE(126)] = 2490,
  [SMALL_STATE(127)] = 2504,
  [SMALL_STATE(128)] = 2518,
  [SMALL_STATE(129)] = 2531,
  [SMALL_STATE(130)] = 2544,
  [SMALL_STATE(131)] = 2557,
  [SMALL_STATE(132)] = 2566,
  [SMALL_STATE(133)] = 2579,
  [SMALL_STATE(134)] = 2592,
  [SMALL_STATE(135)] = 2605,
  [SMALL_STATE(136)] = 2616,
  [SMALL_STATE(137)] = 2629,
  [SMALL_STATE(138)] = 2642,
  [SMALL_STATE(139)] = 2655,
  [SMALL_STATE(140)] = 2666,
  [SMALL_STATE(141)] = 2679,
  [SMALL_STATE(142)] = 2692,
  [SMALL_STATE(143)] = 2705,
  [SMALL_STATE(144)] = 2718,
  [SMALL_STATE(145)] = 2731,
  [SMALL_STATE(146)] = 2744,
  [SMALL_STATE(147)] = 2757,
  [SMALL_STATE(148)] = 2765,
  [SMALL_STATE(149)] = 2775,
  [SMALL_STATE(150)] = 2783,
  [SMALL_STATE(151)] = 2791,
  [SMALL_STATE(152)] = 2801,
  [SMALL_STATE(153)] = 2809,
  [SMALL_STATE(154)] = 2819,
  [SMALL_STATE(155)] = 2827,
  [SMALL_STATE(156)] = 2837,
  [SMALL_STATE(157)] = 2845,
  [SMALL_STATE(158)] = 2853,
  [SMALL_STATE(159)] = 2863,
  [SMALL_STATE(160)] = 2870,
  [SMALL_STATE(161)] = 2877,
  [SMALL_STATE(162)] = 2884,
  [SMALL_STATE(163)] = 2891,
  [SMALL_STATE(164)] = 2898,
  [SMALL_STATE(165)] = 2905,
  [SMALL_STATE(166)] = 2912,
  [SMALL_STATE(167)] = 2919,
  [SMALL_STATE(168)] = 2926,
  [SMALL_STATE(169)] = 2933,
  [SMALL_STATE(170)] = 2940,
  [SMALL_STATE(171)] = 2947,
  [SMALL_STATE(172)] = 2954,
  [SMALL_STATE(173)] = 2961,
  [SMALL_STATE(174)] = 2968,
  [SMALL_STATE(175)] = 2975,
  [SMALL_STATE(176)] = 2982,
  [SMALL_STATE(177)] = 2989,
  [SMALL_STATE(178)] = 2996,
  [SMALL_STATE(179)] = 3003,
  [SMALL_STATE(180)] = 3010,
  [SMALL_STATE(181)] = 3017,
  [SMALL_STATE(182)] = 3024,
  [SMALL_STATE(183)] = 3031,
  [SMALL_STATE(184)] = 3038,
  [SMALL_STATE(185)] = 3045,
  [SMALL_STATE(186)] = 3052,
  [SMALL_STATE(187)] = 3059,
  [SMALL_STATE(188)] = 3066,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__qualified_identifier_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__qualified_identifier_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 3, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_ref, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_ref, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_column_ref, 6, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_composite_column_ref, 6, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_column_ref, 5, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_composite_column_ref, 5, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_body_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_body_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_body_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_body_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_body_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_body_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_body_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualified_identifier, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__qualified_identifier, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__qualified_identifier, 2, 0, 0), SHIFT(140),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qualified_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_body, 3, 0, 8),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_body, 3, 0, 8),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualified_identifier, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__qualified_identifier, 1, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__qualified_identifier, 1, 0, 0), SHIFT(140),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qualified_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_literal, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_literal, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_settings, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_settings, 3, 0, 0),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__qualified_identifier, 2, 0, 0), SHIFT(138),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__settings_block, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settings_block, 3, 0, 0),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__qualified_identifier, 1, 0, 0), SHIFT(138),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 2, 0, 6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, 0, 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_settings, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_settings, 4, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__settings_block, 4, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settings_block, 4, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__settings_block, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__settings_block, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_settings, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_settings, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_body, 4, 0, 11),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_body, 4, 0, 11),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_partial_definition, 4, 0, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_partial_definition, 4, 0, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_definition, 4, 0, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_definition, 4, 0, 4),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_group_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_group_definition_repeat1, 2, 0, 0),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_group_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_group_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 3, 0, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 3, 0, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_definition, 5, 0, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_definition, 5, 0, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_partial_definition, 3, 0, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_partial_definition, 3, 0, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_definition, 5, 0, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_definition, 5, 0, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 5, 0, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 5, 0, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_definition, 3, 0, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_definition, 3, 0, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_settings, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_settings, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_triple_quote_string, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_quote_string, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 4, 0, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_definition, 4, 0, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_definition, 6, 0, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_definition, 6, 0, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 5, 0, 7),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 5, 0, 7),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_body, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_body, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_body, 3, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_body, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_type, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_type, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 6, 0, 10),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 6, 0, 10),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_triple_quote_string, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_quote_string, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 5, 0, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_definition, 5, 0, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sticky_note_definition, 5, 0, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sticky_note_definition, 5, 0, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 4, 0, 4),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 4, 0, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4, 0, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 4, 0, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group_definition, 4, 0, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group_definition, 4, 0, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_definition, 4, 0, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_definition, 4, 0, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_item, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_type, 4, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_type, 4, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_type, 6, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_type, 6, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_checks_definition, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checks_definition, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indexes_definition, 4, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 4, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indexes_definition, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes_definition, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_checks_definition, 4, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checks_definition, 4, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_definition, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_definition, 3, 0, 0),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_definition, 3, 0, 6),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, 0, 6),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_injection, 2, 0, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_injection, 2, 0, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_kv_repeat1, 2, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_kv_repeat1, 2, 0, 0),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_kv_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_triple_quote_string_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_triple_quote_string_repeat1, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 3, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 4, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value, 1, 0, 5),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_item, 2, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_kv, 3, 0, 9),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_kv, 3, 0, 9),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_checks_definition_repeat1, 2, 0, 0),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_checks_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_action, 1, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_action, 1, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_item, 1, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_kv, 4, 0, 9),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_kv, 4, 0, 9),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quote_string_repeat1, 2, 0, 0),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quote_string_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2, 0, 0),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__settings_block_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__settings_block_repeat1, 2, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_composite_column_ref_repeat1, 2, 0, 0),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_composite_column_ref_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value, 2, 0, 5),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_ref_setting, 4, 0, 12),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_operator, 1, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_keyword, 1, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_item, 2, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_settings, 1, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [620] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dbml(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
