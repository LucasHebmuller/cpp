//
// Created by lucas on 1/31/2023.
//

#include "Rect.h"
#include <iostream>
using namespace std;


Rect::Rect(int len, int wid)
{
   this -> length = len;
   this -> width = wid;
}


int Rect::GetArea()
{
    return length * width;
}


bool Rect::isItASquare()
{
    if ( length == width )
        return true;
    else
        return false;
}


void Rect::display(ostream &out) const
{
    out << "[" << length << " , " << width << "]" << endl;
}