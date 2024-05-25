#include <iostream>
#include "Time.h"
using namespace std;


int main()
{
    Time mealTime;
    mealTime.setTime( 7, 30 , 'P');

    cout << "We will be eating at: ";
    mealTime.displayTime();
    mealTime.showMyAddress();


    return 0;
}