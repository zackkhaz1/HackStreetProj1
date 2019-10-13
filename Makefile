
Battleship: main.o Board.o Ship.o Player.o gameManager.o Animations.o scoreBoard.o score.o
		g++ -std=c++11 -g -Wall main.o Board.o Ship.o Player.o gameManager.o Animations.o scoreBoard.o score.o -o Battleship
main.o: main.cpp Player.o
		g++ -std=c++11 -g -Wall -c main.cpp
gameManager.o: gameManager.h gameManager.cpp Player.h Animations.h scoreBoard.h
		g++ -std=c++11 -g -Wall -c gameManager.cpp
Player.o: Player.h Player.cpp Board.h
		g++ -std=c++11 -g -Wall -c Player.cpp
Ship.o: Ship.h Ship.cpp
		g++ -std=c++11 -g -Wall -c Ship.cpp
Board.o: Board.h Board.cpp
		g++ -std=c++11 -g -Wall -c Board.cpp
Animations.o: Animations.h Animations.cpp
	g++ -std=c++11 -g -Wall -c Animations.cpp
scoreBoard.o: scoreBoard.h scoreBoard.cpp
	g++ -std=c++11 -g -Wall -c scoreBoard.cpp
score.o: score.h score.cpp
	g++ -std=c++11 -g -Wall -c score.cpp
clean:
	rm *.o Battleship
