/**
 * LabProj3.cpp:
 * The program should manipulate strings, by finding occurrences of a string inside another and by removing a string that is inside another.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
#include <cstring>
#include "LabProj3.h"
using namespace std;


void testFind(const char* s, const char* b);
void testRemove(char* str, const char* find);


int main()
{
    testFind("abbbfd", "abc");
    testFind("Begining", "in");
    testFind("MyComputer", "put");
    testFind("Download", "load");
    testFind("friendship", "friend");

    char test1[15] = "Begining";
    testRemove(test1, "gin");

    char test2[15] = "Computer";
    testRemove(test2, "put");

    char test3[15] = "Download";
    testRemove(test3, "load");


    return 0;
}


void testFind(const char* s, const char* b)
{
    int res = myFind(b, s);
    if (res <= 0) {
        cout << "String " << "\"" << s << "\"" << " does not appear in string "
             << "\"" << b << "\"" << endl;
    }
    else {
        cout << "String " << "\"" << s << "\"" << " found in string "
             << "\"" << b << "\"" << " at " << res << " locations" << endl;
    }
}

void testRemove(char* str, const char* find)
{
    cout << "The string before removing: " << str << endl;
    int res = myRemove(str, find);
    cout << "The string after removing: " << str << endl;
    if (res <= 0) {
        cout << "String " << "\"" << find << "\"" << " does not appear in string "
                << "\"" << str << "\"" << endl;
    }
    else {
        cout << "The removal happens at location " << res << endl;
    }
}


int myFind(const char * targetStr, const char * subStr)
{
    int times = 0;
    int lenSubStr = strlen(subStr);
    int lenTargetStr = strlen((targetStr));

    for ( int  i = 0; i < ( lenSubStr - lenTargetStr + 1 ); i++ )
    {
        bool found = true;

        for ( int j = 0; j < lenTargetStr; j++ )
        {
            if ( targetStr[j] != subStr[i + j] )
            {
                found = false;
                break;
            }
        }

        if ( found )
            times++;
    }

    return times;
}


int myRemove(char * targetStr, const char * strToRemove)
{
    int location, i = 0;
    int lenTargetStr = strlen(targetStr);
    int lenStrToRemove = strlen(strToRemove);

    while ( i < lenTargetStr )
    {
        if ( strstr( &targetStr[i], strToRemove) == &targetStr[i] )
        {
            location = i + 1;
            lenTargetStr  -= lenStrToRemove;

            for ( int j = i; j < lenTargetStr; j++)
            {
                targetStr[j] = targetStr[j + lenStrToRemove];
            }
        }
        else
        {
            i++;
        }
    }


    return location;
}


/*
 * EXECUTION SAMPLE:
 *
 * String "abbbfd" does not appear in string "abc"
 * String "Begining" found in string "in" at 2 locations
 * String "MyComputer" found in string "put" at 1 locations
 * String "Download" found in string "load" at 1 locations
 * String "friendship" found in string "friend" at 1 locations
 * The string before removing: Begining
 * The string after removing: Beinging
 * The removal happens at location 5
 * The string before removing: Computer
 * The string after removing: Comerter
 * The removal happens at location 4
 * The string before removing: Download
 * The string after removing: Download
 * The removal happens at location 5
 *
 * Process finished with exit code 0
 *
 *
 */
