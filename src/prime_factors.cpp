#include "prime_factors.h"

std::vector<int> PrimeFactors::of(int number) {
    std::vector<int> factors;
    int candidate = 2;
    while (candidate <= number) {
        while (number % candidate == 0) {
            factors.push_back(candidate);
            number /= candidate;
        }
        candidate++;
    }
    return factors;
}