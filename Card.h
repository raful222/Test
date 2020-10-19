#ifndef CARD_H
#define CARD_H

#include <iostream>

using namespace std;


class Card
{
private:
	char tav;
	bool status;

public:
	Card();
	Card(char, bool);
	void ChangeStatus();
	bool IsEqaul(Card, Card) const;
	void PrintTav() const;
	bool SetStatus(char) const;
	bool Getstatus() const;
	char GetTav() const;

};

#endif 


