// languages/dbml/grammar.js (Corrected with hex color support)

const PREC = {
  RELATIONSHIP: 1,
  SETTING_VALUES: 2,
};

module.exports = grammar({
  name: 'dbml',

  extras: $ => [
    $.comment,
    /\s/
  ],

  word: $ => $.identifier,

  conflicts: $ => [
    [$._qualified_identifier]
  ],

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.project_definition,
      $.table_definition,
      $.table_partial_definition,
      $.enum_definition,
      $.ref_definition,
      $.table_group_definition,
      $.sticky_note_definition
    ),

    // === Top Level Definitions ===

    project_definition: $ => seq(
      'Project',
      field('name', $._identifier),
      '{',
      repeat(choice(
        $.setting_kv,
        $.note_definition
      )),
      '}'
    ),

    table_definition: $ => seq(
      'Table',
      field('name', $._qualified_identifier),
      optional(seq('as', field('alias', $.identifier))),
      optional($.block_settings),
      field('body', $.table_body)
    ),

    table_partial_definition: $ => seq(
      'TablePartial',
      field('name', $.identifier),
      optional($.block_settings),
      field('body', $.table_body)
    ),

    enum_definition: $ => seq(
      choice('enum', 'Enum'),  // Accept both lowercase and uppercase
      field('name', $._qualified_identifier),
      '{',
      repeat($.enum_value),
      '}'
    ),

    ref_definition: $ => seq(
      'Ref',
      optional(field('name', $.identifier)),
      choice(
        seq(':', field('body', $.relationship_body)),
        seq('{', field('body', $.relationship_body), '}')
      )
    ),

    table_group_definition: $ => seq(
      'TableGroup',
      field('name', $.identifier),
      optional($.block_settings),
      '{',
      repeat($._table_group_item),
      '}'
    ),

    _table_group_item: $ => choice(
      $._identifier,
      $.note_definition
    ),

    // === Table Internals ===

    table_body: $ => seq(
      '{',
      repeat($._table_body_item),
      '}'
    ),

    _table_body_item: $ => choice(
      $.column_definition,
      $.indexes_definition,
      $.checks_definition,
      $.note_definition,
      $.partial_injection
    ),

    partial_injection: $ => seq(
      '~',
      field('name', $.identifier)
    ),

    column_definition: $ => seq(
      field('name', $._identifier),
      field('type', $._column_type),
      optional($.inline_settings)
    ),

    _column_type: $ => choice(
      $.identifier,
      $.quoted_identifier,
      seq($.identifier, '(', $.number_literal, ')'),
      seq($.identifier, '(', $.number_literal, ',', $.number_literal, ')')
    ),

    indexes_definition: $ => seq(
      'indexes',
      '{',
      repeat($.index_item),
      '}'
    ),

    index_item: $ => seq(
      choice(
        $._identifier,
        $.expression_literal,
        $.composite_index
      ),
      optional($.inline_settings)
    ),

    composite_index: $ => seq(
      '(',
      commaSep1(choice($._identifier, $.expression_literal)),
      ')'
    ),

    checks_definition: $ => seq(
      'checks',
      '{',
      repeat($.check_item),
      '}'
    ),

    check_item: $ => seq(
      $.expression_literal,
      optional($.inline_settings)
    ),

    note_definition: $ => seq(
      'Note',
      ':',
      $._string_literal
    ),

    sticky_note_definition: $ => seq(
      'Note',
      field('name', $.identifier),
      '{',
      $._string_literal,
      '}'
    ),

    // === Settings and Values ===
    
    // Define a reusable rule for the settings block [ ... ]
    _settings_block: $ => seq(
      '[',
      commaSep($._setting),
      ']'
    ),

    // Use the reusable rule for both inline and block settings
    inline_settings: $ => $._settings_block,

    block_settings: $ => $._settings_block,

    _setting: $ => choice(
      $.setting_kv,
      $.setting_keyword,
      $.inline_ref_setting
    ),

    setting_kv: $ => prec.left(PREC.SETTING_VALUES, seq(
      field('key', $.identifier),
      ':',
      commaSep1($._setting_value)
    )),

    setting_keyword: $ => choice(
      'pk',
      'primary key',
      'null',
      'not null',
      'unique',
      'increment'
    ),

    _setting_value: $ => choice(
      $._string_literal,
      $.expression_literal,
      $.number_literal,
      $.hex_color,
      $.ref_action,
      $.identifier,
      'true',
      'false'
    ),

    // Named rule for ref action keywords (delete/update values)
    ref_action: $ => choice(
      'cascade',
      'restrict',
      'no action',
      'set null',
      'set default'
    ),

    // === Relationships (Refs) ===

    inline_ref_setting: $ => prec(PREC.RELATIONSHIP, seq(
      'ref',
      ':',
      field('operator', $.relationship_operator),
      $._column_ref
    )),

    relationship_body: $ => seq(
      $._column_ref,
      field('operator', $.relationship_operator),
      $._column_ref,
      optional(field('settings', $.ref_settings))
    ),

    ref_settings: $ => seq(
      '[',
      commaSep($._setting),
      ']'
    ),

    relationship_operator: $ => choice('<>', '<', '>', '-'),

    _column_ref: $ => choice(
      $._qualified_identifier,
      $.composite_column_ref
    ),

    composite_column_ref: $ => seq(
      $._qualified_identifier,
      '.',
      '(',
      commaSep1(choice($.identifier, $.quoted_identifier)),
      ')'
    ),

    // === Enum Internals ===

    enum_value: $ => seq(
      field('name', $._identifier),
      optional($.inline_settings)
    ),

    // === Lexical Tokens ===

    _qualified_identifier: $ => seq(
      choice($.identifier, $.quoted_identifier),
      repeat(seq('.', choice($.identifier, $.quoted_identifier)))
    ),

    _identifier: $ => choice(
      $.identifier,
      $.quoted_identifier
    ),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    _string_literal: $ => choice(
      $.single_quote_string,
      $.triple_quote_string
    ),

    single_quote_string: $ => seq(
      "'",
      repeat(choice(
        /[^'\\]+/,           // Any chars except ' and \
        /\\./                // Escaped character (including \')
      )),
      "'"
    ),

    triple_quote_string: $ => seq(
      "'''",
      repeat(choice(
        /[^'\\]+/,
        /\\./,
        /'[^']/,
        /''[^']/
      )),
      "'''"
    ),

    quoted_identifier: $ => seq('"', /[^"]*/, '"'),

    expression_literal: $ => seq('`', /[^`]*/, '`'),

    number_literal: $ => /-?\d+(\.\d+)?/,

    hex_color: $ => /#[0-9A-Fa-f]{3,8}/,

    comment: $ => token(choice(
      seq('//', /.*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')
    )),
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
