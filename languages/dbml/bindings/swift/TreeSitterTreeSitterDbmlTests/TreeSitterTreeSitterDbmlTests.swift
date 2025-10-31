import XCTest
import SwiftTreeSitter
import TreeSitterTreeSitterDbml

final class TreeSitterTreeSitterDbmlTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_tree_sitter_dbml())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading TreeSitterDbml grammar")
    }
}
