# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /tmp/PS2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /tmp/PS2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PS2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PS2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PS2.dir/flags.make

CMakeFiles/PS2.dir/main.c.o: CMakeFiles/PS2.dir/flags.make
CMakeFiles/PS2.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/PS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/PS2.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/PS2.dir/main.c.o -c /tmp/PS2/main.c

CMakeFiles/PS2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PS2.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /tmp/PS2/main.c > CMakeFiles/PS2.dir/main.c.i

CMakeFiles/PS2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PS2.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /tmp/PS2/main.c -o CMakeFiles/PS2.dir/main.c.s

CMakeFiles/PS2.dir/ps2.c.o: CMakeFiles/PS2.dir/flags.make
CMakeFiles/PS2.dir/ps2.c.o: ../ps2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/PS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/PS2.dir/ps2.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/PS2.dir/ps2.c.o -c /tmp/PS2/ps2.c

CMakeFiles/PS2.dir/ps2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PS2.dir/ps2.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /tmp/PS2/ps2.c > CMakeFiles/PS2.dir/ps2.c.i

CMakeFiles/PS2.dir/ps2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PS2.dir/ps2.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /tmp/PS2/ps2.c -o CMakeFiles/PS2.dir/ps2.c.s

# Object files for target PS2
PS2_OBJECTS = \
"CMakeFiles/PS2.dir/main.c.o" \
"CMakeFiles/PS2.dir/ps2.c.o"

# External object files for target PS2
PS2_EXTERNAL_OBJECTS =

PS2: CMakeFiles/PS2.dir/main.c.o
PS2: CMakeFiles/PS2.dir/ps2.c.o
PS2: CMakeFiles/PS2.dir/build.make
PS2: CMakeFiles/PS2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/tmp/PS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable PS2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PS2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PS2.dir/build: PS2

.PHONY : CMakeFiles/PS2.dir/build

CMakeFiles/PS2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PS2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PS2.dir/clean

CMakeFiles/PS2.dir/depend:
	cd /tmp/PS2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /tmp/PS2 /tmp/PS2 /tmp/PS2/cmake-build-debug /tmp/PS2/cmake-build-debug /tmp/PS2/cmake-build-debug/CMakeFiles/PS2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PS2.dir/depend
