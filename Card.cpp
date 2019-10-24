#include "Card.h"
#include "string"
#include "iostream"

Card::Card() {                      // default constructor

    number = 0;
    suit = 0;

}

Card::Card(int cardNum, int cardSuit) {         // alternate constructor

    number = cardNum;
    suit = cardSuit;

}

string Card::getValue() {               // returns value of card

    return ranks[number] + " of " + suits[suit];

}

bool Card::operator> (Card rhs) {       //operator overload for >

    if (number > rhs.number) {
        return true;
    }
    else if (number == rhs.number){
        return (suit > rhs.suit);
    }
    else {
        return false;
    }

}

bool Card::operator<(Card rhs) {            //operator overload for <

    if (number < rhs.number) {
        return true;
    }
    else if (number == rhs.number) {
        return (suit < rhs.suit);
    }
    else {
        return false;
    }

}
