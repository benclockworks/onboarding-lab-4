#include <Catch2/catch_test_macros.hpp>
#include <VExercise3.h>

TEST_CASE("Exercise 3") {
  VExercise3 model;

  // Setup some inputs
  model.eval();

  int expected;
  // Calculate the expected value

  REQUIRE(model.out == expected);
}

