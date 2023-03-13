# snapped_ros1_rosinstall
ROS (Noetic) package, packed as a snap

The source of this package are listed in a `.rosinstall` file. By the mean of [`vcstools`](https://github.com/dirk-thomas/vcstool) we show how to leverage `.rosinstall` to retreive source when building a snap.

## How to generate the snap
- `snapcraft`
## How to install the snap
- `sudo snap install snapped-ros1-pkg*.snap --dangerous`
## How to run the snap
- `snapped-ros1-pkg.snapped-ros1-launch`
