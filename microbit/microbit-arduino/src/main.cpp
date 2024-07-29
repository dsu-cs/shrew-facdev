#include <Arduino.h>

const int COL3 = 3;     // column 3
const int LED = 25;     // bottom LED

void setup() {
	Serial.begin(9600);
	Serial.println("microbit is ready!");

	pinMode(COL3, OUTPUT);
	digitalWrite(COL3, LOW); 

	pinMode(LED, OUTPUT);   
}

void loop() {
	Serial.println("blink!");
	
	// blink on and off every 500 ms 
	digitalWrite(LED, HIGH);
	delay(500);
	digitalWrite(LED, LOW);
	delay(500);
}