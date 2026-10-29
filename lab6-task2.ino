/*
 * Lab 6 - Task 2: Dual LEDs Blinking at Independent Intervals
 */

const int led1Pin = 8; // First LED on pin 8
const int led2Pin = 9; // Second LED on pin 9

// Store last toggle timestamps
unsigned long previousMillisLED1 = 0;
unsigned long previousMillisLED2 = 0;

// Current state of each LED
int led1State = LOW;
int led2State = LOW;

// Blink intervals (ms)
const long intervalLED1 = 250;  // 250 ms ON / 250 ms OFF = 2 blinks/sec
const long intervalLED2 = 1000; // 1000 ms ON / 1000 ms OFF = 1 blink per 2 sec

void setup() {
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  // Control LED 1 timing
  if (currentMillis - previousMillisLED1 >= intervalLED1) {
    previousMillisLED1 = currentMillis;
    led1State = (led1State == LOW) ? HIGH : LOW;
    digitalWrite(led1Pin, led1State);
  }

  // Control LED 2 timing
  if (currentMillis - previousMillisLED2 >= intervalLED2) {
    previousMillisLED2 = currentMillis;
    led2State = (led2State == LOW) ? HIGH : LOW;
    digitalWrite(led2Pin, led2State);
  }
}