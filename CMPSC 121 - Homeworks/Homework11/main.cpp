#include <iostream>
#include <string>
#include "Passport.h"

using namespace std;


int main()
{
    string temp1, temp2, temp4, temp5;
    int temp3;


    cout << "What is the person’s first name:";
    cin >> temp1;

    cout << "What is the person’s last name:";
    cin >> temp2;

    cout << "What is the passport number:";
    cin >> temp3;

    cout << "What is the person’s nationality:";
    cin >> temp4;

    cout << "What is the person’s birthdate:";
    cin >> temp5;

    Passport passport( temp1, temp2, temp3, temp4, temp5 );

    cout << passport.getNationality() << " Passport: " << passport.getNumber() << endl;
    cout << passport.getFirstName() << " " << passport.getLastName() << endl;
    cout << "Born " << passport.getDate() << endl;


    return 0;
}
