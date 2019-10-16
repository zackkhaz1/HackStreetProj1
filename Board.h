/**
    @author Zackariah Khazraeinazmpour,Hunter Cobb, Brandon Wheat, Justin Khounsombath, William Burdick
    @date September 22, 2019
    @file Board.h
    @brief Board Class that acts as a data structure to store ship placement.
    */
#ifndef BOARD_H
#define BOARD_H
#include "Ship.h"
#include <iostream>

using namespace std;
class Board
{
public:
  /** Default constructor. Initializes all positions on board to water.
        */
Board();
~Board();
/**Set a position on the board.
    @param xPos - x coordinate of the point
    @param yPos - y coordinate of the point
    @param val - value to be inputted.
    */
void setPos(int xPos,int yPos, char val);
/**Set a position on the board.
    @param xPos - x coordinate of the point
    @param yPos - y coordinate of the point
    @return letter at position provided
    */
char getPos(int xPos, int yPos);
/**Set a position on the board.
    Prints out the Board to the player through console.
    */
void printBoard(); // w = water; s = ship; h = hit; m = miss;
private:
char mapp[8][8];/**2D array of chars that holds the board */
};
#endif
