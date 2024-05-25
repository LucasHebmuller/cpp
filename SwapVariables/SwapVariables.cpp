#include <iostream>


int main()
{
	int a = 10;
	int b = 5;

	std::cout << "a = " << a << " and b = " << b << std::endl;

	a = a + b;
	b = a - b;
	a = a - b;

	std::cout << "a = " << a << " and b = " << b << std::endl;


	return 0;
}