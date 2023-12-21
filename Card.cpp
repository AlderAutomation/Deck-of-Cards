#include "Card.h"
#include <iostream>
#include <string>


void Card::setCard(std::string Suit, int num, bool face_up, bool portrait) {
    card_val = num;
    suit = Suit;
    is_face_up = face_up;
    is_portrait = portrait;


    if (suit == "hearts") {
        colour = "red";
    }
    else if (suit == "diamonds") {
        colour = "red";
    }
    else if (suit == "spades") {
        colour = "black";
    }
    if (suit == "clubs") {
        colour = "black";
    }
}


void Card::flipCard() {
    if (is_face_up == 0) {
        is_face_up = 1;
    }
    else {
        is_face_up = 0;
    }
}


void Card::rotateCard() {
    if (is_portrait == 0) {
        is_portrait = 1;
    }
    else {
        is_portrait = 0;
    }
}


void Card::getStatus() {
    std::string card_val_output;

    switch (card_val) {
    case 1:
        card_val_output = "A";
        break;
    case 11:
        card_val_output = "J";
        break;
    case 12:
        card_val_output = "Q";
        break;
    case 13:
        card_val_output = "K";
        break;
    default: 
        card_val_output = std::to_string(card_val);
    }

    std::cout << "This card is the " << card_val_output << " of " << suit << " and is " << colour << "\n";
    std::cout << "This card is faceup: " << is_face_up << " and is portrait: " << is_portrait << "\n\n";
}
