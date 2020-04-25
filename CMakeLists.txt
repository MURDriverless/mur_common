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

include_directories(
 include
  ${catkin_INCLUDE_DIRS}
)

catkin_package(
  CATKIN_DEPENDS roscpp rospy std_msgs message_runtime
)

