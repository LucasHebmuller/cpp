#include <iostream>
#include "Time.h"
using namespace std;


void ShowNowTime(Time& timept){
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
	//nowTime.Forward(20);
	nowTime += 20;
	ShowNowTime(nowTime);
	cout << "Forward 20 Minutes." << endl;
	//nowTime.Forward(20);
	nowTime += 20;
	ShowNowTime(nowTime);
	cout << "Forward 500 Minutes." << endl;
	//nowTime.Forward(500);
	nowTime += 500;
	ShowNowTime(nowTime);
	cout << "Forward 330 Minutes." << endl;
	//nowTime.Forward(330);
	nowTime += 330;
	ShowNowTime(nowTime);

	cout << "Forward 30 Minutes. (Testing the + operator.)" << endl;
	Time testTime = nowTime + 30;
	ShowNowTime(testTime);
	ShowNowTime(nowTime);

	cout << endl;
	cout << "Testing Assignment Operator." << endl;

	Time testTime1(9, 30, 'P');
	testTime1.Display();
	testTime1 = 10;
	testTime1.Display();
	testTime1 = 7;
	testTime1.Display();
	testTime1 = 13;
	testTime1.Display();
}
