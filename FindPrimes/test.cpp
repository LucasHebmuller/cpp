#include <iostream>
#include <cassert>
#include "primes.h"

int main() {
    cout << "Running tests..." << endl;

    vector<int> result1 = findPrimes(10);
    vector<int> expected1 = {2, 3, 5, 7};
    assert(result1 == expected1);
    cout << "Test 1 passed!" << endl;

    vector<int> result2 = findPrimes(20);
    vector<int> expected2 = {2, 3, 5, 7, 11, 13, 17, 19};
    assert(result2 == expected2);
    cout << "Test 2 passed!" << endl;

    vector<int> result3 = findPrimes(1);
    vector<int> expected3 = {};
    assert(result3 == expected3);
    cout << "Test 3 passed!" << endl;

    cout << "All tests passed!" << endl;

    return 0;
}