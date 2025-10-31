; languages/dbml/queries/highlights.scm

; Keywords
[
  "Project"
  "Table"
  "Enum"
  "enum"
  "Ref"
  "TableGroup"
  "indexes"
  "as"
] @keyword

; Note definition
(note_definition "Note" @comment.doc) ; Highlight the "Note" keyword
(note_definition (single_quote_string) @comment.doc)
(note_definition (triple_quote_string) @comment.doc)

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

; Literals
(single_quote_string) @string
(triple_quote_string) @string
(expression_literal) @string.special
(number_literal) @number
(hex_color) @string
[
  "true"
  "false"
] @boolean

; Setting Keywords (pk, null, etc.)
(setting_keyword) @keyword

; Identifiers and Types
(project_definition name: (_) @type.definition)
(table_definition name: (_) @type.definition)
(enum_definition name: (_) @type.definition)
(table_group_definition name: (_) @type.definition)

(column_definition name: (_) @variable)
(column_definition type: (_) @type)
(setting_kv key: (identifier) @property)

; Comments
(comment) @comment
