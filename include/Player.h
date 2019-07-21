#ifndef PLAYER_H
#define PLAYER_H

#include <utility>
#include <vector>

#include "Card.h"

enum class PlayerType 
{
    Human,
    House
};

enum class Status
{
    Under,
    Win,
    Bust
};

class Player
{
    public:
    Player();

    const int score() const;

    Status status;
    PlayerType type;
    std::vector<Card> hand;
    
};

#endif