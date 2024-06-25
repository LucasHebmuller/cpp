#include <iostream>


int main()
{
	int a = 10;
	int b = 5;

	std::cout << "a = " << a << " and b = " << b << std::endl;

	a = a + b; // 10 + 5 = 15
	b = a - b; // 15 - 5 = 10
	a = a - b; // 15 - 10 = 5

	std::cout << "a = " << a << " and b = " << b << std::endl;


	return 0;
}