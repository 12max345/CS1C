// hw09.cpp
// to illustrate Virtual Functions & Abstract Classes

/*************************************************************************
 * AUTHOR     : Aden Malikyar
 * HW09       : Virtual Functions & Abstract Classes
 * CLASS      : CS 1C
 * SECTION    : 10/19/2023
 *************************************************************************/

// g++ -g -o hw09 hw09.cpp Shape.h Shape.cpp Triangle.h Triangle.cpp Rectangle.h Rectangle.cpp

#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Rectangle rec(10, 20);
    Triangle tri(10, 10, 10);


    
    return 0;
}