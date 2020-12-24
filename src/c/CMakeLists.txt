add_library(c
src/C.cpp
)
include_directories(include)
add_executable(main_c main_c.cpp)
target_link_libraries(main_c c)
