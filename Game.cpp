#include "Game.h"
#include "Pile.h"
#include "Card.h"

//Constractor
Game::Game(int size)
{
	this->NumberOfCards = size;
}

//This method run the game
void Game::Run() 
{
	ranked = 0;
	Card c,c1,c2;
	Pile p(NumberOfCards);
	p.Randomise();
	int row,row1,col,col1;
	int index, index1;
	bool answer;
	int flag = 0;

	while (p.IsPileEmpty()==false)
	{
		if (flag == 1)
		{
			cout << "Your rank is:" << ranked << endl << endl;
			p.Print();
		}
		row = 0;
		row1 = 0;
		col = 0;
		col1 = 0;
		cout << endl;
		cout << "First Card:" << endl << "row:" << endl;
		cin >> row1;
		cout << "col:" << endl;
		cin >> col1;
		index1=p.Index(row1, col1);
		c1 = p.GetIndex(index1);
		cout << endl;
		while (c1.Getstatus() == true)
		{
				
				cout << "This card is already find out please choose other card" << endl;
				cin >> row1;
				cin >> col1;
				index1 = p.Index(row1, col1);
				c1 = p.GetIndex(index1);
				break;
		}
		p.UpSideDown(index1);
		p.Print();
		cout << endl;
		cout << "Second Card:" << endl;
		cout << "row:";
		cin >> row;
		cout << "col:";
		cin >> col;
		index=p.Index(row, col);
		c2 = p.GetIndex(index);
		cout << endl;
		
		while (c2.Getstatus() == true)
		{
			cout << "This card is already find out please choose other card" << endl;
			cin >> row;
			cin >> col;
			index = p.Index(row, col);
			c2 = p.GetIndex(index);
			if(c2.Getstatus()==false) break;
			
		}
		
		cout << endl;
		
		if (c.IsEqaul(c1,c2)==true)
		{
			p.UpSideDown(index);
			cout << endl;
			ranked++;
			p.Print();
			if (p.IsPileEmpty() == true) break;
			cout << "\n\n";
			cout << "The card are match! do you to continue?[Y-1/N-0]";
			cin >> answer;
			if (answer == false)
			{
				cout << "Game over!" << endl;
				p.~Pile();
				exit(1);
			}
			cout << endl;
			cout << "Your rank is:" << ranked << endl;
			cout << endl;

		}

		else
		{
			
			p.UpSideDown(index);
			p.Print();
			cout << endl;
			p.UpSideDown(index1);
			p.UpSideDown(index);
			cout << "Your rank is:" << ranked << endl;
			p.Print();
			cout << "\n\n";
			cout << "No match,do you want to continue?[Yes-1,No-0]" << endl;
			cin >> answer;
			if (answer == 0)
			{
				cout << "Game over!" << endl;
				p.~Pile();
				exit(1);
			}

		}
		flag = 1;
		system("cls");
		
	}
	
	cout << "\n\n";
	cout << "Congratulations! You won! The game is over" << endl;

	
}
