#include "Card.h"

class Deck
{
    public:

    Deck();
    ~Deck();

    // need to write operators
    
    void shuffle();
    const Card& next();

    private:
    Card* deck;
};