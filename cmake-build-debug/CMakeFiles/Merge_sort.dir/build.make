# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/atmadeep/clion-2017.2.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/atmadeep/clion-2017.2.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/atmadeep/CLionProjects/Design_Analysis_Algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/atmadeep/CLionProjects/Design_Analysis_Algorithms/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Merge_sort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Merge_sort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Merge_sort.dir/flags.make

CMakeFiles/Merge_sort.dir/Merge_sort.cpp.o: CMakeFiles/Merge_sort.dir/flags.make
CMakeFiles/Merge_sort.dir/Merge_sort.cpp.o: ../Merge_sort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/atmadeep/CLionProjects/Design_Analysis_Algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Merge_sort.dir/Merge_sort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Merge_sort.dir/Merge_sort.cpp.o -c /home/atmadeep/CLionProjects/Design_Analysis_Algorithms/Merge_sort.cpp

CMakeFiles/Merge_sort.dir/Merge_sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Merge_sort.dir/Merge_sort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/atmadeep/CLionProjects/Design_Analysis_Algorithms/Merge_sort.cpp > CMakeFiles/Merge_sort.dir/Merge_sort.cpp.i

CMakeFiles/Merge_sort.dir/Merge_sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Merge_sort.dir/Merge_sort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/atmadeep/CLionProjects/Design_Analysis_Algorithms/Merge_sort.cpp -o CMakeFiles/Merge_sort.dir/Merge_sort.cpp.s

CMakeFiles/Merge_sort.dir/Merge_sort.cpp.o.requires:

.PHONY : CMakeFiles/Merge_sort.dir/Merge_sort.cpp.o.requires

CMakeFiles/Merge_sort.dir/Merge_sort.cpp.o.provides: CMakeFiles/Merge_sort.dir/Merge_sort.cpp.o.requires
	$(MAKE) -f CMakeFiles/Merge_sort.dir/build.make CMakeFiles/Merge_sort.dir/Merge_sort.cpp.o.provides.build
.PHONY : CMakeFiles/Merge_sort.dir/Merge_sort.cpp.o.provides

CMakeFiles/Merge_sort.dir/Merge_sort.cpp.o.provides.build: CMakeFiles/Merge_sort.dir/Merge_sort.cpp.o


# Object files for target Merge_sort
Merge_sort_OBJECTS = \
"CMakeFiles/Merge_sort.dir/Merge_sort.cpp.o"

# External object files for target Merge_sort
Merge_sort_EXTERNAL_OBJECTS =

Merge_sort: CMakeFiles/Merge_sort.dir/Merge_sort.cpp.o
Merge_sort: CMakeFiles/Merge_sort.dir/build.make
Merge_sort: CMakeFiles/Merge_sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/atmadeep/CLionProjects/Design_Analysis_Algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Merge_sort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Merge_sort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Merge_sort.dir/build: Merge_sort

.PHONY : CMakeFiles/Merge_sort.dir/build

CMakeFiles/Merge_sort.dir/requires: CMakeFiles/Merge_sort.dir/Merge_sort.cpp.o.requires

.PHONY : CMakeFiles/Merge_sort.dir/requires

CMakeFiles/Merge_sort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Merge_sort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Merge_sort.dir/clean

CMakeFiles/Merge_sort.dir/depend:
	cd /home/atmadeep/CLionProjects/Design_Analysis_Algorithms/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/atmadeep/CLionProjects/Design_Analysis_Algorithms /home/atmadeep/CLionProjects/Design_Analysis_Algorithms /home/atmadeep/CLionProjects/Design_Analysis_Algorithms/cmake-build-debug /home/atmadeep/CLionProjects/Design_Analysis_Algorithms/cmake-build-debug /home/atmadeep/CLionProjects/Design_Analysis_Algorithms/cmake-build-debug/CMakeFiles/Merge_sort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Merge_sort.dir/depend

