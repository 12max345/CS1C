#include "Triangle.h"

Triangle::Triangle(double a, double b, double c) : sideA{a}, sideB{b}, sideC{c} {}

Triangle::~Triangle() {};

double Triangle::calcPerimeter() 
{
    return sideA + sideB + sideC;
}

double Triangle::calcArea()
{
    double side = (sideA + sideB + sideC) / 2;
    double area = sqrt(side * (side - sideA) * (side - sideB) * (side - sideC));
    return area;
}

void Triangle::printPerimeter()
{

}

void Triangle::printArea()
{
    
}