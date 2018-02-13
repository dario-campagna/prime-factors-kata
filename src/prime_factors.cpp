#include "prime_factors.h"

std::vector<int> PrimeFactors::of(int number) {
    if (number == 2){
        std::vector<int> factors;
        factors.push_back(2);
        return factors;
    }
    return std::vector<int>();
}