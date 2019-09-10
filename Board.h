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
char ship_Board[8][8];
char shot_Board[8][8];

