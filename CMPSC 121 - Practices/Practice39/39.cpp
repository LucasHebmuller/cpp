#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct Student
{
    string name;
    int ID;
    int creditHours;
    double gpa;
};


void getData(Student *);


int main()
{
    cout << fixed << setprecision(2);

    const int SPACE = 15;
    Student freshman;

    cout << "Enter the following student data:" << endl;
    getData(&freshman);
    cout << endl;

    cout << "Here is the data about the student:" << endl;
    cout << left << setw(SPACE) << "Name:" << freshman.name << endl;
    cout << left << setw(SPACE) << "ID:" << freshman.ID << endl;
    cout << left << setw(SPACE) << "Credit Hours:" << freshman.creditHours << endl;
    cout << left << setw(SPACE) << "GPA:" << freshman.gpa << endl;


    return 0;
}


void getData(Student *s)
{
    cout << "Student name:";
    getline(cin, s->name);

    cout << "Student ID:";
    cin >> s->ID;

    cout << "Student credit hours enrolled:";
    cin >> s->creditHours;

    cout << "Student GPA:";
    cin >> s->gpa;
}