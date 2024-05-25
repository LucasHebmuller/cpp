#include <iostream>
#include <cstring>
using namespace std;


int main()
{
 char str1[] = "garden"; // strlen(str1)= 6

 if (strcmp(str1, "apple") == 0) // the address that points to where apple is located
    cout << "Equal" << endl;
 else
    cout << "Not equal" << endl;

 char str2[10] = "initvalue";
 strcpy(str2, "second"); // now the cstring contains the following: second\0ue\0
 cout << str2 << endl;


 return 0;
}