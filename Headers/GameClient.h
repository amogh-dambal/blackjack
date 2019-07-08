#include "Card.h"

enum class GameState
{
    InProgress,
    Finished
};
class GameClient
{
    public:
    GameClient(int num_players = 2);

    // void start();
    std::vector<Player> loadPlayers() const;  
    const char& promptPlayer(const int player = 1) const;
    bool gameActive() 
    {
        for (Player p : players)
        {
            return (p.status != Status::Under);
        }
    }
    
    private:
    std::vector<Player> players;
    GameState state;
    
};