add_library(a 
src/A.cpp
)
include_directories(include)
add_executable(main_a main_a.cpp)
target_link_libraries(main_a a)
