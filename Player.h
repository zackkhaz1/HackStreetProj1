#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player
  {
  public:
    ~Player();
    Player(int numShips);
    void placeShips(int xPos, int yPos);
    void fireShot(int xPos, int yPos);
     
  private:
    Board ownBoard;
    Board enemyBoard;
    int ships = 0;


  };
#endif
