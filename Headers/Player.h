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
    Player() : status(Status::Under) {};

    std::pair<int, int> score() const
    {
        int sum = 0;
        int sum_ace = 0;
        for (Card c : hand)
        {
            sum += static_cast<int>(c.val);
            if (c.val == ACE)
            {
                sum_ace += 11;
            }
            else
            {
                sum_ace += static_cast<int>(c.val);
            }
            
        }
        return std::make_pair(sum, sum_ace);
    };

    Status status;
    std::pair<int, int> score;
    PlayerType type;
    std::vector<Card> hand;
};