set(red_SOURCES
    red.c
    main.c
)

add_executable(red
    "${red_SOURCES}"
)

target_link_libraries(red
    square
    display
)

set(red_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}"
)

target_include_directories(red
    PRIVATE
    "${red_INCLUDES}"
)

set_target_properties(red
    PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES "${red_INCLUDES}"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)