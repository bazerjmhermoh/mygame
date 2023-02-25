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
CMAKE_SOURCE_DIR = E:\mygame\gamewithmake\glm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\mygame\gamewithmake\glm

# Include any dependencies generated for this target.
include glm/CMakeFiles/glm_shared.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include glm/CMakeFiles/glm_shared.dir/compiler_depend.make

# Include the progress variables for this target.
include glm/CMakeFiles/glm_shared.dir/progress.make

# Include the compile flags for this target's objects.
include glm/CMakeFiles/glm_shared.dir/flags.make

glm/CMakeFiles/glm_shared.dir/detail/glm.cpp.obj: glm/CMakeFiles/glm_shared.dir/flags.make
glm/CMakeFiles/glm_shared.dir/detail/glm.cpp.obj: glm/CMakeFiles/glm_shared.dir/includes_CXX.rsp
glm/CMakeFiles/glm_shared.dir/detail/glm.cpp.obj: glm/detail/glm.cpp
glm/CMakeFiles/glm_shared.dir/detail/glm.cpp.obj: glm/CMakeFiles/glm_shared.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\mygame\gamewithmake\glm\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object glm/CMakeFiles/glm_shared.dir/detail/glm.cpp.obj"
	cd /d E:\mygame\gamewithmake\glm\glm && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT glm/CMakeFiles/glm_shared.dir/detail/glm.cpp.obj -MF CMakeFiles\glm_shared.dir\detail\glm.cpp.obj.d -o CMakeFiles\glm_shared.dir\detail\glm.cpp.obj -c E:\mygame\gamewithmake\glm\glm\detail\glm.cpp

glm/CMakeFiles/glm_shared.dir/detail/glm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/glm_shared.dir/detail/glm.cpp.i"
	cd /d E:\mygame\gamewithmake\glm\glm && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\mygame\gamewithmake\glm\glm\detail\glm.cpp > CMakeFiles\glm_shared.dir\detail\glm.cpp.i

glm/CMakeFiles/glm_shared.dir/detail/glm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/glm_shared.dir/detail/glm.cpp.s"
	cd /d E:\mygame\gamewithmake\glm\glm && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\mygame\gamewithmake\glm\glm\detail\glm.cpp -o CMakeFiles\glm_shared.dir\detail\glm.cpp.s

# Object files for target glm_shared
glm_shared_OBJECTS = \
"CMakeFiles/glm_shared.dir/detail/glm.cpp.obj"

# External object files for target glm_shared
glm_shared_EXTERNAL_OBJECTS =

glm/libglm_shared.dll: glm/CMakeFiles/glm_shared.dir/detail/glm.cpp.obj
glm/libglm_shared.dll: glm/CMakeFiles/glm_shared.dir/build.make
glm/libglm_shared.dll: glm/CMakeFiles/glm_shared.dir/linklibs.rsp
glm/libglm_shared.dll: glm/CMakeFiles/glm_shared.dir/objects1.rsp
glm/libglm_shared.dll: glm/CMakeFiles/glm_shared.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\mygame\gamewithmake\glm\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libglm_shared.dll"
	cd /d E:\mygame\gamewithmake\glm\glm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\glm_shared.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
glm/CMakeFiles/glm_shared.dir/build: glm/libglm_shared.dll
.PHONY : glm/CMakeFiles/glm_shared.dir/build

glm/CMakeFiles/glm_shared.dir/clean:
	cd /d E:\mygame\gamewithmake\glm\glm && $(CMAKE_COMMAND) -P CMakeFiles\glm_shared.dir\cmake_clean.cmake
.PHONY : glm/CMakeFiles/glm_shared.dir/clean

glm/CMakeFiles/glm_shared.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\mygame\gamewithmake\glm E:\mygame\gamewithmake\glm\glm E:\mygame\gamewithmake\glm E:\mygame\gamewithmake\glm\glm E:\mygame\gamewithmake\glm\glm\CMakeFiles\glm_shared.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : glm/CMakeFiles/glm_shared.dir/depend
