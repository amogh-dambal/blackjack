// dont touch these
// they're used as 
// array indexes for 
// output
#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>

enum class Suit { 
    SPADE, 
    HEART, 
    DIAMOND, 
    CLUB 
};

enum Value {
    ACE = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
};

class Card
{
    public:

    Card(
        Suit suit = Suit::SPADE, 
        Value val = ACE);

    const int getPoints() const;
    const Suit getSuit() const; 
    const Value getValue() const;

    friend std::ostream& operator<<(std::ostream& out, const Card& card)
    {
        std::string suit_outputs[] = {
            "SPADE",
            "HEART",
            "DIAMOND",
            "CLUB"
        };

        std::string value_outputs[] = {
            "0",
            "A",
            "2",
            "3",
            "4",
            "5",
            "6",
            "7",
            "8",
            "9",
            "10",
            "J",
            "Q",
            "K"
        };
        
        out << "(" << suit_outputs[static_cast<int>(card.suit)] << ", " 
            << value_outputs[card.val] << ")";

        return out;
    };

    private:
    
    Suit suit;
    Value val;
    int points;
};
#endif