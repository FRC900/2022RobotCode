 rosinstall_generator --rosdistro melodic --wet-only control_toolbox rospy_message_converter forward_command_controller imu_sensor_controller joint_state_controller joint_trajectory_controller position_controllers velocity_controllers teraranger teraranger_array teraranger_array_converter teraranger_description > rosinstall.txt
wstool merge -t src rosinstall.txt
rm rosinstall.txt
