#include "Player.h"
Player::Player()
{

}
Player::Player(int numShips)
  {

      Ship myShips[numShips];
      for (int i = 1; i <= numShips; i++)
      {
        //myShips[i-1] = Ship(i); Not sure what this line means/does -zack
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
  else if(choice == 'e') //if choice is enemy board, return enemy board.
  {
    return(enemyBoard);
  }
  else
  {
    return(ownBoard);
  }
}
void Player::placeShips()
  {
    for(int i = 0; i < numShips; i++)
    {
      //ownShips[i].placeShip(); placeShip is member of player class not ship class -zack
    }
  }
void Player::fireShot(int xPos, int yPos)
{

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
