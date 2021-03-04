cmake_minimum_required(VERSION 3.14...3.16)
set(CMAKE_CXX_STANDARD 11)
project(STUDYCMAKE VERSION 0.0.1
LANGUAGES CXX)

SET(CMAKE_BUILD_TYPE "Release")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
# SET(CMAKE_BUILD_TYPE "Debug")
# SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")

add_subdirectory(src/a)
add_subdirectory(src/b)
add_subdirectory(src/c)

include_directories(${PROJECT_SOURCE_DIR}/src/a/include ${PROJECT_SOURCE_DIR}/src/b/include ${PROJECT_SOURCE_DIR}/src/c/include)
add_executable( printABC ${PROJECT_SOURCE_DIR}/test_main.cpp)
target_link_libraries(printABC lib_a lib_b lib_c)
