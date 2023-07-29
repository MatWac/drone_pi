# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/matwac/drone_pi/src/mpu6050_publisher

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/matwac/drone_pi/build/mpu6050_publisher

# Include any dependencies generated for this target.
include CMakeFiles/mpu.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/mpu.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/mpu.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mpu.dir/flags.make

CMakeFiles/mpu.dir/src/MPU6050.cpp.o: CMakeFiles/mpu.dir/flags.make
CMakeFiles/mpu.dir/src/MPU6050.cpp.o: /home/matwac/drone_pi/src/mpu6050_publisher/src/MPU6050.cpp
CMakeFiles/mpu.dir/src/MPU6050.cpp.o: CMakeFiles/mpu.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/matwac/drone_pi/build/mpu6050_publisher/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mpu.dir/src/MPU6050.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mpu.dir/src/MPU6050.cpp.o -MF CMakeFiles/mpu.dir/src/MPU6050.cpp.o.d -o CMakeFiles/mpu.dir/src/MPU6050.cpp.o -c /home/matwac/drone_pi/src/mpu6050_publisher/src/MPU6050.cpp

CMakeFiles/mpu.dir/src/MPU6050.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mpu.dir/src/MPU6050.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/matwac/drone_pi/src/mpu6050_publisher/src/MPU6050.cpp > CMakeFiles/mpu.dir/src/MPU6050.cpp.i

CMakeFiles/mpu.dir/src/MPU6050.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mpu.dir/src/MPU6050.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/matwac/drone_pi/src/mpu6050_publisher/src/MPU6050.cpp -o CMakeFiles/mpu.dir/src/MPU6050.cpp.s

# Object files for target mpu
mpu_OBJECTS = \
"CMakeFiles/mpu.dir/src/MPU6050.cpp.o"

# External object files for target mpu
mpu_EXTERNAL_OBJECTS =

lib/libmpu.so: CMakeFiles/mpu.dir/src/MPU6050.cpp.o
lib/libmpu.so: CMakeFiles/mpu.dir/build.make
lib/libmpu.so: CMakeFiles/mpu.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/matwac/drone_pi/build/mpu6050_publisher/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library lib/libmpu.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mpu.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mpu.dir/build: lib/libmpu.so
.PHONY : CMakeFiles/mpu.dir/build

CMakeFiles/mpu.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mpu.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mpu.dir/clean

CMakeFiles/mpu.dir/depend:
	cd /home/matwac/drone_pi/build/mpu6050_publisher && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/matwac/drone_pi/src/mpu6050_publisher /home/matwac/drone_pi/src/mpu6050_publisher /home/matwac/drone_pi/build/mpu6050_publisher /home/matwac/drone_pi/build/mpu6050_publisher /home/matwac/drone_pi/build/mpu6050_publisher/CMakeFiles/mpu.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mpu.dir/depend
