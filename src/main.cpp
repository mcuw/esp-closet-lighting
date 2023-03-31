#include <Arduino.h>

#define REPOSITORY "mcuw/esp-closet-lighting"
#define FIRMWARE_VERSION 1

void setup()
{
  Serial.begin(115200);
  while (!Serial)
    ;
}

void loop()
{
  Serial.println("Hello ECL");

  Serial.print("env: ");
  Serial.println(PIOENV); // env for firmware filename

  delay(2000);
}