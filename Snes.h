#ifndef SNES_h
#define SNES_h

#include "Arduino.h"

class Snes
{
  public:
    Snes(int clock, int strobe, int data);
    word read();
  private:
    int _clock;
    int _strobe;
    int _data;
	word _state;
};

#endif
