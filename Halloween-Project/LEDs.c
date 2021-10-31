#include "LEDs.h"

void leds_setup()
{
  //Initializes all the LED pins
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);
  pinMode(LED_6, OUTPUT);
  //Start them as LOW
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  digitalWrite(LED_5, LOW);
  digitalWrite(LED_6, LOW);
}

void leds_turn_on(int time_on)
{
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, HIGH);
  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_6, HIGH);
  delay(time_on);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW); 
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW); 
  digitalWrite(LED_5, LOW);
  digitalWrite(LED_6, LOW); 
}
