/*********************************************************
 * AUTHOR : Aden Malikyar
 * Assignment #2: Deck of Cards
 * CLASS : CS1C
 * SECTION : TTH: 1:30p - 3:50p
 * Due Date : 8/31/23
 *********************************************************/

// g++ -g -o Source Source.cpp Deck.cpp Deck.h

#include "Deck.h"
// main function
int main()
{
  // creates 2 objects of Deck
  Deck originalDeck;
  Deck deck;

  // prints out the entire deck in order
  cout << "Original Deck:\n";
  deck.printDeck();

  // does a perfect shuffle of the deck and then displays it alongside remaining shuffles
  cout << "First Perfect Shuffle:\n";
  deck.perfectShuffle();
  deck.printDeck();
  deck.shufflesRequired(originalDeck);

  // shuffles the deck until it is back to the original
  for(int i = 0; i < 7; i++)
  {
    deck.perfectShuffle();
  }

  // prints out the final deck which should match the original
  cout << "Final Deck:\n";
  deck.printDeck();

  return 0;
};