#include "Ship.h"
Ship::Ship()
{
	
}

Ship::Ship(int ShipSize)
{
	size = ShipSize;
	orientation = 'h';
	sunk = false;
	hits = 0;
}



int Ship::getSize()
{
	return(size);
}


void Ship::setOrientation(char vh) //Vertical/Horizontal
{
	orientation = vh;
}

char Ship::getOrientation()
{
	return(orientation);
}

void Ship::setSunk(bool tf) //True/false
{
	sunk = tf;
}

bool Ship::isSunk()
{
	return(sunk);
}

void Ship::addHit()
{
	hits++;
}

int Ship::getHits()
{
	return(hits);
}

void Ship::setPositions(int xPos, int yPos)
{
	int xPosArr[size];//Creates an array for the X positions of the ship.
	int yPosArr[size];//Creates an array for the Y positions of the ship.

	if(orientation == 'h') //If 'h' fill arrays with of ship in the horizontal direction
	{
		for(int i = 0; i < size; i++)
		{
			xPosArr[i] = xPos + i;
			yPosArr[i] = yPos;
		}
	}else if(orientation == 'v')//If 'v' fill arrays with of ship in the vertical direction
	{
		for(int i = 0; i < size; i++)
		{
			yPosArr[i] = yPos + i;
			xPosArr[i] = xPos;
		}
	}

	xPositions = xPosArr;//point xPositions member variable to xPosArr
	yPositions = yPosArr;//point yPositions member variable to yPosArr
}

Ship::~Ship(){
}
