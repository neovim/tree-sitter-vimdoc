tree-sitter-vimdoc
==================

This grammar intentionally support a subset of the vimdoc "spec"; predictable
results are the primary goal, so that _output_ formats (e.g. HTML) are
well-formed; the _input_ (vimdoc) is secondary. The first step should always be
to try to fix the input (within reason) rather than insist on a grammar that
handles vimdoc's endless quirks.

Notes
-----

- vimdoc format "spec":
    - [:help help-writing](https://neovim.io/doc/user/helphelp.html#help-writing)
    - https://github.com/nanotee/vimdoc-notes
- whitespace is intentionally captured in `(word)`, because it is often necessary to be
  able to correctly layout vim help files (especially old/legacy).
- `(codeblock)` is contained by `(line)` because `>` can start a code block at the end of a line.
- `(column_heading)` is contained by `(line)` because `>` (to close
  a `(codeblock)` can appear at the start of `(column_heading)`.
- `h1` ("Heading 1"): `======` followed by text and optional `*tags*`.
- `h2` ("Heading 2"): `------` followed by text and optional `*tags*`.
- `h3` ("Heading 3"): only UPPERCASE WORDS, followed by optional `*tags*`.

Known issues
------------

- `line_li` ("list item") is _experimental_. It doesn't support nesting yet and
  it may not work well; you can treat it as a normal `line` for layout purposes.
- `codeblock` ">" must not be preceded only by tabs, a space char is required (" >").
  See `:help lcs-tab` for example. Currently the grammar doesn't enforce this.
- `codeblock` terminated by an "implicit stop" (i.e. no terminating `<`)
  consumes the first char of the terminating line, and continues the parent
  `block`, preventing top-level forms like `h1`, `h2` from being recognized
  until a blank line is encountered.
- `line` in a `codeblock` does not contain `word` atoms, it's just the full
  raw text line including whitespace. This is somewhat dictated by its
  "preformatted" nature; parsing the contents would require loading a "child"
  language (injection). See [#2](https://github.com/vigoux/tree-sitter-vimdoc/issues/2).
- `url` doesn't handle _surrounding_ parens. E.g. `(https://example.com/#yay)` yields `word`
- `url` doesn't handle _nested_ parens. E.g. `(https://example.com/(foo)#yay)`
- Ideally `block_end` should consume the last block of the document _only_ if that
  block is missing a trailing blank line or EOL ("\n").
    - TODO: consider simply _not supporting_ docs without EOL?
- Ideally `line_noeol` should consume the last line of the document _only_ if
  that line is missing EOL ("\n").
    - TODO: consider simply _not supporting_ docs without EOL?

TODO
----

- `line_noeol` is a special-case to support documents that don't end in EOL.
  Grammar could be a bit simpler if we just require EOL at end of document.
- `line_modeline` (only at EOF)
