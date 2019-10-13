#ifndef SCOREBOARD_H
#define SCOREBOARD_H
#include "score.h"

using namespace std;

class scoreBoard {

public:

	int getTxtSize();
	void readOldScores(score newScore);
	void writeNewScore(score score);
	void printScoreBoard(vector<score> highScores);

};

#endif
