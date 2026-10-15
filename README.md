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
  - Consumes lines (incl. codeblocks) until blank line, `<` line, or next
    listitem.
    - Except: `<` followed by indented text (on the same or next line) is
      skipped, so the listitem continues after its codeblock:
      ```
      - foo: >
          code
      <
        still foo: >
          code
      <  still foo
      - bar
      ```
  - Contains a codeblock not preceded by a blank line.
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

### Tables

A *table* is a `block` whose first child is a `column_heading` with ≥2 cells,
followed by `line` nodes (table rows, separators). A *cell* is delimited by
`<Tab>`; whitespace following `<Tab>` is ignored. A `line` containing only
`[-~= ]` chars is a *separator*.

Example (Lua):
```lua
--- Gets the rows (header first) of `block` if it is a table, else nil.
--- Each row is a list of cells, each cell a list of nodes.
local function get_table(block, src)
  local hdr = block:named_child(0) and block:named_child(0):named_child(0)
  if not hdr or hdr:type() ~= 'column_heading' then
    return nil
  end
  --- Splits the children of `node` into cells, where the text between two children has a tab.
  local function cells(node)
    local row, prev_end = { {} }, nil
    for child in node:iter_children() do
      if child:named() then
        local _, _, start, _, _, end_ = child:range(true)
        if prev_end and src:sub(prev_end + 1, start):find('\t') then
          row[#row + 1] = {}
        end
        table.insert(row[#row], child)
        prev_end = end_
      end
    end
    return row
  end
  local rows = { cells(hdr:named_child(0)) } -- (column_heading (heading …) (delimiter))
  for i = 1, block:named_child_count() - 1 do
    local line = block:named_child(i)
    local text = vim.treesitter.get_node_text(line, src)
    local row = not text:match('^[%s%-=~]+$') and cells(line) -- Skip separator.
    if row and #row == 1 and #rows > 1 then
      vim.list_extend(rows[#rows][#rows[#rows]], row[1]) -- Wrapped line continues last cell.
    elseif row then
      rows[#rows + 1] = row
    end
  end
  return #rows[1] > 1 and #rows > 1 and rows or nil
end

-- This query finds potential "table" blocks; get_table() splits them into cells.
local query = vim.treesitter.query.parse('vimdoc', [[
  (block . (line (column_heading) @header (#lua-match? @header "%S\t"))) @table
]])
local root = vim.treesitter.get_string_parser(src, 'vimdoc'):parse()[1]:root()
for id, block in query:iter_captures(root, src) do
  if query.captures[id] == 'table' then
    local rows = get_table(block, src) -- nil if not a table.
  end
end
```

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

