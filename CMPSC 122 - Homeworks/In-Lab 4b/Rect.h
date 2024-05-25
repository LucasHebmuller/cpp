//
// Created by lucas on 1/31/2023.
//

#ifndef IN_LAB_4B_RECT_H
#define IN_LAB_4B_RECT_H

#include <iostream>
using namespace std;

class Rect
{
    private:
        int length;
        int width;

    public:
        Rect(int len, int wid);
        int GetArea();
        bool isItASquare();
        void display(ostream & out) const;
};

#endif //IN_LAB_4B_RECT_H
