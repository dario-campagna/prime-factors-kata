#include "gtest/gtest.h"
#include "../src/prime_factors.h"

TEST(ComputePrimeFactors, OneHasNoPrimeFactors) {
    ASSERT_EQ(std::vector<int>(), PrimeFactors::of(1));
}
