# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\mygame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\mygame

# Include any dependencies generated for this target.
include CMakeFiles/opengl.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/opengl.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/opengl.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/opengl.dir/flags.make

CMakeFiles/opengl.dir/main.cpp.obj: CMakeFiles/opengl.dir/flags.make
CMakeFiles/opengl.dir/main.cpp.obj: CMakeFiles/opengl.dir/includes_CXX.rsp
CMakeFiles/opengl.dir/main.cpp.obj: main.cpp
CMakeFiles/opengl.dir/main.cpp.obj: CMakeFiles/opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\mygame\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/opengl.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/opengl.dir/main.cpp.obj -MF CMakeFiles\opengl.dir\main.cpp.obj.d -o CMakeFiles\opengl.dir\main.cpp.obj -c E:\mygame\main.cpp

CMakeFiles/opengl.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opengl.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\mygame\main.cpp > CMakeFiles\opengl.dir\main.cpp.i

CMakeFiles/opengl.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opengl.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\mygame\main.cpp -o CMakeFiles\opengl.dir\main.cpp.s

CMakeFiles/opengl.dir/glad.c.obj: CMakeFiles/opengl.dir/flags.make
CMakeFiles/opengl.dir/glad.c.obj: CMakeFiles/opengl.dir/includes_C.rsp
CMakeFiles/opengl.dir/glad.c.obj: glad.c
CMakeFiles/opengl.dir/glad.c.obj: CMakeFiles/opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\mygame\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/opengl.dir/glad.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/opengl.dir/glad.c.obj -MF CMakeFiles\opengl.dir\glad.c.obj.d -o CMakeFiles\opengl.dir\glad.c.obj -c E:\mygame\glad.c

CMakeFiles/opengl.dir/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/opengl.dir/glad.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\mygame\glad.c > CMakeFiles\opengl.dir\glad.c.i

CMakeFiles/opengl.dir/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/opengl.dir/glad.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\mygame\glad.c -o CMakeFiles\opengl.dir\glad.c.s

# Object files for target opengl
opengl_OBJECTS = \
"CMakeFiles/opengl.dir/main.cpp.obj" \
"CMakeFiles/opengl.dir/glad.c.obj"

# External object files for target opengl
opengl_EXTERNAL_OBJECTS =

opengl.exe: CMakeFiles/opengl.dir/main.cpp.obj
opengl.exe: CMakeFiles/opengl.dir/glad.c.obj
opengl.exe: CMakeFiles/opengl.dir/build.make
opengl.exe: glfw/src/libglfw3.a
opengl.exe: CMakeFiles/opengl.dir/linklibs.rsp
opengl.exe: CMakeFiles/opengl.dir/objects1.rsp
opengl.exe: CMakeFiles/opengl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\mygame\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable opengl.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\opengl.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/opengl.dir/build: opengl.exe
.PHONY : CMakeFiles/opengl.dir/build

CMakeFiles/opengl.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\opengl.dir\cmake_clean.cmake
.PHONY : CMakeFiles/opengl.dir/clean

CMakeFiles/opengl.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\mygame E:\mygame E:\mygame E:\mygame E:\mygame\CMakeFiles\opengl.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/opengl.dir/depend

