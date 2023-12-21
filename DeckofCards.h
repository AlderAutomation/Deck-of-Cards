//DeckofCards.h
#pragma once

#include <vector>
#include <iostream>
#include <random>
#include <algorithm>

#include "Card.h"


class DeckOfCards{
public:
    std::vector<Card> deck_of_new_cards;
    std::vector<Card> discard_pile; 

    void newDeck();
    void shuffleDeck(std::vector<Card> &deck);
    void printDeck(std::vector<Card> deck);
    void moveCard(std::vector<Card> &from_deck, std::vector<Card> &destination_deck, int numCards = 1);
    void ResetDiscardPile(bool to_shuffle = true);

private:
    bool is_shuffled;



};