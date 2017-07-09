set(blue_SOURCES
    blue.c
    main.c
)

add_executable(blue
    "${blue_SOURCES}"
)

target_link_libraries(blue
    circle
    display
)

set(blue_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}"
)

target_include_directories(blue
    PRIVATE
    "${blue_INCLUDES}"
)

set_target_properties(blue
    PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES "${blue_INCLUDES}"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)