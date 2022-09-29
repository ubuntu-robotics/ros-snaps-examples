# snapped_ros1_rosinstall
ROS1 (Noetic) package, packed as a snap

The source of this package are listed in a `.rosinstall` file. By the mean of the tool `vcs` we show how to leverage `.rosinstall` to retrieve source when building a snap.

## How to generate the snap
- `snapcraft --enable-experimental-extensions`
## How to install the snap
- `sudo snap install snapped-ros1-pkg_0.1_amd64.snap --dangerous`
## How to run the snap
- `snapped-ros1-pkg.snapped-ros1-launch`
