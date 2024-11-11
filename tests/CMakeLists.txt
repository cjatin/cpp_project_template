add_executable(tests temp_test.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain tlib)

catch_discover_tests(tests)