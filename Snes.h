#ifndef SNES_h
#define SNES_h

#include "Arduino.h"

class Snes
{
  public:
    Snes(int clock, int strobe, int data);
    word read();

	#define UP 5
	#define DOWN 6
	#define LEFT 7
	#define RIGHT 8

	#define A 9
	#define B 1

	#define X 10
	#define Y 2

	#define L 11
	#define R 12

	#define SELECT 3
	#define START 4
  private:
    int _clock;
    int _strobe;
    int _data;
	word _state;
};

#endif
