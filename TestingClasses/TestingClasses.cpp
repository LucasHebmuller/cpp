// TestingClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "Circle.h"


int main()
{
	std::cout << std::fixed << std::setprecision(0);


	double tempRadius;

	do
	{
		std::cout << "Enter a value for the radius of the circle: ";
		std::cin >> tempRadius;

		if (tempRadius < 0)
			std::cout << "Please, enter a nonnegative value." << std::endl;

	} while (tempRadius < 0);

	Circle circle(tempRadius);

	std::cout << "The area of the circle with radius " << circle.getRadius() << " is " << circle.computeArea() << std::endl;


	return 0;
}