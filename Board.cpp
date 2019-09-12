#include "Board.h"
using namespace std;
Board::Board()
{
for(int r=0; r<8; r++)
{
  for(int c=0; c<8; c++)
  {
    map[r][c]='w';
  }
}
}
void Board::setPos(xPos,yPos,val)
{
  map[xPos,yPos] = val;
}
char Board::getPos(xPos,yPos)
{
  return(map,xPos,yPos);
}
void printBoard()
{
  for(int r=0; r<8; r++)
  {
    for(int c=0; c<8; c++)
    {
      cout << map[r][c] << " ";
    }
    cout << "\n";
  }
}
