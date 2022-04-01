all:
	tree-sitter generate --abi=13
	tree-sitter test
