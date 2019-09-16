#include "Player.h"

Player::Player(int numShips)
  {

      Ship myShips[numShips];
      for (int i = 1; i <= numShips; i++)
      {
        //myShips[i-1] = Ship(i); Not sure what this line means/does
      }
      ownShips = myShips;
      placeShips();

  }

void Player::placeShips()
  {
    for(int i = 0; i < numShips; i++)
    {
      //ownShips[i].placeShip(); placeShip is member of player class not ship class
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
