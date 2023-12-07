#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
    private:
    double length;
    double width;

    public:
    Rectangle(double l, double w);
    ~Rectangle();
    double calcPerimeter()override;
    double calcArea()override;
    void printPerimeter();
    void printArea();
};