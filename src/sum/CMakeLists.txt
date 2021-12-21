add_library(sum
    sum.cc
)

target_include_directories(sum
    PUBLIC
    "${PROJECT_SOURCE_DIR}/src/include"
)

target_compile_definitions(sum
    PUBLIC
    PUBLIC_SUM
    PRIVATE
    PRIVATE_SUM
)
