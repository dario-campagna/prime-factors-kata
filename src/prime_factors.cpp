#include "prime_factors.h"

std::vector<int> PrimeFactors::of(int number) {
    std::vector<int> factors;
    if (number == 2){
        factors.push_back(2);
    } else if (number == 3){
        factors.push_back(3);
    }
    return factors;
}