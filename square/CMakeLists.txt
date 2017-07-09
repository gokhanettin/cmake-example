project(module_square)

add_custom_target("${PROJECT_NAME}")
add_dependencies("${PROJECT_NAME}"
    red
    yellow
)

add_subdirectory(red)
add_subdirectory(yellow)
add_subdirectory(libsquare)