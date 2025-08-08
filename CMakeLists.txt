cmake_minimum_required(VERSION 3.16)
project(Template)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(model)
add_subdirectory(solver)

#add_executable(main main.cpp)
#target_link_libraries(main solver model)
