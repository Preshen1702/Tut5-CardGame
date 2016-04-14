#include "DeckOfCards.h"
#include <iostream>
DeckOfCards::DeckOfCards()
{
	int i,j,k;
	Dcards = new Card*[20];
	for (j = 1; j < 3; j++){
		for (i = 1; i < 11; i++){
			if (j == 1)
				Dcards[k] = new Card(i, "red");
			else
				Dcards[k] = new Card(i, "black");
			k++;
		}
	}
}

Card DeckOfCards::draw() {
	if (Num_C != 0) {
		Card Tmp = *(Dcards[Num_C - 1]);
		delete Dcards[Num_C - 1];
		Num_C -= 1;
		return Tmp;
	}
	else
		cout << "All cards used " << endl;
}

int DeckOfCards::numberOfCards() {
	return Num_C;
}

Card DeckOfCards::peek() {

	return *Dcards[Num_C - 1];
}

DeckOfCards DeckOfCards::reset(){
	return DeckOfCards();
}

void DeckOfCards::shuffle(){
	if (Num_C != 0) {
		int i;
		Card* Tmp;
		int num1, num2;
		for (i = 0; i < 50; i++) {
			num1 = rand() % Num_C;
			num2 = rand() % Num_C;
			Tmp = Dcards[num1];
			Dcards[num1] = Dcards[num2];
			Dcards[num2] = Tmp;
		}
	}
	else
		cout << "All cards used " << endl;
}

void DeckOfCards::display() {
	int i;
	for (i = 0; i < Num_C; i++) {
		cout << (*(Dcards[i])).number() << (*(Dcards[i])).colour() << endl;
	}
}

DeckOfCards::~DeckOfCards()
{
}

int main(){
	DeckOfCards c;
	c.shuffle();
	Card Tmp;
	int i;
	for (i = 0; i < 25; i++) {
		Tmp = c.draw();
	}
	return 0;
}