add_library(solver SHARED SolverCommon.cpp)

target_link_libraries(solver PRIVATE model)

target_include_directories(solver
  INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
  PRIVATE
  $<TARGET_PROPERTY:model,INTERFACE_INCLUDE_DIRECTORIES>
  )
