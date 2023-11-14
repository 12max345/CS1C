#pragma once
#include <iostream>

class Shape
{
    private:

    public:
    Shape();
    virtual ~Shape();
    virtual void calcPerimeter() = 0;
    virtual void calcArea() = 0;
};