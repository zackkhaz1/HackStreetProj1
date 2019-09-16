#include "Board.h"
#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player
  {
  public:
    ~Player();
    Player();
    Player(int numShips);
    void placeShips(); //Method to place ships on board
    void fireShot(int xPos, int yPos); //Fires shots at enemy
    bool isDead(); //Checks if all of player's ships are sunk
    Board getBoard(char choice);
    void receiveHit(int xPos, int yPos); //Takes the enemy player's hit an applies it to the ship that was hit


  private:
    Board ownBoard; //Board designating where own ships are
    Board enemyBoard; //Board showing where player has fired/hit enemy ships
    int numShips = 0;
    Ship* ownShips; //Points toward array of ships owned by the player

  };
#endif
