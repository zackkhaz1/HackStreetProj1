#include "gameManager.h"
#include <iostream>
using namespace std;
gameManager::gameManger()
{
start = false;
gameOver = false;
run();
}
gameManger::~gameManager()
{

}

void gameManager::run()
{
playerMenu();
if(start == true)
{
   gameLoop();
}
}
void gameManager::playerMenu()
{
  while(start != true)
    {
      int tempShips = 5;
      cout << "===WELCOME TO BATTLESHIP!====\n========Select Number and Hit Enter to Choose Option===========\n1.) Start Game\n 2.)Rules\n3.)Close Game\n===============================================\n";
      cin >> playerChoice;
      if(playerChoice == 1)
        {
          cout<<"Game Starting!\n";
          Player p1(tempShips);
          Player p2(tempShips);
           start = true;
        }
     else if(PlayerChoice == 2)
       {
          cout<<"Current Ruleset: Number of ships = "<<tempShips<<"\nPlease input new number of ships to play (must be between 1 and 5): ";
          cin>>tempShips;
          if (tempShips < 1)
          {
            tempShips = 1;
          }
          else if (tempShips > 5)
          {
            tempShips = 5;
          }
          cout<<"New Ruleset: "<<tempShips<<" ships per game.";
       }
    else if(playerChoice == 3)
       {
         cout<<"Thanks for playing!";
         break;
       }
    else
      {
        cout << "Invalid Menu Choice! Please Choose Again.\n";
      }
    }
  gameLoop();
}
void gameManager::gameLoop()
{
  while(gameOver != true)
  {
    cout<< "Player One: it's your turn!\n";
    playerTurn(p1);
    gameOver = p2.isDead();
    if (gameOver)
    {
      gameEnd(p1);
    }
    else
    {
      cout<< "Player Two: it's your turn!\n";
      playerTurn(p2);
    }
    gameOver = p1.isDead();
    if (gameOver)
    {
      gameEnd(p2);
    }
  }
}
void gameManager::playerTurn(Player p)
{
int xVal =0;
int yVal =0;
char xTemp = ' ';
cout << "Enter space to fire at: "
cin >> playerShot;
xTemp = playerShot.charAt(0);
yVal = playerShot.charAt(1);
    switch (xTemp)
	{
           case 'a':
		xVal = 1;
		break;
	   case 'b':
		xVal = 2;
		break;
           case 'c':
		xVal = 3;			//switch block transforms first char in input string from the player into integer value.
		break;
	   case 'd':
		xVal = 4;
		break;
           case 'e':
		xVal = 5;
		break;
	   case 'f':
		xVal = 6;
		break;
           case 'g':
		xVal = 7;
		break;
	   case 'h':
		xVal = 8;
		break;
	   default:
		cout <<"Choice Out of Bounds!\n";
		break;
	}
p.fireShot(xPos,yPos);


}

void gameManager::gameEnd(player winner)
{
  cout<<"GAME OVER!\n";
  switch(winner)
  {
    case p1;
      cout<<"Player 1 is the winner!\n";
      break;
    case p2;
      cout<<"Player 2 is the winner!\n";
      break;
    default;
      cout<<"Whoops!  Looks like something's gone wrong.\n";
      break;
  }
}
