add_library(mul
    mul.cc
    private/private_sum.cc
)

target_link_libraries(mul
    PRIVATE
    sum
)

target_include_directories(mul
    PUBLIC
    "${PROJECT_SOURCE_DIR}/src/include"
    PRIVATE
    private
)
