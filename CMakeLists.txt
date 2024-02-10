cmake_minimum_required(VERSION 3.23)
project(Genetic_Sequence_Analysis)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
include_directories(src)

add_executable(Genetic_Sequence_Analysis
        src/main.cpp)
