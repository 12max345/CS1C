#include "Rectangle.h"

Rectangle::Rectangle(double l, double w) : length{l}, width{w} {}

Rectangle::~Rectangle() {};

double Rectangle::calcPerimeter() 
{
    return (length * 2) + (width * 2);
}

double Rectangle::calcArea()
{
    return (length * width);
}