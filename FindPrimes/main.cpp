#include <iostream>
#include "primes.h"

int main() {
    int number;

    cout << "Give me a number and I will find all prime numbers up to this number: ";
    cin >> number;

    vector<int> output = findPrimes(number);

    cout << "Prime numbers up to " << number << ": ";
    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }

    return 0;
}