cmake_minimum_required(VERSION 3.16)
project(Template)

set(CMAKE_CXX_STANDARD 17)

set(BUILD_SHARED_LIBS ON)
add_definitions(-D_CRT_SECURE_NO_WARNINGS -D_SCL_SECURE_NO_WARNINGS -D_WIN32_WINNT=0x0601)

add_subdirectory(model)
add_subdirectory(solver)

add_executable(main main.cpp)
target_link_libraries(main solver model)
