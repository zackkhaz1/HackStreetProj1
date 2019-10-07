#ifndef ANIMATIONS_H
#define ANIMATIONS_H

#include<iostream>
using namespace std;

class Animations{

 public:
   Animations();
   ~Animations();
   void playHit();
   void playMiss();
   void playSunk();
   void playP1Wins();
   void playP2Wins();
};
#endif
