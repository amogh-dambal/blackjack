enum class Suit { 
    SPADES, 
    HEARTS, 
    DIAMONDS, 
    CLUBS 
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
    KING
};

class Card
{
    public:

    Card(Suit suit = Suit::SPADES, Value val = ACE) : suit(suit), val(val) {};

    private:

    Suit suit;
    Value val;
};