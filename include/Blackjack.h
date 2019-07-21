#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "Deck.h"
#include "Player.h"

#include <iostream>

enum class Turn
{
    PreDeal, 
    PostPlayer
};

class Blackjack
{
public:
    Blackjack();

    void dealTo(Player& p);
    void showHand(
        const Player& p, 
        const PlayerType& type, 
        const Turn& turn = Turn::PreDeal) const;
    void updateScore(Player& p) const;
    
private:
    Deck deck;

};

#endif