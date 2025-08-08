cmake_minimum_required(VERSION 3.16)
project(Template)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_WITH_INSTALL_RPATH OFF)

add_executable(main main.cpp)
target_link_libraries(main model solver)

add_subdirectory(model)
add_subdirectory(solver)
