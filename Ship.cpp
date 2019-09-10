#include "Ship.h"
Ship::Ship(){
	size = 1;
	orientation = 'h';
	sunk = false;
	hits = 0;
}

void Ship::setSize(int val){
	size = val;
}

int Ship::getSize(){
	return(size);
}

void Ship::setOrientation(char vh){
	orientation = vh;
}

char Ship::getOrientation(){
	return(orientation);
}

void Ship::setSunk(bool tf){
	sunk = tf;
}

bool Ship::isSunk(){
	return(sunk);
}

void Ship::addHit(){
	hits++;
}

int Ship::getHits(){
	return(hits);
}

Ship::~Ship(){
}
