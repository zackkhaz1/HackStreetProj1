#include "Player.h"

Player::Player(int numShips)
  {
      ship[numShips] myShips;
      for (int i = 1; i <= numShips; i++)
      {
        myShips[i-1] = Ship(i);
      }
      ownShips = myShips;
      placeShips();
  }

void Player::placeShips()
  {
    for(int i = 0; i < numShips; i++)
    {
      ownShips[i].place();
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
