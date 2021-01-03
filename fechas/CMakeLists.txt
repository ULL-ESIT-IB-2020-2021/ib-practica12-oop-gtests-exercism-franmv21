# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Francisco F. Martín Vide
# @date 2 Enero 2021
# @brief CMakeLists.txt example
# CMakeLists.txt defines the whole build
# CMake reads CMakeLists.txt sequentially
#
# Build process:
#   1. cd <project_folder>
#   2. mkdir build
#   3. cd build
#   4. cmake ..
#   5. make


cmake_minimum_required(VERSION 3.1)  # Mandatory

# set the project name 
project(fechas_ejecutable               # Mandatory
    VERSION 1.0
    DESCRIPTION "A simple CMake project for the fechas program"
    LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14) 						# Use c++14
set(CMAKE_CXX_STANDARD_REQUIRED True)

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)


# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)


# Adds an executable target called "fechas_ejecutable" to be built from the source files listed in the command invocation.
add_executable(fechas_ejecutable
    src/fechas.h
    src/fechas.cc
    src/fechas_main.cc)
