// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterVimdoc",
    products: [
        .library(name: "TreeSitterVimdoc", targets: ["TreeSitterVimdoc"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterVimdoc",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterVimdocTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterVimdoc",
            ],
            path: "bindings/swift/TreeSitterVimdocTests"
        )
    ],
    cLanguageStandard: .c11
)
