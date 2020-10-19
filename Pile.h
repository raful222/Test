#ifndef PILE_H
#define PILE_H

#include<ctime>
#include <iostream>
#include "Card.h"

using namespace std;

class Pile
{
private:
	int size;
	Card* arr;

public:
	Pile();
	Pile(int);
	int GetSize() const { return size; };
	Card Random_Char(int);
	void Print() const;
	void Randomise() const;
	Card GetIndex(int) const;
	~Pile();
	void Timer() const;
	void UpSideDown(int);
	bool IsPileEmpty() const;
	int Index(int,int);
	void FillPile();
};


#endif // !PILE_H


