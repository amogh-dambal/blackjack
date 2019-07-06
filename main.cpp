#include "Deck.h"
#include <iostream>

int main(int argc, char** argv)
{
    Deck d;

    std::cout << d << std::endl;

    // testing next() and size() function
    Card c; 
    while (d.size() > 0)
    {
        std::cout << "next card.." << std::endl;
        c = d.next();
        std::cout << c << std::endl;
    }
}