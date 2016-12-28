#include <Snes.h>

#define clock 2
#define strobe 3
#define data 4

word state;

Snes controller(clock, strobe, data);

void setup()
{
  Serial.begin(9600);
  Serial.println("----+");
  Serial.println("SNES|        S");
  Serial.println("----+   R   Se");
  Serial.println("        iLD tl");
  Serial.println("        geo ae");
  Serial.println("        hfwUrc");
  Serial.println("    RLXAttnpttYB");
}

void loop()
{
  Serial.println(controller.read(),BIN);
  delay(1000);
}
