
Battleship: main.o Board.o Ship.o Player.o gameManager.o
		g++ -std=c++11 -g -Wall main.o Board.o Ship.o Player.o gameManager.o -o Battleship
main.o: main.cpp Player.o
		g++ -std=c++11 -g -Wall -c main.cpp
gameManager.o: gameManager.h gameManager.cpp
		g++ -std=c++11 -g -Wall -c gameManager.cpp
Player.o: Player.h Player.cpp
		g++ -std=c++11 -g -Wall -c Player.cpp
Ship.o: Ship.h Ship.cpp
		g++ -std=c++11 -g -Wall -c Ship.cpp
Board.o: Board.h Board.cpp
		g++ -std=c++11 -g -Wall -c Board.cpp
clean:
			rm *.o Battleship
 
