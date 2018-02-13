#include "prime_factors.h"

std::vector<int> PrimeFactors::of(int number) {
    std::vector<int> factors;
    if (number == 2){
        factors.push_back(2);
    } else if (number == 3){
        factors.push_back(3);
    } else if (number == 4) {
        factors.push_back(2);
        factors.push_back(2);
    } else if (number % 2 == 0){
        while (number % 2 == 0) {
            factors.push_back(2);
            number /= 2;
        }
    }
    return factors;
}