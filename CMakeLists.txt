cmake_minimum_required(VERSION 3.23)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(Clock)
include_directories("CMPSC 121 - Homeworks/Homework11")
include_directories("CMPSC 121 - Homeworks/Homework11/cmake-build-debug")
include_directories("CMPSC 121 - Homeworks/Homework13")
include_directories("CMPSC 121 - Homeworks/Lab11")
include_directories("CMPSC 121 - Practices/Practice45")
include_directories("CMPSC 121 - Practices/Practice47")
include_directories("CMPSC 121 - Practices/Practice54 - Account bank")
include_directories("CMPSC 121 - Practices/Practice55 - Circle")
include_directories("CMPSC 122 - Homeworks/In-Lab 4a")
include_directories("CMPSC 122 - Homeworks/In-Lab 4b")
include_directories("CMPSC 122 - Homeworks/In-Lab 5")
include_directories("CMPSC 122 - Homeworks/In-Lab 6")
include_directories("CMPSC 122 - Homeworks/In-Lab 7a")
include_directories("CMPSC 122 - Homeworks/Lab Proj 10")
include_directories("CMPSC 122 - Homeworks/Lab Proj 11")
include_directories("CMPSC 122 - Homeworks/Lab Proj 13")
include_directories("CMPSC 122 - Homeworks/Lab Proj 3")
include_directories("CMPSC 122 - Homeworks/Lab Proj 4")
include_directories("CMPSC 122 - Homeworks/Lab Proj 5")
include_directories("CMPSC 122 - Homeworks/Lab Proj 6")
include_directories("CMPSC 122 - Homeworks/Lab Proj 9")
include_directories("CMPSC 122 - Practices/Lab Proj 9")
include_directories("CMPSC 122 - Practices/Practice5")
include_directories(ComplexNumbers)
include_directories(FibonacciNim)
include_directories(Fraction)
include_directories(ManipulatingCStrings)
include_directories(TestingClasses)

