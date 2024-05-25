#include <iostream>
#include <cstring>
using namespace std;


int myFind(const char* targetStr, const char* subStr);
int myRemove(char* targetStr, const char* strToRemove);


// functions to test your program, DO NOT modify
void testFind(const char* b, const char* s)
{
	int res = myFind(b, s);
	if (res <= 0) {
		cout << "String " << "\"" << s << "\"" << " does not appear in string " << "\"" << b << "\"" << endl;
	}
	else {
		cout << "String " << "\"" << s << "\"" << " found in string " << "\"" << b << "\"" << " at " << res << " locations" << endl;
	}
}

// functions to test your program, DO NOT modify
void testRemove(char* str, const char* find)
{
	cout << "The string before removing: " << str << endl;
	int res = myRemove(str, find);
	cout << "The string before removing: " << str << endl;
	if (res <= 0) {
		cout << "String " << "\"" << find << "\"" << " does not appear in string " << "\"" << str << "\"" << endl;
	}
	else {
		cout << "The removal happens at location " << res << endl;
	}
}


int main()
{
	testFind("abbbfd", "abc");
	testFind("Begining", "in");
	testFind("MyComputer", "put");
	testFind("Download", "load");
	testFind("friendship", "friend");

	char test1[15] = "Begining";
	testRemove(test1, "gin");

	char test2[15] = "Computer";
	testRemove(test2, "put");

	char test3[15] = "Download";
	testRemove(test3, "load");


	return 0;
}


int myFind(const char* targetStr, const char* subStr)
{
	int occurances = 0;
	int lenTarget = strlen(targetStr);
	int lenSub = strlen(subStr);
	bool OK = false;

	for (int i = 0; i < lenTarget; i++)
	{
		if (targetStr[i] == subStr[0])
		{
			for (int j = 0; j < lenSub; j++, i++)
			{
				if (targetStr[i] == subStr[j])
					OK = true;
				else
					OK = false;
			}
		}
	}
	if (OK)
		occurances++;


	return occurances;
}


int myRemove(char* targetStr, const char* strToRemove)
{
	return 0;
}




