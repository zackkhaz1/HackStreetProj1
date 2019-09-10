#include "Board.h"
using namespace std;
Board::Board(){
for(int r=0; r<8; r++){
  for(int c=0; c<8; c++){
    ship_Board[r][c] = 'w';
    shot_Board[r][c] = 'w';
  }
}
}
