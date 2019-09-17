#ifndef BOARD_H
#define BOARD_H
#include "Ship.h"
#include <iostream>

using namespace std;
class Board
{
public:
Board();
~Board();
void setPos(int xPos,int yPos, char val);
char getPos(int xPos, int yPos);
void printBoard(); // w = water; s = ship; h = hit; m = miss;
private:
char** mapp = new char*[8];
};
#endif
