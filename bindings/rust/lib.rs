//! This crate provides Vimdoc language support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [LANGUAGE][] constant to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! let code = r#"
//!   {lines}   |readfile()|-style
//!   {type}    behavior:
//!             • "b" |blockwise-visual|
//!             • "c" |charwise|
//!             • "l" |linewise|
//!             • "listitem"
//!   {consumes} adjacent
//!
//! "#;
//! let mut parser = tree_sitter::Parser::new();
//! let language = tree_sitter_vimdoc::LANGUAGE;
//! parser
//!     .set_language(&language.into())
//!     .expect("Error loading Vimdoc parser");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter_language::LanguageFn;

extern "C" {
    fn tree_sitter_vimdoc() -> *const ();
}

/// The tree-sitter [`LanguageFn`][LanguageFn] for this grammar.
///
/// [LanguageFn]: https://docs.rs/tree-sitter-language/*/tree_sitter_language/struct.LanguageFn.html
pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_vimdoc) };

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &str = include_str!("../../src/node-types.json");

/// The syntax highlight queries for this grammar.
pub const HIGHLIGHTS_QUERY: &str = include_str!("../../queries/vimdoc/highlights.scm");

/// The language injection queries for this grammar.
pub const INJECTIONS_QUERY: &str = include_str!("../../queries/vimdoc/injections.scm");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE.into())
            .expect("Error loading Vimdoc parser");
    }
}
