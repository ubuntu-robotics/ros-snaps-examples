#include "ros2_talker_component/talker.hpp"

#include <chrono>

using namespace std::chrono_literals;

namespace snapped {
Talker::Talker(const rclcpp::NodeOptions &options)
    : Node("listener", options), count_(0) {
  pub_ = create_publisher<std_msgs::msg::String>("chatter", 1);
  timer_ = create_wall_timer(1s, [this]() {
    auto s = std::make_unique<std_msgs::msg::String>();
    s->data = "Hello " + std::to_string(++count_);
    RCLCPP_INFO(get_logger(), "Publishing: '%s'", s->data.c_str());
    pub_->publish(std::move(s));
  });
}
}  // namespace snapped

#include "rclcpp_components/register_node_macro.hpp"

RCLCPP_COMPONENTS_REGISTER_NODE(snapped::Talker)