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

bool GameClient::gameOver() const
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

const std::pair<PlayerType, int> GameClient::highestScoreType() const 
{
    PlayerType maxtype = PlayerType::House;
    int max = 0;
    for (const Player& p : this->players)
    {
        if (p.score() > max)
        {
            max = p.score();
            maxtype = p.getType();
        }
    }
    return std::make_pair(maxtype, max);
}

void GameClient::evaluateWinner() const
{
    std::pair<PlayerType, int> winner = highestScoreType();
    std::string type;
    if (winner.first == PlayerType::House)
    {
        type = "House";
    }
    else
    {
        type = "Human";
    }

    if (this->gameOver()) 
    {
        for (const Player& p : this->players)
        {
            std::string type;
            if (p.getType() == PlayerType::House)
            {
                type = "House";
            }
            else
            {
                type = "Human";
            }
            if (p.status == Status::Win)
            {
                std::cout << type << " has won!" << std::endl;
            }
            else if (p.status == Status::Bust)
            {
                std::cout << type << " has bust!" << std::endl;
            }
        }
    }
    else 
    {
        
        std::cout << type << " has won with a score of " << winner.second << " !" << std::endl;
    }
}