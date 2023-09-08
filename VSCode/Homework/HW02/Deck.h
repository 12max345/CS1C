#pragma once
#include <iostream>
#include <string>
#include <queue>

using namespace std;

enum suits
{
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES
};

enum ranks
{
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE
};

struct Card
{

    suits suitType;
    ranks rankType;

    void printCard();
};

class Deck
{
private:
    Card deck[52];

public:
    Deck();
    ~Deck();
    void initializeDeck();
    void printDeck();
    void perfectShuffle(int arrSize);
};