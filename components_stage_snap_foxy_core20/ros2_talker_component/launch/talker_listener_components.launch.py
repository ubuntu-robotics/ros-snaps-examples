import launch
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode


def generate_launch_description():
    container = ComposableNodeContainer(
            name='component_container',
            namespace='',
            package='rclcpp_components',
            executable='component_container',
            composable_node_descriptions=[
                ComposableNode(
                    package='ros2_talker_component',
                    plugin='snapped::Talker',
                    name='talker'),
                ComposableNode(
                    package='ros2_listener_component',
                    plugin='snapped::Listener',
                    name='listener')
            ],
            output='screen',
    )

    return launch.LaunchDescription([container])