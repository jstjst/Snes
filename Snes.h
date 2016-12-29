#ifndef SNES_h
#define SNES_h

#include "Arduino.h"

class Snes
{
  public:
    Snes(int clock, int strobe, int data);
    word read();

	#define UP 4
	#define DOWN 5
	#define LEFT 6
	#define RIGHT 7

	#define A 8
	#define B 0

	#define X 9
	#define Y 1

	#define L 10
	#define R 11

	#define SELECT 2
	#define START 3
  private:
    int _clock;
    int _strobe;
    int _data;
	word _state;
};

#endif
