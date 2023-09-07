/*********************************************************
 * AUTHOR : Aden Malikyar
 * Assignment #2: Deck of Cards
 * CLASS : CS1C
 * SECTION : TTH: 1:30p - 3:50p
 * Due Date : 8/31/23
 *********************************************************/

// g++ -g -o Source Source.cpp Card.cpp Card.h

#include "Card.h"

int main() {
  Card card;
  Card deck[52];
  int arrSize = 52;

  card.createDeck(deck);

  cout << "Here is the deck of cards:" << endl;
  card.printCards(deck);
  
  card.perfectShuffle(deck, 52);

  cout << "Here is the first perfect shuffle:" << endl;
  card.printCards(deck);

  // card.perfectShuffle(deck, 52);

  // cout << "Here is the second perfect shuffle:" << endl;
  // card.printCards(deck);

  // card.perfectShuffle(deck, 52);

  // cout << "Here is the third perfect shuffle:" << endl;
  // card.printCards(deck);

  return 0;
};