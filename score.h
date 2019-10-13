#ifndef SCORE_H
#define SCORE_H
#include <fstream>
#include <string>
#include <iostream>
#include <vector>


using namespace std;

class score {

public:
	score();
	score(int scoreTotal);
	score(string initials, int scoreTotal);
	string getInitials();
	int getScoreTotal();

private:
	string m_initials;
	int m_scoreTotal;
	
};
#endif
