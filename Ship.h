#include <iostream>
#include <vector>
#include "Ship.h"

using namespace std;

class Ship//Class ship for the main function to call the ship class.
{

public:
	Ship(string name, int length)
	int getLength();
	string getName();
	int hitShip();

private:
	int _length;
	string _name;
	std::vector<bool> damage;
	

};
