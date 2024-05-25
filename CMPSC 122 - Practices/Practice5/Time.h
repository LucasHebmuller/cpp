//
// Created by lucas on 1/29/2023.
//

#ifndef PRACTICE5_TIME_H
#define PRACTICE5_TIME_H


#include <iostream>
using namespace std;


class Time {
private:
    unsigned myHours, myMinutes;
    char AMorPM;
public:
    Time();
    void setTime( unsigned hours, unsigned minutes, char am_pm );
    void displayTime();
    void showMyAddress();
};


#endif //PRACTICE5_TIME_H
