#include "gtest/gtest.h"
#include "../src/prime_factors.h"

TEST(ComputePrimeFactors, OneHasNoPrimeFactors) {
    ASSERT_EQ(0, PrimeFactors::of(1).size());
}

TEST(ComputePrimeFactors, TwoPrimeFactors) {
    const std::vector<int> factors = PrimeFactors::of(2);
    ASSERT_EQ(1, factors.size());
    ASSERT_EQ(2, factors[0]);
}

TEST(ComputePrimeFactors, ThreePrimeFactors) {
    const std::vector<int> factors = PrimeFactors::of(3);
    ASSERT_EQ(1, factors.size());
    ASSERT_EQ(3, factors[0]);
}
