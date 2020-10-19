#ifndef GAME_H
#define GAME_H

#include "Pile.h"
#include <iostream>
#include <stdlib.h>
class Game
{
private:
	int NumberOfCards;
	int ranked;
	Pile p;
	
public:
	Game(int);
	void Run();
};

#endif // !GAME_H



