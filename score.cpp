#include "score.h"

score::score(int scoreTotal){
	cout<< "Enter in your initials like \"xyz\", champ: ";
	do{
		cin>>m_initials;
		if(m_initials.length() > 3)
			cout<<"Whoa there champ, just three characters: ";
		if(m_initials.length() < 3)
			cout<<"Come on champ, type all three characters: ";

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
