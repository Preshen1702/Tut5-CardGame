#pragma once
#include "Card.h"
class DeckOfCards
{
private:
	int Num_C = 20;
	Card** Dcards;
public:
	DeckOfCards();
	DeckOfCards reset();
	void shuffle();
	Card draw();
	Card peek();
	int numberOfCards();
	void display();
	~DeckOfCards();
};
