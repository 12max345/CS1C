#pragma once
#include <iostream>
#include <string>

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

class Card
{
private:
    suits suitType;
    ranks rankType;

public:
    Card();
    ~Card();
    suits getSuitType();
    ranks getRankType();
    void printCard(Card c);
};

class Deck
{
private:
    Card deck[52];

public:
    Deck();
    ~Deck();
    void initializeDeck();
    void printCards();
    void perfectShuffle(Card arr[], int arrSize);
};