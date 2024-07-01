/*--Stack.h-------------------------------------------------------------------------------
    This header files defines a Stack data type.
    Basic operations:
        contructor
        empty
        push
        top
        pop
        display
    Class invariant:
        1. The stack elements (if any) are stored in positions 0, 1, ..., myTop of myArray
        2. -1 <= myTop < STACK_CAPACITY
 -----------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

#ifndef STACK_H
#define STACK_H

const int STACK_CAPACITY = 128;
typedef int StackElement;

class Stack
{
    public:
        Stack();
        bool empty() const;
        void push(const StackElement & value);
        void display(ostream & out) const;
        StackElement top() const;
        void pop();
    private:
        StackElement myArray[STACK_CAPACITY];
        int myTop;
};

#endif //STACK_H
