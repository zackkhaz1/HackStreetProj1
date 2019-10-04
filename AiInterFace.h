#ifndef AIINTERFACE_H
#define AIINTERFACE_H
#include <string>
#include <iostream>
using namespace std;
class AiInterFace
{
private:

public:
  virtual std::string selectCordinate() =0;// return Cordinate
  virtual void AIsetUp() =0;
  virtual std::string AIhit() =0;//return string
};
#endif
