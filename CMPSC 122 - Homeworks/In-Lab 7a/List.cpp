//
// Created by lqh5511 on 2/21/2023.
//


#include <iostream>
#include <cstdlib>
#include <cctype>
#include "List.h"
using namespace std;


void List::insert(ElementType item, int pos)
{
    if (mySize == myCapacity)  exit(1);
    if (pos < 0 || pos > mySize)  return;
    // shift array elements right to make room for item
    for (int i = mySize; i > pos; i--)
        myArrayPtr[i] = myArrayPtr[i - 1];
    // insert item at pos and increase list size
    myArrayPtr[pos] = item;
    mySize++;  // don't forget this!
}


void List::erase(int pos)
{
    if (pos < 0 || pos >= mySize)  return;
    // shift array elements left
    for (int i = pos; i < mySize - 1; i++)
        myArrayPtr[i] = myArrayPtr[i + 1];
    mySize--;  // don't forget this!
}


List::List(int maxSize) {
    mySize = 0;
    myCapacity = maxSize;
    myArrayPtr = new ElementType[maxSize];
}


List::~List() { delete[] myArrayPtr; }


List::List(const List& origList) {
    mySize = origList.mySize;
    myCapacity = origList.myCapacity;
    myArrayPtr = new ElementType[myCapacity];
    for (int i = 0; i < mySize; i++)
        myArrayPtr[i] = origList.myArrayPtr[i];
}


List& List::operator=(const List& origList)
{
    if (this != &origList)    // check for list = list
    {
        delete[] myArrayPtr;
        mySize = origList.mySize;
        myCapacity = origList.myCapacity;
        myArrayPtr = new ElementType[myCapacity];
        //--- Copy origList's array into this new array
        for (int i = 0; i < myCapacity; i++)
            myArrayPtr[i] = origList.myArrayPtr[i];
    }
    return *this;
}


bool List::empty() const {
    return (mySize == 0);
}


unsigned List::size() const {
    return mySize;
}


ElementType List::get(unsigned pos) const {
    if (pos >= mySize) {
        cerr << "Invalid Index." << endl;
        exit(1);
    }
    return myArrayPtr[pos];
}


void List::display(ostream& out) const {
    for (int i = 0; i < mySize; i++) {
        out << myArrayPtr[i] << " ";
    }
}


int List::getCapacity() {
    return myCapacity;
}


istream& operator>> (istream& inputStream, List& destList)
{
    destList.myCapacity = 1;
    destList.mySize = 1;
    int element;

    do
    {
        inputStream >> element;
        if ( isdigit(element) )
        {
            inputStream >> element;
            destList.mySize++;
            destList.myCapacity++;
        }
        else
            break;

    } while( true );

    return inputStream;
}


