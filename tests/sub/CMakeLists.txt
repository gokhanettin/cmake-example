add_executable(SubTest
    sub_test.cc
)

target_link_libraries(SubTest
    PRIVATE
    GTest::GTest
    sub
)

add_test(
    NAME SubTest
    COMMAND SubTest
)
