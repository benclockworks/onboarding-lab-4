#include <Catch2/catch_test_macros.hpp>
#include <VExercise1.h>

TEST_CASE("Exercise 1") {
  VExercise1 model;

  // Setup some inputs
  model.eval();

  int expected;
  // Calculate the expected value

  REQUIRE(model.out == expected);
}
