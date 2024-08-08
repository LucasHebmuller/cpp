/* HourlyEmployee.h -------------------------------------------------------------------
   Header file for a class HourlyEmployee derived from Employee that adds the
   attributes unique to hourly employees.
   Operations are: A constructor and an output operation.
 */

#include "Employee.h"

#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

class HourlyEmployee : Employee
{
public:
    HourlyEmployee(long id = 0, string last = "", string first = "",
                   char initial = ' ', int dept = 0, double weeklyWage = 0,
                   double hoursWorked = 0, double overTimeFactor = 1.5);
    void display(ostream & out) const;

private:
    double myWeeklyWage,
           myHoursWorked,
           myOverTimeFactor;
};

inline HourlyEmployee::HourlyEmployee(long id, string last, string first,
                    char initial, int dept, double weeklyWage, double hoursWorked,
                    double overTimeFactor)
: Employee(id, last, first, initial, dept),
myWeeklyWage(weeklyWage), myHoursWorked(hoursWorked),
myOverTimeFactor(overTimeFactor)
{ }

inline void HourlyEmployee::display(ostream &out) const
{
    Employee::display(out);
    out << "$" << myWeeklyWage << endl
        << myHoursWorked << endl
        << myOverTimeFactor << endl;
}

#endif //HOURLYEMPLOYEE_H
