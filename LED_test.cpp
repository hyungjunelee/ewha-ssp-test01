// Do not remove the include below
#include "LED_test.h"

#define FRONT_LED_PIN	10
#define REAR_LED_PIN	9	//Add a new code

//The setup function is called once at startup of the sketch
void setup()
{
	pinMode(FRONT_LED_PIN, OUTPUT);
	pinMode(REAR_LED_PIN, OUTPUT); //Add a new code

}

// The loop function is called in an endless loop
void loop()
{
	digitalWrite(FRONT_LED_PIN, HIGH);
	digitalWrite(REAR_LED_PIN, HIGH); //Add a new code

	delay(1000);

	digitalWrite(FRONT_LED_PIN, LOW);
	digitalWrite(FRONT_LED_PIN, LOW); //Add a new code

	delay(1000);
}
