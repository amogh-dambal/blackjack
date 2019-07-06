#include "Card.h"
#include <vector>
#include <random>

class Deck
{
    public:

    Deck();

    // need to write operators

    void shuffle();
    const Card& next();
    const int& size();

    private:
    std::vector<Card> deck;

    void swap(int i, int j);
    
};