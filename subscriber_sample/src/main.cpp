#include <ros/ros.h>
#include <std_msgs/String.h>

void Callback(const std_msgs::String::ConstPtr &);

int main(int argc, char **argv)
{
  ros::init(argc, argv, "subscriber_sample");
  ros::NodeHandle nh;

  ROS_INFO("ROS Subscriber Sample Open");

  ros::Subscriber sub = nh.subscribe("publisher_topic", 1000, Callback);

  ros::Rate loop_rate(10);
  while (ros::ok())
  {
    ros::spinOnce();
    loop_rate.sleep();
  }
  
  ROS_INFO("ROS Subscriber Sample Close");

  return 0;
}

void Callback(const std_msgs::String::ConstPtr &msg)
{
  ROS_INFO("Subscriber topic : %s", msg->data.c_str());
}