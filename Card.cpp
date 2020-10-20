#include "Card.h"
#include "Pile.h"

//Defualt constractor
Card::Card()
{
	this->tav = 'A';
	this->status = true;
}
/*alskdgbsklhdfgvjsvdfjklhsvadjkfvsjkdvfjksvadfjkvv asjkdfvjksadvfkasbdfkbs*/
/*alskdgbsklhdfgvjsvdfjklhsvadjkfvsjkdvfjksvadfjkvv asjkdfvjksadvfkasbdfkbs*/
/*alskdgbsklhdfgvjsvdfjklhsvadjkfvsjkdvfjksvadfjkvv asjkdfvjksadvfkasbdfkbs*/
/*alskdgbsklhdfgvjsvdfjklhsvadjkfvsjkdvfjksvadfjkvv asjkdfvjksadvfkasbdfkbs*/
/*alskdgbsklhdfgvjsvdfjklhsvadjkfvsjkdvfjksvadfjkvv asjkdfvjksadvfkasbdfkbs*/
/*alskdgbsklhdfgvjsvdfjklhsvadjkfvsjkdvfjksvadfjkvv asjkdfvjksadvfkasbdfkbs*/
/*alskdgbsklhdfgvjsvdfjklhsvadjkfvsjkdvfjksvadfjkvv asjkdfvjksadvfkasbdfkbs*/
/*alskdgbsklhdfgvjsvdfjklhsvadjkfvsjkdvfjksvadfjkvv asjkdfvjksadvfkasbdfkbs*/

/*alskdgbsklhdfgvjsvdfjklhsvadjkfvsjkdvfjksvadfjkvv asjkdfvjksadvfkasbdfkbs*/
//Constractor
Card::Card(char Tav, bool Stat)
{
	if (SetStatus(Tav) == true) this->tav = Tav;
	else
		cout << "ERROR!" << endl;

	this->status = Stat;
}

//This method is changing the card sign
void Card::ChangeStatus()
{

	status = !status;
}

//This method is getting two card and check if they are eqaul
bool Card::IsEqaul(Card c1, Card c2) const
{
	if (c1.tav == c2.tav) return true;

	else return false;

}

//This method print a card
void Card::PrintTav() const
{
	if(status==true)
	cout << "[ " << tav << " ]";

	else
		cout << "[ ? ]";
}


//This method is getting a char and check if it is a big letter
bool Card::SetStatus(char s) const
{
	if (s >= 'A'&&s <= 'Z')
		return true;
	else
		return false;

}

// Get method for status
bool Card::Getstatus() const
{
	return status;
}
//Get method for tav
char Card::GetTav() const
{
	return tav;
}