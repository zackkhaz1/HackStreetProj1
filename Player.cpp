#include "Player.h"

Player::Player()
  {
    do {
      cout << "How many ships would you like?" << endl;
      cin >> numShips;
      if(numShips > 5 || numShips < 1) //Checks if number of ships is valid
        {
          cout << "Please enter a number between 1 and 5" << endl;
        }
    } while(numShips > 5 && numShips < 1); //Loops until valid number is given

  }

void Player::placeShips(int xPos, int yPos)
  {
    for(int i = 1; i == numShips; i++)
      {
        if(i == 1)
        {
          cout << "Where would you like to place your ships" << endl;
        }
        if(i > 1)
          {
            cout << "Place your next ship" << endl;
          }
      }
  }
