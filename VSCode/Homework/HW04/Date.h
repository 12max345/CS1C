#pragma once
#include <iostream>

using namespace std;

// Date class which includes ability to print a formatted date
class Date
{
private:
    int month;
    int day;
    int year;

public:
    Date();
    Date(int m, int d, int y);
    ~Date();

    /* METHOD
    friend istream &operator>>(istream &screen, Date &newDate);

    This method will represent an overloaded version of the >> operator which will allow it to be used in order to fill in a modified date.

    Pre-Condition
        A screen object is provided alongside the address of a newDate in order to maintain consistencey.

    Post-Condition
        Insertion of a newly provided value of date.


    */

    friend istream &operator>>(istream &screen, Date &newDate);

    /* METHOD
    void printFormatDate()const

    This method is meant to format the date and print it out to the screen.

    Pre-Condition
    A constructed Date object.

    Post-Condition
    Printed out date that is formatted.
    
    */

    void printFormatDate()const;
};