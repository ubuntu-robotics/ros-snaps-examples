#pragma once

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

namespace snapped {

class Talker : public rclcpp::Node {
 public:
  explicit Talker(const rclcpp::NodeOptions &options);

 private:
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_;
  rclcpp::TimerBase::SharedPtr timer_;
  std::size_t count_;
};

}  // namespace snapped
