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

# Include any dependencies generated for this target.
include src/CMakeFiles/exe.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/exe.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/exe.dir/flags.make

src/CMakeFiles/exe.dir/main.cpp.o: src/CMakeFiles/exe.dir/flags.make
src/CMakeFiles/exe.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/exe.dir/main.cpp.o"
	cd /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exe.dir/main.cpp.o -c /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/src/main.cpp

src/CMakeFiles/exe.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exe.dir/main.cpp.i"
	cd /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/src/main.cpp > CMakeFiles/exe.dir/main.cpp.i

src/CMakeFiles/exe.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exe.dir/main.cpp.s"
	cd /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/src/main.cpp -o CMakeFiles/exe.dir/main.cpp.s

# Object files for target exe
exe_OBJECTS = \
"CMakeFiles/exe.dir/main.cpp.o"

# External object files for target exe
exe_EXTERNAL_OBJECTS =

src/exe: src/CMakeFiles/exe.dir/main.cpp.o
src/exe: src/CMakeFiles/exe.dir/build.make
src/exe: src/libcore.a
src/exe: src/CMakeFiles/exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable exe"
	cd /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/exe.dir/build: src/exe

.PHONY : src/CMakeFiles/exe.dir/build

src/CMakeFiles/exe.dir/clean:
	cd /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug/src && $(CMAKE_COMMAND) -P CMakeFiles/exe.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/exe.dir/clean

src/CMakeFiles/exe.dir/depend:
	cd /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5 /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/src /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug/src /home/mbonjour/HEIG/annee2/semestre_2/GEN/Labo/GEN_Lab5/cmake-build-debug/src/CMakeFiles/exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/exe.dir/depend

