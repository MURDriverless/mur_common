cmake_minimum_required(VERSION 2.8.3)
project(mur_common)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  message_generation
)
add_message_files(
   FILES
   cone_msg.msg
 )
generate_messages(
   DEPENDENCIES
   std_msgs
 )

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES mur_common
  CATKIN_DEPENDS roscpp rospy std_msgs message_runtime
  DEPENDS system_lib 
)


