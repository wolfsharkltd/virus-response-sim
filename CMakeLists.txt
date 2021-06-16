set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/third_party/vcpkg/scripts/buildsystems/vcpkg.cmake CACHE STRING "Vcpkg toolchain file")

include(cmake/code_analysis.cmake)

cmake_minimum_required(VERSION 3.10)
project(virus_response_sim_project CXX)

# Set hard requirements for C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Compiler flags
if (MSVC)
    # set(TOOLBOX_CXX_FLAGS /W4 /WX)
else()
    set(TOOLBOX_CXX_FLAGS -Wall -Wextra -pedantic -Werror)
endif()

#add_subdirectory(third_party)
add_subdirectory(libs)
add_subdirectory(products/virus_response_sim)
