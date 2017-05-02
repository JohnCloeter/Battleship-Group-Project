#include <iostream>
#include <vector>
#include "Ship.h"//Calling header file into ccp file.
#include "Coord.h"//Calling header file into ccp file.
#include "..\..\Project9\Project9\Ship.h"

using namespace std;

Ship::Ship(string name, int length)
{
	_name = name;
	_length = length;
	damage(std::vector<bool>(length));
	for (int i = 0; i < length; i++)
		damage[i] = false;

}

int Ship::hitShip()
{
	bool temp = true;
	int i = 0;
	while (temp)
	{
		if (!damage[i])
		{
			damage[i] = true;
			temp = false;
		}
		i++;
	}

	if (damage[length - 1])
	{
		cout << "You sunk my " << _name << "! \n";
		return 1;
	}
		
	else
		return 0;
}

int Ship::getLength()
{
	return _length;
}


