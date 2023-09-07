#include "Card.h"

Card::Card() {}

Card::~Card() {}

void Card::createDeck(Card deck[]) {
  int i = 0;

  for (suits suitType = CLUBS; suitType <= SPADES;
       suitType = static_cast<suits>(suitType + 1)) {
    for (ranks rankType = TWO; rankType <= ACE;
         rankType = static_cast<ranks>(rankType + 1)) {
      deck[i].suitType = suitType;
      deck[i].rankType = rankType;
      i++;
    }
  }
}

void Card::printCards(Card deck[]) {
  for (int i = 0; i < 52; i++) {
    if (deck[i].rankType == TWO)
      cout << "Two ";
    else if (deck[i].rankType == THREE)
      cout << "Three ";
    else if (deck[i].rankType == FOUR)
      cout << "Four ";
    else if (deck[i].rankType == FIVE)
      cout << "Five ";
    else if (deck[i].rankType == SIX)
      cout << "Six ";
    else if (deck[i].rankType == SEVEN)
      cout << "Seven ";
    else if (deck[i].rankType == EIGHT)
      cout << "Eight ";
    else if (deck[i].rankType == NINE)
      cout << "Nine ";
    else if (deck[i].rankType == TEN)
      cout << "Ten ";
    else if (deck[i].rankType == JACK)
      cout << "Jack ";
    else if (deck[i].rankType == QUEEN)
      cout << "Queen ";
    else if (deck[i].rankType == KING)
      cout << "King ";
    else if (deck[i].rankType == ACE)
      cout << "Ace ";
    cout << "of ";
    if (deck[i].suitType == CLUBS)
      cout << "Clubs\n";
    else if (deck[i].suitType == DIAMONDS)
      cout << "Diamonds\n";
    else if (deck[i].suitType == HEARTS)
      cout << "Hearts\n";
    else if (deck[i].suitType == SPADES)
      cout << "Spades\n";
  }
  cout << endl;
}

void Card::perfectShuffle(Card deck[], int arrSize) {
  int halfDeck = arrSize / 2;
  for (int i = halfDeck; i < arrSize; i++) {
    for (int j = 0; j < halfDeck; j++) {
      deck[j] = deck[j + halfDeck];
      deck[i] = deck[i - halfDeck];
    }
  }
}