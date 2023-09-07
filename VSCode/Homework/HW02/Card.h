#pragma once
#include <iostream>
#include <string>

using namespace std;

enum suits { CLUBS, DIAMONDS, HEARTS, SPADES };

enum ranks {
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

class Card {
private:
  suits suitType;
  ranks rankType;

public:
  Card();
  ~Card();
  void createDeck(Card deck[]);
  void printCards(Card deck[]);
  void perfectShuffle(Card deck[], int arrSize);
};