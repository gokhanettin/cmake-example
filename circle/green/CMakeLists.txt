set(green_SOURCES
    green.c
    main.c
)

add_executable(green
    "${green_SOURCES}"
)

target_link_libraries(green
    circle
    display
)

set(green_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}"
)

target_include_directories(green
    PRIVATE
    "${green_INCLUDES}"
)

set_target_properties(green
    PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES "${green_INCLUDES}"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)