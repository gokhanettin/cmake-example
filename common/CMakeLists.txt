project(module_common)

add_custom_target("${PROJECT_NAME}")
add_dependencies("${PROJECT_NAME}"
    display
)

add_subdirectory(libdisplay)