# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/kod/soft/zuluCrypt-4.7.4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kod/soft/zuluCrypt-4.7.4

# Include any dependencies generated for this target.
include zuluCrypt-cli/CMakeFiles/Process.dir/depend.make

# Include the progress variables for this target.
include zuluCrypt-cli/CMakeFiles/Process.dir/progress.make

# Include the compile flags for this target's objects.
include zuluCrypt-cli/CMakeFiles/Process.dir/flags.make

zuluCrypt-cli/CMakeFiles/Process.dir/utility/process/process.c.o: zuluCrypt-cli/CMakeFiles/Process.dir/flags.make
zuluCrypt-cli/CMakeFiles/Process.dir/utility/process/process.c.o: zuluCrypt-cli/utility/process/process.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kod/soft/zuluCrypt-4.7.4/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object zuluCrypt-cli/CMakeFiles/Process.dir/utility/process/process.c.o"
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/Process.dir/utility/process/process.c.o   -c /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli/utility/process/process.c

zuluCrypt-cli/CMakeFiles/Process.dir/utility/process/process.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Process.dir/utility/process/process.c.i"
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli/utility/process/process.c > CMakeFiles/Process.dir/utility/process/process.c.i

zuluCrypt-cli/CMakeFiles/Process.dir/utility/process/process.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Process.dir/utility/process/process.c.s"
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli/utility/process/process.c -o CMakeFiles/Process.dir/utility/process/process.c.s

zuluCrypt-cli/CMakeFiles/Process.dir/utility/process/process.c.o.requires:
.PHONY : zuluCrypt-cli/CMakeFiles/Process.dir/utility/process/process.c.o.requires

zuluCrypt-cli/CMakeFiles/Process.dir/utility/process/process.c.o.provides: zuluCrypt-cli/CMakeFiles/Process.dir/utility/process/process.c.o.requires
	$(MAKE) -f zuluCrypt-cli/CMakeFiles/Process.dir/build.make zuluCrypt-cli/CMakeFiles/Process.dir/utility/process/process.c.o.provides.build
.PHONY : zuluCrypt-cli/CMakeFiles/Process.dir/utility/process/process.c.o.provides

zuluCrypt-cli/CMakeFiles/Process.dir/utility/process/process.c.o.provides.build: zuluCrypt-cli/CMakeFiles/Process.dir/utility/process/process.c.o

# Object files for target Process
Process_OBJECTS = \
"CMakeFiles/Process.dir/utility/process/process.c.o"

# External object files for target Process
Process_EXTERNAL_OBJECTS =

zuluCrypt-cli/libProcess.a: zuluCrypt-cli/CMakeFiles/Process.dir/utility/process/process.c.o
zuluCrypt-cli/libProcess.a: zuluCrypt-cli/CMakeFiles/Process.dir/build.make
zuluCrypt-cli/libProcess.a: zuluCrypt-cli/CMakeFiles/Process.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C static library libProcess.a"
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && $(CMAKE_COMMAND) -P CMakeFiles/Process.dir/cmake_clean_target.cmake
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Process.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
zuluCrypt-cli/CMakeFiles/Process.dir/build: zuluCrypt-cli/libProcess.a
.PHONY : zuluCrypt-cli/CMakeFiles/Process.dir/build

zuluCrypt-cli/CMakeFiles/Process.dir/requires: zuluCrypt-cli/CMakeFiles/Process.dir/utility/process/process.c.o.requires
.PHONY : zuluCrypt-cli/CMakeFiles/Process.dir/requires

zuluCrypt-cli/CMakeFiles/Process.dir/clean:
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && $(CMAKE_COMMAND) -P CMakeFiles/Process.dir/cmake_clean.cmake
.PHONY : zuluCrypt-cli/CMakeFiles/Process.dir/clean

zuluCrypt-cli/CMakeFiles/Process.dir/depend:
	cd /home/kod/soft/zuluCrypt-4.7.4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kod/soft/zuluCrypt-4.7.4 /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli /home/kod/soft/zuluCrypt-4.7.4 /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli/CMakeFiles/Process.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : zuluCrypt-cli/CMakeFiles/Process.dir/depend
