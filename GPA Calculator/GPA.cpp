/*--GPA.h------------------------------------------------------
    Contains definitions of the function members of class GPA.
 -------------------------------------------------------------*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <limits>
using namespace std;

#include "GPA.h"

//--- Utility function to display a line
void line()
{
    cout << endl << "----------------------------------------------" << endl;
}

//--- Definition of constructor
GPA::GPA()
{
    myGPA = 0;
    myTerm = 0;
    myTermCredits.push_back(0);
    myTermPoints.push_back(0);
    myTermGPA.push_back(0);
}

//--- Definition of menu()
void GPA::menu()
{
    line();

    cout << "MENU:" << endl;
    cout << left << setw(SPACE) << "" << "[1] Enter your grade for a course." << endl;
    cout << left << setw(SPACE) << "" << "[2] Add a new term." << endl;
    cout << left << setw(SPACE) << "" << "[3] Display your cumulative GPA." << endl;
    cout << left << setw(SPACE) << "" << "[4] Display your GPA for a particular term." << endl;
    cout << left << setw(SPACE) << "" << "[5] Quit." << endl << endl;

    int option;
    do {
        cout << "Enter your option: ";
        cin >> option;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Deals with the getline problem

        if(option < 1 || option > 5)
            cout << "Invalid option. Enter a number between 1 and 5." << endl;
    } while (option < 1 || option > 5);

    line();

    switch (option) {
        case 1:
            enterGrade();
            break;
        case 2:
            addTerm();
            break;
        case 3:
            displayTermGPA();
            break;
        case 4:
            displayCumulativeGPA();
            break;
        case 5:
            quit();
            break;
        default:
            cerr << "*** Illegal command ***" << endl;
            menu();
            break;
    }
}

//--- Definition of enterGrade()
void GPA::enterGrade()
{
    cout << endl << "Your are currently in the " << myTerm + 1 << " term." << endl << endl;

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
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Deals with the getline problem


    myCourses.push_back(course); // Update later for a multidimensional vector
    myTermCredits[myTerm] += credits;
    if(grade == "A")
        myTermPoints[myTerm] += (4 * credits);
    else if(grade == "A-")
        myTermPoints[myTerm] += (3.7 * credits);
    else if(grade == "B+")
        myTermPoints[myTerm] += (3.3 * credits);
    else if(grade == "B")
        myTermPoints[myTerm] += (3 * credits);
    else if(grade == "B-")
        myTermPoints[myTerm] += (2.7 * credits);
    else if(grade == "C+")
        myTermPoints[myTerm] += (2.3 * credits);
    else if(grade == "C")
        myTermPoints[myTerm] += (2 * credits);
    else if(grade == "C-")
        myTermPoints[myTerm] += (1.7 * credits);
    else if(grade == "D+")
        myTermPoints[myTerm] += (1.3 * credits);
    else if(grade == "D")
        myTermPoints[myTerm] += (1 * credits);
    else if(grade == "D-")
        myTermPoints[myTerm] += (0.7 * credits);
    else if(grade == "F")
        myTermPoints[myTerm] += (0 * credits);
    else
        cout << "*** Illegal input ***" << endl;

    menu();
}

//--- Definition of addTerm()
void GPA::addTerm()
{
    // Updating data members
    myTerm++;
    myTermCredits.push_back(0);
    myTermPoints.push_back(0);
    myTermGPA.push_back(0);


    cout << "New term added." << endl;
    menu();
}

//--- Definition of calculateTermGPA()
void GPA::calculateTermGPA()
{
    myTermGPA[myTerm] = myTermPoints[myTerm] / myTermCredits[myTerm];
}

//--- Definition of displayTermGPA()
void GPA::displayTermGPA()
{
    cout << "Your cumulative GPA is: " << myGPA << endl;
    menu();
}

//--- Definition of displayCumulativeGPA()
void GPA::displayCumulativeGPA()
{
    cout << " Your GPA for the " << myTerm + 1 << " term is " << myTermGPA[myTerm] << endl;
    menu();
}

//--- Definition of quit()
void GPA::quit()
{
    cout << "End of program..." << endl;
}





