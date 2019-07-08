#include "Blackjack.h"

Blackjack::Blackjack()
{

}

void Blackjack::dealTo(Player& p)
{
    p.hand.at(0) = deck.next();
    p.hand.at(1) = deck.next();
}

void Blackjack::showHand(const Player& p, PlayerType type) const
{
    if (type == PlayerType::House)
    {

    }
    else (type == PlayerType::Human)
    {
        
    }
}