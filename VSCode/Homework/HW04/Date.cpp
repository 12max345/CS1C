#include "Date.h"

Date::Date()
{
    month = 0;
    day = 0;
    year = 0;
}

Date::Date(int m, int d, int y) : month{m}, day{d}, year{y}
{
}

Date::~Date() {}

istream &operator>>(istream &screen, Date &newDate)
{
    cout << "Month: ";
    screen >> newDate.month;
    cout << "Day: ";
    screen >> newDate.day;
    cout << "Year: ";
    screen >> newDate.year;
    return screen;
}

void Date::printFormatDate()const
{
    cout << month << "/" << day << "/" << year;
}
