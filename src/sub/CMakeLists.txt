add_library(sub
    sub.cc
)

target_include_directories(sub
    PUBLIC
    "${PROJECT_SOURCE_DIR}/src/include"
)

target_compile_definitions(sub
    PUBLIC
    PUBLIC_SUB
    PRIVATE
    PRIVATE_SUB
)
