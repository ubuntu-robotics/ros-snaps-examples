
#include "ros2_listener_component/listener.hpp"

namespace snapped {
Listener::Listener(const rclcpp::NodeOptions &options)
    : Node("listener", options) {
  sub_ = create_subscription<std_msgs::msg::String>(
      "chatter", 1, [this](const std_msgs::msg::String::SharedPtr msg) -> void {
        RCLCPP_INFO(get_logger(), "I heard: [%s]", msg->data.c_str());
      });
}
}  // namespace snapped

#include "rclcpp_components/register_node_macro.hpp"

RCLCPP_COMPONENTS_REGISTER_NODE(snapped::Listener)
