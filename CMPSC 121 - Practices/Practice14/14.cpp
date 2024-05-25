#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
    const int WIDTH = 20;
    char answer, sex;
    int age;
    string name;

    cout << "======================" << endl;
    cout << "REGISTRATION OF PEOPLE" << endl;
    cout << "======================" << endl;


    do
    {
     cout << "<<< New people registration >>>" << endl;
     cout << "Name:";
     getline(cin,name);
     cout << "Age:";
     cin >> age;
     cout << "Sex (M or F):";
     cin >> sex;
     cout << "--------------------------" << endl;

     cout << "<<< Confirmation >>>" << endl;
     cout << "Name:" << right << setw(WIDTH) << name << endl;
     cout << "Sex:" << right << setw(WIDTH) << sex << endl;
     cout << "Age:" << right << setw(WIDTH) << age << endl;
     cout << "--------------------------" << endl;

     cout << "Do you want to register another person? ( Y or N) ";
     cin >> answer;

     cout << "==========================" << endl;
     cin.ignore();

    } while ( answer == 'Y');


    return 0;
}
