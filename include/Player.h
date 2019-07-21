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
    const PlayerType getType() const;

    std::vector<Card> hand;
    Status status;

    private:
    
    PlayerType type;
    
    
};

#endif