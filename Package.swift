// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterVimdoc",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterVimdoc", targets: ["TreeSitterVimdoc"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterVimdoc",
                path: ".",
                exclude: [
                    "Cargo.toml",
                    "Makefile",
                    "binding.gyp",
                    "bindings/c",
                    "bindings/go",
                    "bindings/node",
                    "bindings/python",
                    "bindings/rust",
                    "prebuilds",
                    "node_modules",
                    "grammar.js",
                    "package.json",
                    "package-lock.json",
                    "pyproject.toml",
                    "setup.py",
                    "test",
                    "examples",
                    ".editorconfig",
                    ".github",
                    ".gitignore",
                    ".gitattributes",
                ],
                sources: [
                    "src/parser.c",
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ],
    cLanguageStandard: .c11
)
