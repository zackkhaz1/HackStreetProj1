/**
 @author Runtime Terrors (Abby Davidow, Anissa Khan, Jacob Swearingen, Grant Schnettgoecke, Chongzhi Gao)
 @date 10/16/19
 @file score.cpp
 @brief implements score.h methods
*/
#include "score.h"

score::score(int scoreTotal){
	cout<< "\nEnter in your initials like \"xyz\", champ: ";
	do{
		cin>>m_initials;
		if(m_initials.length() > 3)
			cout<<"\nWhoa there champ, just three characters: ";
		if(m_initials.length() < 3)
			cout<<"\nCome on champ, type all three characters: ";

	}while(m_initials.length() != 3);
	m_scoreTotal=scoreTotal;
}

score::score(string initials, int scoreTotal){
	m_initials = initials;
	m_scoreTotal = scoreTotal;
}

string score::getInitials(){
	return m_initials;
}

int score::getScoreTotal(){
	return m_scoreTotal;
}
