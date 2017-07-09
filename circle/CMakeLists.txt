project(module_circle)

add_custom_target("${PROJECT_NAME}")
add_dependencies("${PROJECT_NAME}"
    blue
    green
)

add_subdirectory(blue)
add_subdirectory(green)
add_subdirectory(libcircle)