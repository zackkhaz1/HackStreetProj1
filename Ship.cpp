#include "Ship.h"



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

Ship::~Ship(){
}
