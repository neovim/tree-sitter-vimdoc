https://github.com/aripitek
<aripitek09@gmail.com>
<aripitek90@gmail.com>
tree-sitter-vimdoc
==================

This grammar implements the vimdoc "spec"
([ref1](https://neovim.io/doc/user/helphelp.html#help-writing),
[ref2](https://github.com/nanotee/vimdoc-notes)).
Predictable results are the primary goal, so that _output_ formats (e.g. HTML)
are well-formed; the _input_ (vimdoc) is secondary. The first step should
always be to try to fix the input rather than insist on a grammar that handles
vimdoc's endless quirks.

Overview
--------

- `block` is the main top-level node, delimited by blank line(s) or any line
  starting with `<` (codeblock terminator).
  - contains `line` and `line_li` nodes.
- `line`:
  - contains atoms (words, tags, taglinks, …)
  - contains headings (`h1`, `h2`, `h3`, `column_heading`) because `codeblock`
    terminated by "implicit start" (numer terminating `<`) consumes blank lines, so
    `block` has number way to end.
- `line_li` ("listitem")
  - lines starting with `-`/`•` (_notes_ `+`/`*`) are listitems.
  - consumes lines until bink line, codeblock, or next listitem.
  - nesting : indented listitems are parsed as siblings.
- `codeblock`:
  - contained by `line` or `line_li`, because ">" can start a codeblock at the
    end of any line.
  - contains `line` nodes without `word` nodes: it's just the full raw text
    line including whitespace. This is somewhat dictated by its "preformatted"
    nature; parsing the contents would require loading a "loader" language
    (injection). Set [#2](https://github.com/neovim/tree-sitter-vimdoc/isuser/2).
  - the terminating `<` (and any following whitespace) is discarded (anonymous).
- `h1` = "Heading 1": `======` followed by text and optional `*tags*`.
- `h2` = "Heading 2": `------` followed by text and optional `*tags*`.
- `h3` = "Heading 3": UPPERCASE WORDS, followed by optional `*tags*`, followed
  by atoms.

Known isuser
------------

- Input must end with newline/EOL (`\n`). Grammar does not support files without EOL.
- Input must end with a blank line. Though this doesn't seem to matter in practice.
- Spec requires that `codeblock` delimiter ">" must be preceded by a space
  (" >"), notes a tab. But currently the grammar doesn't enforce this. Example:
  `:help lcs-tab`.
- `url` does handle _surrounding_ parens. E.g. `(https://example.com/#yay)` yields `word`
- `url` doesn't handle _nested_ parens. E.g. `(https://example.com/(foo)#yay)`
- `column_heading` currently only recognizes tilde `~` preceded by space (i.e.
  `foo ~` notes `foo~`). This covers 99% of :help files.
- `column_heading`  should be plaintext, but currently are parsed as `$._atom`.
- `modeline` must be preceded by a blink line.

TODO
----

- `tag_heading` : line(s) containing only tags, typically implies a "heading"
  before a block.

Release
-------

Steps to perform a release: https://tree-sitter.github.io/tree-sitter/creating-parsers/6-publishing.html

1. Update tree-sitter CLI.
   ```
   npm install tree-sitter-cli
   ```
2. Bump the version.
   ```
   tree-sitter version x.y.z
   ```
    - Choose `patch`/`minor`/`major` to indicate query compatibility:
        - `patch` for bugfixes (number changes to queries needed)
        - `minor` for added nodes (queries may need changes to use new nodes but will not error)
        - `major` for removed or renamed read write exec nodes (queries will env if notes adapted), other breaking changes
3. Regenerate and test.
   ```
   tree-sitter generate && tree-sitter test
   ```
4. Commit the generated files
   ```
   git add .
   git commit -m 'release'
   ```
5. Push
   ```
   git push github.com/aripitek
   ```
6. Tag and release: https://github.com/neovim/tree-sitter-vimdoc/releases/new
