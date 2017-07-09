set(yellow_SOURCES
    yellow.c
    main.c
)

add_executable(yellow
    "${yellow_SOURCES}"
)

target_link_libraries(yellow
    square
    display
)

set(yellow_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}"
)

target_include_directories(yellow
    PRIVATE
    "${yellow_INCLUDES}"
)

set_target_properties(yellow
    PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES "${yellow_INCLUDES}"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)