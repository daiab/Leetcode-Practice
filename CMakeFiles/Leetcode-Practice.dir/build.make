# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/daiab/code/cpp/Leetcode-Practice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/daiab/code/cpp/Leetcode-Practice

# Include any dependencies generated for this target.
include CMakeFiles/Leetcode-Practice.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Leetcode-Practice.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Leetcode-Practice.dir/flags.make

CMakeFiles/Leetcode-Practice.dir/src/main.cpp.o: CMakeFiles/Leetcode-Practice.dir/flags.make
CMakeFiles/Leetcode-Practice.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/daiab/code/cpp/Leetcode-Practice/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Leetcode-Practice.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Leetcode-Practice.dir/src/main.cpp.o -c /home/daiab/code/cpp/Leetcode-Practice/src/main.cpp

CMakeFiles/Leetcode-Practice.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Leetcode-Practice.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/daiab/code/cpp/Leetcode-Practice/src/main.cpp > CMakeFiles/Leetcode-Practice.dir/src/main.cpp.i

CMakeFiles/Leetcode-Practice.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Leetcode-Practice.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/daiab/code/cpp/Leetcode-Practice/src/main.cpp -o CMakeFiles/Leetcode-Practice.dir/src/main.cpp.s

CMakeFiles/Leetcode-Practice.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/Leetcode-Practice.dir/src/main.cpp.o.requires

CMakeFiles/Leetcode-Practice.dir/src/main.cpp.o.provides: CMakeFiles/Leetcode-Practice.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Leetcode-Practice.dir/build.make CMakeFiles/Leetcode-Practice.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/Leetcode-Practice.dir/src/main.cpp.o.provides

CMakeFiles/Leetcode-Practice.dir/src/main.cpp.o.provides.build: CMakeFiles/Leetcode-Practice.dir/src/main.cpp.o


# Object files for target Leetcode-Practice
Leetcode__Practice_OBJECTS = \
"CMakeFiles/Leetcode-Practice.dir/src/main.cpp.o"

# External object files for target Leetcode-Practice
Leetcode__Practice_EXTERNAL_OBJECTS =

Leetcode-Practice: CMakeFiles/Leetcode-Practice.dir/src/main.cpp.o
Leetcode-Practice: CMakeFiles/Leetcode-Practice.dir/build.make
Leetcode-Practice: CMakeFiles/Leetcode-Practice.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/daiab/code/cpp/Leetcode-Practice/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Leetcode-Practice"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Leetcode-Practice.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Leetcode-Practice.dir/build: Leetcode-Practice

.PHONY : CMakeFiles/Leetcode-Practice.dir/build

CMakeFiles/Leetcode-Practice.dir/requires: CMakeFiles/Leetcode-Practice.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/Leetcode-Practice.dir/requires

CMakeFiles/Leetcode-Practice.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Leetcode-Practice.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Leetcode-Practice.dir/clean

CMakeFiles/Leetcode-Practice.dir/depend:
	cd /home/daiab/code/cpp/Leetcode-Practice && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/daiab/code/cpp/Leetcode-Practice /home/daiab/code/cpp/Leetcode-Practice /home/daiab/code/cpp/Leetcode-Practice /home/daiab/code/cpp/Leetcode-Practice /home/daiab/code/cpp/Leetcode-Practice/CMakeFiles/Leetcode-Practice.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Leetcode-Practice.dir/depend