add_executable(cpp
        AirplaneSeats/AirplaneSeats.cpp
        BinarySearchAlgorithm/BinarySearchAlgorithm.cpp
        "BinarySearchAlgorithm - Professor version/BinarySearchAlgorithm - Professor version.cpp"
        Clock/Clock.cpp
        Clock/Time.cpp
        Clock/Time.h
        "CMPSC 121 - Homeworks/Homework11/cmake-build-debug/Passport.h"
        "CMPSC 121 - Homeworks/Homework11/main.cpp"
        "CMPSC 121 - Homeworks/Homework11/Passport.cpp"
        "CMPSC 121 - Homeworks/Homework11/Passport.h.h"
        "CMPSC 121 - Homeworks/Homework12/weather.cpp"
        "CMPSC 121 - Homeworks/Homework13/Dice.cpp"
        "CMPSC 121 - Homeworks/Homework13/Dice.h"
        "CMPSC 121 - Homeworks/Homework13/main.cpp"
        "CMPSC 121 - Homeworks/Lab11/main.cpp"
        "CMPSC 121 - Homeworks/Lab11/Triangle.cpp"
        "CMPSC 121 - Homeworks/Lab11/Triangle.h"
        "CMPSC 121 - Homeworks/Lab12/coinflip.cpp"
        "CMPSC 121 - Homeworks/BalletBox.cpp"
        "CMPSC 121 - Homeworks/bankloan.cpp"
        "CMPSC 121 - Homeworks/CashRegister.cpp"
        "CMPSC 121 - Homeworks/change.cpp"
        "CMPSC 121 - Homeworks/converter.cpp"
        "CMPSC 121 - Homeworks/currency.cpp"
        "CMPSC 121 - Homeworks/expander.cpp"
        "CMPSC 121 - Homeworks/fib.cpp"
        "CMPSC 121 - Homeworks/mystring.cpp"
        "CMPSC 121 - Homeworks/output.cpp"
        "CMPSC 121 - Homeworks/palindrome.cpp"
        "CMPSC 121 - Homeworks/qSolver.cpp"
        "CMPSC 121 - Homeworks/rectangle.cpp"
        "CMPSC 121 - Homeworks/reverse 2.cpp"
        "CMPSC 121 - Homeworks/reverse-1.cpp"
        "CMPSC 121 - Homeworks/Reverse.cpp"
        "CMPSC 121 - Homeworks/RPS.cpp"
        "CMPSC 121 - Homeworks/scores.cpp"
        "CMPSC 121 - Homeworks/table.cpp"
        "CMPSC 121 - Homeworks/UniversalTicket.cpp"
        "CMPSC 121 - Homeworks/weather.cpp"
        "CMPSC 121 - Practices/Practice12/12.cpp"
        "CMPSC 121 - Practices/Practice13/13.cpp"
        "CMPSC 121 - Practices/Practice14/14.cpp"
        "CMPSC 121 - Practices/Practice15/15.cpp"
        "CMPSC 121 - Practices/Practice16/16.cpp"
        "CMPSC 121 - Practices/Practice17/17.cpp"
        "CMPSC 121 - Practices/Practice18/18.cpp"
        "CMPSC 121 - Practices/Practice19/19.cpp"
        "CMPSC 121 - Practices/Practice20/20.cpp"
        "CMPSC 121 - Practices/Practice21/21.cpp"
        "CMPSC 121 - Practices/Practice22/22.cpp"
        "CMPSC 121 - Practices/Practice23/23.cpp"
        "CMPSC 121 - Practices/Practice24/24.cpp"
        "CMPSC 121 - Practices/Practice25/25.cpp"
        "CMPSC 121 - Practices/Practice26/26.cpp"
        "CMPSC 121 - Practices/Practice27/27.cpp"
        "CMPSC 121 - Practices/Practice28/28.cpp"
        "CMPSC 121 - Practices/Practice29/29.cpp"
        "CMPSC 121 - Practices/Practice30/30.cpp"
        "CMPSC 121 - Practices/Practice31/31.cpp"
        "CMPSC 121 - Practices/Practice32/32.cpp"
        "CMPSC 121 - Practices/Practice33/33.cpp"
        "CMPSC 121 - Practices/Practice34/34.cpp"
        "CMPSC 121 - Practices/Practice35/35.cpp"
        "CMPSC 121 - Practices/Practice36/36.cpp"
        "CMPSC 121 - Practices/Practice37/37.cpp"
        "CMPSC 121 - Practices/Practice38/38.cpp"
        "CMPSC 121 - Practices/Practice39/39.cpp"
        "CMPSC 121 - Practices/Practice40/40.cpp"
        "CMPSC 121 - Practices/Practice41/41.cpp"
        "CMPSC 121 - Practices/Practice42/42.cpp"
        "CMPSC 121 - Practices/Practice42/Rectangle.h.cpp"
        "CMPSC 121 - Practices/Practice43/43.cpp"
        "CMPSC 121 - Practices/Practice44/44.cpp"
        "CMPSC 121 - Practices/Practice45/main.cpp"
        "CMPSC 121 - Practices/Practice45/Triangle.cpp"
        "CMPSC 121 - Practices/Practice45/Triangle.h"
        "CMPSC 121 - Practices/Practice46/main.cpp"
        "CMPSC 121 - Practices/Practice47/InventoryItem.h"
        "CMPSC 121 - Practices/Practice47/main.cpp"
        "CMPSC 121 - Practices/Practice48/main.cpp"
        "CMPSC 121 - Practices/Practice49/main.cpp"
        "CMPSC 121 - Practices/Practice50/main.cpp"
        "CMPSC 121 - Practices/Practice51/main.cpp"
        "CMPSC 121 - Practices/Practice52/main.cpp"
        "CMPSC 121 - Practices/Practice53/main.cpp"
        "CMPSC 121 - Practices/Practice54 - Account bank/Account.cpp"
        "CMPSC 121 - Practices/Practice54 - Account bank/Account.h"
        "CMPSC 121 - Practices/Practice54 - Account bank/main.cpp"
        "CMPSC 121 - Practices/Practice55 - Circle/Circle.cpp"
        "CMPSC 121 - Practices/Practice55 - Circle/Circle.h"
        "CMPSC 121 - Practices/Practice55 - Circle/main.cpp"
        "CMPSC 121 - Practices/Practice56/main.cpp"
        "CMPSC 121 - Practices/Practice57/main.cpp"
        "CMPSC 121 - Practices/Practice58/main.cpp"
        "CMPSC 121 - Practices/Practice59/main.cpp"
        "CMPSC 121 - Practices/Practice60/main.cpp"
        "CMPSC 122 - Homeworks/In-Lab 10/InLab10.cpp"
        "CMPSC 122 - Homeworks/In-Lab 11/InLab11.cpp"
        "CMPSC 122 - Homeworks/In-Lab 12/InLab12.cpp"
        "CMPSC 122 - Homeworks/In-Lab 3/InLab3.cpp"
        "CMPSC 122 - Homeworks/In-Lab 4a/Point.cpp"
        "CMPSC 122 - Homeworks/In-Lab 4a/Point.h"
        "CMPSC 122 - Homeworks/In-Lab 4b/main.cpp"
        "CMPSC 122 - Homeworks/In-Lab 4b/Rect.cpp"
        "CMPSC 122 - Homeworks/In-Lab 4b/Rect.h"
        "CMPSC 122 - Homeworks/In-Lab 5/main.cpp"
        "CMPSC 122 - Homeworks/In-Lab 5/Time.cpp"
        "CMPSC 122 - Homeworks/In-Lab 5/Time.h"
        "CMPSC 122 - Homeworks/In-Lab 6/List.cpp"
        "CMPSC 122 - Homeworks/In-Lab 6/List.h"
        "CMPSC 122 - Homeworks/In-Lab 6/main.cpp"
        "CMPSC 122 - Homeworks/In-Lab 7a/List.cpp"
        "CMPSC 122 - Homeworks/In-Lab 7a/List.h"
        "CMPSC 122 - Homeworks/In-Lab 7a/main.cpp"
        "CMPSC 122 - Homeworks/In-Lab 7b/Lab7ex2.cpp"
        "CMPSC 122 - Homeworks/In-Lab 9/llist-tem.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 1/LabProj1.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 10/BigInt.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 10/BigInt.h"
        "CMPSC 122 - Homeworks/Lab Proj 10/main.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 11/LabProj11.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 11/timer.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 11/timer.h"
        "CMPSC 122 - Homeworks/Lab Proj 12/LabProj12.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 13/LabProj13Driver.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 13/MaxSubList.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 13/MaxSubList.h"
        "CMPSC 122 - Homeworks/Lab Proj 13/timer.h"
        "CMPSC 122 - Homeworks/Lab Proj 2/LabProj2.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 3/LabProj3.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 3/LabProj3.h"
        "CMPSC 122 - Homeworks/Lab Proj 4/Frac.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 4/Frac.h"
        "CMPSC 122 - Homeworks/Lab Proj 4/LabProj4.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 5/Frac2.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 5/Frac2.h"
        "CMPSC 122 - Homeworks/Lab Proj 5/main.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 6/main.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 6/mystring2.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 6/mystring2.h"
        "CMPSC 122 - Homeworks/Lab Proj 7/LabProj7.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 8/LabProj8.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 9/LQueue.cpp"
        "CMPSC 122 - Homeworks/Lab Proj 9/LQueue.h"
        "CMPSC 122 - Homeworks/Lab Proj 9/main.cpp"
        "CMPSC 122 - Practices/Final prep/main.cpp"
        "CMPSC 122 - Practices/Lab Proj 9/LQueue.cpp"
        "CMPSC 122 - Practices/Lab Proj 9/LQueue.h"
        "CMPSC 122 - Practices/Lab Proj 9/main.cpp"
        "CMPSC 122 - Practices/Practice 6 - guessing game/main.cpp"
        "CMPSC 122 - Practices/Practice 7 - selling stocks/main.cpp"
        "CMPSC 122 - Practices/Practice 8 - manipulating c-strings/main.cpp"
        "CMPSC 122 - Practices/Practice 9/main.cpp"
        "CMPSC 122 - Practices/Practice1/1.cpp"
        "CMPSC 122 - Practices/Practice2/main.cpp"
        "CMPSC 122 - Practices/Practice3/main.cpp"
        "CMPSC 122 - Practices/Practice4/main.cpp"
        "CMPSC 122 - Practices/Practice5/main.cpp"
        "CMPSC 122 - Practices/Practice5/Time.cpp"
        "CMPSC 122 - Practices/Practice5/Time.h"
        ComplexNumbers/Complex.cpp
        ComplexNumbers/Complex.h
        ComplexNumbers/TestDriver.cpp
        CountingDollars/CountingDollars.cpp
        FibonacciNim/FibonacciNim.cpp
        FibonacciNim/FibonacciNim.h
        FibonacciNim/main.cpp
        Fraction/Frac.cpp
        Fraction/Frac.h
        Fraction/Fraction.cpp
        Gauchao/gauchao.cpp
        "Hamming Distance/hamming.cpp"
        "Is Triangle/is_triangle.cpp"
        "Leap Year/leap_year.cpp"
        Mailboxes/mailboxes.cpp
        ManipulatingCStrings/ManipulatingCStrings.cpp
        ManipulatingCStrings/resource.h
        MaximumProfit/MaximumProfit.cpp
        "Nth Prime/nth_prime.cpp"
        PalindromeNumber/PalindromeNumber.cpp
        "Reverse String/reverse_string.cpp"
        ReverseString/ReverseString.cpp
        SwapVariables/SwapVariables.cpp
        Test/test.cpp
        TestingAssert/assert.cpp
        TestingClasses/Circle.cpp
        TestingClasses/Circle.h
        TestingClasses/TestingClasses.cpp
        "Two Sum/Two Sum.cpp")
