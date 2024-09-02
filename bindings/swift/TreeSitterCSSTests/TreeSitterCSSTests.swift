import XCTest
import SwiftTreeSitter
import TreeSitterCSS

final class TreeSitterCSSTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_css())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading CSS grammar")
    }
}
