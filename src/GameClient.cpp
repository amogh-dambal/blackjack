#include "../include/GameClient.h"

GameClient::GameClient(const int num_players) : players(num_players)
{

}

std::vector<Player>& GameClient::loadPlayers() 
{
    return this->players;
}

char GameClient::promptPlayer()
{
    std::string answerline;
    std::cout << "hit or stay?" << std::endl;
    
    std::cin >> answerline;

    std::transform(
        answerline.begin(),
        answerline.end(),
        answerline.begin(),
        [](char c) {
            return std::tolower(c);
        }
    );

    return answerline[0];
}

bool GameClient::gameOver()
{
    for (const Player& p : players)
    {
        if (p.status != Status::Under)
        {
            return true;
        }
    }
    return false;
}