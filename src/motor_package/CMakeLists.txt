cmake_minimum_required(VERSION 3.8)
project(motor_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
set(EXECUTABLE_OUTPUT_PATH bin/)
link_directories(lib/)
set(LIBRARY_OUTPUT_PATH lib/)

find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

find_library(pigpio_LIBRARY NAMES pigpio)

add_library(
        motor
        SHARED
        src/Motor.cpp
        include/libmotor/Motor.hpp
)

add_executable(motorsub src/motor_subscriber.cpp)
ament_target_dependencies(motorsub rclcpp std_msgs)
target_link_libraries(my_exe motor ${pigpio_LIBRARY})

install(TARGETS
  talker
  DESTINATION lib/${PROJECT_NAME})

ament_package()
