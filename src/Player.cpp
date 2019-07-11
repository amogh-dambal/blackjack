#include "../include/Player.h"

Player::Player() : status(Status::Under)
{

}

std::pair<int, int> Player::score() const
{
    int sum = 0;
    int ans;
    for (Card c : hand)
    {
        sum += static_cast<int>(c.val);
        if (c.val == ACE)
        {
            std::cout << "1 or 11 points for the ACE?" << std::endl;
            std::cin >> ans;
            sum += ans;
        }
    }
    return std::make_pair(sum, sum);
}