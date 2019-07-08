#ifndef GAME_CLIENT_H
#define GAME_CLIENT_H

#include "Player.h"

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
    std::vector<Player> loadPlayers();  
    char promptPlayer();
    bool gameOver();
    
    
    private:
    std::vector<Player> players;
    GameState state;
    
};

#endif