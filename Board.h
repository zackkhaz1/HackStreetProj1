#ifndef BOARD_H
#define BOARD_H
using namespace std;
class Board
{
public:
Board();
~Board();
void setPos(xPos,yPos,val);
int getPos(xPos,yPos);
private:
int ship_Board[8][8];
int shot_Board[8][8];

