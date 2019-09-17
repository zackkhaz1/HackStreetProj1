#include "Board.h"
#include <iostream>
using namespace std;

Board::~Board()
  {
    for(int i = 0; i < 8; i++)
      {
        delete mapp[i];
      }
    delete mapp;
  }

Board::Board()
{

  for(int r=0; r<8; r++)
  {
    mapp[r] = new char[8];
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
      cout << "  A B C D E F G H\n";
  for(int r=0; r<8; r++)
  {
      cout <<r+1 <<" ";
    for(int c=0; c<8; c++)
    {
      cout << mapp[r][c] << " ";
    }
    cout << "\n";
  }
}
