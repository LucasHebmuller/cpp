//
// Created by lqh5511 on 2/21/2023.
//

#ifndef IN_LAB7_LIST_H
#define IN_LAB7_LIST_H


#include <iostream>
using namespace std;


typedef int ElementType; // Now "ElementType" is "int"
                        //can change int to double,char,...

class List {
public:
    List(int maxSize = 1024);  //constructor
    //Big Three:
    ~List(); // Destructor
    List(const List& orig); // Copy Constructor
    List& operator= (const List& orig); // Assignment operator
    unsigned size() const;
    bool empty() const; //check if empty
    void insert(ElementType item, int pos); //insertion
    void erase(int pos); //deletion
    void display(ostream& out) const; //display every item
    ElementType get(unsigned pos) const;
    int getCapacity();

    // Overloading function for the input operator
    friend istream& operator>> (istream& inputStream, List& destList);

private:
    int mySize;       // current # of items in list
    int myCapacity;
    ElementType* myArrayPtr; //pointer to dynamic array
};
// Overloading function for the input operator
istream& operator>> (istream& inputStream, List& destList);


#endif //IN_LAB7_LIST_H

