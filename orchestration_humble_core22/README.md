# ROS 2 talker listener orchestrated within a snap
This repository is used by the Canonical's blogpost [ROS orchestration with snaps](https://ubuntu.com/blog/ros-orchestration-with-snaps).

This repository present a simple ROS 2 Humble talker-listener snapped as well as suggestions to orchestrate it.
## Install the snap
Make sure [`snapd`](https://snapcraft.io/docs/installing-snapd) and [`snapcraft`](https://snapcraft.io/snapcraft) are both installed on your computer.

Then at the root of this file:

`SNAPCRAFT_ENABLE_EXPERIMENTAL_EXTENSIONS=1 snapcraft`

`sudo snap install talker-listener_0.1_amd64.snap --dangerous`

## Usage
Please refer to Canonical's [blog](https://ubuntu.com/blog/ros-orchestration-with-snaps) for usage.

