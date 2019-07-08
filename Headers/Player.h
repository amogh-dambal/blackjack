#ifndef PLAYER_H
#define PLAYER_H

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
    Player();

    std::pair<int, int> score() const;

    Status status;
    PlayerType type;
    std::vector<Card> hand;
    
};

#endif