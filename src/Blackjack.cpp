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
        std::cout << "entered bust" << std::endl;
        p.status = Status::Bust;
        std::cout << "changed status" << std::endl;
        std::cout << "new status: " << static_cast<int>(p.status) << std::endl;
    }
    else if (score.first == 21 || score.second == 21)
    {
        std::cout << "entered win" << std::endl;
        p.status = Status::Win;
    }

    std::cout << "scores: " << score.first << " " << score.second << std::endl; 
}