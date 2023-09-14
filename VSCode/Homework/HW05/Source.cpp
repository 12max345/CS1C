/*********************************************************
 * AUTHOR : Aden Malikyar
 * Assignment #5: STL Vectors
 * CLASS : CS1C
 * SECTION : TTH: 1:30p - 3:50p
 * Due Date : 9/19/23
 *********************************************************/

// g++ -g -o Source Source.cpp Lottery.cpp Lottery.h

#include "Lottery.h"

int main()
{
    vector<int> winners;
    return 0;
};


/* 
1. What is the STL? What is a vector?

    STL is the Standard Template Library which has classes to help handle data structers. 
    A vector is a dynamic array which can resize itself and contains various functions to alter the data.


2. Which vector operations change the size of a vector after its construction?

    assign() push_back() pop_back() insert() erase() swap() clear() emplace() emplace_back()


3. What is the STL array container and how does it differ from the built-in array and from a vector?

    The STL array container is its own class instead of the built-in array. The array knows its own size its own size so
    it is not required to pass when creating it. While being more light and efficient, vector has more ways to maniplate the elements.


4. How does the vector member function resize() differ from reserve()?

    resize() will allow you to choose how large the vector is, while reserve() makes sure that the vector
    is large enough to fit the least amount of elements existing.


5. What should begin() and end() do for a container?

    Bring the iterator of the function to the beginning or the end of it.


6. Give an example of using the vector push_back() modifier.

    for (int i = 0; i < 10; i++)
        tempVec.push_back(i);

 */