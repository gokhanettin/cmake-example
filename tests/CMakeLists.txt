find_package(GTest REQUIRED)

add_subdirectory(sum)
add_subdirectory(mul)
add_subdirectory(factorial)
add_subdirectory(sub)

function(do_test target result)
  add_test(NAME ${target}_test COMMAND ${target})
  set_tests_properties(${target}_test
    PROPERTIES PASS_REGULAR_EXPRESSION ${result}
  )
endfunction()

do_test(app1 "Factorial\\(5\\) = 120\nSum\\(6, 2\\) = 8\nSub\\(7, 3\\) = 4\n")
do_test(app2 "Factorial\\(5\\) = 120\nSum\\(6, 2\\) = 8\nMul\\(7, 3\\) = 21\n")

