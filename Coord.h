#include <iostream>

using namespace std;

class Coord//The coordinate class for the main function to call.
{
	
public:
	Coord()
	{
		Ship = false;
		Hit = false;
		_ship = NULL;
	}
	void getShip();
	void getHit();
	void getMiss();
	void editShip();
	void editHit();
	void editMiss();
	void set_ship();


private:
	bool Ship, Hit, Miss, 
	Ship * _ship;



};

void getisShip()
{

}

void getisHit()
{


}

void getisMiss()
{


}
void editisShip(bool isShip)
{
	isShip = true;

}

void editMiss(bool isMiss)
{
	isMiss = true;
}

void editHit(bool isHit)
{
	isHit = true;

}

void set_ship(int _ship)
{
	Ship& _ship;
}