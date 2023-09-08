#include "Deck.h"

void Card::printCard()
{
  for (int i = 0; i < 52; i++)
  {
    if (rankType == TWO)
      cout << "Two ";
    else if (rankType == THREE)
      cout << "Three ";
    else if (rankType == FOUR)
      cout << "Four ";
    else if (rankType == FIVE)
      cout << "Five ";
    else if (rankType == SIX)
      cout << "Six ";
    else if (rankType == SEVEN)
      cout << "Seven ";
    else if (rankType == EIGHT)
      cout << "Eight ";
    else if (rankType == NINE)
      cout << "Nine ";
    else if (rankType == TEN)
      cout << "Ten ";
    else if (rankType == JACK)
      cout << "Jack ";
    else if (rankType == QUEEN)
      cout << "Queen ";
    else if (rankType == KING)
      cout << "King ";
    else if (rankType == ACE)
      cout << "Ace ";
    cout << "of ";
    if (suitType == CLUBS)
      cout << "Clubs\n";
    else if (suitType == DIAMONDS)
      cout << "Diamonds\n";
    else if (suitType == HEARTS)
      cout << "Hearts\n";
    else if (suitType == SPADES)
      cout << "Spades\n";
  }
  cout << endl;
}

Deck::Deck()
{
  initializeDeck();
}

Deck::~Deck() {}

void Deck::initializeDeck()
{
  int i = 0;

  for (suits suitType = CLUBS; suitType <= SPADES;
       suitType = static_cast<suits>(suitType + 1))
  {
    for (ranks rankType = TWO; rankType <= ACE;
         rankType = static_cast<ranks>(rankType + 1))
    {
      deck[i].suitType = suitType;
      deck[i].rankType = rankType;
      i++;
    }
  }
}

void Deck::printDeck()
{
  for (int i = 0; i < 52; i++)
  {
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

void Deck::perfectShuffle(int arrSize)
{
  Card latterHalf[26];
  int half_index = 0;
  for(int i = arrSize / 2; i < arrSize; i++)
  {
    deck[i] = latterHalf[i];
  }
  queue<Card> q;
  q.push(deck[0]);
  for (int i = 0; i < arrSize; i++)
  {
    if(i % 2 == 0)
    {
      deck[i] = q.front();
      q.pop();
      q.push(deck[i+1]);
    }
    else
    {
      deck[i] = latterHalf[half_index];
      half_index++;
      q.push(deck[i+1]);
    }
  }
}