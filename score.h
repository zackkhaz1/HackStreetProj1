/**
 @author Runtime Terrors (Abby Davidow, Anissa Khan, Jacob Swearingen, Grant Schnettgoecke, Chongzhi Gao)
 @date 10/16/19
 @file score.h
 @brief methods to hold score and initials
*/
#ifndef SCORE_H
#define SCORE_H
#include <fstream>
#include <string>
#include <iostream>
#include <vector>


using namespace std;

class score {

public:
	/*
	pre:  none
	param:  none
	post:  creates score object w/o member variables declared
	*/
	score(){}

	/*
	pre:  none
	param:  scoreTotal, which should come from a player object
	post:  creates score object with scoreTotal; prompts user for initials
	*/
	score(int scoreTotal);

	/*
	pre:  none
	param:  needs initials and scoreTotal; won't prompt user for initials
	post:  creates score object with initials and scoreTotal member variables defined
	*/
	score(string initials, int scoreTotal);

	/*
	pre:  score object must have been constructed and initials declared
	param:  none
	post:  none
	return:  returns the member variable  initials of a score
	*/
	string getInitials();

	/*
	pre:  score object must have been constructed and scoreTotal member variable declared
	param:  none
	post:  none
	return:  returns member variable scoreTotal integer
	*/
	int getScoreTotal();

private:
	string m_initials; //holds champs's name
	int m_scoreTotal; //holds champ's score

};
#endif
