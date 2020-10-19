/*
NAME:Tal Ohayon
ID:205597701
*/

#include <iostream>
#include "Card.h"
#include "Pile.h"
#include "Game.h"
#include <stdlib.h>

int main()
{
	int size;
	cout << "Enter number of card you want to play with:";
	cin >> size;
	cout << endl;
	Game G(size);
	G.Run();


	return 0;
}