#include <iostream>
#include <string>
#include <iomanip>
using  namespace std;


struct Date
{
    int month;
    int day;
    int year;
};

struct Place
{
    string address;
    string city;
    string state;
};

struct EmployeeInfo
{
    string name;
    int ID;
    Date birthDate;
    Place residence;
};


int main()
{
    const int SPACE = 15;
    EmployeeInfo manager;

    cout << "Enter the manager's name:";
    getline ( cin, manager.name );
    cout << "Enter the manager's ID:";
    cin >> manager.ID;
    cin.ignore();

    cout << endl;

    cout << "Now enter the manager's birth date" << endl;
    cout << "Month:";
    cin >> manager.birthDate.month;
    cout << "Day:";
    cin >> manager.birthDate.day;
    cout << "Year:";
    cin >> manager.birthDate.year;

    cout << endl;

    cout << "Now enter the manager's residence" << endl;
    cout << "Address:";
    getline( cin, manager.residence.address );
    cin.ignore();
    cout << "City:";
    getline( cin, manager.residence.city );
    cin.ignore();
    cout << "State:";
    getline( cin, manager.residence.state);
    cin.ignore();

    cout << endl;

    cout << "Here is the manager's information:" << endl;
    cout << left << setw(SPACE) << "Name:" << manager.name << endl;
    cout << left << setw(SPACE) << "ID:" << manager.ID << endl;
    cout << left << setw(SPACE) << "Residence:" << manager.residence.address << "  "  << manager.residence.city << "  " << manager.residence.state << endl;
    cout << left << setw(SPACE) << "Birth:" << manager.birthDate.month << "  " << manager.birthDate.day << "  " << manager.birthDate.year << endl;


    return 0;
}