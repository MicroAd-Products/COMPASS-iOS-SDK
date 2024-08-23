import PackageDescription

let package = Package(
    name: "CompassIosSdk",
    platforms: [.iOS(.v15)],
    products: [
        .library(
            name: "CompassIosSdk",
            targets: ["CompassIosSdk"]),
    ],
    targets: [
        .binaryTarget(
            name: "CompassIosSdk",
            path: "./CompassIosSdk.xcframework"
        )
    ]
)
