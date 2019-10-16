/**
    @author William Burdick,Hunter Cobb, Brandon Wheat, Zackariah Khazraeinazmpour, Justin Khounsombath
    @date September 22, 2019
    @file Ship.h
    @brief Ship class that handles all cases of ships being shot. Is used by player to store ship information as a type of data structure.
    */
#ifndef SHIP_H
#define SHIP_H
#include <string>
using namespace std;
class Ship
{
public:
  /**Contsructor that takes in the size of the ship to store.marks sunk as false and hits at 0.
      */
  Ship(int ShipSize);
  /**Default constructor.
      */
  Ship();

  ~Ship();
  /**sets the size of the ship to be created.
      @param val - size to make the ship.
      */
  void setSize(int val);
  /**
      @return the size of the ship.
      */
  int getSize();
  /**Set a position on the board.
      @param vh - char to determine whether the ship will be vertical('v') or horizontal('h')
      */
  void setOrientation(string vh);
  /**
      @return the orientation of the ship(vertical or Horizontal)
      */
  string getOrientation();
  /**Sets whether the ship is sunk or not
    @param tf - boolean value of whether or not the ship is completely sunk.
      */
  void setSunk(bool tf);
  /**
     @return returns whether or not the ship is sunk.
     */
  bool isSunk();
  /**Adds a hit to the ship to keep track of whether its sunk yet or not.
      */
  void addHit();
  /**
    @return number of hits on a ship.
      */
  int getHits();
  /**Sets the positions of the ships on the board.
      @param xPos - x coordinate of the point
      @param yPos - y coordinate of the point
      */
  void setPositions(int xPos, int yPos);
  /**
      @return the xPositions of the ships
      */
  int getXPositions();
  /**
      @return the yPositions of the ships
      */
  int getYPositions();
  /**Checks if a coordinate is a hit, miss, or sunk
      @param xPos - x position to check
      @param yPos - y position to check
      @return boolean value of whether or not a coord is used.
      */
  bool coordCheck(int xPos, int yPos);

private:
  int size;/**size of the ship*/
  string orientation;/**Orientation of the ship*/
  bool sunk;/**Boolean that stores whether or not the ship is sunk*/
  int hits;/**stores the number of hits the ship has taken.*/
  int xPositions[5]; /**Points to an array of the X postions of each segment of the ship*/
  int yPositions[5]; /**Points to an array of the Y postions of each segment of the ship*/
};
#endif


/*
TODO:
figure out how ship object will be constructed, I think
using a setSize will be better
*/
