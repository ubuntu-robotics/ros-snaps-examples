#include <geometry_msgs/msg/twist.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/timer.hpp>

using namespace std::chrono_literals;

class NodeToSnap : public rclcpp::Node {
public:
  NodeToSnap() : rclcpp::Node{"snapped_ros2_pkg_node"} {
    int publish_rate{1};
    get_parameter("~/publish_rate", publish_rate);
    m_publisher = create_publisher<geometry_msgs::msg::Twist>("~/fake_pose", 1);
    m_timer = create_wall_timer(std::chrono::seconds{publish_rate}, [this]() {
      geometry_msgs::msg::Twist twist;
      twist.linear.x = static_cast<double>(std::rand() % 100 - 50);
      twist.linear.y = static_cast<double>(std::rand() % 100 - 50);
      m_publisher->publish(twist);
    });
  }

private:
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr m_publisher;
  rclcpp::TimerBase::SharedPtr m_timer;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<NodeToSnap>());
  rclcpp::shutdown();
  return 0;
}
