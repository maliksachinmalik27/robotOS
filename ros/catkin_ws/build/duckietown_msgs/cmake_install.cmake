# Install script for directory: /home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/wick/AD-simulator-master/ros/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs/msg" TYPE FILE FILES
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/CarControl.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/CoordinationSignal.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/DuckieSensor.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/LanePose.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/LEDDetection.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/LEDDetectionArray.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/LEDDetectionDebugInfo.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/WheelsCmd.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/WheelsCmdStamped.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/Pose2DStamped.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/SignalsDetection.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/Twist2DStamped.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/AprilTagDetection.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/AprilTagDetectionArray.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/AprilTagsWithInfos.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/TagInfo.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/Pixel.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/Vector2D.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/Segment.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/SegmentList.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/Rect.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/Rects.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/SceneSegments.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/SourceTargetNodes.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/CoordinationClearance.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/VehicleCorners.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/VehiclePose.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/FSMState.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/BoolStamped.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/StopLineReading.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/LEDInterpreter.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/AntiInstagramHealth.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/AntiInstagramTransform.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/KinematicsWeights.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/KinematicsParameters.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/ThetaDotSample.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/Vsample.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/Trajectory.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/ObstacleType.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/ObstacleImageDetection.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/ObstacleImageDetectionList.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/ObstacleProjectedDetection.msg"
    "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg/ObstacleProjectedDetectionList.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs/cmake" TYPE FILE FILES "/home/wick/AD-simulator-master/ros/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/duckietown_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/wick/AD-simulator-master/ros/catkin_ws/devel/include/duckietown_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/wick/AD-simulator-master/ros/catkin_ws/devel/share/roseus/ros/duckietown_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/wick/AD-simulator-master/ros/catkin_ws/devel/share/common-lisp/ros/duckietown_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/wick/AD-simulator-master/ros/catkin_ws/devel/share/gennodejs/ros/duckietown_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/wick/AD-simulator-master/ros/catkin_ws/devel/lib/python2.7/dist-packages/duckietown_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/wick/AD-simulator-master/ros/catkin_ws/devel/lib/python2.7/dist-packages/duckietown_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/wick/AD-simulator-master/ros/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/duckietown_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs/cmake" TYPE FILE FILES "/home/wick/AD-simulator-master/ros/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/duckietown_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs/cmake" TYPE FILE FILES
    "/home/wick/AD-simulator-master/ros/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/duckietown_msgsConfig.cmake"
    "/home/wick/AD-simulator-master/ros/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/duckietown_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs" TYPE FILE FILES "/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/package.xml")
endif()

