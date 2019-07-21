#ifndef GAME_CLIENT_H
#define GAME_CLIENT_H

#include "Player.h"

#include <vector>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

class GameClient
{
    public:
    GameClient(const int num_players = 2);

    // void start();
    std::vector<Player>& loadPlayers();  
    char promptPlayer();
    bool gameOver() const;
    const std::pair<PlayerType, int> highestScoreType() const;
    void evaluateWinner() const;
    
    private:
    std::vector<Player> players;
    
};

#endif