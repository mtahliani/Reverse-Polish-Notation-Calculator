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
CMAKE_SOURCE_DIR = /tmp/PS5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /tmp/PS5/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PS5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PS5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PS5.dir/flags.make

CMakeFiles/PS5.dir/main.c.o: CMakeFiles/PS5.dir/flags.make
CMakeFiles/PS5.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/PS5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/PS5.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/PS5.dir/main.c.o -c /tmp/PS5/main.c

CMakeFiles/PS5.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PS5.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /tmp/PS5/main.c > CMakeFiles/PS5.dir/main.c.i

CMakeFiles/PS5.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PS5.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /tmp/PS5/main.c -o CMakeFiles/PS5.dir/main.c.s

CMakeFiles/PS5.dir/node.c.o: CMakeFiles/PS5.dir/flags.make
CMakeFiles/PS5.dir/node.c.o: ../node.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/PS5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/PS5.dir/node.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/PS5.dir/node.c.o -c /tmp/PS5/node.c

CMakeFiles/PS5.dir/node.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PS5.dir/node.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /tmp/PS5/node.c > CMakeFiles/PS5.dir/node.c.i

CMakeFiles/PS5.dir/node.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PS5.dir/node.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /tmp/PS5/node.c -o CMakeFiles/PS5.dir/node.c.s

CMakeFiles/PS5.dir/errors.c.o: CMakeFiles/PS5.dir/flags.make
CMakeFiles/PS5.dir/errors.c.o: ../errors.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/PS5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/PS5.dir/errors.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/PS5.dir/errors.c.o -c /tmp/PS5/errors.c

CMakeFiles/PS5.dir/errors.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PS5.dir/errors.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /tmp/PS5/errors.c > CMakeFiles/PS5.dir/errors.c.i

CMakeFiles/PS5.dir/errors.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PS5.dir/errors.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /tmp/PS5/errors.c -o CMakeFiles/PS5.dir/errors.c.s

CMakeFiles/PS5.dir/rpn.c.o: CMakeFiles/PS5.dir/flags.make
CMakeFiles/PS5.dir/rpn.c.o: ../rpn.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/PS5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/PS5.dir/rpn.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/PS5.dir/rpn.c.o -c /tmp/PS5/rpn.c

CMakeFiles/PS5.dir/rpn.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PS5.dir/rpn.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /tmp/PS5/rpn.c > CMakeFiles/PS5.dir/rpn.c.i

CMakeFiles/PS5.dir/rpn.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PS5.dir/rpn.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /tmp/PS5/rpn.c -o CMakeFiles/PS5.dir/rpn.c.s

CMakeFiles/PS5.dir/stack.c.o: CMakeFiles/PS5.dir/flags.make
CMakeFiles/PS5.dir/stack.c.o: ../stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/PS5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/PS5.dir/stack.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/PS5.dir/stack.c.o -c /tmp/PS5/stack.c

CMakeFiles/PS5.dir/stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PS5.dir/stack.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /tmp/PS5/stack.c > CMakeFiles/PS5.dir/stack.c.i

CMakeFiles/PS5.dir/stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PS5.dir/stack.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /tmp/PS5/stack.c -o CMakeFiles/PS5.dir/stack.c.s

CMakeFiles/PS5.dir/rpnConverter.c.o: CMakeFiles/PS5.dir/flags.make
CMakeFiles/PS5.dir/rpnConverter.c.o: ../rpnConverter.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/PS5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/PS5.dir/rpnConverter.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/PS5.dir/rpnConverter.c.o -c /tmp/PS5/rpnConverter.c

CMakeFiles/PS5.dir/rpnConverter.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PS5.dir/rpnConverter.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /tmp/PS5/rpnConverter.c > CMakeFiles/PS5.dir/rpnConverter.c.i

CMakeFiles/PS5.dir/rpnConverter.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PS5.dir/rpnConverter.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /tmp/PS5/rpnConverter.c -o CMakeFiles/PS5.dir/rpnConverter.c.s

# Object files for target PS5
PS5_OBJECTS = \
"CMakeFiles/PS5.dir/main.c.o" \
"CMakeFiles/PS5.dir/node.c.o" \
"CMakeFiles/PS5.dir/errors.c.o" \
"CMakeFiles/PS5.dir/rpn.c.o" \
"CMakeFiles/PS5.dir/stack.c.o" \
"CMakeFiles/PS5.dir/rpnConverter.c.o"

# External object files for target PS5
PS5_EXTERNAL_OBJECTS =

PS5: CMakeFiles/PS5.dir/main.c.o
PS5: CMakeFiles/PS5.dir/node.c.o
PS5: CMakeFiles/PS5.dir/errors.c.o
PS5: CMakeFiles/PS5.dir/rpn.c.o
PS5: CMakeFiles/PS5.dir/stack.c.o
PS5: CMakeFiles/PS5.dir/rpnConverter.c.o
PS5: CMakeFiles/PS5.dir/build.make
PS5: CMakeFiles/PS5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/tmp/PS5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable PS5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PS5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PS5.dir/build: PS5

.PHONY : CMakeFiles/PS5.dir/build

CMakeFiles/PS5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PS5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PS5.dir/clean

CMakeFiles/PS5.dir/depend:
	cd /tmp/PS5/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /tmp/PS5 /tmp/PS5 /tmp/PS5/cmake-build-debug /tmp/PS5/cmake-build-debug /tmp/PS5/cmake-build-debug/CMakeFiles/PS5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PS5.dir/depend

