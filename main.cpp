#include <iostream>
#include <vector>
#include "Ship.h"
#include "Coord.h"
#include "Field.h"
using namespace std;
int main()
{
	//Set up player ships and AI ships
	string name [5] = {"Destroyer","Cruiser","Submarine","Battleship","Aircraft Carrier"};
	int size [5] = {2,3,3,4,5}
	Ship myShips [5];
	Ship aiShips [5];
	for (int i = 0; i<5; i++)
	{
		myShips[i] = new Ship(name[i],size[i]);
		aiShips[i] = new Ship(name[i],size[i]);
	}
	//Set up player field and AI field
	Field myField = new Field();
  	myField.setShipsPlayer(&myShips);
	Field aiField = new Field();
  	aiField.setShipsAI(&aiShips);
	//set up a score tracker and target checklist
	int myScore = 0;
	int aiScore = 0;
	bool canTarget [10][10];
	for (i = 0; i<10; i++)
		for (j = 0; j<10; j++)
			canTarget[i][j] = true;
	//set up the actual gameplay loop
	while (myScore < 5 && aiScore < 5)
	{
		bool aiTurn =  true; //this to see if AI scored a hit, used later
		while (aiTurn)
		{
			int r = rand()%10;
			int c = rand()%10;
			if (canTarget[r][c])
			{
				canTarget[x][y] = false;
				aiScore += myField.hit(r,c);
				aiTurn = myField.getHit(r,c);
				myField.displayFieldPlayer();
			}
		}
		bool myTurn = true;
		while (myTurn)
		{
			aiField.displayFieldAI();
			cout << "Please select a target. \n";
			string target;
			getline (cin, target);
			int r = //splice
			int c = //splice
			if (r < 10 && r > 0 && c < 10 && c > 0)
			{
				myScore += aiField.hit(r,c);
				myTurn = aiField.getIsHit(r,c);
			}
			else
				cout << "In valid target. \n";
		}
	}
	if (myScore == 5)
		cout << "Congratulations, you have on! \n"
	else
		cout << "You have lost. \n"
	return 0;
}
