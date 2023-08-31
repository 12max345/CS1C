#include "RandomNumbers.h"

RandomNumbers::RandomNumbers()
{
    randNumber = 100 + (rand() % 901);
}

RandomNumbers::~RandomNumbers(){};

int RandomNumbers::getRandNum()
{
    return randNumber;
}

int RandomNumbers::digitsSum()
{
    int sum;
    int remainder;

    while (randNumber > 0)
    {
        remainder = randNumber % 10;
        sum = sum + remainder;
        randNumber = randNumber / 10;
    }

    return sum;
}

int RandomNumbers::numTriple()
{
    int temp;
    temp = randNumber * 3;
    return temp;
}

int RandomNumbers::digitsReverse()
{
    int remainder;
    int revNumber;

    while (randNumber > 0)
    {
        remainder = randNumber % 10;
        randNumber = randNumber / 10;
        revNumber = (revNumber * 10) + remainder;
    }

    return revNumber;
}

void RandomNumbers::randomize()
{
    randNumber = 100 + (rand() % 901);
}