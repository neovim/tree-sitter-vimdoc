from unittest import TestCase

import tree_sitter, tree_sitter_vimdoc


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_vimdoc.language())
        except Exception:
            self.fail("Error loading Vimdoc grammar")
