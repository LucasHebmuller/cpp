/* SalariedEmployee.h -------------------------------------------------------
   Header file for a class SalariedEmployee derived from Employee that
   adds the attributes unique to a salaried employee.
   Operations are: A constructor and an output operation.
 */

#include "Employee.h"

#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

class SalariedEmployee : public Employee
{
public:
    SalariedEmployee(long id = 0, string last = "", string first = "",
        char initial = ' ', int dept = 0, double salary = 0);
    void display(ostream & out) const;
private:
    double mySalary;
};

inline SalariedEmployee::SalariedEmployee(long id, string last, string first,
    char initial, int dept, double salary)
{
    Employee(id, last, first, initial, dept);
    mySalary = salary;
}


#endif //SALARIEDEMPLOYEE_H
