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
  string s = "";
  while(gameOver != true)
  {
    cout<< "=======================\nPlayer One: it's your turn!\n=======================";
    playerTurn(p1);
    cout << "Press any key(AND ENTER) to begin Player 2's turn: \n"; //dont know how to make accept just keypress.
    cin >> s;
    cout<< "=======================\nPlayer Two: it's your turn!\n=======================";
    playerTurn(p2);
    cout << "Press any key(AND ENTER) to begin Player 1's turn: \n"; //same as comment above. (WIP)
    cin >> s;
}
}
void gameManager::playerTurn(Player p)
{
cout << '\n';
cout<<"YOUR BOARD: \n";
p.getBoard('o').printBoard(); //'o' represents "own board"
cout<<"\nTARGET BOARD: \n";
p.getBoard('e').printBoard(); //'e' represents "enemy board"
cout << '\n';
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
		xVal = 0;
		break;
	         case 'b':
		xVal = 1;
		break;
           case 'c':
		xVal = 2;			//switch block transforms first char in input string from the player into integer value.
		break;
	         case 'd':
		xVal = 3;
		break;
           case 'e':
		xVal = 4;
		break;
	         case 'f':
		xVal = 5;
		break;
           case 'g':
		xVal = 6;
		break;
	         case 'h':
		xVal = 7;
		break;
	         default:
		cout <<"Choice Out of Bounds!\n";
		break;
  }
    switch (yVal)
	{
           case '1':
		yVal = 0;
		break;
	         case '2':
		yVal = 1;
		break;
           case '3':
		yVal = 2;			//switch block transforms second char into integer value for grid.
		break;
	         case '4':
		yVal = 3;
		break;
           case '5':
		yVal = 4;
		break;
	         case '6':
		yVal = 5;
		break;
           case '7':
		yVal = 6;
		break;
	         case '8':
		yVal = 7;
		break;
	         default:
		cout <<"Choice Out of Bounds!\n";
		break;
	}

p.fireShot(xVal,yVal);
cout<<"TARGET BOARD: \n";
p.getBoard('e').printBoard();


}
