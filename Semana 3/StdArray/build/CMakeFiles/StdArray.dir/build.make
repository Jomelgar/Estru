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
CMAKE_SOURCE_DIR = "/home/johnny/Programas/Semana 3/StdArray"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/johnny/Programas/Semana 3/StdArray/build"

# Include any dependencies generated for this target.
include CMakeFiles/StdArray.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/StdArray.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/StdArray.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StdArray.dir/flags.make

CMakeFiles/StdArray.dir/Main.cpp.o: CMakeFiles/StdArray.dir/flags.make
CMakeFiles/StdArray.dir/Main.cpp.o: ../Main.cpp
CMakeFiles/StdArray.dir/Main.cpp.o: CMakeFiles/StdArray.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/johnny/Programas/Semana 3/StdArray/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StdArray.dir/Main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/StdArray.dir/Main.cpp.o -MF CMakeFiles/StdArray.dir/Main.cpp.o.d -o CMakeFiles/StdArray.dir/Main.cpp.o -c "/home/johnny/Programas/Semana 3/StdArray/Main.cpp"

CMakeFiles/StdArray.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StdArray.dir/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/johnny/Programas/Semana 3/StdArray/Main.cpp" > CMakeFiles/StdArray.dir/Main.cpp.i

CMakeFiles/StdArray.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StdArray.dir/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/johnny/Programas/Semana 3/StdArray/Main.cpp" -o CMakeFiles/StdArray.dir/Main.cpp.s

# Object files for target StdArray
StdArray_OBJECTS = \
"CMakeFiles/StdArray.dir/Main.cpp.o"

# External object files for target StdArray
StdArray_EXTERNAL_OBJECTS =

StdArray: CMakeFiles/StdArray.dir/Main.cpp.o
StdArray: CMakeFiles/StdArray.dir/build.make
StdArray: CMakeFiles/StdArray.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/johnny/Programas/Semana 3/StdArray/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable StdArray"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StdArray.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StdArray.dir/build: StdArray
.PHONY : CMakeFiles/StdArray.dir/build

CMakeFiles/StdArray.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/StdArray.dir/cmake_clean.cmake
.PHONY : CMakeFiles/StdArray.dir/clean

CMakeFiles/StdArray.dir/depend:
	cd "/home/johnny/Programas/Semana 3/StdArray/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/johnny/Programas/Semana 3/StdArray" "/home/johnny/Programas/Semana 3/StdArray" "/home/johnny/Programas/Semana 3/StdArray/build" "/home/johnny/Programas/Semana 3/StdArray/build" "/home/johnny/Programas/Semana 3/StdArray/build/CMakeFiles/StdArray.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/StdArray.dir/depend

