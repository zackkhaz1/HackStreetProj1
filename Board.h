#ifndef BOARD_H
#define BOARD_H
using namespace std;
class Board
{
public:
Board();
~Board();
void setPos(int xPos,int yPos, int val);
char getPos(int xPos, int yPos);
void printBoard();
private:
char map[8][8];

};
#endif