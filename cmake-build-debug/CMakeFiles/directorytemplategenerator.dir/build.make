# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /home/celestial/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/192.7142.39/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/celestial/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/192.7142.39/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/celestial/CLionProjects/directorytemplategenerator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/celestial/CLionProjects/directorytemplategenerator/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/directorytemplategenerator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/directorytemplategenerator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/directorytemplategenerator.dir/flags.make

CMakeFiles/directorytemplategenerator.dir/main.c.o: CMakeFiles/directorytemplategenerator.dir/flags.make
CMakeFiles/directorytemplategenerator.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/celestial/CLionProjects/directorytemplategenerator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/directorytemplategenerator.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/directorytemplategenerator.dir/main.c.o   -c /home/celestial/CLionProjects/directorytemplategenerator/main.c

CMakeFiles/directorytemplategenerator.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/directorytemplategenerator.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/celestial/CLionProjects/directorytemplategenerator/main.c > CMakeFiles/directorytemplategenerator.dir/main.c.i

CMakeFiles/directorytemplategenerator.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/directorytemplategenerator.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/celestial/CLionProjects/directorytemplategenerator/main.c -o CMakeFiles/directorytemplategenerator.dir/main.c.s

# Object files for target directorytemplategenerator
directorytemplategenerator_OBJECTS = \
"CMakeFiles/directorytemplategenerator.dir/main.c.o"

# External object files for target directorytemplategenerator
directorytemplategenerator_EXTERNAL_OBJECTS =

directorytemplategenerator: CMakeFiles/directorytemplategenerator.dir/main.c.o
directorytemplategenerator: CMakeFiles/directorytemplategenerator.dir/build.make
directorytemplategenerator: CMakeFiles/directorytemplategenerator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/celestial/CLionProjects/directorytemplategenerator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable directorytemplategenerator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/directorytemplategenerator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/directorytemplategenerator.dir/build: directorytemplategenerator

.PHONY : CMakeFiles/directorytemplategenerator.dir/build

CMakeFiles/directorytemplategenerator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/directorytemplategenerator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/directorytemplategenerator.dir/clean

CMakeFiles/directorytemplategenerator.dir/depend:
	cd /home/celestial/CLionProjects/directorytemplategenerator/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/celestial/CLionProjects/directorytemplategenerator /home/celestial/CLionProjects/directorytemplategenerator /home/celestial/CLionProjects/directorytemplategenerator/cmake-build-debug /home/celestial/CLionProjects/directorytemplategenerator/cmake-build-debug /home/celestial/CLionProjects/directorytemplategenerator/cmake-build-debug/CMakeFiles/directorytemplategenerator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/directorytemplategenerator.dir/depend

