#include "Deck.h"
#include <iostream>

int main(int argc, char** argv)
{
    Deck d;

    // testing the shuffle function
    std::cout << d << std::endl;
    d.shuffle();
    std::cout << d << std::endl;
}