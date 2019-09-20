#include "gameManager.h"
using namespace std;


gameManager::gameManager()
  {
    start = false;
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
  int playerChoice = 6942069;
  while(start != true)
    {


      cout << "===WELCOME TO BATTLESHIP!====" << endl <<
      "========Select Number and Hit Enter to Choose Option===========" << endl <<
      "1.) Start Game" << endl <<
      "2.) Rules" << endl <<
      "3.) Close Game\n===============================================" << endl;

      cin >> playerChoice;

      if(playerChoice == 1)
        {
           start = true;
        }
     else if(playerChoice == 2)
       {
         do{
            cout << "Please input new number of ships to play (must be between 1 and 5): " << endl;
            cin >> numOfShips;

            if (numOfShips < 1 || numOfShips > 5)
            {
              cout<<"ERROR: Invalid Input!\n";
            }
          } while(numOfShips < 1 || numOfShips > 5);

        cout<< "Number of ships in game: " << numOfShips << endl;

       }
    else if(playerChoice == 3)
       {
         cout<<"Thanks for playing!" << endl;
         exit(-1);
       }
    else
      {
        cout << "Invalid Menu Choice! Please Choose Again.\n";
      }
    }
  if(start == true)
  {
    gameLoop();
  }
}
void gameManager::gameLoop()
{
  cout<<"Game Starting!\n";
  cout<<"Setting up Player 1...\n";
  Player p1(numOfShips);
  cout<<"Setting up Player 2...\n";
  Player p2(numOfShips);
  string s = "";
  while(!p1.isDead() && !p2.isDead())
  {
    cout<< "=======================\nPlayer One: it's your turn!\n=======================";
    playerTurn(p1, p2);
    if (p2.isDead())
    {
      gameOver(p1);
      break;
    }
    cout << "Press any key(AND ENTER) to begin Player 2's turn: \n"; //dont know how to make accept just keypress.
    cin >> s;
    cout<< "=======================\nPlayer Two: it's your turn!\n=======================";
    playerTurn(p2, p1);
    if (p1.isDead())
    {
      gameOver(p2);
      break;
    }
    cout << "Press any key(AND ENTER) to begin Player 1's turn: \n"; //same as comment above. (WIP)
    cin >> s;
  }
  playerMenu();
}
void gameManager::playerTurn(Player &p, Player &opponent)
{
  cout << '\n';
  cout<<"YOUR BOARD: \n";
  p.getBoard('o').printBoard(); //'o' represents "own board"
  cout<<"\nTARGET BOARD: \n";
  p.getBoard('e').printBoard(); //'e' represents "enemy board"
  cout << '\n';
  int xVal =0;
  int yVal =0;
  bool validX = true;
  bool validY = true;
do
{
  validX = true;
  validY = true;
  char xTemp = ' ';
  string playerShot = "";
  cout << "Enter space to fire at: ";
  cin >> playerShot;
  xTemp = tolower(playerShot.at(0));
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
		cout <<"X Position Out of Bounds!\n";
    validX = false;
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
		cout <<"Y Position Out of Bounds!\n";
    validY = false;
		break;
	}
  if (p.getBoard('e').getPos(xVal, yVal) == 'm' || p.getBoard('e').getPos(xVal, yVal) == 'h')
  {
    validX = false;
    validY = false;
  }
} while (!validX || !validY);

if(p.fireShot(xVal,yVal, opponent))
{
  opponent.receiveHit(xVal, yVal);
}
cout<<"TARGET BOARD: \n";
p.getBoard('e').printBoard();


}

void gameManager::gameOver(Player winner)
{
  cout<<"============\nGAME OVER\n============\n";
  {
    //if (winner == p1)
    //cout<<"Player 1 Wins!\n";

    //else if (winner == p2)
    //cout<<"Player 2 Wins!\n";

    //else
    //cout<<"Whoops!  Something's not right here.\n";
  }
}
