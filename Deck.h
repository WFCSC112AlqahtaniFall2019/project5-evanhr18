#ifndef BLINDMANSBLUFF_DECK_H
#define BLINDMANSBLUFF_DECK_H

#include "Card.h"

class Deck {
public:
    Deck();
    Deck(const Deck& firstDeck);
    ~Deck();
    Deck& operator= (const Deck& copy);
    Card Deal();
    bool Add(Card* newCard);
    bool Empty();
    void Shuffle();
private:
    Card* cards;
    int arraySize;
    int cardsLeft;
};


#endif //BLINDMANSBLUFF_DECK_H
