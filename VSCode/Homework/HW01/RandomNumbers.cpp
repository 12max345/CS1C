#include "RandomNumbers.h"

RandomNumbers::RandomNumbers()
{
    randNumber = 100 + (rand() % 900);
}

RandomNumbers::~RandomNumbers(){};

int RandomNumbers::getRandNum()
{
    return randNumber;
}

int RandomNumbers::digitsSum()
{
    int sum = 0;

    while (randNumber != 0)
    {
        sum = sum + randNumber % 10;
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
    int revNumber = 0;

    while (randNumber != 0)
    {
        remainder = randNumber % 10;
        revNumber = revNumber * 10 + remainder;
        randNumber /= 10;
    }

    return revNumber;
}

void RandomNumbers::randomize()
{
    randNumber = 100 + (rand() % 900);
}

void RandomNumbers::writeFile(fstream& f, int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        f << arr[i] << "\n";
    }
}

void RandomNumbers::readFile(fstream& f, int arr[])
{
  f.seekg(0); // start cursor at file beginning
  
  for (int i = 0; i < 10; i++)
  {
      f >> arr[i];
  }
}

void RandomNumbers::printFile(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}