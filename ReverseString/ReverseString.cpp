#include <iostream>
using namespace std;


double sum(double, double);


int main()
{
	double x = 2.5;
	double y = 0.3;
	double result = sum(x, y);
	cout << result;


	return 0;
}


double sum(double a, double b)
{
	return a + b;
}
