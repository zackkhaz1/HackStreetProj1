#include "Board.h"
#include <iostream>
using namespace std;

Board::~Board()
  {

  }

Board::Board()
{
  for(int r=0; r<8; r++)
  {
    for(int c=0; c<8; c++)
    {
      mapp[r][c]='w';
    }
  }
}

void Board::setPos(int xPos,int yPos, char val)
  {
    mapp[xPos][yPos] = val;
  }
char Board::getPos(int xPos, int yPos)
  {
    return( mapp[xPos][yPos] );
  }

void Board::printBoard()
{

  for(int r=0; r<8; r++)
  {
    for(int c=0; c<8; c++)
    {
      cout << mapp[r][c] << " ";
    }
    cout << "\n";
  }
}
