# Guard against bad build-type strings
if(NOT EXAMPLE_BUILD_TYPE
    OR EXAMPLE_BUILD_TYPE STREQUAL "None")
  # Default is x64Debug
  set(EXAMPLE_BUILD_TYPE "x64Debug")
endif()

string(TOLOWER "${EXAMPLE_BUILD_TYPE}" build_type)
if(    NOT build_type STREQUAL "x64debug"
   AND NOT build_type STREQUAL "x64release"
   AND NOT build_type STREQUAL "x86debug"
   AND NOT build_type STREQUAL "x86release")
      message(FATAL_ERROR
          "Unknown build type \"${EXAMPLE_BUILD_TYPE}\". Allowed values are:
           x64Debug x64Release
           x86Debug x86Release
       ")
else ()
    if (build_type STREQUAL "x64debug")
        set(EXAMPLE_TARGET_ARCHITECTURE "x64")
        set(CMAKE_BUILD_TYPE "Debug")
    elseif (build_type STREQUAL "x64release")
        set(EXAMPLE_TARGET_ARCHITECTURE "x64")
        set(CMAKE_BUILD_TYPE "Release")
    elseif (build_type STREQUAL "x86debug")
        set(EXAMPLE_TARGET_ARCHITECTURE "x86")
        set(CMAKE_BUILD_TYPE "Debug")
    elseif (build_type STREQUAL "x86release")
        set(EXAMPLE_TARGET_ARCHITECTURE "x86")
        set(CMAKE_BUILD_TYPE "Release")
    endif ()
    message(STATUS "EXAMPLE_TARGET_ARCHITECTURE: ${EXAMPLE_TARGET_ARCHITECTURE}")
    message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")
endif ()