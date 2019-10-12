#ifndef SCOREBOARD_H
#define SCOREBOARD_H
#include "score.h"

using namespace std;

class scoreBoard {

public:

	int getTxtSize(){
		ifstream inFile;
		string incoming = "";
		int numScores = 0;

		inFile.open(fileName);
		if(inFile.is_open())
			while (inFile >> incoming)
				numScores++;
		inFile.close()
		return (numScores/=2); //this determins the number of scores because each score has two entries in the txt file

	}

	score* readOldScores(score newScore){ ///NEEDS IMPLEMENTED
		ifstream inFile;
		string oldInitials = "";
		int oldScoreTotal;
		score oldScore;
		int i = 0;
		int j = 0;
		string incoming = "";
		bool inserted = false
		score* allScores = new score[getTxtSize()+1];

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
						allScores[j] = newScore;
						inserted = false;
						j++;
					}
					allScores[j] = new score(oldInitials, oldScoreTotal);
				}
				i++;
			}
		}
		cout << "High Scores:\n";
		printScoreBoard(allScores);


		for(int i = 0; i < getTxtSize(); i++){
			delete allScores[i];
		}
		delete allScores;
	}

/*	void writeNewScore(score score){ ///NEEDS IMPLEMENTED
	/*	ofstream myfile;
	  myfile.open (outFile);
	  myfile << "Writing this to a file.\n";
	  myfile.close();
	}
*/

	void printScoreBoard(score* highScores){
		ofstream outFile;
		outFile.open(fileName);
		if(outFile.is_open()) {
			for(int i = 0; i < (getTxtSize()); i++){
				cout << highScores[i] << endl;
				outfile << highScores[i] << endl;
			}
		outfile.close();
		}
	}


private:
	string fileName = "scoreBoard.txt";

}

#endif
