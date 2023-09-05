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

ostream& operator<<(std::ostream& os, const suits suitType)
{
  switch(suitType)
  {
    case suits::CLUBS:
      os << "Clubs";
    break;
    case suits::DIAMONDS:
      os << "Clubs";
    break;case suits::HEARTS:
      os << "Clubs";
    break;case suits::SPADES:
      os << "Clubs";
    break;
  }
  return os;
}

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
};

class CardDeck
{
private:
    Card deck[52];

public:
    CardDeck();
    ~CardDeck();
    void printCards();
};

//     string convertCardToString()
//     {
//         switch (suitType)
//         {
//         case CLUBS:
//             "Clubs";
//             break;
//         case DIAMONDS:
//             "Diamonds";
//             break;
//         case HEARTS:
//             "Hearts";
//             break;
//         case SPADES:
//             "Spades";
//             break;
//         }

//         switch (rankType)
//         {
//         case TWO:
//             "2";
//             break;
//         case THREE:
//             "3";
//             break;
//         case FOUR:
//             "4";
//             break;
//         case FIVE:
//             "5";
//             break;
//         case SIX:
//             "6";
//             break;
//         case SEVEN:
//             "7";
//             break;
//         case EIGHT:
//             "8";
//             break;
//         case NINE:
//             "9";
//             break;
//         case TEN:
//             "10";
//             break;
//         case JACK:
//             "Jack";
//             break;
//         case QUEEN:
//             "Queen";
//             break;
//         case KING:
//             "King";
//             break;
//         case ACE:
//             "Ace";
//             break;
//         }
//     }