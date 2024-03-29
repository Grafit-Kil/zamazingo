cmake_minimum_required(VERSION 3.10)

# Set the project name
project(zamazingo)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set the default build type to Release if not specified
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Add include directory
include_directories(include)

# Add all source files in the 'src' directory to the 'sources' variable
file(GLOB sources "src/*.cpp","/src/*.hpp")

# Add the main.cpp file to the sources
list(APPEND sources "main.cpp")

# Create the executable from the source files
add_executable(zamazingo ${sources})

# Add compiler flags based on build type
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_options(zamazingo PRIVATE -g -Wall -Wextra -Wunused -Wpedantic -Wuninitialized -Wmissing-include-dirs -Wshadow -Wundef -Winvalid-pch)
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    target_compile_options(zamazingo PRIVATE -O3 -Wall -Wextra -Wunused -Wpedantic -Wuninitialized -Wmissing-include-dirs -Wshadow -Wundef -Winvalid-pch)
    # Add other optimization flags as needed
endif()
