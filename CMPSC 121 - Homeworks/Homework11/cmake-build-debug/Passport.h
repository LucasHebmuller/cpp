/**
 * Passport.h:
 * Class to represent a Passport in C++
 *
 * @author Lucas Hebmuller
 */

#ifndef HOMEWORK11_PASSPORT_H
#define HOMEWORK11_PASSPORT_H

#include <string>
using namespace std;


class Passport
{
    private:
        string firstName;
        string lastName;
        int number;
        string nationality;
        string date;
    public:
        Passport( string firstName, string lastName, int number, string nationality, string date);
        string getFirstName() const;
        string getLastName() const;
        int getNumber() const;
        string getNationality() const;
        string getDate() const;
};


#endif //HOMEWORK11_PASSPORT_H
