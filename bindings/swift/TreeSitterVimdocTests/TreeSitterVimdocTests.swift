import XCTest
import SwiftTreeSitter
import TreeSitterVimdoc

final class TreeSitterVimdocTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_vimdoc())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Vimdoc grammar")
    }
}
