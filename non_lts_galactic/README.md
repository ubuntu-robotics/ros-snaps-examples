# Non LTS ROS snap
Snapcraft offers support for LTS versions of ROS via [extensions](https://snapcraft.io/docs/supported-extensions).
They factorize some YAML code that are common to ROS snaps. While convenient, they are not mandatory.

This example demonstrates how to build a ROS 2 snap based on Galactic, a non-LTS distribution, thus without using an extension.

We are going to snap a simple ROS 2 `talker` `listener` from the ROS 2 demos.
## How to generate the snap
- `snapcraft`
## How to install the snap
- `sudo snap install ros2-talker-listener*.snap --dangerous`
## How to run the snap
- `ros2-talker-listener`
