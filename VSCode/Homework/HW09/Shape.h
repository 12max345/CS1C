#pragma once
#include <iostream>

using namespace std;
class Shape
{
    private:

    public:
    Shape();
    ~Shape();
    virtual double calcPerimeter() = 0;
    virtual double calcArea() = 0;
};