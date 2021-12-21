add_executable(app1
    app1.cc
)

target_link_libraries(app1
    PRIVATE
    factorial
    sum
    sub
)

add_executable(app2
    app2.cc
)

target_link_libraries(app2
    PRIVATE
    factorial
    sum
    mul
)
