add_library(factorial
    factorial.cc
)

target_link_libraries(factorial
    PRIVATE
    mul
)

target_include_directories(factorial
    PUBLIC
    "${PROJECT_SOURCE_DIR}/src/include"
)
