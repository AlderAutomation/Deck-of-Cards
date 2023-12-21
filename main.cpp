#include <iostream>

#include "DeckofCards.h"


int main() {
    DeckOfCards deck;
    deck.newDeck();

    deck.shuffleDeck(deck.deck_of_new_cards);

    deck.printDeck(deck.deck_of_new_cards);
    //deck.moveCard(deck.deck_of_new_cards, deck.discard_pile);

    //deck.discard_pile[0].getStatus();


    std::cout << "\n ************ \n End of Program!! GG!! \n ************ \n";


}