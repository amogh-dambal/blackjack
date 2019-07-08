#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "Deck.h"
#include "Player.h"

#include <iostream>

class Blackjack
{
public:
    Blackjack();

    void dealTo(Player& p);
    void showHand(const Player& p, PlayerType type) const;
    void checkScore(Player& p);
    
private:
    Deck deck;

};

#endif