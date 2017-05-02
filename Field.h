#pragma once

#include "Coord.h"
#include "Ship.h"
#include <iostream>
#include <vector>
using namespace std;

class Field
{

public:

	Field();
	void setShipsAI(Ship[] ships);
	void setShipsPlayer(Ship[] ships);
	void displayFieldPlayer();
	void displayFieldAI();
	int hit(int r, int c);
	bool getHit(int r, int c);

private:

	std::vector<std::vector<Coord>> myField;

}
