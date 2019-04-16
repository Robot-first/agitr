//This program generates log messages at varying severity levels,throttled to various maximum speeds.
#include <ros/ros.h>

int main(int argc,char **argv){
	ros::init(argc,argv,"log_throttled");
	ros::NodeHandle nh;
	
	while(ros::ok()){
		ROS_DEBUG_STREAM_THROTTLE(0.1,"This_appears_every_0.1_seconds.");
		ROS_DEBUG_STREAM_THROTTLE(0.3,"This_appears_every_0.3_seconds.");
		ROS_DEBUG_STREAM_THROTTLE(0.5,"This_appears_every_0.5_seconds.");
		ROS_DEBUG_STREAM_THROTTLE(1.0,"This_appears_every_1.0_seconds.");
		ROS_DEBUG_STREAM_THROTTLE(2.0,"This_appears_every_2.0_seconds.");
	}
}
