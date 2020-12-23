cmake_minimum_required(VERSION 3.14...3.16)
set(CMAKE_CXX_STANDARD 11)
project(STUDYCMAKE VERSION 0.0.1
LANGUAGES CXX)

add_subdirectory(src/a)
add_subdirectory(src/b)
add_subdirectory(src/c)

include_directories(${PROJECT_SOURCE_DIR}/src/a ${PROJECT_SOURCE_DIR}/src/b ${PROJECT_SOURCE_DIR}/src/c)
add_executable( printABC ${PROJECT_SOURCE_DIR}/test_main.cpp)
target_link_libraries(printABC a b c)
