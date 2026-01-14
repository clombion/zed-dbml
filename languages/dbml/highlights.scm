; languages/dbml/queries/highlights.scm

; Keywords
[
  "Project"
  "Table"
  "TablePartial"
  "Enum"
  "enum"
  "Ref"
  "TableGroup"
  "indexes"
  "checks"
  "as"
] @keyword

; Punctuation
[
  "{"
  "}"
  "["
  "]"
  "("
  ")"
  ":"
  ","
  "."
] @punctuation

; Operators
(relationship_operator) @operator

; Literals (general rules first)
(single_quote_string) @string
(triple_quote_string) @string
(quoted_identifier) @variable
(expression_literal) @string.special
(number_literal) @number
(hex_color) @constant
[
  "true"
  "false"
] @boolean

; Note definition - AFTER general string rules so these take precedence
(note_definition "Note" @keyword)
(note_definition (single_quote_string) @comment.doc)
(note_definition (triple_quote_string) @comment.doc)

; Sticky note definition
(sticky_note_definition "Note" @keyword)
(sticky_note_definition name: (identifier) @type.definition)
(sticky_note_definition (single_quote_string) @comment.doc)
(sticky_note_definition (triple_quote_string) @comment.doc)

; Setting Keywords (pk, null, etc.)
(setting_keyword) @keyword

; Ref action keywords (cascade, restrict, etc.)
(ref_action) @keyword

; Inline ref keyword
(inline_ref_setting "ref" @keyword)

; Identifiers and Types
(project_definition name: (_) @type.definition)
(table_definition name: (_) @type.definition)
(table_definition alias: (identifier) @variable.parameter)
(table_partial_definition name: (identifier) @type.definition)
(enum_definition name: (_) @type.definition)
(table_group_definition name: (_) @type.definition)
(ref_definition name: (identifier) @type.definition)

; Partial injection
(partial_injection "~" @operator)
(partial_injection name: (identifier) @type)

; Enum values
(enum_value name: (_) @constant)

(column_definition name: (_) @variable)
(column_definition type: (_) @type)
(setting_kv key: (identifier) @property)

; Comments
(comment) @comment
