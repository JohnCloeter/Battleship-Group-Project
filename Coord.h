#include <iostream>
#include "Ship.h"

using namespace std;

class Coord//The coordinate class for the main function to call.
{
	
public:
	Coord();
	bool getShip();
	bool getHit();
	bool getMiss();
	void editShip();
	void editHit();
	void editMiss();
	void set_ship(Ship &boat);
	Ship& get_ship();


private:
	bool Ship, Hit, Miss, 
	Ship * _ship;
	
};
