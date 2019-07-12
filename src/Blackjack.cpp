#include "../include/Blackjack.h"

Blackjack::Blackjack()
{

}

void Blackjack::dealTo(Player& p)
{
    p.hand.push_back(deck.next());
}

void Blackjack::showHand(const Player& p, PlayerType type, Turn turn)
{
    if (type == PlayerType::House)
    {
        std::cout << "House's hand: ";
        if (turn == Turn::PreDeal) 
        {
            std::cout << p.hand.at(0);
        }
        else if (turn == Turn::PostPlayer)
        {
            for (Card c : p.hand)
            {
                std::cout << c << " ";
            }
        }
        
        
    }
    else if (type == PlayerType::Human)
    {
        std::cout << "Your hand: ";
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
        if (score.first < 21) 
        {
            score.second = score.first;
        }
        else if (score.second < 21)
        {
            score.first = score.second;
        }
        else
        {
            p.status = Status::Bust;
        }
    }
    else if (score.first == 21 || score.second == 21)
    {
        p.status = Status::Win;
    }
}