add_library(lib_b  
src/B.cpp
)
include_directories(include)
add_executable(main_b main_b.cpp)
target_link_libraries(main_b lib_b)
