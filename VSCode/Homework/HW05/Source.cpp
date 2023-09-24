/*********************************************************
 * AUTHOR : Aden Malikyar
 * Assignment #5: STL Vectors
 * CLASS : CS1C
 * SECTION : TTH: 1:30p - 3:50p
 * Due Date : 9/19/23
 *********************************************************/

// This program is designed to take a vector of 51 numbers and randomize it. After doing so, 6 random values will be picked and outputted for the user.

// g++ -g -o Source Source.cpp

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* METHOD
vector<int> Lotto(int cardSpotAmt, int cardSpotSelected)

This function is meant to fill an array with a selected amount of spots while resizing it down to how many spots are selected by the parameter.

Pre-Condition
    2 variables need to be passed for amount and selected

Post-Condition
    A vector will be returned with the resized amount

*/

vector<int> Lotto(int cardSpotAmt, int cardSpotSelected);

int main()
{
    // creates the vector winners and assigns it from the Lotto() function
    vector<int> winners;
    winners = Lotto(51, 6);

    // outputs the vector after it has been randomized
    cout << "51 choices and 6 random winners" << endl << endl;
    cout << "The winning numbers are: ";
    for (int i = 0; i < 6; i++)
    {
        cout << winners[i] << " ";
    }

    return 0;
};

vector<int> Lotto(int cardSpotAmt, int cardSpotSelected)
{
    vector<int> temp;
    for (int i = 1; i <= cardSpotAmt; i++)
    {
        temp.push_back(i);
    }

    shuffle(temp.begin(), temp.end(), time(0));

    temp.resize(cardSpotSelected);

    return temp;
}

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