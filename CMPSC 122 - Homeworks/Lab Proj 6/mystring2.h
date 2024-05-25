//
// Created by lucas on 2/20/2023.
//

#ifndef LABPROJ6_MYSTRING2_H
#define LABPROJ6_MYSTRING2_H


#include <iostream>
#include <cstring>// for strlen(), etc.
using namespace std;
#define MAX_STR_LENGTH  200


typedef char ElementType; //LH


class String
{
public:
    ~String(); // LH
    String(String & origString); // LH
    String & operator=(String & origString); // LH
    String();
    String(const char s[]);  // a conversion constructor
    void append(const String &str);
    // Relational operators
    bool operator ==(const String &str) const;
    bool operator !=(const String &str) const;
    bool operator >(const String &str) const;
    bool operator <(const String &str) const;
    bool operator >=(const String &str) const;
    String operator +=(const String &str);
    void print(ostream &out) const;
    int length() const;
    char operator [](int i) const;  // subscript operator

private:
    char contents[MAX_STR_LENGTH+1];
    int len;
    int myCapacity; // LH
    ElementType * myArrayPtr; // LH
};


ostream & operator<<(ostream &out, const String & r); // overload ostream operator"<<" - External!


#endif //LABPROJ6_MYSTRING2_H
