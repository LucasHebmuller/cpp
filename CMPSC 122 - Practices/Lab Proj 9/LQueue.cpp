//
// Created by Lucas Hebmuller on 3/14/2023.
//
// File: LQueue.cpp
// ================
// Implementation file for Queue class using Linked List


#include <iostream>
#include "LQueue.h"
using namespace std;


//--- Definition of Queue constructor
Queue::Queue()
{
    myFront = myBack = nullptr;
}


//--- Definition of Queue explicit constructor
//--- Refer to LabProj7.cpp might be helpful
Queue::Queue(QueueElement array[], int array_size)
{
    myFront = myBack = nullptr;

    for ( int i = 0; i < array_size; i++ )
    {
        enqueue(array[i]);
    }
}


//--- Definition of Queue copy constructor
Queue::Queue(const Queue & original)
{
    myFront = myBack = nullptr;

    Node * cur = original.myFront;
    while ( cur != nullptr )
    {
        enqueue(cur->data);
        cur = cur->next;
    }
}


//--- Definition of Queue destructor
Queue::~Queue()
{
    Node * cur = myFront;

    while ( cur != nullptr )
    {
        Node * temp = cur;
        cur = cur->next;
        delete temp;
    }

    myFront = myBack = nullptr;
}


//--- Definition of assignment operator
const Queue & Queue::operator=(const Queue & original)
{
    if ( this != & original )
    {
        Node * cur = myFront;

        while ( cur != nullptr )
        {
            Node * temp = cur;
            cur = cur->next;
            delete temp;
        }

        myFront = myBack = nullptr;

        cur = original.myFront;
        while ( cur != nullptr )
        {
            enqueue(cur->data);
            cur = cur->next;
        }
    }
    return *this;
}


//--- Definition of empty()
bool Queue::empty() const
{
    return (myFront == nullptr && myBack == nullptr);
}


//--- Definition of enqueue()
void Queue::enqueue(const QueueElement & data)
{
    Node * prev = myBack;

    prev->next = new Node;
    prev->next->data = data;

    prev->next->next = nullptr;
    myBack++;
}


//--- Definition of dequeue()
void Queue::dequeue()
{
    if (empty())
        cerr <<"Error: Queue is empty! cannot remove from queue." << endl;
    else
    {
        // Add your code here
        Node * temp = myFront;
        myFront = myFront->next;
        delete temp;

        if (myFront == nullptr)
            myBack = nullptr;
    }
}


//--- Definition of front()
QueueElement Queue::front() const
{
    if (empty())
    {
        cerr << "Error: Queue is empty! nothing to retrieve." << endl;
        return GARBAGE_VALUE;
    }
    else
        return myFront->data;
}


void Queue::display(ostream & out) const
{
    for (Node * np = myFront; np != nullptr; np = np->next)
    {
        out << np->data << " ";
    }
    out << endl;
}

