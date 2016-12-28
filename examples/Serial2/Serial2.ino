#include <Snes.h>

#define clock 2
#define strobe 3
#define data 4

Snes controller(clock, strobe, data);

void setup()
{
  Serial.begin(9600);
  Serial.println("SNES");
}

void loop()
{
  word state = controller.read();

  if (bitRead(state, UP) == true)
  {
    Serial.println("UP");
  }
  else if (bitRead(state, DOWN) == true)
  {
    Serial.println("DOWN");
  }
  else if (bitRead(state, LEFT) == true)
  {
    Serial.println("LEFT");
  }
  else if (bitRead(state, RIGHT) == true)
  {
    Serial.println("RIGHT");
  }

  delay(1000);
}
