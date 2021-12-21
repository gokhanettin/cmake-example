add_executable(FactorialTest
    factorial_test.cc
)

target_link_libraries(FactorialTest
    PRIVATE
    GTest::GTest
    factorial
)

add_test(
    NAME FactorialTest
    COMMAND FactorialTest
)
