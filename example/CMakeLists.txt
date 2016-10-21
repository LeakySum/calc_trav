cmake_minimum_required(VERSION 2.8)

project(calculator)
set(SOURCE_FILES main.cpp)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


add_executable(untitled2 ${SOURCE_FILES})

target_link_libraries(${PROFECT_NAME} calculator)
