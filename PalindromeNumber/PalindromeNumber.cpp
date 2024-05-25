#include <iostream>
#include <string>


bool isPalindrome(int);


int main()
{
	int n;

	std::cout << "Enter an integer to check whether it is a palindrome: ";
	std::cin >> n;

	bool ans = isPalindrome(n);

	if (ans)
		std::cout << n << " is a palindrome." << std::endl;
	else
		std::cout << n << " is not a palindrome." << std::endl;
}


bool isPalindrome(int x)
{
	std::string str = std::to_string(x);
	int len = str.length();

	for (int i = 0; i < len; i++)
	{
		if (str[i] != str[len - i - 1])
		{
			return false;
		}
	}
	return true;
}