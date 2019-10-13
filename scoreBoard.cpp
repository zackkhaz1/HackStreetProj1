#include "scoreBoard.h"

int scoreBoard::getTxtSize(){
	ifstream inFile;
	string incoming = "";
	int numScores = 0;

	inFile.open(fileName);
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
	int j = 0;
	string incoming = "";
	bool inserted = false;
	//score *allScores = new score[(getTxtSize()+1)]; //consider using vectors
	vector<score> allScores(getTxtSize()+1);
	score tempscore;
	inFile.open(fileName);
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
					j++;
				}
				score tempscore(oldInitials, oldScoreTotal);
				allScores[j] = tempscore;
			}
			i++;
		}
	}
	cout << "High Scores:\n";
	printScoreBoard(allScores);


/*	for(int i = 0; i <= getTxtSize(); i++){
		delete[] allScores[i];
	}
	delete[] allScores;
	*/
}
/*	void writeNewScore(score score){ ///MIGHT NEED IMPLEMENTED
	ofstream myfile;
	myfile.open (outFile);
	myfile << "Writing this to a file.\n";
	myfile.close();
}
*/

void scoreBoard::printScoreBoard(vector<score> highScores){
	ofstream outFile;
	outFile.open(fileName);
	if(outFile.is_open()) {
		for(int i = 0; i <= getTxtSize(); i++){
			cout << highScores[i] << endl;
			outfile << highScores[i] << endl;
		}
	outFile.close();
	}
}
