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
  - Contains `line` and `line_li` nodes.
- `line`:
  - Contains atoms (words, tags, taglinks, …)
  - Contains headings (`h1`, `h2`, `h3`, `column_heading`) because `codeblock`
    terminated by "implicit stop" (no terminating `<`) consumes blank lines, so
    `block` has no way to end.
- `line_li` ("listitem")
  - Lines starting with `-`/`•`/`[0-9].` (_not_ `+`/`*`) are listitems.
  - Use the `prefix` node to detect if the listitem is ordered (numbered) or
    unodered.
  - Consumes lines until blank line, codeblock, or next listitem.
  - Nesting is ignored: indented listitems are parsed as siblings. Consumers can
    check leading whitespace to decide nesting.
- `codeblock`:
  - Contained by `line` or `line_li`, because ">" can start a codeblock at the
    end of any line.
  - Contains `line` nodes without `word` nodes: it's just the full raw text
    line including whitespace. This is somewhat dictated by its "preformatted"
    nature; parsing the contents would require loading a "child" language
    (injection). See [#2](https://github.com/neovim/tree-sitter-vimdoc/issues/2).
  - The terminating `<` (and any following whitespace) is discarded (anonymous).
- `url` intentionally does not capture `.,)` at the end of the URL. See also [Known issues](#known-issues).
- `h1` = "Heading 1": `======` followed by text and optional `*tags*`.
- `h2` = "Heading 2": `------` followed by text and optional `*tags*`.
- `h3` = "Heading 3": UPPERCASE WORDS, followed by optional `*tags*`, followed
  by atoms.

Known issues
------------

- Input must end with newline/EOL (`\n`). Grammar does not support files without EOL.
- Input must end with a blank line. Though this doesn't seem to matter in practice.
- Any line starting with `1.` (or other number) is treated as a listitem, even
  if the first line of its `block` is not a listitem. Example:
  ```
  Foo was 0, not
  1. Uh oh.
  ```
- Spec requires that `codeblock` delimiter ">" must be preceded by a space
  (" >"), not a tab. But currently the grammar doesn't enforce this. Example:
  `:help lcs-tab`.
- `url` cannot contain a closing bracket `]` anywhere in the URL. (Workaround:
  URL-encode the bracket.) This is a tradeoff so that markdown hyperlinks work:
  ```
  [https://example.com](https://example.com)
  ```
- `column_heading` currently only recognizes tilde `~` preceded by space (i.e.
  `foo ~` not `foo~`). This covers 99% of :help files.
- `column_heading` children should be plaintext, but currently are parsed as `$._atom`.
- `modeline` must be preceded by a blank line.

TODO
----

- `h4` ("tag heading") : a line containing only tags, or ending with a tag, is
  a "h4" heading.

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
        - `patch` for bugfixes (no changes to queries needed)
        - `minor` for added nodes (queries may need changes to use new nodes but will not error)
        - `major` for removed or renamed nodes (queries will error if not adapted), other breaking changes
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
   git push
   ```
6. Tag and release: https://github.com/neovim/tree-sitter-vimdoc/releases/new

### Publis to crates.io

Crate: https://crates.io/crates/tree-sitter-vimdoc

```
cargo publish --dry-run
cargo login
cargo publish
```

