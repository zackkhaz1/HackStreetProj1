#include "Board.h"
#include <iostream>
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

void Board::setPos(int xPos,int yPos, char val)
  {
    map[xPos][yPos] = val;
  }
char Board::getPos(int xPos, int yPos)
  {
    return(xPos,yPos);
  }

void Board::printBoard()
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
