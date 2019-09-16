#include "gameManager.h"
using namespace std;
gameManager::gameManager()
{
start = false;
gameOver = false;
run();
}
gameManager::~gameManager()
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
  int playerChoice=0;
  while(start != true)
    {

      cout << "===WELCOME TO BATTLESHIP!====\n========Select Number and Hit Enter to Choose Option===========\n1.) Start Game\n 2.)Rules\n3.)Close Game\n===============================================\n";
      cin >> playerChoice;
      if(playerChoice == 1)
        {
           start = true;
        }
     else if(playerChoice == 2)
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
void gameManager::playerTurn(Player p)
{
int xVal =0;
int yVal =0;
char xTemp = ' ';
string playerShot = "";
cout << "Enter space to fire at: ";
cin >> playerShot;
xTemp = playerShot.at(0);
yVal = playerShot.at(1);
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
p.fireShot(xVal,yVal);


}
