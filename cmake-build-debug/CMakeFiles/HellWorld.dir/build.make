# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\sydne\Desktop\ComputerScienceShiz\UrANerdLol\HellWorld

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\sydne\Desktop\ComputerScienceShiz\UrANerdLol\HellWorld\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HellWorld.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HellWorld.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HellWorld.dir/flags.make

CMakeFiles/HellWorld.dir/HellWorld.c.obj: CMakeFiles/HellWorld.dir/flags.make
CMakeFiles/HellWorld.dir/HellWorld.c.obj: ../HellWorld.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\sydne\Desktop\ComputerScienceShiz\UrANerdLol\HellWorld\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/HellWorld.dir/HellWorld.c.obj"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\HellWorld.dir\HellWorld.c.obj   -c C:\Users\sydne\Desktop\ComputerScienceShiz\UrANerdLol\HellWorld\HellWorld.c

CMakeFiles/HellWorld.dir/HellWorld.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HellWorld.dir/HellWorld.c.i"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\sydne\Desktop\ComputerScienceShiz\UrANerdLol\HellWorld\HellWorld.c > CMakeFiles\HellWorld.dir\HellWorld.c.i

CMakeFiles/HellWorld.dir/HellWorld.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HellWorld.dir/HellWorld.c.s"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\sydne\Desktop\ComputerScienceShiz\UrANerdLol\HellWorld\HellWorld.c -o CMakeFiles\HellWorld.dir\HellWorld.c.s

# Object files for target HellWorld
HellWorld_OBJECTS = \
"CMakeFiles/HellWorld.dir/HellWorld.c.obj"

# External object files for target HellWorld
HellWorld_EXTERNAL_OBJECTS =

HellWorld.exe: CMakeFiles/HellWorld.dir/HellWorld.c.obj
HellWorld.exe: CMakeFiles/HellWorld.dir/build.make
HellWorld.exe: CMakeFiles/HellWorld.dir/linklibs.rsp
HellWorld.exe: CMakeFiles/HellWorld.dir/objects1.rsp
HellWorld.exe: CMakeFiles/HellWorld.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\sydne\Desktop\ComputerScienceShiz\UrANerdLol\HellWorld\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable HellWorld.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HellWorld.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HellWorld.dir/build: HellWorld.exe

.PHONY : CMakeFiles/HellWorld.dir/build

CMakeFiles/HellWorld.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HellWorld.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HellWorld.dir/clean

CMakeFiles/HellWorld.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\sydne\Desktop\ComputerScienceShiz\UrANerdLol\HellWorld C:\Users\sydne\Desktop\ComputerScienceShiz\UrANerdLol\HellWorld C:\Users\sydne\Desktop\ComputerScienceShiz\UrANerdLol\HellWorld\cmake-build-debug C:\Users\sydne\Desktop\ComputerScienceShiz\UrANerdLol\HellWorld\cmake-build-debug C:\Users\sydne\Desktop\ComputerScienceShiz\UrANerdLol\HellWorld\cmake-build-debug\CMakeFiles\HellWorld.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HellWorld.dir/depend

