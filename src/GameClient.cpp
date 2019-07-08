#include "../include/GameClient.h"

GameClient::GameClient(const int num_players) : players(num_players)
{

}

std::vector<Player> GameClient::loadPlayers() 
{
    return this->players;
}

char promptPlayer(const int player)
{
    std::string answerline;
    std::cout << "hit or stay?" << std::endl;
    
    std::cin >> answerline;

    answerline = std::transform(
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
    for (Player p : players)
    {
        return (p.status != Status::Under);
    }
}