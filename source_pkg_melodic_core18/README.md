# snapped_ros1_pkg
ROS (Melodic) package, packed as a snap

The ROS package contains a node that simply publishes a `geometry_msgs::Twist` on `fake_pose` containing random data.
## How to generate the snap
- `snapcraft`
## How to install the snap
- `sudo snap install snapped-ros1-pkg*.snap --dangerous`
## How to run the snap
- `snapped-ros1-pkg.snapped-ros1-launch`
