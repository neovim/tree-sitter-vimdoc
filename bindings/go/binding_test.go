package tree_sitter_vimdoc_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_vimdoc "github.com/neovim/tree-sitter-vimdoc/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_vimdoc.Language())
	if language == nil {
		t.Errorf("Error loading Vimdoc grammar")
	}
}
