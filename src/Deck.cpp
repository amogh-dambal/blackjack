#include "../include/Deck.h"

Deck::Deck()
{
    int suit, val;
    for (int i = 0; i < 52; i++)
    {
        suit = i / 13;
        val = (i % 13) + 1;
        this->deck.push_back(
            Card(static_cast<Suit>(suit), static_cast<Value>(val))
        );
    }
    this->shuffle();
}

void Deck::shuffle()
{
    std::random_device dev;
    std::mt19937 RNG(dev());

    int j;
    for (int i = 0; i < 50; i++)
    {
        std::uniform_int_distribution<int> engine(i, 51);
        j = engine(RNG);
        swap(i, j);
    }
}

const Card Deck::next() 
{
    Card c = this->deck.back();
    this->deck.pop_back();
    return c;
}

const int Deck::size() const
{
    return this->deck.size();
}

void Deck::swap(int i, int j)
{
    Card t = this->deck.at(i);
    this->deck.at(i) = this->deck.at(j);
    this->deck.at(j) = t;
}