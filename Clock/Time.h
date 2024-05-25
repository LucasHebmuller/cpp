#pragma once
#include <iostream>
using namespace std;

class Time
{
public:

	// Constructors
	Time();
	Time(unsigned hours, unsigned minutes, char am_pm);

	// Functions to get the values of member
	unsigned getHours() const;                               // Return the hour number
	unsigned getMinutes() const;                             // Return the minute number
	char getAMorPM() const;                                  // Return the AM PM value

	// Set, Display as discussed in class
	void Set(unsigned hours, unsigned minutes, char am_pm);  //Set the time
	void Display() const;                                    //Display the time

	// A convenient forward function 
	void Forward(int minutesToForward);                      //Forward the time
	
	// My functions
	void operator+=(int);
	Time operator+(int);
	void operator=(int);

private:
	unsigned myHours, myMinutes;
	char myAMorPM;

};

