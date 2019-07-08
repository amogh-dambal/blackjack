#include "Card.h"

#include <vector>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

enum class GameState
{
    InProgress,
    Finished
};
class GameClient
{
    public:
    GameClient(const int num_players = 2);

    // void start();
    std::vector<Player> loadPlayers() const;  
    const char& promptPlayer(const int player = 1) const;
    bool gameOver() const;
    
    
    private:
    std::vector<Player> players;
    GameState state;
    
};