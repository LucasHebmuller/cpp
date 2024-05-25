/*
* This program simulates a Fibonnaci Nim game.
* 
* @author Lucas Hebmuller
*/


#include <iostream>
#include <cstdlib>
#include <ctime>
#include "FibonacciNim.h"


int main()
{
    srand((unsigned) time(nullptr));
    char answer;


    introduction();


    do
    {
        std::cout << "Would you like to play the Fibonacci Nim game? Please answer 'y' or 'n':";
        std::cin >> answer;

        if (answer != 'y' && answer != 'n')
            std::cout << "Invalid input. Please try again." << std::endl << std::endl;

    } while (answer != 'y' && answer != 'n');


    loading(3);
    clearScreen();


    if (answer == 'y')
        startOfGame();
    line();
    std::cout << "You are welcome to come back!" << std::endl;
    line();


    return 0;
}

