cmake_minimum_required(VERSION 3.5)

project(Podd VERSION 1.7.0 LANGUAGES CXX)
set(EXTVERS .5-devel)

#----------------------------------------------------------------------------
# Use our modules and utility functions
set(CMAKE_MODULE_PATH
  ${PROJECT_SOURCE_DIR}/cmake/Modules
  ${CMAKE_MODULE_PATH}
  )
include(PoddCMakeEnv)

#----------------------------------------------------------------------------
# Install in GNU-style directory layout
include(GNUInstallDirs)
set(INSTALL_CONFIGDIR ${CMAKE_INSTALL_LIBDIR}/${MAIN_PROJECT_NAME_LC})

# OS specific, but standard stuff
include(cmake/os.cmake)

#----------------------------------------------------------------------------
# Find ROOT (using our custom FindROOT.cmake)
set(minimum_root_version 5.10)
find_package(ROOT ${minimum_root_version} REQUIRED CONFIG)
include(${ROOT_USE_FILE})
# Register this dependency - it's in our public interface
#config_add_dependency(ROOT ${minimum_root_version})

#https://github.com/fmtlib/fmt.git
find_package(fmt )
if(NOT fmt_FOUND) 
  message("fmt not found.")
  message("Run the following command to install the (mostly) header-only libraries.")
  message(FATAL_ERROR "bash ${CMAKE_SOURCE_DIR}/src/3rd_party/build_all_3rd_party.sh ${CMAKE_INSTALL_PREFIX}")
  #set(BUILD_SHARED_LIBS TRUE)
  #add_subdirectory(src/3rd_party/fmt)
  #add_subdirectory(src/3rd_party/fmt EXCLUDE_FROM_ALL)
  #set(FMT_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/src/3rd_party/fmt/include)
endif()
#jelse()
get_target_property(FMT_INCLUDE_DIR fmt::fmt INTERFACE_INCLUDE_DIRECTORIES)
add_definitions(-DSPDLOG_FMT_EXTERNAL )
#find_package(fmt QUIET)


find_package(spdlog QUIET)
if(NOT spdlog_FOUND) 
  message("spdlog not found.")
  message("Using builtin spdlog.")
  set(SPDLOG_FMT_EXTERNAL TRUE)
  add_subdirectory(src/3rd_party/spdlog)
  set(SPDLOG_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/src/3rd_party/spdlog/include)
else()
  get_target_property(SPDLOG_INCLUDE_DIR spdlog::spdlog INTERFACE_INCLUDE_DIRECTORIES)
endif()
#message( "SPDLOG_INCLUDE_DIR ${SPDLOG_INCLUDE_DIR}")


#----------------------------------------------------------------------------
# Set up the compiler flags
set_compiler_flags("${ROOT_CXX_FLAGS}")
set_diagnostic_flags(WALL WEXTRA)
report_build_info()

#----------------------------------------------------------------------------
# Directories in which we build things
add_subdirectory(hana_decode)
add_subdirectory(Podd)
add_subdirectory(HallA)
if("${CMAKE_PROJECT_NAME}" STREQUAL "${PROJECT_NAME}")
  add_subdirectory(apps)
endif()
add_subdirectory(cmake)

install(DIRECTORY include/podd2 
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR} )



#----------------------------------------------------------------------------
# Install support files
# install(DIRECTORY scripts/ DESTINATION scripts
#   USE_SOURCE_PERMISSIONS
#   PATTERN "*.C"
#   PATTERN "*.sh"
#   )
