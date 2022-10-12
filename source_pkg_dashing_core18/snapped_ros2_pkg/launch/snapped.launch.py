from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():

    config = os.path.join(
        get_package_share_directory("snapped_ros2_pkg"), "config", "config.yaml"
    )

    return LaunchDescription(
        [
            Node(
                package="snapped_ros2_pkg",
                node_executable="snapped_ros2_pkg_node",
                name="snapped_ros2_pkg_node",
                parameters=[config],
            )
        ]
    )
