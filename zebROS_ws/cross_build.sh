#!/bin/bash

cd ~/2022RobotCode/zebROS_ws/

if [ -z $ROS_ROOT ]; then
	#PATH=$PATH:$HOME/wpilib/2023/roborio/bin
	source ~/wpilib/2023/roborio/arm-nilrt-linux-gnueabi/sysroot/opt/ros/noetic/setup.bash
	PYTHONPATH=$PYTHONPATH:/opt/ros/noetic/lib/python3.10/site-packages
elif [[ ! $ROS_ROOT = "$HOME/wpilib/2023/roborio/arm-nilrt-linux-gnueabi/sysroot/opt/ros/noetic/share/ros" ]]; then
	echo -e "\e[1m\e[31mROS is not configured for a cross build (maybe set up for a native build instead?)\e[0m"
	echo -e "\e[1m\e[31mRun ./cross_build.sh in a new terminal window\e[0m"
	exit 1
fi

catkin config --profile cross -x _isolated --install --skiplist \
	ackermann_steering_controller \
	ar_track_alvar \
	apriltag_launch \
    apriltag_ros \
	base_trajectory \
	color_spin \
	controllers_2020 \
	controllers_2020_msgs \
	cuda_apriltag_ros \
	demo_tf_node \
	diff_drive_controller \
	effort_controllers \
	fake_sensors \
	force_torque_sensor_controller \
	four_wheel_steering_controller \
	goal_detection \
	gripper_action_controller \
	pf_localization \
	realsense2_camera \
	realsense2_description \
	robot_characterization \
	robot_visualizer \
	rosbag_scripts \
	rospy_message_converter \
	rqt_driver_station_sim \
	rqt_joint_trajectory_controller \
	stage_ros \
	template_controller \
	tf_object_detection \
	turing_smart_screen \
	velocity_controllers \
	visualize_profile \
	zed_nodelets \
	zed_ros \
	zed_wrapper \
	zms_writer
catkin build --profile cross -DCMAKE_TOOLCHAIN_FILE=`pwd`/rostoolchain.cmake -DCMAKE_CXX_STANDARD=17 -DCATKIN_ENABLE_TESTING=OFF -DSETUPTOOLS_DEB_LAYOUT=OFF "$@"
