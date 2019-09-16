
#ifndef SHIP_H
#define SHIP_H

using namespace std;
class Ship
{
public:
  Ship(int ShipSize);
  ~Ship();
  void setSize(int val);
  int getSize();
  void setOrientation(char vh);
  char getOrientation();
  void setSunk(bool tf);
  bool isSunk();
  void addHit();
  int getHits();
  void setHeadPos(int xPos, int yPos);
  int getHeadXPos();
  int getHeadYPos();

private:
  int size;
  char orientation;
  bool sunk;
  int hits;
  int headXPos;
  int headYPos;
};
#endif
