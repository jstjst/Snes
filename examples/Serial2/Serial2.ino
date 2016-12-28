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

  if (bitRead(state, 5) == true)
  {
    Serial.println("UP");
  }
  else if (bitRead(state, 6) == true)
  {
    Serial.println("DOWN");
  }
  else if (bitRead(state, 7) == true)
  {
    Serial.println("LEFT");
  }
  else if (bitRead(state, 8) == true)
  {
    Serial.println("RIGHT");
  }

  delay(1000);
}
