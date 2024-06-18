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
using namespace std;

class GPA
{
    public:
        GPA(); // Constructor
        double getCredits();
        void menu(); // Menu to select an option
        void enterGrade(); // Enter the name, grade and credits for a course.
        void addTerm(); // Go to next semester
        void displayTermGPA(); // Display the GPA of a particular term
        void displayCumulativeGPA(); // Display overall GPA

    private:
        vector<string> myCourses; // Stores the courses' names
        vector<double> myTermGPA; // Stores the GPA value of a particular term
        double myGPA; // Stores the GPA value
        int myTerm; // Keeps track of which term the student is at
        double myCredits; // Stores the amount of credits the student has taken
};

#endif //GPA_H
