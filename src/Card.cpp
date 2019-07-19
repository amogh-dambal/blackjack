#include "Card.h"

Card::Card(Suit suit, Value val) : suit(suit), val(val)
{
    // validate suit
    if (static_cast<int>(suit) < 0 || static_cast<int>(suit) > 3)
    {
        this->suit = Suit::SPADE;
    }

    // validate value
    if (static_cast<int>(val) < 1 || static_cast<int>(val) > 13)
    {
        this->val = Value::ACE;
    }

    // assign points based on value
    if (static_cast<int>(this->val) < 10)
    {
        this->points = static_cast<int>(this->val);
    }
    else
    {
        switch (this->val)
        {
        case Value::TEN:
        case Value::JACK:
        case Value::QUEEN:
        case Value::KING:
            this->points = 10;
            break;
        
        default:
            this->points = 0;
            break;
        }
    }
}

const int Card::getPoints() const
{
    return this->points;
}

const Suit Card::getSuit() const
{
    return this->suit;
}

const Value Card::getValue() const
{
    return this->val;
}