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
include CMakeFiles/out.o.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/out.o.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/out.o.dir/flags.make

CMakeFiles/out.o.dir/src/main.cpp.o: CMakeFiles/out.o.dir/flags.make
CMakeFiles/out.o.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/daiab/code/cpp/Leetcode-Practice/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/out.o.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/out.o.dir/src/main.cpp.o -c /home/daiab/code/cpp/Leetcode-Practice/src/main.cpp

CMakeFiles/out.o.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/out.o.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/daiab/code/cpp/Leetcode-Practice/src/main.cpp > CMakeFiles/out.o.dir/src/main.cpp.i

CMakeFiles/out.o.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/out.o.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/daiab/code/cpp/Leetcode-Practice/src/main.cpp -o CMakeFiles/out.o.dir/src/main.cpp.s

CMakeFiles/out.o.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/out.o.dir/src/main.cpp.o.requires

CMakeFiles/out.o.dir/src/main.cpp.o.provides: CMakeFiles/out.o.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/out.o.dir/build.make CMakeFiles/out.o.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/out.o.dir/src/main.cpp.o.provides

CMakeFiles/out.o.dir/src/main.cpp.o.provides.build: CMakeFiles/out.o.dir/src/main.cpp.o


# Object files for target out.o
out_o_OBJECTS = \
"CMakeFiles/out.o.dir/src/main.cpp.o"

# External object files for target out.o
out_o_EXTERNAL_OBJECTS =

out.o: CMakeFiles/out.o.dir/src/main.cpp.o
out.o: CMakeFiles/out.o.dir/build.make
out.o: CMakeFiles/out.o.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/daiab/code/cpp/Leetcode-Practice/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable out.o"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/out.o.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/out.o.dir/build: out.o

.PHONY : CMakeFiles/out.o.dir/build

CMakeFiles/out.o.dir/requires: CMakeFiles/out.o.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/out.o.dir/requires

CMakeFiles/out.o.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/out.o.dir/cmake_clean.cmake
.PHONY : CMakeFiles/out.o.dir/clean

CMakeFiles/out.o.dir/depend:
	cd /home/daiab/code/cpp/Leetcode-Practice && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/daiab/code/cpp/Leetcode-Practice /home/daiab/code/cpp/Leetcode-Practice /home/daiab/code/cpp/Leetcode-Practice /home/daiab/code/cpp/Leetcode-Practice /home/daiab/code/cpp/Leetcode-Practice/CMakeFiles/out.o.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/out.o.dir/depend

