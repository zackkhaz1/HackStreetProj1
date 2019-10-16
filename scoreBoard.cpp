/**
 @author Runtime Terrors (Abby Davidow, Anissa Khan, Jacob Swearingen, Grant Schnettgoecke, Chongzhi Gao)
 @date 10/16/19
 @file scoreBoard.cpp
 @brief writes and reads from scoreBoard.txt to print scoreboard
*/
#include "scoreBoard.h"

int scoreBoard::getTxtSize(){
	ifstream inFile;
	string incoming = "";
	int numScores = 0;

	inFile.open("scoreBoard.txt");
	if(inFile.is_open())
		while (inFile >> incoming)
			numScores++;
	inFile.close();
	return (numScores/=2); //this determines the number of scores because each score has two entries in the txt file
}

void scoreBoard::readOldScores(score newScore){
	ifstream inFile;
	string oldInitials = "";
	int oldScoreTotal;
	int i = 0;
	string incoming = "";
	bool inserted = false;
	vector<score> allScores;
	inFile.open("scoreBoard.txt");
	if(inFile.is_open()) {
		incoming = "";
		while (inFile >> incoming){

			if(i%2 == 0){
				oldInitials = incoming;
			}
			if(i%2 == 1){

				oldScoreTotal = stoi(incoming);
				if((newScore.getScoreTotal() >= oldScoreTotal)&&(!inserted)){
					allScores.push_back(newScore);
					inserted = true;
				}
				score tempScore(oldInitials, oldScoreTotal);
				allScores.push_back(tempScore);
			}

			i++;
		}
		if(!inserted){
			allScores.push_back(newScore);
			inserted = true;
		}
	}
	printScoreBoard(allScores);
}

void scoreBoard::writeNewScore(score score){
	ofstream myfile;
	myfile.open("scoreBoard.txt", ios_base::app);
	myfile << score.getInitials() << "			" << score.getScoreTotal()<<endl;
	cout << "             "<<score.getInitials() << "                         " << score.getScoreTotal()<<"           "<<endl;
	myfile.close();
}


void scoreBoard::printScoreBoard(vector<score> highScores){
        cout << "--------------------------------------------------------\n";
        cout << "|                      High Scores                     |\n";
        cout << "--------------------------------------------------------\n";
        cout << "|          Initials         |           Score          |\n";
        cout << "--------------------------------------------------------\n";
        ofstream myfile;
		myfile.open("scoreBoard.txt");
		myfile << "";
		myfile.close();
		for(int i = 0; i < highScores.size(); i++){
			writeNewScore(highScores[i]);
		}
}
