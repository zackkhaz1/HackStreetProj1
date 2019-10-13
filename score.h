#ifndef SCORE_H
#define SCORE_H
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class score {
public:
	score();
	score(int scoreTotal);
	score(string initials, int scoreTotal);
	string getInitials();
	int getScoreTotal();
	friend ostream& operator<<(ostream &os, vector<score>& right);


private:
	string m_initials;
	int m_scoreTotal;
};
#endif
