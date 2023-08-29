#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class RandomNumbers
{
    private:
    int randNumber;

    public:
    RandomNumbers();
    ~RandomNumbers();
    int digitsSum();
    int numTriple();
    int digitsReverse();
};