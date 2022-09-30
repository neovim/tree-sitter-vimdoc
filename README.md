tree-sitter-vimdoc
==================

This grammar intentionally support a subset of the vimdoc "spec"; predictable
results are the primary goal, so that _output_ formats (e.g. HTML) are
well-formed; the _input_ (vimdoc) is secondary. The first step should always be
to try to fix the input (within reason) rather than insist on a grammar that
handles vimdoc's endless quirks.

Overview
--------

- vimdoc format "spec":
    - [:help help-writing](https://neovim.io/doc/user/helphelp.html#help-writing)
    - https://github.com/nanotee/vimdoc-notes
- whitespace is intentionally captured in all atoms, because it is often used
  for "layout" and ascii art in legacy help files.
- `block` is the main top-level node which contains `line` nodes.
  - ends at blank line(s) or a line starting with `<`.
- `line`:
  - contains atoms (words, tags, taglinks, …)
  - contains `codeblock` because `>` can start a codeblock at the end of a line.
  - contains headings (`h1`, `h2`, `h3`) because `codeblock` terminated by
    "implicit stop" (no terminating `<`) consumes blank lines, so `block` has
    no way to end.
  - contains `column_heading` because `<` (the `codeblock` terminating char)
    can appear at the start of `column_heading`.
- `codeblock`:
  - contains `line` nodes which do not contain `word` nodes, it's just the full
    raw text line including whitespace. This is somewhat dictated by its
    "preformatted" nature; parsing the contents would require loading a "child"
    language (injection). See [#2](https://github.com/neovim/tree-sitter-vimdoc/issues/2).
  - the terminating `<` (and any following whitespace) is discarded (anonymous).
- `h1` = "Heading 1": `======` followed by text and optional `*tags*`.
- `h2` = "Heading 2": `------` followed by text and optional `*tags*`.
- `h3` = "Heading 3": only UPPERCASE WORDS, followed by optional `*tags*`.

Known issues
------------

- `line_li` ("list item") is experimental. It doesn't support nesting yet.
- Spec requires that `codeblock` delimiter ">" must be preceded by a space
  (" >"), not a tab. But currently the grammar doesn't enforce this. Example:
  `:help lcs-tab`.
- `url` doesn't handle _surrounding_ parens. E.g. `(https://example.com/#yay)` yields `word`
- `url` doesn't handle _nested_ parens. E.g. `(https://example.com/(foo)#yay)`

TODO
----

- `line_noeol` is a special-case to support documents that don't end in EOL.
  Grammar could be simpler if we require EOL at end of document.
- `line_modeline` ?
