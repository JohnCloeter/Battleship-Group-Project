#include "Coord.h" 
#include <iostream>
#include "Field.h"

Field::Field()
{
	myField(std::vector<std::vector<Coord>(10)>(10));
	for (int i = 0; i < 0; i++)
		for (int j = 0; j < 10; j++)
			myField[i][j] = Coord();					//Calls default constructor, makes everything water
}
void Field::setShipsAI(Ship ships[])
{
	for (int i = 0; i < 5; i++)
	{
		bool Placing = true;
		while (Placing)
		{
			int r = rand()%10; //random int between 0-9
			int c = rand()%10; //0-9

			if (!myField[r][c].getShip())
			{
				int orientation = (rand() % 4) + 1;			//rand int 1-4, 4 directions
					if (orientation == 1)			//North
					{
						if (r - ships[i].getLength() >= 0)
						{
							bool check = true;
							for (int j = r - 1; j >= r - ships[i].getLength(); j--)
							{
								if (myField[j][c].getShip())
									check = false;
							}
							if (check)
							{
								for (int j = r; j >= r - ships[i].getLength(); j--)
								{

									myField[j][c].editShip();
									myField[j][c].set_ship(&ships[i]);

								}
								Placing = false;
							}
						}


					}
					else if (orientation == 2) //East
					{
						if (c + ships[i].getLength() <= 9)
						{
							bool check = true;
							for (int j = c + 1; j <= c + ships[i].getLength(); j++)
							{
								if (myField[r][j].getShip())
									check = false;
							}
							if (check)
							{
								for (int j = c; j <= c + ships[i].getLength(); j++)
								{

									myField[r][j].editShip();
									myField[r][j].set_ship(&ships[i]);

								}
								Placing = false;
							}
						}
					}
					else if (orientation == 3) //South
					{
						if (r + ships[i].getLength() <= 9)
						{
							bool check = true;
							for (int j = r + 1; j <= r + ships[i].getLength(); j++)
							{
								if (myField[j][c].getShip())
									check = false;
							}
							if (check)
							{
								for (int j = r; j <= r + ships[i].getLength(); j++)
								{

									myField[j][c].editShip();
									myField[j][c].set_ship(&ships[i]);

								}
								Placing = false;
							}
						}

						else
						{
							if (c - ships[i].getLength() >= 0) //West
							{
								bool check = true;
								for (int j = c - 1; j <= c - ships[i].getLength(); j--)
								{
									if (myField[r][j].getShip())
										check = false;
								}
								if (check)
								{
									for (int j = c; j <= c - ships[i].getLength(); j--)
									{

										myField[r][j].editShip();
										myField[r][j].set_ship(&ships[i]);

									}
									Placing = false;
								}
							}

						}
					}

			}
		}

	}
}
void Field::setShipsPlayer(Ship ships[])
{
	for (int i = 0; i < 5; i++)
	{
		bool Placing = true;
		while (Placing)
		{
			int r = rand()%10;			//random int between 0-9
			int c = rand()%10;			//0-9

			if (!myField[r][c].getShip)
			{
				int orientation = (rand() % 4) + 1; //rand int 1-4, 4 directions
					if (orientation == 1) //North
					{
						if (r - ships[i].getLength() >= 0)
						{
							bool check = true;
							for (int j = r - 1; j >= r - ships[i].getLength(); j--)
							{
								if (myField[j][c].getShip())
									check = false;
							}
							if (check)
							{
								for (int j = r; j >= r - ships[i].getLength(); j--)
								{

									myField[j][c].editShip();
									myField[j][c].set_ship(&ships[i]);

								}
								Placing = false;
							}
						}


					}
					else if (orientation == 2) //East
					{
						if (c + ships[i].getLength() <= 9)
						{
							bool check = true;
							for (int j = c + 1; j <= c + ships[i].getLength(); j++)
							{
								if (myField[r][j].getShip())
									check = false;
							}
							if (check)
							{
								for (int j = c; j <= c + ships[i].getLength(); j++)
								{

									myField[r][j].editShip();
									myField[r][j].set_ship(&ships[i]);

								}
								Placing = false;
							}
						}
					}
					else if (orientation == 3) //South
					{
						if (r + ships[i].getLength() <= 9)
						{
							bool check = true;
							for (int j = r + 1; j <= r + ships[i].getLength(); j++)
							{
								if (myField[j][c].getShip())
									check = false;
							}
							if (check)
							{
								for (int j = r; j <= r + ships[i].getLength(); j++)
								{

									myField[j][c].editShip();
									myField[j][c].set_ship(&ships[i]);

								}
								Placing = false;
							}
						}

						else
						{
							if (c - ships[i].getLength() >= 0) //West
							{
								bool check = true;
								for (int j = c - 1; j <= c - ships[i].getLength(); j--)
								{
									if (myField[r][j].getShip())
										check = false;
								}
								if (check)
								{
									for (int j = c; j <= c - ships[i].getLength(); j--)
									{

										myField[r][j].editShip();
										myField[r][j].set_ship(&ships[i]);

									}
									Placing = false;
								}
							}

						}
					}

			}
		}

	}
}
void Field::displayFieldPlayer() 
{
	char[10] letters = [A, B, C, D, E, F, G, H, I, J];
	cout << "My Field" << endl;
	cout << "  1 2 3 4 5 6 7 8 9 0 "
	

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 0)
				cout << letters[i];
			if (myField[i][j].getShip())
			{
				if (myField[i][j].getHit())
					cout << "X ";
				else
					cout << "S ";
			}
			else
			{
				if (myField.getMiss())
					cout << "M ";
				else
					cout << "W ";
			}
			if (j == 9)
				cout << endl;
		}

	}
	cout << "W=Water" << endl;							//prints the key
	cout << "S=Ship" << endl;
	cout << "X=Hit" << endl;
	cout << "M=Miss" << endl;
}
void Field::displayFieldAI()
{
	char[10] letters = [A, B, C, D, E, F, G, H, I, J];
	cout << "Opponent's Field" << endl;
	cout << "  1 2 3 4 5 6 7 8 9 0 "
	  

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 0)
				cout << letters[i];
			if (AIField[i][j].getShip())					//myField for AI = AIField?
			{
				if (AIField[i][j].getHit())
					cout << "X ";
				else
					cout << "W ";
			}
			else
			{
				if (AIField[i][j].getMiss())
					cout << "M ";
				else
					cout << "W ";
			}
			if (j == 9)
				cout << endl;
		}
		cout << "W=Water" << endl;							//prints the key
		cout << "S=Ship" << endl;
		cout << "X=Hit" << endl;
		cout << "M=Miss" << endl;

	}



}
int Field::hit(int r, int c)
{
	if (myField[r][c].getShip())
	{
		myField[r][c].editHit();
		Ship* boat = myField[r][c].get_ship();
		return boat.hitShip();
	}
	else
	{
		myField[r][c].editMiss();
		return 0;
	}
}
int Field::getHit(int r, int c)
{
	return myField[r][c].getHit();
}
