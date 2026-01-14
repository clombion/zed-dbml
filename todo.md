# DBML Extension Improvements

Based on review of [holistics/dbml](https://github.com/holistics/dbml) and [official docs](https://dbml.dbdiagram.io/docs/).

## Grammar Gaps (`grammar.js`)

### Missing Constructs

| Feature | Status | Details |
|---------|--------|---------|
| `TablePartial` | ✅ Done | `TablePartial name { }` and `~name` injection in tables |
| `check` constraint | ✅ Done | Column-level `[check: \`expr\`]` and table-level `checks { }` block |
| Composite foreign keys | ✅ Done | `table.(col1, col2) > other.(a, b)` via `composite_column_ref` rule |
| Ref settings | ✅ Done | `delete:`, `update:`, `color:` on relationships |
| Index `type` setting | ✅ Works | Handled via generic `setting_kv` rule |

### Specific Issues

All resolved:
- ~~`setting_keyword` missing `check`~~ → Handled as `[check: \`expr\`]` key-value pair
- ~~`table_group_definition` qualified identifiers~~ → Now supports settings and notes
- ~~`_qualified_identifier` quoted strings~~ → Now supports `"schema"."table"` via `quoted_identifier`
- ~~`_setting_value` bare identifiers~~ → Now includes `$.identifier` and `ref_action`

---

## Highlighting Gaps (`highlights.scm`)

### Status

| Element | Status | Implementation |
|---------|--------|----------------|
| `ref` keyword | ✅ Done | `(inline_ref_setting "ref" @keyword)` |
| Hex colors | ✅ Done | `(hex_color) @constant` |
| Enum values | ✅ Done | `(enum_value name: (_) @constant)` |
| Table alias | ✅ Done | `(table_definition alias: (identifier) @variable.parameter)` |
| Quoted identifiers | ✅ Done | `quoted_identifier` node highlighted as `@variable` |
| Ref name | ✅ Done | `(ref_definition name: (identifier) @type.definition)` |
| Note string content | ✅ Done | Moved note rules after general string rules for correct precedence |

---

## Priority

### High Priority
- [x] Add `ref` keyword highlighting in inline settings
- [x] Add ref relationship settings (`delete`, `update`, `color`) to grammar
- [x] Highlight enum values distinctly
- [x] Add table alias highlighting

### Medium Priority
- [x] Support `check` constraint in grammar
- [x] Add `TablePartial` construct
- [x] Better composite foreign key support
- [x] Index type settings (`btree`, `hash`) — works via generic `setting_kv` (use quoted `'btree'`)
- [x] Support quoted strings in `_qualified_identifier` (for table/schema names)
- [x] Add bare identifiers to `_setting_value` — now includes `$.identifier` and `ref_action`

### Low Priority
- [x] Sticky notes support — `Note name { 'content' }` via `sticky_note_definition`
- [x] More granular expression highlighting — `expression_literal` has `@string.special`
- [x] Fix note string highlight precedence (`@comment.doc` vs `@string`)
