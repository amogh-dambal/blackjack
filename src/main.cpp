#include "../include/Blackjack.h"
#include "../include/GameClient.h"
#include <iostream>

int main(int argc, char** argv)
{
    GameClient client;
    Blackjack bj;

    std::vector<Player>& players = client.loadPlayers();

    // deal to player 1
    // deal to house
    bj.dealTo(players[0]);
    bj.dealTo(players[1]);
    bj.dealTo(players[0]);
    bj.dealTo(players[1]);


    // show player's cards
    // show house's card™
    bj.showHand(players[0], PlayerType::House);
    std::cout << std::endl;
    bj.showHand(players[1], PlayerType::Human);

    // while score < 21:
    // prompt player for hit or pass
    // if stay:
    // - move to house [implement an AI]
    // if hit: 
    // deal card, update score

    while (!client.gameOver())
    {
        char ans = client.promptPlayer(); 

        if (ans == 'h')
        {
            bj.dealTo(players[1]);
            bj.showHand(players[1], PlayerType::Human);
            bj.checkScore(players[1]);

            std::cout << static_cast<int>(players[1].status) << std::endl;
            std::cout << static_cast<int>(client.loadPlayers().at(1).status) << std::endl;
        }

        else if (ans == 'p')
        {
            // implement AI here     
        }
    }
    
}