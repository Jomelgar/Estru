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
CMAKE_SOURCE_DIR = "/home/johnny/Programas/Semana 4/PruebaII/tests"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/johnny/Programas/Semana 4/PruebaII/build"

# Include any dependencies generated for this target.
include CMakeFiles/TestMerge.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TestMerge.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TestMerge.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TestMerge.dir/flags.make

CMakeFiles/TestMerge.dir/TestMerge.cpp.o: CMakeFiles/TestMerge.dir/flags.make
CMakeFiles/TestMerge.dir/TestMerge.cpp.o: /home/johnny/Programas/Semana\ 4/PruebaII/tests/TestMerge.cpp
CMakeFiles/TestMerge.dir/TestMerge.cpp.o: CMakeFiles/TestMerge.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/johnny/Programas/Semana 4/PruebaII/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TestMerge.dir/TestMerge.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TestMerge.dir/TestMerge.cpp.o -MF CMakeFiles/TestMerge.dir/TestMerge.cpp.o.d -o CMakeFiles/TestMerge.dir/TestMerge.cpp.o -c "/home/johnny/Programas/Semana 4/PruebaII/tests/TestMerge.cpp"

CMakeFiles/TestMerge.dir/TestMerge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestMerge.dir/TestMerge.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/johnny/Programas/Semana 4/PruebaII/tests/TestMerge.cpp" > CMakeFiles/TestMerge.dir/TestMerge.cpp.i

CMakeFiles/TestMerge.dir/TestMerge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestMerge.dir/TestMerge.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/johnny/Programas/Semana 4/PruebaII/tests/TestMerge.cpp" -o CMakeFiles/TestMerge.dir/TestMerge.cpp.s

# Object files for target TestMerge
TestMerge_OBJECTS = \
"CMakeFiles/TestMerge.dir/TestMerge.cpp.o"

# External object files for target TestMerge
TestMerge_EXTERNAL_OBJECTS =

TestMerge: CMakeFiles/TestMerge.dir/TestMerge.cpp.o
TestMerge: CMakeFiles/TestMerge.dir/build.make
TestMerge: CMakeFiles/TestMerge.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/johnny/Programas/Semana 4/PruebaII/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TestMerge"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestMerge.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TestMerge.dir/build: TestMerge
.PHONY : CMakeFiles/TestMerge.dir/build

CMakeFiles/TestMerge.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TestMerge.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TestMerge.dir/clean

CMakeFiles/TestMerge.dir/depend:
	cd "/home/johnny/Programas/Semana 4/PruebaII/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/johnny/Programas/Semana 4/PruebaII/tests" "/home/johnny/Programas/Semana 4/PruebaII/tests" "/home/johnny/Programas/Semana 4/PruebaII/build" "/home/johnny/Programas/Semana 4/PruebaII/build" "/home/johnny/Programas/Semana 4/PruebaII/build/CMakeFiles/TestMerge.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/TestMerge.dir/depend

