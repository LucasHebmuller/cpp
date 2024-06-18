/*--GPA.h------------------------------------------------------
    Contains definitions of the function members of class GPA.
 -------------------------------------------------------------*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "GPA.h"

//--- Definition of constructor
GPA::GPA()
{
    myGPA = 0;
    myTerm = 0;
    myCredits = 0;
}

double GPA::getCredits()
{
    return myCredits;
}


//--- Definition of enterGrade()
void GPA::enterGrade()
{
    string course,
           grade;
    double credits;

    cout << "Enter the name of your course, the grade you got on this class,"
            " and the amount of credits for this class." << endl;
    cout << "Here is an example: CMPSC 221 | A- | 3" << endl;
    cout << "Course: ";
    getline(cin, course);
    cout << "Grade: ";
    getline(cin, grade);
    cout << "Credits: ";
    cin >> credits;

    myCourses.push_back(course);
    myCredits += myCredits + credits;
}



