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
include zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/depend.make

# Include the progress variables for this target.
include zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/progress.make

# Include the compile flags for this target's objects.
include zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/flags.make

zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.o: zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/flags.make
zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.o: plugins/network_key/server.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kod/soft/zuluCrypt-4.7.4/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.o"
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.o   -c /home/kod/soft/zuluCrypt-4.7.4/plugins/network_key/server.c

zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.i"
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/kod/soft/zuluCrypt-4.7.4/plugins/network_key/server.c > CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.i

zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.s"
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/kod/soft/zuluCrypt-4.7.4/plugins/network_key/server.c -o CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.s

zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.o.requires:
.PHONY : zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.o.requires

zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.o.provides: zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.o.requires
	$(MAKE) -f zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/build.make zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.o.provides.build
.PHONY : zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.o.provides

zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.o.provides.build: zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.o

zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.o: zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/flags.make
zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.o: zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kod/soft/zuluCrypt-4.7.4/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.o"
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.o   -c /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c

zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.i"
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c > CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.i

zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.s"
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c -o CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.s

zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.o.requires:
.PHONY : zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.o.requires

zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.o.provides: zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.o.requires
	$(MAKE) -f zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/build.make zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.o.provides.build
.PHONY : zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.o.provides

zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.o.provides.build: zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.o

# Object files for target zuluCryptKeyServer
zuluCryptKeyServer_OBJECTS = \
"CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.o" \
"CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.o"

# External object files for target zuluCryptKeyServer
zuluCryptKeyServer_EXTERNAL_OBJECTS =

zuluCrypt-cli/zuluCryptKeyServer: zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.o
zuluCrypt-cli/zuluCryptKeyServer: zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.o
zuluCrypt-cli/zuluCryptKeyServer: zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/build.make
zuluCrypt-cli/zuluCryptKeyServer: libcrypt_buffer.a
zuluCrypt-cli/zuluCryptKeyServer: zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable zuluCryptKeyServer"
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/zuluCryptKeyServer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/build: zuluCrypt-cli/zuluCryptKeyServer
.PHONY : zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/build

zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/requires: zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/plugins/network_key/server.c.o.requires
zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/requires: zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/__/zuluCrypt-gui/lxqt_wallet/backend/lxqtwallet.c.o.requires
.PHONY : zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/requires

zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/clean:
	cd /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli && $(CMAKE_COMMAND) -P CMakeFiles/zuluCryptKeyServer.dir/cmake_clean.cmake
.PHONY : zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/clean

zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/depend:
	cd /home/kod/soft/zuluCrypt-4.7.4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kod/soft/zuluCrypt-4.7.4 /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli /home/kod/soft/zuluCrypt-4.7.4 /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli /home/kod/soft/zuluCrypt-4.7.4/zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : zuluCrypt-cli/CMakeFiles/zuluCryptKeyServer.dir/depend
