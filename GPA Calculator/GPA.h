/*--GPA.h------------------------------------------------------
    This header file defines the data type GPA for calculating
    the GPA of a student.

    @author Lucas Hebmuller
    @date 6/18/2024
 ------------------------------------------------------------*/

#ifndef GPA_H
#define GPA_H

#include <vector>
#include <string>
#include <iomanip>
using namespace std;

const int SPACE = 2;

class GPA
{
    public:
        GPA(); // Constructor

        void menu(); // Menu to select an option
        void enterGrade(); // Enter the name, grade and credits for a course
        void addTerm(); // Go to next semester

        void calculateTermGPA();
        void calculateCumulativeGPA();

        void displayTermGPA(); // Display the GPA of a particular term
        void displayCumulativeGPA(); // Display overall GPA

        void quit(); // Quit program

    private:
        vector<string> myCourses; // Stores the courses' names
        vector<double> myTermGPA; // Stores the GPA value of a particular term
        vector<double> myTermCredits; // Stores the amount of credits for each term
        vector<double> myTermPoints; // Stores the points received from each grade
        double myGPA; // Stores the GPA value
        int myTerm; // Keeps track of which term the student is at
};

#endif //GPA_H
