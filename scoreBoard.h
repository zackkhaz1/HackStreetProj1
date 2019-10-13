#ifndef SCOREBOARD_H
#define SCOREBOARD_H
#include "score.h"
#include <vector>

using namespace std;

class scoreBoard {

public:

	int getTxtSize();
	void readOldScores(score newScore);
	void printScoreBoard(vector<score> highScores);

	friend ostream& operator<<(ostream &os, score& right){
		os << right.getInitials() << "			" << right.getScoreTotal();
		return os;
	}

private:
	string fileName = "scoreBoard.txt";

};

#endif
