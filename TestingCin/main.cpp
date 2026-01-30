#include <iostream>

int main() {
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cout << "You entered " << x << "\n";

    return 0;
}

/* Different input scenarios:

If input a letter, such as h:
Result: 0 is always printed.
What’s happening: An integer can’t hold a letter, so extraction completely fails. x is assigned the value 0.

A number with fractional part:
Result: The fractional part is dropped (not rounded).
What’s happening: Given the number 3.2, the 3 gets extracted, but . is an invalid character, so extraction stops here. The .2 remains for a future extraction attempt.

A small negative number:
Result: The entered number is output.
What’s happening: A minus sign at the beginning of a number is acceptable, so it is extracted. The remaining numbers are extracted as well.

A really big number:
Result: You are most likely to get the number 2147483647.
What’s happening: x can only hold numbers up to a certain size. If you enter a value larger than the largest number x can hold, it will be set to the largest number that x can hold (which is probably 2147483647, but might be different on your system).

A small number followed by letters, such as 123abc:
Result: The numeric values are printed (e.g. 123).
What’s happening: 123 is extracted, the remaining characters (e.g. abc) are left for a later extraction.

A few letters followed by a number, such as abc123:
Result: 0 is always printed.
What’s happening: An integer can’t hold a letter, so extraction completely fails. x is assigned the value 0.

+5 (three spaces, followed by a plus symbol, and a 5):
Result: 5 is printed.
What’s happening: The leading whitespace is skipped. Plus is a valid symbol at the start of a number (just as a minus sign would be), so it is extracted. The 5 is also extracted.

5b6:
Result: 5 is printed.
What’s happening: 5 is extracted. b is invalid, so extraction stops here. The b6 remains for a future extraction attempt.
*/