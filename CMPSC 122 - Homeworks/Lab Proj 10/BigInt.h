//
// Created by Lucas Hebmuller on 3/21/2023.
//
// Modified from textbook Larry Nyhoff, ADTs, Data Structures, and Problem
// Solving with C++, 2nd ed., Prentice-Hall,
/*-- BigInt.h -------------------------------------------------------------
    This header file defines the data type BigInt for processing
    nonnegative integers of any size.
    Basic operations are:
    Constructors
    +: Addition operator
    -: Subtraction operator
    <: Less-than operator
    ==: Equal-to operator
    read(): Read a BigInt object
    display(): Display a BigInt object
    <<, >> : Input and output operators
-------------------------------------------------------------------------*/


#include <iostream>
#include <iomanip> // setfill(), setw()
#include <list>
#include <cmath> // pow
using namespace std;


#ifndef BIGINT
#define BIGINT


const int DIGITS_PER_BLOCK = 3;
const int MODULUS = (short int) pow(10.0, DIGITS_PER_BLOCK);


class BigInt
{
    public:
    /*-----------------------------------------------------------------------
    Default Constructor
    Precondition: None
    Postcondition: list<short int>'s constructor was used to build
    this BigInt object. Default value = 0, sign = '+'.
    -----------------------------------------------------------------------*/
    BigInt();

    /*-----------------------------------------------------------------------
    Construct BigInt equivalent of n.
    Precondition: None.
    Post-condition: This BigInt is the equivalent of integer n.
    -----------------------------------------------------------------------*/
    BigInt(int n);

    // Let the list<short int> constructor take care of this.
    /*-----------------------------------------------------------------------
    Read a BigInt.
    Precondition: istream in is open and contains blocks of integers having
    at most DIGITS_PER_BLOCK digits per block.
    Post-condition: Blocks have been removed from in and added to myList.
    The sign = '-' if first block is negative, all blocks will store as
    positive number.
    -----------------------------------------------------------------------*/
    void read(istream & in);

    /*-----------------------------------------------------------------------
    Display a BigInt.
    Precondition: ostream out is open.
    Postcondition: The large integer represented by this BigInt object
    has been formatted with the usual comma separators and inserted
    into ostream out. A negative sign will appear if sign = '-'
    ------------------------------------------------------------------------*/
    void display(ostream & out) const;

    /*------------------------------------------------------------------------
    Add two BigInts.
    Precondition: int2 is the second addend.
    Postcondition: The BigInt representing the sum of the large integer
    represented by this BigInt object and addend2 is returned.
    ------------------------------------------------------------------------*/
    BigInt operator+(BigInt int2);

    /*-----------------------------------------------------------------
    Compare two BigInts with <.
    Precondition: int2 is the second operand.
    Postcondition: true if this BigInt object is < int2.
    ------------------------------------------------------------------*/
    bool operator<(BigInt int2);

    /*-----------------------------------------------------------------
    Compare two BigInts with ==.
    Precondition: int2 is the second operand.
    Postcondition: true if this BigInt object is equal to int2.
    ------------------------------------------------------------------*/
    bool operator==(BigInt int2);

    /*-----------------------------------------------------------------
    Subtract two BigInts.
    Precondition: int2 is the second operand.
    Postcondition: The BigInt representing the difference of the large
    integer represented by this BigInt object and int2 is returned.
    ------------------------------------------------------------------*/
    BigInt operator-(BigInt int2);

    private:
        list<short int> myList;
        char sign; // '+' => positive, '-' => negative. '?' => undefined
    }; // end of BigInt class declaration


    //------ Input and output operators
    inline istream & operator>>(istream & in, BigInt & number)
    {
        number.read(in);
        return in;
    }

    inline ostream & operator<<(ostream & out, const BigInt & number)
    {
        number.display(out);
        return out;
    }


// Note: To understand what is an inline function, read the following article
// https://www.cplusplus.com/articles/2LywvCM9/


#endif


/*
 * EXECUTION SAMPLE:
Test for default constructor:
zeroBigInt = 0

Test combination of BigInt's arithmetics:
        874,632,288
+        49,833,212
-------------------
        924,465,500
===================

        874,632,288
-        49,833,212
-------------------
        825,211,076
===================

         49,833,212
-       874,632,288
-------------------
        835,201,086
===================

            683,993
+        -4,383,773
-------------------
         14,300,220
===================

            683,993
-        -4,383,773
-------------------
          5,067,766
===================

         -4,383,773
-           683,993
-------------------
          5,067,766
===================

       -973,683,993
+       -43,768,489
-------------------
     -1,017,452,482
===================

       -973,683,993
-       -43,768,489
-------------------
        940,085,514
===================

        -43,768,489
-      -973,683,993
-------------------
        930,095,504
===================

Test for manual input for BigInt:
Enter a big integer:
Enter 3-digit blocks, separated by spaces.
Enter a negative integer less than -999 (e.g. -9999) in last block to signal the end of input.
268 947 561 -9999
number1 = 268,947,561
Enter another big integer:
100 100 100 -9999
number2 = 100,100,100
The sum of 268,947,561 + 100,100,100 = 369,047,661

The bigger number of 268,947,561 and 100,100,100 is 268,947,561

The subtraction of 268,947,561 - 100,100,100 = 168,847,461

Add more integers (Y or N)?n


Test and display a very large BigInt number (number will wrap after 20 blocks):
181,446,744,073,709,551,615,847,393,398,391,003,455,000,777,202,111,099,182,892,
012,299,393,827,000,000,000,237,393,123,393
*/