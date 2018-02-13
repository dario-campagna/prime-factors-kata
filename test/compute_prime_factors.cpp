#include "gtest/gtest.h"
#include "../src/prime_factors.h"

void ASSERT_VECTOR_EQ(std::vector<int> expected, std::vector<int> actual){
    ASSERT_EQ(expected.size(), actual.size()) << "vectors differ in size" << std::endl;
    for(int i=0; i < expected.size(); i++){
        ASSERT_EQ(expected[i], actual[i]) << "vectors differ at position " << i << std::endl;
    }
}

TEST(ComputePrimeFactors, OneHasNoPrimeFactors) {
    ASSERT_EQ(0, PrimeFactors::of(1).size());
}

TEST(ComputePrimeFactors, TwoPrimeFactors) {
    ASSERT_VECTOR_EQ({2}, PrimeFactors::of(2));
}

TEST(ComputePrimeFactors, ThreePrimeFactors) {
    ASSERT_VECTOR_EQ({3}, PrimeFactors::of(3));
}

TEST(ComputePrimeFactors, FourPrimeFactors) {
    ASSERT_VECTOR_EQ({2,2}, PrimeFactors::of(4));
}