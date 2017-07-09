set(square_SOURCES
    square.c
)

add_library(square
    STATIC
    "${square_SOURCES}"
)

set(square_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}"
)

target_include_directories(square
    PRIVATE
    "${square_INCLUDES}"
)

set_target_properties(square
    PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES "${square_INCLUDES}"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)