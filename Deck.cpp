#include "Deck.h"

Deck::Deck() {                      // default constructor

    arraySize = 52;
    cardsLeft = 0;
    cards = new Card[arraySize];
}

Deck::Deck(const Deck& firstDeck) {         // copy constructor

    cards = firstDeck.cards;
}

Deck::~Deck() {                         // deconstructor

    delete [] cards;
}

Deck& Deck::operator= (const Deck& copy) {              // copy assignment operator

    if (this != &copy) {
        cards = copy.cards;
    }

    return *this;
}

Card Deck::Deal() {         // deals card to player or computer

    cardsLeft--;

    return cards[cardsLeft];
}

bool Deck::Add(Card* newCard) {         // adds a card to the deck

    if (cardsLeft == arraySize) {
        return false;
    }

    else {
        cards[cardsLeft] = *newCard;
        cardsLeft++;
        return true;
    }
}

bool Deck::Empty() {        //checks to see if the deck is empty

    return cardsLeft <= 0;

}

void Deck::Shuffle() {          //randomizes the order of the cards in the deck

    string print;

    for (int i = 0; i < cardsLeft * cardsLeft; i++) {
        int x = (rand()% 52);
        int y = (rand()% 52);
        Card temp = cards[x];
        cards[x] = cards[y];
        cards[y] = temp;
    }

}