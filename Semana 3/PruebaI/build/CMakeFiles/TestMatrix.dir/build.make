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
CMAKE_SOURCE_DIR = "/home/johnny/Programas/Semana 3/PruebaI/tests"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/johnny/Programas/Semana 3/PruebaI/build"

# Include any dependencies generated for this target.
include CMakeFiles/TestMatrix.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TestMatrix.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TestMatrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TestMatrix.dir/flags.make

CMakeFiles/TestMatrix.dir/home/johnny/Programas/Semana_3/PruebaI/Matrix.cpp.o: CMakeFiles/TestMatrix.dir/flags.make
CMakeFiles/TestMatrix.dir/home/johnny/Programas/Semana_3/PruebaI/Matrix.cpp.o: /home/johnny/Programas/Semana\ 3/PruebaI/Matrix.cpp
CMakeFiles/TestMatrix.dir/home/johnny/Programas/Semana_3/PruebaI/Matrix.cpp.o: CMakeFiles/TestMatrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/johnny/Programas/Semana 3/PruebaI/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TestMatrix.dir/home/johnny/Programas/Semana_3/PruebaI/Matrix.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TestMatrix.dir/home/johnny/Programas/Semana_3/PruebaI/Matrix.cpp.o -MF CMakeFiles/TestMatrix.dir/home/johnny/Programas/Semana_3/PruebaI/Matrix.cpp.o.d -o CMakeFiles/TestMatrix.dir/home/johnny/Programas/Semana_3/PruebaI/Matrix.cpp.o -c "/home/johnny/Programas/Semana 3/PruebaI/Matrix.cpp"

CMakeFiles/TestMatrix.dir/home/johnny/Programas/Semana_3/PruebaI/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestMatrix.dir/home/johnny/Programas/Semana_3/PruebaI/Matrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/johnny/Programas/Semana 3/PruebaI/Matrix.cpp" > CMakeFiles/TestMatrix.dir/home/johnny/Programas/Semana_3/PruebaI/Matrix.cpp.i

CMakeFiles/TestMatrix.dir/home/johnny/Programas/Semana_3/PruebaI/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestMatrix.dir/home/johnny/Programas/Semana_3/PruebaI/Matrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/johnny/Programas/Semana 3/PruebaI/Matrix.cpp" -o CMakeFiles/TestMatrix.dir/home/johnny/Programas/Semana_3/PruebaI/Matrix.cpp.s

CMakeFiles/TestMatrix.dir/TestMatrix.cpp.o: CMakeFiles/TestMatrix.dir/flags.make
CMakeFiles/TestMatrix.dir/TestMatrix.cpp.o: /home/johnny/Programas/Semana\ 3/PruebaI/tests/TestMatrix.cpp
CMakeFiles/TestMatrix.dir/TestMatrix.cpp.o: CMakeFiles/TestMatrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/johnny/Programas/Semana 3/PruebaI/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TestMatrix.dir/TestMatrix.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TestMatrix.dir/TestMatrix.cpp.o -MF CMakeFiles/TestMatrix.dir/TestMatrix.cpp.o.d -o CMakeFiles/TestMatrix.dir/TestMatrix.cpp.o -c "/home/johnny/Programas/Semana 3/PruebaI/tests/TestMatrix.cpp"

CMakeFiles/TestMatrix.dir/TestMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestMatrix.dir/TestMatrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/johnny/Programas/Semana 3/PruebaI/tests/TestMatrix.cpp" > CMakeFiles/TestMatrix.dir/TestMatrix.cpp.i

CMakeFiles/TestMatrix.dir/TestMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestMatrix.dir/TestMatrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/johnny/Programas/Semana 3/PruebaI/tests/TestMatrix.cpp" -o CMakeFiles/TestMatrix.dir/TestMatrix.cpp.s

# Object files for target TestMatrix
TestMatrix_OBJECTS = \
"CMakeFiles/TestMatrix.dir/home/johnny/Programas/Semana_3/PruebaI/Matrix.cpp.o" \
"CMakeFiles/TestMatrix.dir/TestMatrix.cpp.o"

# External object files for target TestMatrix
TestMatrix_EXTERNAL_OBJECTS =

TestMatrix: CMakeFiles/TestMatrix.dir/home/johnny/Programas/Semana_3/PruebaI/Matrix.cpp.o
TestMatrix: CMakeFiles/TestMatrix.dir/TestMatrix.cpp.o
TestMatrix: CMakeFiles/TestMatrix.dir/build.make
TestMatrix: CMakeFiles/TestMatrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/johnny/Programas/Semana 3/PruebaI/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable TestMatrix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestMatrix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TestMatrix.dir/build: TestMatrix
.PHONY : CMakeFiles/TestMatrix.dir/build

CMakeFiles/TestMatrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TestMatrix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TestMatrix.dir/clean

CMakeFiles/TestMatrix.dir/depend:
	cd "/home/johnny/Programas/Semana 3/PruebaI/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/johnny/Programas/Semana 3/PruebaI/tests" "/home/johnny/Programas/Semana 3/PruebaI/tests" "/home/johnny/Programas/Semana 3/PruebaI/build" "/home/johnny/Programas/Semana 3/PruebaI/build" "/home/johnny/Programas/Semana 3/PruebaI/build/CMakeFiles/TestMatrix.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/TestMatrix.dir/depend

