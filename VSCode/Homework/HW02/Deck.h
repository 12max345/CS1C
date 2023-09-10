#pragma once
#include <iostream>
#include <string>
#include <queue>

using namespace std;

// enum of card suits
enum suits
{
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES
};

// enum of card ranks
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

// creates a struct of cards including enums alongside a printCard() function
struct Card
{

    suits suitType;
    ranks rankType;

    void printCard();
};

// creates deck class with a card array and several functions to perform on the deck
class Deck
{
private:
    Card deck[52];

public:
    Deck();
    ~Deck();
    void initializeDeck();
    void printDeck();
    void perfectShuffle();
    bool isSameCard(Deck d1, Deck d2);
    void shufflesRequired(Deck copy);
};