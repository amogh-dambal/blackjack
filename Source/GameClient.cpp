#include "GameClient.h"

GameClient::GameClient(const int num_players = 2) : players(num_players)
{

}

std::vector<Player> GameClient::loadPlayers() const
{
    return this->players;
}

const char promptPlayer(const int player = 1) const
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

bool GameClient::gameOver() const
{
    for (Player p : players)
    {
        return (p.status != Status::Under);
    }
}