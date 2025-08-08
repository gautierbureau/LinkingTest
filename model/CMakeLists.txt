add_library(model SHARED ModelImpl.cpp SubModel.cpp)

target_include_directories(model
  INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
  )
