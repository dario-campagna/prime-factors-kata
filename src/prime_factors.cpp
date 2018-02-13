#include "prime_factors.h"

std::vector<int> PrimeFactors::of(int number) {
    std::vector<int> factors;
    for (int candidate = 2;candidate <= number;candidate++) {
        for (;number % candidate == 0;number/=candidate) {
            factors.push_back(candidate);
        }
    }
    return factors;
}