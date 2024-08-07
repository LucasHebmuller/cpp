/* Employee.h ------------------------------------------------------------------------
   Header file for a class Employee that encapsulates the attributes common to all
   employees.
   Operations are: A constructor and an output operation.
 ------------------------------------------------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
public:
    Employee(long id = 0, string last = "", string first = "",
        char initial = ' ', int dept = 0);
    void display(ostream & out) const;

private:
    long myIdNum;
    string myLastName,
           myFirstName;
    char myMiddleInitial;
    int myDeptCode; // department code
};

inline Employee::Employee(long id, string last, string first,
    char initial, int dept)
{
    myIdNum = id;
    myLastName = last;
    myFirstName = first;
    myMiddleInitial = initial;
    myDeptCode = dept;
}

inline void Employee::display(ostream & out) const
{
    out << myIdNum << " " << myLastName << ", "
        << myFirstName << " " << myMiddleInitial << " "
        << myDeptCode << endl;
}

inline ostream & operator<<(ostream & out, const Employee & emp)
{
    emp.display(out);
    return out;
}

#endif //EMPLOYEE_H
