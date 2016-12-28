/*
  Snes.cpp - Library for SNES Controller.
  Created by jst, December 28, 2016.
*/

#include "Arduino.h"
#include "Snes.h"

Snes::Snes(int clock, int strobe, int data)
{
  pinMode(clock, OUTPUT);
  pinMode(strobe, OUTPUT);
  pinMode(data, INPUT);

  _clock = clock;
  _strobe = strobe;
  _data = data;
}

word Snes::read()
{
  digitalWrite(_clock, HIGH);    //Clock is active low

  digitalWrite(_strobe, HIGH);   //Impuls for data output
  delayMicroseconds(12);
  digitalWrite(_strobe, LOW);

  for (int i = 0; i < 16; i++)  //Generate clock signal an read data at the falling edge
  {
    delayMicroseconds(6);
    digitalWrite(_clock, LOW);
    bitWrite(_state, i, digitalRead(_data));    //Data is active low, so a zero is printed for button down
    delayMicroseconds(6);
    digitalWrite(_clock, HIGH);
  }

  return _state;
}
