cmake_minimum_required(VERSION 3.8)
project(clone)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "-W -Wall -Wextra")

set(SOURCE_FILES main.cpp CloningSystem.cpp CloningSystem.hpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})

add_executable(clone ${SOURCE_FILES})