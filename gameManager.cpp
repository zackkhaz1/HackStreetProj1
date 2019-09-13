#include "gameManager.h"
using namespace std;
gameManager::gameManger()
{
start = false;
gameOver = false;

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

      cout << "===WELCOME TO BATTLESHIP!====\n========Select Number and Hit Enter to Choose Option===========\n1.) Start Game\n 2.)Rules\n3.)Close Game\n===============================================\n";
      cin >> playerChoice;
      if(playerChoice == 1)
        {
           start = true;
        }
     else if(PlayerChoice == 2)
       {
          
       }
    else if(playerChoice == 3)
       {
	 
       }
    else
      {
        cout << "Invalid Menu Choice! Please Choose Again.\n";
      }
    }

}
void gameManager::gameLoop()
{
while(gameOver != true)
{
playerTurn(p1);
playerTurn(p2);
}
}
void gameManager::setHit(int xPos, int yPos)
{

}
void gameManager::setMiss(int xPos, int yPos)
{

}
void gameManager::playerTurn(Player p)
{

}
