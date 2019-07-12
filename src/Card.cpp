#include "Card.h"

Card::Card(Suit suit, Value val) : suit(suit), val(val)
{
    // validate suit
    if (suit < 0 || suit > 3)
    {
        this->suit = 0;
    }

    // validate value
    if (val < 1 || val > 13)
    {
        this->val = 1;
    }

    // assign points based on value
    if (this->val < 10)
    {
        this->point = static_cast<int>(this->val);
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

const int getPoints() const
{
    return this->points;
}

const Suit getSuit() const
{
    return this->suit;
}

const Value getValue() const
{
    return this-value;
}