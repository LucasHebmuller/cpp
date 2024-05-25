// CountingDollars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void makeChange(int, int &, int &, int &, int &, int &);


int main()
{
    int cents, dollars, quarters, dimes, nickels, pennies;

    std::cout << "How much change to make (in cents): ";
    std::cin >> cents;

    makeChange(cents, dollars, quarters, dimes, nickels, pennies);

    std:: cout << "\nYour change is:" << std::endl
               << dollars << " dollar(s)" << std::endl
               << quarters << " quarter(s)" << std::endl
               << dimes << " dime(s)" << std::endl
               << nickels << " nickel(s)" << std::endl
               << pennies << " pennie(s)" << std::endl;


    return 0;
}


void makeChange(int cents, int & dollars, int & quarters, int & dimes, int & nickels, int & pennies)
{
    dollars = cents / 100;
    cents = cents - dollars * 100;

    quarters = cents / 25;
    cents = cents - quarters * 25;

    dimes = cents / 10;
    cents = cents - dimes * 10;

    nickels = cents / 5;
    cents = cents - nickels * 5;

    pennies = cents;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
