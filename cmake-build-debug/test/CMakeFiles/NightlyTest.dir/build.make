# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/mbonjour/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/191.7479.33/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/mbonjour/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/191.7479.33/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug

# Utility rule file for NightlyTest.

# Include the progress variables for this target.
include test/CMakeFiles/NightlyTest.dir/progress.make

test/CMakeFiles/NightlyTest:
	cd /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug/test && /home/mbonjour/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/191.7479.33/bin/cmake/linux/bin/ctest -D NightlyTest

NightlyTest: test/CMakeFiles/NightlyTest
NightlyTest: test/CMakeFiles/NightlyTest.dir/build.make

.PHONY : NightlyTest

# Rule to build all files generated by this target.
test/CMakeFiles/NightlyTest.dir/build: NightlyTest

.PHONY : test/CMakeFiles/NightlyTest.dir/build

test/CMakeFiles/NightlyTest.dir/clean:
	cd /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/NightlyTest.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/NightlyTest.dir/clean

test/CMakeFiles/NightlyTest.dir/depend:
	cd /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5 /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/test /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug/test /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug/test/CMakeFiles/NightlyTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/NightlyTest.dir/depend

