#include "io.h"
#include <iostream>

int readNumber() {
    int n{};

    std::cout << "Enter a number to add: ";
    std::cin >> n;

    return n;
}

void writeAnswer(int n) {
    std::cout << "The answer is: " << n << "\n";
}