#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


struct EmployeePay
{
    string name;
    int ID;
    double payRate;
    double hours;
    double grossPay;
};


int main()
{
    const int SPACE = 25;
    cout << fixed << setprecision(2);

    EmployeePay employee1 = {"Betty Ross", 141, 18.75, 8 };
    EmployeePay employee2 = {"Jill Sandburg", 142, 17.5, 7};

    cout << left << setw(SPACE) << "Name: " << employee1.name << endl;
    cout << left << setw(SPACE) << "ID: " << employee1.ID << endl;
    cout << left << setw(SPACE) << "Pay Rate: " << employee1.payRate << endl;
    cout << left << setw(SPACE) << "Hours worked per day: " << employee1.hours << endl;
    employee1.grossPay = employee1.hours * employee1.payRate;
    cout << left << setw(SPACE) << "Gross Pay per day: " << employee1.grossPay << endl << endl;

    cout << left << setw(SPACE) << "Name: " << employee2.name << endl;
    cout << left << setw(SPACE) << "ID: " << employee2.ID << endl;
    cout << left << setw(SPACE) << "Pay Rate: " << employee2.payRate << endl;
    cout << left << setw(SPACE) << "Hours worked per day: " << employee2.hours << endl;
    employee2.grossPay = employee2.hours * employee2.payRate;
    cout << left << setw(SPACE) << "Gross Pay per day: " << employee2.grossPay << endl << endl;


    return 0;
}