//this header is important
#include <ros/ros.h>

int main(int argc, char **argv) {
	//initialize ros system
	ros::init(argc, argv, "hello_ros");
	
	//establish as a ros node
	ros::NodeHandle nh;
	
	//send output as log
	ROS_INFO_STREAM("Hello, ROS!");
}
