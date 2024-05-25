//
// Created by Lucas Hebmuller on 11/26/2022.
//

#include "Passport.h"

#include <string>
using namespace std;

Passport::Passport()
{
    firstName = lastName = nationality = date = "";
    number = 0;
}

string::Passport getFirstName() const
{
    return firstName;
}

string::Passport getLastName() const
{
    return lastName;
}

int::Passport getNumber() const
{
    return number;
}

string::Passport getNationality() const
{
    return nationality;
}

string::Passport getDate() const
{
    return date;
}