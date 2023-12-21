// Card.h

#pragma once
#include <string>
#include <iostream>

class Card {
public:
	void setCard(std::string Suit, int num, bool face_up = false, bool portrait = true);
	void flipCard();
	void rotateCard();
	void getStatus();

private:
	int card_val;
	std::string suit;
	std::string colour;
	bool is_face_up;
	bool is_portrait;
};

