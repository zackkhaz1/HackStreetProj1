
#ifndef SHIP_H
#define SHIP_H

using namespace std;
class Ship
{
public:
  Ship(int ShipSize);
  Ship();
  ~Ship();
  void setSize(int val);
  int getSize();
  void setOrientation(char vh);
  char getOrientation();
  void setSunk(bool tf);
  bool isSunk();
  void addHit();
  int getHits();
  void setPositions(int xPos, int yPos);
  int getXPositions();
  int getYPositions();
  bool coordCheck(int xPos, int yPos);

private:
  int size;
  char orientation;
  bool sunk;
  int hits;
  int* xPositions; //Points to an array of the X postions of each segment of the ship
  int* yPositions; //Points to an array of the Y postions of each segment of the ship
};
#endif


/*
TODO:
figure out how ship object will be constructed, I think
using a setSize will be better
*/
