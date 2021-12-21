add_executable(MulTest
    mul_test.cc
)

target_link_libraries(MulTest
    PRIVATE
    GTest::GTest
    mul
)

add_test(
    NAME MulTest
    COMMAND MulTest
)
