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
    cout<< "Player One: it's your turn!\n";
    playerTurn(p1);
    cout<< "Player Two: it's your turn!\n";
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
int xVal =0;
char xTemp = ' ';
cout << "Enter space to fire at: "
cin >> playerShot;
xTemp = playerShot.charAt(0);
    switch (xTemp)
	{
           case 'a':
		xVal = 1;
		break;
	   case 'b':
		xVal = 2;
		break;
           case 'c':
		xVal = 3;
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


}