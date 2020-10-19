#include "Pile.h"

#define MaxCol 5

//Default constractor
Pile::Pile()
{
	this->size = 0;
}

//Constractor
Pile::Pile(int s)
{
	if (s < 4 || s > 53) this->size = 20;

	else if (s % 2 != 0) this->size = s - 1;

	else this->size = s;

	this->arr = new Card[this->size];

	FillPile();
}

//This method is fill the Deck
void Pile::FillPile() 
{
	int j = 0;
	for (int i = 0; i < this->size; i++)
	{
		this->arr[i] = Random_Char(j);
		this->arr[i + 1] = this->arr[i];
		i++;
		j++;
	}
}

//This method is get an index and make a card to this index in the deck
Card Pile::Random_Char(int in)
{
	int r=in;
	char c='A'+r;
	Card temp(c, true);
	
		return temp;

}

//This method is print the deck
void Pile::Print() const
{
	int count = 1;
	for (int i = 0; i < MaxCol; i++)
	{
		if (i == 0)
			cout << "         " << i + 1 << "    ";
		else
			cout << i + 1 << "    ";
	}
	cout << endl;

	cout << count << "      ";
	for (int i = 0; i < size; i++)
	{

		arr[i].PrintTav();
		if (i % MaxCol == 4 && i != 0)
		{
			if (count < 9)
			{
				cout << endl;
				count++;
				cout << count << "      ";
			}
			else
			{
				cout << endl;
				count++;
				cout << count << "     ";

			}
		}
	}
	
}


//This method is shuflle the deck
void Pile::Randomise() const 
{
	Card temp;
	int randomindex;
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
			randomindex = rand() % size;
			temp = arr[i];
			arr[i] = arr[randomindex];
			arr[randomindex] = temp;
	}
	cout << "You have 30 seconds to see the cards" << endl;
	Print();
	Timer();
	system("cls");
	for (int i = 0; i < size; i++)
	{
		arr[i].ChangeStatus();
	}
	Print();

}


//This method is getting an index and return the card in this index
Card Pile::GetIndex(int i) const
{	
	 return arr[i];
	
}

//Distractor
Pile::~Pile()
{
	delete[]arr;
}

//This method is pause the all pile on true sign for 30 second
void Pile::Timer() const
{
	
	int sec = 1;
	clock_t start_time = clock();
	clock_t end_time = sec * 1000 + start_time;
	while (clock() != end_time);

}

//This method is getting an index change the card status in this index
void Pile::UpSideDown(int c)
{
	arr[c].ChangeStatus();
}

//This method is checking if the pile is empty
bool Pile::IsPileEmpty() const
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].Getstatus() == false) return false;
	}

	return true;
}

//This method is getting row and col index for matrix and make them index for regular array. The method is also check if the
//index is proper.
int Pile::Index(int r, int c) 
{
	int index = ((r - 1) * 5) + (c - 1);
	if (index > size - 1|| c > 5|| r < 1 || c < 1)
	{
		cout << "The index isn't exisist" << endl;
		delete[]arr;
		exit(1);
	}
	return index;
}
