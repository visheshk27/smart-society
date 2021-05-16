#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "W-Yv1eVEwxuAQvtT2yinEd8Yuszn1Y2J";
char ssid[] = "";
char pass[] = "";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
