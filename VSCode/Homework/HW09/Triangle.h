#pragma once
#include "Shape.h"
#include <cmath>

class Triangle : public Shape
{
    private:
    double sideA;
    double sideB;
    double sideC;

    public:
    Triangle(double a, double b, double c);
    ~Triangle();
    double calcPerimeter()override;
    double calcArea()override;
    void printPerimeter();
    void printArea();
};