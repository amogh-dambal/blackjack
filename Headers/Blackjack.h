#include "Deck.h"
#include "Player.h"

class Blackjack
{
public:
    Blackjack();

    void dealTo(Player& p);
    void showHand(const Player& p, PlayerType type) const;
    void checkScore(Player& p)
    {
        std::pair<int, int> score = p.score();
        if (score.first > 21 || score.second > 21)
        {
            p.status = Status::Bust
        }
        else if (score.first == 21 || score.second == 21)
        {
            p.status = Status::Win;
        }
    }
private:
    Deck deck;

};