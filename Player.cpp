#include "Player.h"
Player::Player()
{

}
Player::Player(int numShips)
  {

      Ship myShips[numShips];
      for (int i = 1; i <= numShips; i++)
      {
        myShips[i-1] = Ship tempShip(i);
      }
      ownShips = myShips;
      placeShips();

  }
Player::~Player()
{

}
Board Player::getBoard(char choice)
{
  if(choice == 'o')//if choice is own board, return own board.
  {
    return(ownBoard);
  }
  else //if choice is enemy board, return enemy board.
  {
    return(enemyBoard);
  }

}
void Player::placeShips()
  {
    for(int i = 0; i < numShips; i++)
    {
      cout<<"Placing Ship of Size: "<<(i+1)<<"\nPlease input coordinates and orientation: "
      ownShips[i].setHeadPos(int xPos, int yPos);
    }
  }
void Player::fireShot(int xPos, int yPos)
{

    if(enemyBoard.getPos(xPos,yPos) == 's') //where s represents a ships presence.
    {
        enemyBoard.setPos(xPos,yPos, 'h');//h represents a ship turned into a hit
    }
    else if(enemyBoard.getPos(xPos,yPos) == 'w')//w represents empty water
    {

      enemyBoard.setPos(xPos,yPos,'m');//m represents a miss that landed in water.

    }
}

void Player::receiveHit(int xPos, int yPos)
{
  for (int i = 0; i < numShips; i++)
  {
    if (ownShips[i].coordCheck(xPos, yPos))
    {
      ownShips[i].addHit();
      break;
    }
  }
}

bool Player::isDead()
{
  bool tempDead = true;
  for (int i = 0; i < numShips; i++)
  {
    if (ownShips[i].isSunk() == false)
    {
      tempDead = false;
    }
  }
  return tempDead;
}
