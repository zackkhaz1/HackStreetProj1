#ifndef SCORE_H
#define SCORE_H
#include "Player.h"
#include "Animations.h"
#include <fstream>
using namespace std;

class score {
public:
	score(int scoreTotal);
	score(string initials, int scoreTotal);
	string getInitials();
	int getScoreTotal();

friend ostream& operator<<(ostream &os, const score& right){
	os << right.getInitials() << "			" << right.getScore();
	return os;
}

private:
	string m_initials;
	int m_scoreTotal;
}
#endif
