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
	return (numScores/=2); //this determins the number of scores because each score has two entries in the txt file
}

void scoreBoard::readOldScores(score newScore){ ///NEEDS IMPLEMENTED
	ifstream inFile;
	string oldInitials = "";
	int oldScoreTotal;
//	score oldScore;
	int i = 0;
	string incoming = "";
	bool inserted = false;
	//score *allScores = new score[(getTxtSize()+1)]; //consider using vectors
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
				score tempScore(oldInitials, oldScoreTotal);
				allScores.push_back(tempScore);
			}
			if((newScore.getScoreTotal() <= oldScoreTotal)&&(!inserted)){
				allScores.push_back(newScore);
				inserted = true;
			}
			i++;
		}
	}
	printScoreBoard(allScores);
}

void scoreBoard::writeNewScore(score score){ ///MIGHT NEED IMPLEMENTED
	ofstream myfile;
	myfile.open("scoreBoard.txt", ios_base::app);
	myfile << score.getInitials() << "			" << score.getScoreTotal()<<endl;
	cout << score.getInitials() << "			" << score.getScoreTotal()<<endl;
	myfile.close();
}


void scoreBoard::printScoreBoard(vector<score> highScores){
		cout << "High Scores:\n";
		ofstream myfile;
		myfile.open("scoreBoard.txt");
		myfile << "";
		myfile.close();
		for(int i = 0; i < highScores.size(); i++){
			writeNewScore(highScores[i]);
		}
		//		cout << highScores[i].getInitials() << "			" << highScores[i].getScoreTotal() << endl;
		//		outFile << highScores[i].getInitials() << "			" << highScores[i].getScoreTotal() << endl;
}
