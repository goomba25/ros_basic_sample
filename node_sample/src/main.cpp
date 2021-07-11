#include <ros/ros.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "node_sample");

    ros::NodeHandle nh;

    ROS_INFO("Hello ROS");

    return 0;
}