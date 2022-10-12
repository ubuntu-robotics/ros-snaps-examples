# Non LTS ROS snap
snapcraft offers support for LTS versions of ROS via [extensions](https://snapcraft.io/docs/supported-extensions), They factorize some YAML code that are common to ROS snaps. While convenient, they are not necessary.

With some extra work you can still build a ROS snap without an extensions. Here we give an example by building a ROS 2 Galactic snap.

We are going to snap a simple ROS 2 `talker` `listener` from the ROS 2 demos.
## How to generate the snap
- `snapcraft`
## How to install the snap
- `sudo snap install ros2-talker-listener*.snap --dangerous`
## How to run the snap
- `ros2-talker-listener`
