#include "../include/Blackjack.h"

Blackjack::Blackjack()
{

}

void Blackjack::dealTo(Player& p)
{
    p.hand.push_back(deck.next());
}

void Blackjack::showHand(const Player& p, PlayerType type)
{
    if (type == PlayerType::House)
    {
        std::cout << p.hand.at(0);
    }
    else if (type == PlayerType::Human)
    {
       for (Card c : p.hand)
       {
           std::cout << c << " ";
       }
    }
}

void Blackjack::checkScore(Player& p)
{
    std::pair<int, int> score = p.score();
    if (score.first > 21 || score.second > 21)
    {
        p.status = Status::Bust;
    }
    else if (score.first == 21 || score.second == 21)
    {
        p.status = Status::Win;
    }
}