#include "Board.h"
#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player
  {
  public:
    ~Player();
    Player(int numShips);
    void placeShips(int xPos, int yPos, char orientation); //Method to place ships on board
    void fireShot(int xPos, int yPos); //Fires shots at enemy

  private:
    Board ownBoard; //Board designating where own ships are
    Board enemyBoard; //Board showing where player has fired/hit enemy ships
    int numShips = 0;

  };
#endif
