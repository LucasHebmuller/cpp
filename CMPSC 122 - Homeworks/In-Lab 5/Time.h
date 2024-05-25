//
// Created by lqh5511 on 2/7/2023.
//

#ifndef IN_LAB5_TIME_H
#define IN_LAB5_TIME_H


#include <iostream>
using namespace std;


class Time
{
    public:
        Time();
        Time(unsigned hours, unsigned minutes, char am_pm);
        unsigned getHours() const;
        unsigned getMinutes() const;
        char getAMorPM() const;
        void operator+=(int);
        void operator=(int);
        Time operator+(int);
        void Set(unsigned hours, unsigned minutes, char am_pm);
        void Display() const;
        void Forward(int minutesToForward);

    private:
        unsigned myHours, myMinutes;
        char myAMorPM;
};


#endif //IN_LAB5_TIME_H
