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
        .target(
            name: "CompassIosSdk"),
        .testTarget(
            name: "CompassIosSdkTests",
            dependencies: ["CompassIosSdk"]),
    ]
)
