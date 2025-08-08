cmake_minimum_required(VERSION 3.16)
project(Template)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(MSVC_STATIC_RUNTIME_LIBRARY OFF)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)    # export all symbols from dll on Windows
set(CMAKE_ENABLE_EXPORTS ON)                # export all symbols from exe on Windows

set(CMAKE_BUILD_WITH_INSTALL_RPATH ON)

if(MSVC)
  add_definitions(-D_CRT_SECURE_NO_WARNINGS -D_SCL_SECURE_NO_WARNINGS -D_WIN32_WINNT=0x0601)
  add_definitions(/bigobj)
endif()

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(model)
add_subdirectory(solver)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE solver model)