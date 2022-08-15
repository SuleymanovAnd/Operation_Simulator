cmake_minimum_required(VERSION 3.22)
project("Operation_Simulator" VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)

add_executable(Operation_Simulator src/main.cpp include/tools.h include/coordinates.h)
target_include_directories(Operation_Simulator PUBLIC include)
