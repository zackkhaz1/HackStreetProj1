#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include "Player.h"
using namespace std;

class gameManager
  {
  public:
    gameManager();
    ~gameManager();
    void run(); //method that will be called from main.cpp to run rest of class.

  private:
    int numOfShips = 1;
    Player p1;
    Player p2;
    bool start; //will signify if gameLoop should be started and menu is left
    string PlayerShot;
    void playerMenu(); //main menu display where number of ships will be chosen/pre-game
    void setPlayerShips(Player name, int numOfShips);
    void gameLoop();   //game loop that runs until somone wins, loses or the game breaks.
    void setHit(int xPos, int yPos);     //sets hit markers on hit/miss board.
    void setMiss(int xPos, int yPos);    //sets miss markers on hit/miss board..
    void playerTurn(Player p, Player opponent);
    void gameOver(Player winner);


};
#endif
