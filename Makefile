Battleship: main.o Board.o Ship.o Player.o
		g++ -std=c++11 -g -Wall -o Battleship main.o Board.o Ship.o Player.o
main.o: main.cpp Player.o
		g++ -std=c++11 -g -Wall -c main.cpp
Player.o: Player.h Player.cpp
		g++ -std=c++11 -g -Wall -c Player.cpp
Ship.o: Ship.h Ship.cpp
		g++ -std=c++11 -g -Wall -c Ship.cpp
Board.o: Board.h Board.cpp
		g++ -std=c++11 -g -Wall -c Board.cpp
clean:
			rm *.o Battleship
