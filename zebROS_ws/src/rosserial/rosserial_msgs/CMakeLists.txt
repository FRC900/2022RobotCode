cmake_minimum_required(VERSION 3.7.2)
project(rosserial_msgs)

find_package(catkin REQUIRED COMPONENTS
  message_generation
<<<<<<< Updated upstream
=======
  std_msgs
>>>>>>> Stashed changes
)

add_message_files(FILES
  Log.msg
  TopicInfo.msg
  Power.msg
)

add_service_files(FILES
  RequestParam.srv
)

<<<<<<< Updated upstream
generate_messages()
=======
generate_messages(
  DEPENDENCIES
  std_msgs
)
>>>>>>> Stashed changes

catkin_package(CATKIN_DEPENDS
  message_runtime
)
