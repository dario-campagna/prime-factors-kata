#include <iostream>
#include "prime_factors.h"

int inputNumber() {
    int number;
    std::cout << "Enter a number (>= 2): ";
    while (!(std::cin >> number) || number < 2) {
        std::cout << "Please enter a number >= 2" << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    return number;
}

int main() {
    int number = inputNumber();
    std::vector<int> factors = PrimeFactors::of(number);
    std::cout << "The prime factors of " << number << " are:" << std::endl;
    std::cout << factors[0];
    for (int i = 1; i < factors.size(); i++) {
        std::cout << ", " << factors[i];
    }
    return 0;
}
