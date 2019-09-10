#ifndef BOARD_H
#define BOARD_H
using namespace std;
class Board
{
public:
Board();
~Board();
void setPos(xPos,yPos,val);
char getPos(xPos,yPos);
printBoard();
private:
char map[8][8];


