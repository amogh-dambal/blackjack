IDIR = ../include
CC = g++
CXXFLAGS = -std=c++11 -I$(IDIR)

ODIR = obj

_DEPS = Card.h Player.h Deck.h Blackjack.h GameClient.h
DEPS = $(patsubst %, $(IDIR)/%, $(_DEPS))

_OBJ = main.o Card.o Player.o Deck.o Blackjack.o GameClient.o 
OBJ = $(patsubst %, $(ODIR)/%, $(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CXXFLAGS)

blackjack: $(OBJ)
	$(CC) -o $@ $^ $(CXXFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ && rm ./blackjack
	
run:
	./blackjack

production:
	rm ./blackjack

