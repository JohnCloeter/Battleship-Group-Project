#include <iostream>
#include "Coord.h"//Calling header file into ccp file.
#include "Ship.h"//Calling header file into ccp file.
#include "..\..\Project9\Project9\Coord.h"

using namespace std;

Coord::Coord()
{
	Ship = false;
	Hit = false;
	Miss = false;
	_ship = NULL;
}

bool Coord::getShip()
{
	return Ship;
}
bool Coord::getHit() 
{
	return Hit;

}
bool Coord::getMiss()
{

	return Miss;
}
void Coord::editShip()
{
	Ship = true;
}
void Coord::editHit()
{

	Hit = true;
}
void Coord::editMiss()
{

	Miss = true;

}
void Coord::set_ship(Ship &boat)
{
	_ship = &boat;

}

Ship& Coord::get_ship()
{
	return &_ship;
}
