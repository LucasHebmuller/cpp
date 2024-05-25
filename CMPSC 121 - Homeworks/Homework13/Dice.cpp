/**
 * Dice.cpp:
 * The program should simulate the roll of 3 dices and then display the probability of the outcome.
 *
 * @author Lucas Hebmuller
 */

#include "Dice.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;


Dice::Dice()
{
    srand( (unsigned) time(nullptr));

    getSideUp();
}

void Dice::toss()
{
    srand( (unsigned) time(nullptr));

    sideUp = rand() % 6 + 1;
    cout << sideUp;
}

int Dice::getSideUp()
{
    return sideUp;
}