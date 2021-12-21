add_executable(SumTest
    sum_test.cc
)

target_link_libraries(SumTest
    PRIVATE
    GTest::GTest
    sum
)

add_test(
    NAME SumTest
    COMMAND SumTest
)
