find_package(FreeGLUT REQUIRED)

set(display_SOURCES
    display.c
)

add_library(display
     SHARED
     "${display_SOURCES}"
)

target_link_libraries(display
    FreeGLUT::FreeGLUT
)

set(display_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}"
)

target_include_directories(display
    PRIVATE
    "${display_INCLUDES}"
)

add_custom_command(TARGET display
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "$<TARGET_PROPERTY:FreeGLUT::FreeGLUT,IMPORTED_LOCATION>"
        "${CMAKE_BINARY_DIR}/bin"
)

set_target_properties(display
    PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES "${display_INCLUDES}"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)