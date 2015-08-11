/**
 * Simple Shift Register
 * The most simple circuit to use a S
 */

#include <SPI.h>


#define LATCH_PIN 10


void setup() {	
	Serial.begin(9600);
	Serial.println("start");
	SPI.begin();
}


void loop() {
	Serial.println("loop start");
	shift(0);
	shift(B00000001);
	shift(B00000010);
	shift(B00000100);
	shift(B00001000);
	shift(B00010000);
	shift(B00100000);
	shift(B01000000);
	shift(B10000000);
	Serial.println("loop end");
}

void shift(int n){
	digitalWrite(LATCH_PIN, LOW);
	SPI.transfer(n);
	digitalWrite(LATCH_PIN, HIGH);
	Serial.print("shift : ");
	Serial.println(n);
	delay(200);
}
