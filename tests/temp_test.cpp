#include <catch2/catch_test_macros.hpp>

#include <template_header.hpp>

TEST_CASE("Sample_test_case") {
  INFO("Should pass");
  REQUIRE(tlib::add(2, 3) == 5);
}