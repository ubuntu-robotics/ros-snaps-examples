# ROS 2 Jazzy talker/listener

This example launches the ROS 2 `demo_nodes_cpp` talker/listener with the
standard `ros2-jazzy` extension. The ROS 2 runtime dependencies are included in
the application snap.

For an example that obtains the ROS 2 base runtime from a content snap, see
[`content_sharing_jazzy_core24`](../content_sharing_jazzy_core24/README.md).

## How to generate the snap

```console
snapcraft pack
```

## How to install the snap

```console
sudo snap install ros2-jazzy-talker-listener_*.snap --dangerous
```

## How to run the snap

```console
ros2-jazzy-talker-listener
```
