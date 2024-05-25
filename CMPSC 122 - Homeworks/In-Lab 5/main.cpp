#include <iostream>
#include "Time.h"
using namespace std;


void ShowNowTime(Time& timept)
{
    cout << "Time is now ";
    timept.Display();
    cout << endl;
}


int main()
{
    Time nowTime;
    nowTime.Set(11, 30, 'P');
    ShowNowTime(nowTime);
    cout << "Forward 20 Minutes." << endl;
    nowTime += 20;
    ShowNowTime(nowTime);
    cout << "Forward 20 Minutes." << endl;
    nowTime += 20;
    ShowNowTime(nowTime);
    cout << "Forward 500 Minutes." << endl;
    nowTime += 500;
    ShowNowTime(nowTime);
    cout << "Forward 330 Minutes." << endl;
    nowTime += 330;
    ShowNowTime(nowTime);

    cout << "Forward 30 Minutes. (Testing the + operator.)" << endl;
    Time testTime = nowTime + 30;
    ShowNowTime(testTime);
    cout << endl;
    cout << "Testing Assignment Operator." << endl;

    //Time testTime(9, 30, 'P');
    testTime.Display();
    testTime = 10;
    testTime.Display();
    testTime = 7;
    testTime.Display();
    testTime = 13;
    testTime.Display();


    return 0;
}

