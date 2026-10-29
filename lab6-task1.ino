/*
 * Lab 6 - Task 1: Blink External LED (1 Hz)
 */

const int ledPin = 8; // LED connected to digital pin 8

void setup() {
  pinMode(ledPin, OUTPUT); // Configure pin 8 as an output
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn LED ON
  delay(500);                 // Wait 500 ms (0.5 s)
  digitalWrite(ledPin, LOW);  // Turn LED OFF
  delay(500);                 // Wait 500 ms (0.5 s)
}