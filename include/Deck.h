#include "Card.h"
#include <vector>
#include <random>
#include <fstream>
#include <iostream>

class Deck
{
    public:

    Deck();

    // need to write operators

    void shuffle();
    const Card next();
    const int size() const;

    friend std::ostream& operator<<(std::ostream& out, Deck& d)
    {
        for (const Card& c : d.deck)
        {
            out << c << std::endl;
        }
        return out;
    }

    private:
    std::vector<Card> deck;

    void swap(int i, int j);
    
};