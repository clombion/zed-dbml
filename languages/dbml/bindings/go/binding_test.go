package tree_sitter_tree_sitter_dbml_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_tree_sitter_dbml "github.com/tree-sitter/tree-sitter-tree_sitter_dbml/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_tree_sitter_dbml.Language())
	if language == nil {
		t.Errorf("Error loading TreeSitterDbml grammar")
	}
}
