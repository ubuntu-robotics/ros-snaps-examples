# snapped_ros2_pkg
ROS 2 Foxy package, packed as a snap.

The ROS package contains a node that simply publishes a `geometry_msgs::msg::Twist` on `fake_pose` containing random data.
## How to generate the snap
- `snapcraft --enable-experimental-extensions`
## How to install the snap
- `sudo snap install snapped-ros2-pkg*.snap --dangerous`
## How to run the snap
- `snapped-ros2-pkg.snapped-ros2-launch`
