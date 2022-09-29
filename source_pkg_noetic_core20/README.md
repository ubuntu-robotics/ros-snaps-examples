# snapped_ros1_pkg
ROS 1 (Noetic) package, packed as a snap

The ros package contains a node that simply publishes a `geometry_msgs::Twist` on `fake_pose` containing random data.
## How to generate the snap
- `snapcraft --enable-experimental-extensions`
## How to install the snap
- `sudo snap install snapped-ros1-pkg*.snap --dangerous`
## How to run the snap
- `snapped-ros1-pkg.snaped-ros1-launch`
## How to remove the snap
- `sudo snap remove snapped-ros1-pkg`
