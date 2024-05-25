#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    char name1[] = "Lucas", name2[] = "Pedro";

    cout << name1 << "     " << name2 << endl;

    strcpy(name1,name2);

    cout << name1 << "     " << name2;


    return 0;
}