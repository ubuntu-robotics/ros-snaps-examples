# ROS 2 Humble content-sharing talker/listener

This example launches the ROS 2 `demo_nodes_cpp` talker/listener using
snapcraft's ROS 2 content-sharing extension for Humble.

## How to generate the snap
```console
snapcraft pack
```

## How to install the snap
- `sudo snap install ros2-humble-cs-talker-listener_*.snap --dangerous`

## How to run the snap
- `ros2-humble-cs-talker-listener.ros2-humble-cs-talker-listener`
