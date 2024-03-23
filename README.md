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
    terminated by "implicit stop" (no terminating `<`) consumes blank lines, so
    `block` has no way to end.
- `line_li` ("listitem")
  - lines starting with `-`/`•` (_not_ `+`/`*`) are listitems.
  - consumes lines until blank line, codeblock, or next listitem.
  - nesting is ignored: indented listitems are parsed as siblings.
- `codeblock`:
  - contained by `line` or `line_li`, because ">" can start a codeblock at the
    end of any line.
  - contains `line` nodes without `word` nodes: it's just the full raw text
    line including whitespace. This is somewhat dictated by its "preformatted"
    nature; parsing the contents would require loading a "child" language
    (injection). See [#2](https://github.com/neovim/tree-sitter-vimdoc/issues/2).
  - the terminating `<` (and any following whitespace) is discarded (anonymous).
- `h1` = "Heading 1": `======` followed by text and optional `*tags*`.
- `h2` = "Heading 2": `------` followed by text and optional `*tags*`.
- `h3` = "Heading 3": UPPERCASE WORDS, followed by optional `*tags*`, followed
  by atoms.

Known issues
------------

- Input must end with newline/EOL (`\n`). Grammar does not support files without EOL.
- Input must end with a blank line. Though this doesn't seem to matter in practice.
- Spec requires that `codeblock` delimiter ">" must be preceded by a space
  (" >"), not a tab. But currently the grammar doesn't enforce this. Example:
  `:help lcs-tab`.
- `url` doesn't handle _surrounding_ parens. E.g. `(https://example.com/#yay)` yields `word`
- `url` doesn't handle _nested_ parens. E.g. `(https://example.com/(foo)#yay)`
- `column_heading` currently only recognizes tilde `~` preceded by space (i.e.
  `foo ~` not `foo~`). This covers 99% of :help files.
- `column_heading` children should be plaintext, but currently are parsed as `$._atom`.
- `modeline` must be preceded by a blank line.

TODO
----

- `tag_heading` : line(s) containing only tags, typically implies a "heading"
  before a block.

Release
-------

Steps to perform a release:

1. Bump and tag the version:

   **First** bump `Cargo.toml`, `pyproject.toml`, and `Makefile` to the new version. **Then** bump the package:
   ```bash
   npm version patch -m "release %s"
   ```

   Choose `patch`/`minor`/`major` to indicate query compatibility:
     - `patch` for bugfixes (no changes to queries needed)
     - `minor` for added nodes (queries may need changes to use new nodes but will not error)
     - `major` for removed or renamed nodes (queries will error if not adapted), other breaking changes

2. Bump to prerelease, without creating a tag:
   ```bash
   npm version --no-git-tag-version prerelease --preid dev
   git add package*.json Cargo.toml pyproject.toml Makefile
   git commit -m bump
   ```
3. Push:
   ```bash
   git push && git push --tags
   ```
4. Release the tagged commit: https://github.com/neovim/tree-sitter-vimdoc/releases/new
