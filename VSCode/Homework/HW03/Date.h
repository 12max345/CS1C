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
    void printFormatDate();
};