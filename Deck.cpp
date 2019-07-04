#include "Deck.h"

Deck::Deck()
{
    this->deck = new Card[52];
}

Deck::~Deck()
{
    delete this->deck;
}

void Deck::shuffle()
{

}