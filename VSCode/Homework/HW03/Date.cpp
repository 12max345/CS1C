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

void Date::printFormatDate()const
{
    cout << month << "/" << day << "/" << year;
}
