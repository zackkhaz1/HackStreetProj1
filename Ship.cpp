/**
@author William Burdick,Hunter Cobb, Brandon Wheat, Zackariah Khazraeinazmpour, Justin Khounsombath
@date September 22, 2019
@file Ship.cpp
@brief Implements Ship.h methods
*/
#include "Ship.h"
#include <iostream>
#include <string>
using namespace std;
Ship::Ship()
{
}

Ship::Ship(int ShipSize)
{
	size = ShipSize;
	orientation = "h";
	sunk = false;
	hits = 0;
}

int Ship::getSize()
{
	return(size);
}


void Ship::setOrientation(string vh) //Vertical/Horizontal
{
	orientation = vh;
}

string Ship::getOrientation()
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
	hits = hits+1;
	if(hits >= size*2){
			sunk = true;
	}
}

int Ship::getHits()
{
	return(hits);
}

void Ship::setPositions(int xPos, int yPos)
{
	if(orientation == "h") //If 'h' fill arrays with of ship in the horizontal direction
	{

		for(int i = 0; i < size; i++)
		{
			xPositions[i] = xPos + i;
			yPositions[i] = yPos;

		}
	}else if(orientation == "v")//If 'v' fill arrays with of ship in the vertical direction
	{
		for(int i = 0; i < 5; i++)
		{
			yPositions[i] = yPos + i;
			xPositions[i] = xPos;
		}
	}
}

bool Ship::coordCheck(int xPos, int yPos)
{
	for(int i = 0; i < size; i++)
	{

		if(xPos == xPositions[i] && yPos == yPositions[i])
		{
			return(true);//returns true if the coordinates given are equal to a ship's segment coordinates
		}
	}
	return(false);//returns false if coordinates given are not part of the ship
}

Ship::~Ship(){
}
