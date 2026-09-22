# ROS 2 Jazzy content-sharing talker/listener

This example launches the ROS 2 `demo_nodes_cpp` talker/listener using
Snapcraft's `ros2-jazzy-ros-base` extension. The ROS 2 base runtime is provided
by the `ros-jazzy-ros-base` content snap.

For an example that includes the ROS 2 runtime in the application snap, see
[`talker_listener_jazzy_core24`](../talker_listener_jazzy_core24/README.md).

## How to generate the snap

```console
SNAPCRAFT_ENABLE_EXPERIMENTAL_EXTENSIONS=1 snapcraft pack
```

## How to install the snap

```console
sudo snap install ros2-jazzy-cs-talker-listener_*.snap --dangerous
```

## How to run the snap

```console
ros2-jazzy-cs-talker-listener
```
