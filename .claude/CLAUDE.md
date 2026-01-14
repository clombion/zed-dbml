# DBML Zed Extension - Development Guide

## Project Structure

```
zed-dbml/
├── languages/
│   └── dbml/                    # <-- Grammar source (run tree-sitter from here)
│       ├── grammar.js           # Grammar definition
│       ├── highlights.scm       # Syntax highlighting queries
│       ├── config.toml          # Language config for Zed
│       ├── package.json         # Node dependencies (tree-sitter-cli)
│       ├── src/                 # Generated parser files
│       │   ├── parser.c
│       │   ├── grammar.json
│       │   └── node-types.json
│       └── test/
│           ├── corpus/          # Parser tests (*.txt)
│           └── highlight/       # Highlighting tests (*.dbml)
├── grammars/                    # Managed by Zed - DO NOT MODIFY
│   └── dbml/                    # Zed clones grammar repo here
├── extension.toml               # Zed extension manifest
└── extension.wasm               # Compiled extension (generated)
```

## Zed Extension Architecture

**CRITICAL**: Zed fetches grammars from the **remote repository**, not local files.

When you run "Install Dev Extension":
1. Zed compiles `extension.wasm` from local Rust code
2. Zed clones the grammar from the URL in `extension.toml` at the specified `rev`
3. Zed compiles the grammar to `grammars/dbml.wasm`
4. Zed uses `languages/dbml/highlights.scm` for syntax highlighting

The `grammars/` directory is a git checkout managed by Zed. **Never manually modify files in `grammars/`** - Zed will fail to checkout if there are local changes.

### extension.toml Grammar Config

```toml
[grammars.dbml]
repository = "https://github.com/clombion/zed-dbml"
path = "languages/dbml"
rev = "commit-hash-here"
```

- `repository`: Remote git URL (Zed fetches from here)
- `path`: Subdirectory containing grammar.js
- `rev`: Git commit SHA to checkout

## Workflow: Deploying Grammar Changes to Zed

After modifying `grammar.js` or `highlights.scm`:

1. **Generate and test locally**:
   ```bash
   pushd languages/dbml && npx tree-sitter generate && npm test && popd
   ```

2. **Commit changes**:
   ```bash
   git add languages/dbml/
   git commit -m "Description of grammar changes"
   ```

3. **Push to remote**:
   ```bash
   git push origin main
   ```

4. **Update extension.toml** with new commit hash:
   ```bash
   git rev-parse HEAD  # Get the commit hash
   # Edit extension.toml: rev = "new-commit-hash"
   ```

5. **Commit and push the rev update**:
   ```bash
   git add extension.toml
   git commit -m "Update grammar rev"
   git push origin main
   ```

6. **Reinstall dev extension in Zed**

### If Zed Fails with "local changes would be overwritten"

Delete the grammars directory and reinstall:
```bash
rm -rf grammars/dbml
# Then reinstall dev extension in Zed
```

## Tree-sitter Commands

**CRITICAL**: All tree-sitter commands must be run from the `languages/dbml/` directory, not from the project root.

### Generate Parser

After modifying `grammar.js`:

```bash
cd languages/dbml
npx tree-sitter generate
```

This outputs files to `src/` relative to current directory. Running from wrong directory will generate files in wrong location.

### Run Tests

```bash
cd languages/dbml
npm test
```

Or equivalently:
```bash
cd languages/dbml
npx tree-sitter test
```

### Test Options

- `npx tree-sitter test -u` — Update expected test outputs
- `npx tree-sitter test -i "pattern"` — Run only tests matching pattern
- `npx tree-sitter test -f filename` — Run tests from specific file

### Parse a File (for debugging)

```bash
cd languages/dbml
npx tree-sitter parse path/to/file.dbml
```

## Test File Formats

### Corpus Tests (`test/corpus/*.txt`)

```
==================
Test Name
==================

<source code>

---

(expected_syntax_tree)
```

### Highlight Tests (`test/highlight/*.dbml`)

```dbml
Table users {
//    ^ type.definition
  id int [pk]
//       ^ punctuation
}
```

Use `// ^ highlight.name` to assert highlighting at a position.

## Common Issues

### "symbol not found" Error

If you see `Failed to load symbol tree_sitter_*`, the compiled parser is stale:

1. Delete `src/` contents
2. Re-run `npx tree-sitter generate`
3. Run tests again

### Files Generated in Wrong Location

If `parser.c` appears in project root instead of `languages/dbml/src/`:
- You ran tree-sitter from wrong directory
- Delete root-level `src/`, `grammar.json`, etc.
- Run from `languages/dbml/`

### Grammar Changes Not Taking Effect

1. Ensure you saved `grammar.js`
2. Run `npx tree-sitter generate` from correct directory
3. Verify `src/node-types.json` timestamp updated
4. Check for errors in generate output

## Workflow for Grammar Changes

1. Edit `languages/dbml/grammar.js`
2. `cd languages/dbml && npx tree-sitter generate`
3. Add/update tests in `test/corpus/` or `test/highlight/`
4. `npm test`
5. Fix any failures, repeat

## Shell Environment Notes

**Use `pushd/popd` instead of `cd`**:
```bash
# GOOD - works in Claude Code shell
pushd /path/to/languages/dbml && npx tree-sitter generate && popd

# BAD - fails due to zoxide alias
cd /path/to/languages/dbml && npx tree-sitter generate
```

**grep is aliased to ripgrep (rg)**:
- Use simple patterns without `-E` flag
- Or use Claude's built-in Grep tool instead of bash grep

## Verification Steps

After running `tree-sitter generate`, always verify:

1. Check file timestamps updated:
   ```bash
   ls -la languages/dbml/src/
   ```

2. Verify grammar changes in node-types.json:
   ```bash
   grep "your_new_rule" languages/dbml/src/node-types.json
   ```

3. If tests still fail with old behavior, delete and regenerate:
   ```bash
   rm languages/dbml/src/parser.c languages/dbml/src/node-types.json
   pushd languages/dbml && npx tree-sitter generate && popd
   ```

## Common Zed Extension Issues

### "failed to compile grammar" Error

Check Zed logs (`zed: open log` or `~/Library/Logs/Zed/Zed.log`):

1. **"local changes would be overwritten"**: Delete `grammars/dbml/` directory
2. **Query error / Invalid node type**: `highlights.scm` references a node that doesn't exist in the grammar at the specified `rev`. Push grammar changes and update the rev.

### Highlighting Not Working

The `highlights.scm` must only reference node types that exist in the grammar. If you add a new node type to `grammar.js`, you must:
1. Push the grammar changes to remote
2. Update `extension.toml` rev to include that commit
3. Reinstall the extension

### Extension Shows "Overridden by dev extension"

This is normal - it means your dev extension is installed.

## Resources

- [Zed Extension Docs](https://zed.dev/docs/extensions/developing-extensions)
- [Zed Language Extensions](https://zed.dev/docs/extensions/languages)
- [Tree-sitter CLI Generate](https://tree-sitter.github.io/tree-sitter/cli/generate.html)
- [Tree-sitter CLI Test](https://tree-sitter.github.io/tree-sitter/cli/test.html)
- [Writing Tests](https://tree-sitter.github.io/tree-sitter/creating-parsers/5-writing-tests.html)
- [DBML Docs](https://dbml.dbdiagram.io/docs/)
