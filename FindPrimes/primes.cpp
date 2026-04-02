#include "primes.h"

vector<int> findPrimes(int number) {
    if (number <= 0) return {};

    vector<int> prime_numbers;

    for (int i = 2; i <= number; i++) {
        bool isPrime = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            prime_numbers.push_back(i);
        }
    }

    return prime_numbers;
}