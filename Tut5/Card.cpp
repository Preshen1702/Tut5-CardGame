#include "Card.h"
#include <iostream>


Card::Card(int num, string col)
{
	n = num;
	c = col;
}

string Card::colour(){
	return c;
}

int Card::number(){
	return n;
}

void Card::display(){
	cout << c << " - " << n << endl;
}


Card::~Card()
{
}