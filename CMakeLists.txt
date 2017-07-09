cmake_minimum_required(VERSION 3.8 FATAL_ERROR)
project(cmake-example)

# Location of additional cmake modules
set(CMAKE_MODULE_PATH
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake"
    "${CMAKE_MODULE_PATH}"
    )

include(BuildTypeConfig)

set(EXAMPLE_COMPILE_OPTIONS
    -fmessage-length=0
    )

add_compile_options("${EXAMPLE_COMPILE_OPTIONS}")
set(CMAKE_C_USE_RESPONSE_FILE_FOR_INCLUDES FALSE)

add_subdirectory(square)
add_subdirectory(circle)
add_subdirectory(common)