#include "CardDeck.h"

CardDeck::CardDeck()
{
    int i = 0;

    for (suits suitType = CLUBS; suitType <= SPADES; static_cast<suits>(suitType + 1))
    {
        for (ranks rankType = TWO; rankType <= ACE; static_cast<ranks>(rankType + 1))
        {
            deck[i].suitType = suitType;
            deck[i].rankType = rankType;
            i++;
        }
    }
}

CardDeck::~CardDeck() {}

void CardDeck::printCards()
{
    int i = 0;

    for (suits suitType = CLUBS; suitType <= SPADES; static_cast<suits>(suitType + 1))
    {
        for (ranks rankType = TWO; rankType <= ACE; static_cast<ranks>(rankType + 1))
        {
            cout << deck[i].rankType << " of " << deck[i].suitType;
            i++;
        }
    }
}