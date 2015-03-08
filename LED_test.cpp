// Do not remove the include below
#include "LED_test.h"

#define FRONT_LED_PIN	10

//The setup function is called once at startup of the sketch
void setup()
{
	pinMode(FRONT_LED_PIN, OUTPUT);
}

// The loop function is called in an endless loop
void loop()
{
	digitalWrite(FRONT_LED_PIN, HIGH);
	delay(1000);

	digitalWrite(FRONT_LED_PIN, LOW);
	delay(1000);
}
