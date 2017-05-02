#include <iostream>

using namespace std;

class Coord//The coordinate class for the main function to call.
{
	
public:
	Coord();
	void getShip();
	void getHit();
	void getMiss();
	void editShip();
	void editHit();
	void editMiss();
	void set_ship(Ship &boat);


private:
	bool Ship, Hit, Miss, 
	Ship * _ship;



};
