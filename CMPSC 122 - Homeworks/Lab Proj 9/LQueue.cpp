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

}


//--- Definition of Queue copy constructor
Queue::Queue(const Queue & original)
{
    myFront = myBack = nullptr;
    if ( !original.empty() )
    {
        myFront = myBack = new Node(original.front());

        QueueElement origPtr = original.myFront->next;
        while ( origPtr != 0 )
        {
            myBack->next = new Queue::Node( origPtr->data);
            myBack = myBack->next;
            origPtr = origPtr->next;
        }

    }
}


//--- Definition of Queue destructor
Queue::~Queue()
{
    QueueElement prev = myFront, ptr;

    while ( prev != nullptr )
    {
        ptr = prev->next;
        delete prev;
        prev = ptr;
    }
}


//--- Definition of assignment operator
const Queue & Queue::operator=(const Queue & original)
{
    if ( this != & original )
    {
       this->~Queue();

       if (original.empty())
           myFront = myBack = nullptr;

       else
       {
           myFront = myBack = new Queue::Node(original.front());

           Queue:QueueElement origPtr = original.myFront->next;
           while ( origPtr != 0 )
           {
               myBack->next = new Queue::Node(origPtr->data);
               myBack = myBack->next;
               origPtr = origPtr->next;
           }
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
    QueueElement newPtr = new Queue::Node(data);
    if (empty())
        myFront = myBack = newPtr;
    else
    {
        myBack->next = newPtr;
        myBack = newPtr;
    }
}


//--- Definition of dequeue()
void Queue::dequeue()
{
    if (empty())
        cerr <<"Error: Queue is empty! cannot remove from queue." << endl;
    else
    {
        QueueElement ptr = myFront;
        myFront = myFront->next;
        delete ptr;
        if ( myFront == 0 )
            myBack = 0;
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


