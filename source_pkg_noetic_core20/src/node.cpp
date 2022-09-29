#include <cstdlib>

#include <geometry_msgs/Twist.h>
#include <ros/ros.h>

class NodeToSnap {
public:
  NodeToSnap() : m_nh_p{"~"} {
    m_pub_data = m_nh_p.advertise<geometry_msgs::Twist>("fake_pose", 1);

    auto publish_rate{1.};
    m_nh_p.getParam("publish_rate", publish_rate);
    m_pub_timer = m_nh.createTimer(
        ros::Duration(publish_rate),
        [this](auto) {
          geometry_msgs::Twist twist;
          twist.linear.x = static_cast<double>(std::rand() % 100 - 50);
          twist.linear.y = static_cast<double>(std::rand() % 100 - 50);
          m_pub_data.publish(twist);
        },
        false, true);
  }

private:
  ros::NodeHandle m_nh;
  ros::NodeHandle m_nh_p;
  ros::Timer m_pub_timer;
  ros::Publisher m_pub_data;
};

int main(int argc, char **argv) {
  ros::init(argc, argv, "snapped_ros1_pkg_node");
  NodeToSnap NodeToSnap;
  ros::spin();
  return 0;
}
