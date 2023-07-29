cmake_minimum_required(VERSION 3.8)
project(mpu6050_publisher)
include_directories(include)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(Threads REQUIRED)
find_package(rosidl_default_generators REQUIRED)

set(EXECUTABLE_OUTPUT_PATH bin/)
link_directories(lib/)
set(LIBRARY_OUTPUT_PATH lib/)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Angles.msg"
)

add_library(
        mpu
        SHARED
        src/MPU6050.cpp
        include/libmpu/MPU6050.h
)

add_executable(mpupub src/MPU6050_publisher.cpp)
ament_target_dependencies(mpupub rclcpp std_msgs)
target_link_libraries(mpupub mpu)
target_link_libraries(mpupub ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries(mpupub i2c)
install(TARGETS
  mpupub
  DESTINATION lib/${PROJECT_NAME})

ament_package()
