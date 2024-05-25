//
// Created by lucas on 2/20/2023.
//
//File: mystring2.cpp
// ================
// Implementation file for user-defined String class.


#include <cstring>
#include "mystring2.h"
#pragma warning(disable:4996)   // disable the unsafe warning message to use strcpy_s(), etc


String::String()
{
    contents[0] = '\0';
    len = 0;
}


String::String(const char s[])
{
    len = strlen(s);
    s = new ElementType[myCapacity];
    strcpy(contents, s);
}


void String::append(const String &str)
{
    strcat(contents, str.contents);
    len += str.len;
}


bool String::operator ==(const String &str) const
{
    return strcmp(contents, str.contents) == 0;
}


bool String::operator !=(const String &str) const
{
    return strcmp(contents, str.contents) != 0;
}


bool String::operator >(const String &str) const
{
    return strcmp(contents, str.contents) > 0;
}


bool String::operator <(const String &str) const
{
    return strcmp(contents, str.contents) < 0;
}


bool String::operator >=(const String &str) const
{
    return strcmp(contents, str.contents) >= 0;
}


String String::operator +=(const String &str)
{
    append(str);
    return *this;
}


void String::print(ostream &out) const
{
    out << contents;
}


int String::length() const
{
    return len;
}


char String::operator [](int i) const
{
    if (i < 0 || i >= len) {
        cerr << "can't access location " << i
             << " of string \"" << contents << "\"" << endl;
        return '\0';
    }
    return contents[i];
}


String::~String()  // LH
{
    delete [] myArrayPtr;
}



String::String(String & origString) // LH
{


    len = origString.len;
    myCapacity = origString.myCapacity;
    myArrayPtr = new ElementType[myCapacity];
    for ( int i = 0; i < len; i++ )
    {
        myArrayPtr[i] = origString.myArrayPtr[i];
    }
}



String & String::operator=(String & origString) // LH
{
    if ( this != & origString )
    {
        delete [] myArrayPtr;
        len = origString.len;
        myCapacity = origString.myCapacity;
        myArrayPtr = new ElementType[myCapacity];
        for ( int i = 0; i < len; i++ )
        {
            myArrayPtr[i] = origString.myArrayPtr[i];
        }
    }
    return *this;
}


ostream & operator<<(ostream &out, const String & s) // overload ostream operator"<<" - External!
{
    s.print(out);
    return out;
}


