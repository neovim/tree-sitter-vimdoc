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
- `(code_block)` is contained by `(line)` because `>` can start a code block at the end of a line.

Known issues
------------

- `line` in a `code_block` does not contain `word` atoms, it's just the full
  raw text line including whitespace. This is somewhat dictated by its
  "preformatted" nature; parsing the contents implies loading a "child"
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
- `column_heading` should not allow hotlinks. This is sometimes used in old help files to show results of a code example, e.g. in `usr_41.txt`:
  ```
  List concatenation is done with +: >
          :echo alist + ['foo', 'bar']
  <	['foo', 'bar', 'foo', 'bar'] ~
  ```
