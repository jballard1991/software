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
include zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/depend.make

# Include the progress variables for this target.
include zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/progress.make

# Include the compile flags for this target's objects.
include zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/flags.make

zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.o: zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/flags.make
zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.o: plugins/test/zuluCrypt-testKey.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kod/soft/zuluCrypt-4.7.4/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.o"
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.o   -c /home/kod/soft/zuluCrypt-4.7.4/plugins/test/zuluCrypt-testKey.c

zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.i"
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/kod/soft/zuluCrypt-4.7.4/plugins/test/zuluCrypt-testKey.c > CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.i

zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.s"
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/kod/soft/zuluCrypt-4.7.4/plugins/test/zuluCrypt-testKey.c -o CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.s

zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.o.requires:
.PHONY : zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.o.requires

zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.o.provides: zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.o.requires
	$(MAKE) -f zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/build.make zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.o.provides.build
.PHONY : zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.o.provides

zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.o.provides.build: zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.o

# Object files for target zuluCrypt-testKey
zuluCrypt__testKey_OBJECTS = \
"CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.o"

# External object files for target zuluCrypt-testKey
zuluCrypt__testKey_EXTERNAL_OBJECTS =

zuluCrypt-cli/zuluCrypt-testKey: zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.o
zuluCrypt-cli/zuluCrypt-testKey: zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/build.make
zuluCrypt-cli/zuluCrypt-testKey: zuluCrypt-cli/libzuluCryptPluginManager.so.1.0.0
zuluCrypt-cli/zuluCrypt-testKey: /usr/lib/x86_64-linux-gnu/libblkid.so
zuluCrypt-cli/zuluCrypt-testKey: zuluCrypt-cli/libSocket.a
zuluCrypt-cli/zuluCrypt-testKey: zuluCrypt-cli/libProcess.a
zuluCrypt-cli/zuluCrypt-testKey: zuluCrypt-cli/libString.a
zuluCrypt-cli/zuluCrypt-testKey: zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable zuluCrypt-testKey"
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/zuluCrypt-testKey.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/build: zuluCrypt-cli/zuluCrypt-testKey
.PHONY : zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/build

zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/requires: zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/__/plugins/test/zuluCrypt-testKey.c.o.requires
.PHONY : zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/requires

zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/clean:
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && $(CMAKE_COMMAND) -P CMakeFiles/zuluCrypt-testKey.dir/cmake_clean.cmake
.PHONY : zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/clean

zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/depend:
	cd /home/kod/soft/zuluCrypt-4.7.4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kod/soft/zuluCrypt-4.7.4 /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli /home/kod/soft/zuluCrypt-4.7.4 /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : zuluCrypt-cli/CMakeFiles/zuluCrypt-testKey.dir/depend

