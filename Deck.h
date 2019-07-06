#include "Card.h"
#include <vector>
#include <random>
#include <fstream>

class Deck
{
    public:

    Deck();

    // need to write operators

    void shuffle();
    const Card& next();
    const int& size();

    friend std::ostream& operator<<(std::ostream& out, Deck& d)
    {
        for (Card c : d.deck)
        {
            out << "(" << static_cast<int>(c.suit) << ", " << c.val << ")" << std::endl;
        }
        return out;
    }

    private:
    std::vector<Card> deck;

    void swap(int i, int j);
    
};