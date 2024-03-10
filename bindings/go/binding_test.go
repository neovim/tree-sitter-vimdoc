package tree_sitter_vimdoc_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/neovim/tree-sitter-vimdoc"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_vimdoc.Language())
	if language == nil {
		t.Errorf("Error loading Vimdoc grammar")
	}
}
