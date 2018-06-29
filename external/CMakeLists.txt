cmake_minimum_required(VERSION 3.1)

#include(ExternalProject)

##############
##  GFLAGS  ##
##############
message(STATUS "Subproject: EVIO...")
# Download and unpack gflags at configure time
configure_file(
  ${CMAKE_CURRENT_SOURCE_DIR}/EVIO.CMakeLists.txt
  ${CMAKE_BINARY_DIR}/EVIO-download/CMakeLists.txt)

execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/EVIO-download)
if(result)
  message(FATAL_ERROR "CMake step for EVIO failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/EVIO-download)
if(result)
  message(FATAL_ERROR "Build step for EVIO failed: ${result}")
endif()

#set(GFLAGS_NAMESPACE "gflags")
#set(GFLAGS_INSTALL_STATIC_LIBS ON)
#set(GFLAGS_INSTALL_HEADERS ON)
#set(GFLAGS_IS_SUBPROJECT TRUE)
add_subdirectory(
  ${CMAKE_BINARY_DIR}/hallac_evio-src
  ${CMAKE_BINARY_DIR}/hallac_evio-build)

execute_process(COMMAND "rm -r *"
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/EVIO-download)

message(STATUS "Subproject: EVIO...DONE")

