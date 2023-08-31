#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

class RandomNumbers
{
private:
    int randNumber;

public:
    RandomNumbers();
    ~RandomNumbers();
    int getRandNum();
    int digitsSum();
    int numTriple();
    int digitsReverse();
    void randomize();
};