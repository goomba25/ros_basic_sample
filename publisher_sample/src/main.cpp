#include <ros/ros.h>
#include <std_msgs/String.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "publisher_sample");
  ros::NodeHandle nh;

  ROS_INFO("ROS Publisher Sample Open");

  ros::Publisher pub = nh.advertise<std_msgs::String>("publisher_topic", 1000);

  ros::Rate loop_rate(10); //  Hz

  while (ros::ok()) {
    std_msgs::String msg;
    msg.data = "Topic";

    ROS_INFO(msg.data.c_str());

    pub.publish(msg);

    ros::spinOnce();
    loop_rate.sleep();
  }

  ROS_INFO("ROS Publisher Sample Close");

  return 0;
}