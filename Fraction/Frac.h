#pragma once


#include <iostream>
using namespace std;


class Fraction {					
public:
	Fraction(int = 0, int = 1);	// default constructor
	Fraction add(const Fraction&);
	Fraction subtract(const Fraction&);
	Fraction multiply(const Fraction&);
	Fraction divide(const Fraction&);
	void printFraction();
	void printFractionAsFloat();

private:
	int numerator;
	int denominator;
	void reduce();				
};

