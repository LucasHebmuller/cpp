#include <iostream>
#include <string>

using namespace std;


int main()
{
    const int SIZE = 3;
    int age[SIZE];
    string name[SIZE];

    cout << "REGISTRATION OF PEOPLE" << endl;
    cout << "======================" << endl;

    for ( int i = 0; i < SIZE; i++)
    {
        cout << "Name:";
        cin >> name[i];

        cout << "Age:";
        cin >> age[i];

        cout << "------------------------" << endl;
    }

    cout << "======================" << endl;

    for ( int i = 0; i < SIZE; i++)
    {
        cout << name[i] << endl;
        cout << age[i] << endl;
        cout << "------------------------" << endl;
    }


    return 0;
}