//
// Created by lucas on 1/29/2023.
//

#include "Time.h"

Time::Time(): myHours(12), myMinutes(0), AMorPM('A') {}


void Time::setTime( unsigned hours, unsigned minutes, char am_pm )
{

    if ( ( hours >= 0 && hours <= 12 ) && ( minutes >= 0 && minutes <= 59 ) && ( am_pm == 'A' || am_pm == 'P' ))
    {
        myHours = hours;
        myMinutes = minutes;
        AMorPM = am_pm;
    }
    else
    {
        cerr << "***Can't set these values. Try again.***" << endl;
    }
}


void Time::displayTime()
{
    cout << myHours << ':' << myMinutes << ' ' << AMorPM << ".M." << endl;
}


void Time::showMyAddress()
{
    cout << "My address is: " << this << endl;
}