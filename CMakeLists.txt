
CMAKE_MINIMUM_REQUIRED(VERSION 2.8.0)
set(PROJECT_NAME_STR allocate)
project(${PROJECT_NAME_STR} C CXX)

#-------------------------------------------------------------------------------
# The version number
#-------------------------------------------------------------------------------
set (allocate_VERSION_MAJOR 0)
set (allocate_VERSION_MINOR 1)
set (allocate_VERSION_STRING ${allocate_VERSION_MAJOR}.${allocate_VERSION_MINOR})

include_directories(${INCLUDES})
set(PROJECT_COMPILER_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x -fPIC -Wall -pedantic -Wextra -Werror -Wno-long-long")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "build/bin/")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/bin)

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_executable(${PROJECT_NAME} ${SRC_FILES})
target_link_libraries(${PROJECT_NAME} ${LIBS})

set_property(
  TARGET ${PROJECT_NAME}
  APPEND PROPERTY COMPILE_FLAGS ${PROJECT_COMPILER_FLAGS})
