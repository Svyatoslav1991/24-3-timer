# CMakeList.txt : CMake project for 24_3_timer, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("24_3_timer")

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# Add source to this project's executable.
add_executable (24_3_timer "main.cpp" ${MY_INCLUDE_DIR}/functions.h "functions.cpp")

target_include_directories(24_3_timer PUBLIC ${CMAKE_SOURCE_DIR}/include)

# TODO: Add tests and install targets if needed.
