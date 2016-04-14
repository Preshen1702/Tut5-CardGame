#pragma once
#include <string>
using namespace std;
class Card
{
private:
	int n;
	string c;
public:
	Card(int num = 0, string col = "");
	string colour();
	int number();
	void display();
	~Card();
};
