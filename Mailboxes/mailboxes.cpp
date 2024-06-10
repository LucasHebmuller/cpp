/*
    Problem 2, page 138, book: ADTs, Data Structures and Problem Solving
*/


#include <iostream>
using namespace std;


int main()
{
    const int MAILBOXES = 150;
    int mailbox[MAILBOXES] = {0};

    for(int jump = 2; jump < MAILBOXES; jump++)
    {
        for(int i = 1; i < MAILBOXES; i += jump)
        {
            if(mailbox[i] == 0)
                mailbox[i] = 1;
            else
                mailbox[i] = 0;
        }
    }

    for(int i = 0; i < MAILBOXES; i++)
    {
        if(mailbox[i] == 0)
            cout << i + 1 << " ";
    }


    return 0;
}