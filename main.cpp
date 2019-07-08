#include "Blackjack.h"
#include "GameClient.h"
#include <iostream>



int main(int argc, char** argv)
{
    GameClient client;
    Blackjack bj;

    std::vector<Player> players = client.loadPlayers();

    // deal to player 1
    // deal to house
    bj.dealTo(players[0]);
    bj.dealTo(players[1]);

    // show player's cards
    // show house's card™
    bj.showHand(players[0], PlayerType::House);
    bj.showHand(players[1], PlayerType::Human);

    // while score < 21:
    // prompt player for hit or pass
    // if stay:
    // - move to house [implement an AI]
    // if hit: 
    // deal card, update score

    while (client.gameActive())
    {
        while (client.promptPlayer() == 'h')
        {
            bj.dealTo(players[1]);
            bj.checkScore(players[1]);
        }
        if (client.promptPlayer() == 'p')
        {
            // implement AI here     
        }
    }
    
}