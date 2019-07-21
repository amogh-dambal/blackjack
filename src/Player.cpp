#include "../include/Player.h"

Player::Player() : status(Status::Under)
{

}

const int Player::score() const
{
    int sum = 0;
    int ans;
    for (Card c : hand)
    {
        sum += c.getPoints();
    }
    return sum;
}

const PlayerType Player::getType() const
{
    return this->type;
}