cmake_minimum_required(VERSION 3.25)

if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  include(FetchContent)
  FetchContent_Declare(
    vcpkg
    GIT_REPOSITORY https://github.com/microsoft/vcpkg.git
    GIT_TAG master
    GIT_SHALLOW TRUE
  )
  FetchContent_MakeAvailable(vcpkg)
  set(CMAKE_TOOLCHAIN_FILE
    ${vcpkg_SOURCE_DIR}/scripts/buildsystems/vcpkg.cmake
    CACHE FILEPATH "Vcpkg toolchain file"
  )
endif()

project(week-four-lab)

set(NYU_BUILD_TESTS TRUE)
add_library(lab4 INTERFACE)
find_package(nyu-cmake CONFIG REQUIRED)
find_package(catch2 3 CONFIG REQUIRED)
if(NYU_BUILD_TESTS)
  add_subdirectory(rtl)
  enable_testing()
  add_subdirectory(dv)
endif()

#needs to come before rtl


# Test ti find files
# nyu_add_sv(
#   rtl/Exercise1.sv
#   rtl/Exercise2.sv 
#   rtl/Exercise3.sv 
#   rtl/Exercise4.sv
#   rtl/Mysteries/Mystery1.sv
#   rtl/Mysteries/Mystery2.sv
# )



