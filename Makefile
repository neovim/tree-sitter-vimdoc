
.PHONY: build

build: parser/vimdoc.so

parser/vimdoc.so: src/parser.c
	$(RM) $@
	mkdir -p parser
	$(CC) -o $@ -Isrc $^ -shared -fPIC -Os

src/parser.c: grammar.js
	tree-sitter generate

.PHONY: all
all:
	npm run test

.PHONY: run
run: all
	tree-sitter build-wasm
	tree-sitter web-ui
