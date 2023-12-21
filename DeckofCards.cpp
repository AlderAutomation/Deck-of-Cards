#include <vector>
#include <iostream>
#include <random>
#include <algorithm>

#include "DeckofCards.h"
#include "Card.h"


void DeckOfCards::newDeck() {
    // method to create a new deck of cards

    std::string* suit = new std::string[4]{ "hearts", "clubs", "spades", "diamonds" };
    int* nums = new int[13]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
    
    for (int i = 0; i <= 3; ++i) {
        for (int j = 0; j <= 12; ++j) {
            Card card;
            card.setCard(suit[i], nums[j]);
            deck_of_new_cards.push_back(card);
        }
    }

    delete[] suit;
    delete[] nums;
}


void DeckOfCards::shuffleDeck(std::vector<Card> &deck) {
    // method to shuffle deck of cards, or discard pile, or player hand 

    std::random_device rd; 
    std::mt19937 rng(rd());

    std::shuffle(deck_of_new_cards.begin(), deck_of_new_cards.end(), rng);
}


void DeckOfCards::printDeck(std::vector<Card> deck) {
    // debugger function mostly. to print all cards in specified deck

    for (Card card : deck) {
        card.getStatus();
    }
}


void DeckOfCards::moveCard(std::vector<Card> &from_deck, std::vector<Card> &destination_deck, int numCards) {
    // to move a card from one deck to another. use for discarding or dealing. 

    int vec_size = from_deck.size() - 1; 

    destination_deck.push_back(from_deck[vec_size]);
    from_deck.pop_back();

    destination_deck[0].getStatus();
}


void DeckOfCards::ResetDiscardPile(bool to_shuffle) {
    // reset used discard pile back into a useable draw pile. default is to shuffle on rebuild 


}

