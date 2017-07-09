set(circle_SOURCES
    circle.c
)

add_library(circle
    STATIC
    "${circle_SOURCES}"
)

set(circle_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}"
)

target_include_directories(circle
    PRIVATE
    "${circle_INCLUDES}"
)

set_target_properties(circle
    PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES "${circle_INCLUDES}"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)