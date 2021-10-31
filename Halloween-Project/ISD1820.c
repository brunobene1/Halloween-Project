#include "ISD1820.h"

void ISD1820_setup()
{
  pinMode(ISD1820_PLAY, INPUT);
}

void ISD1820_play_sound()
{
  digitalWrite(ISD1820_PLAY, HIGH);
  //Since the sound module only needs a pulse to reproduce the audio,
  //wait 100 milliseconds and put the ditial pin to LOW, so it wont
  //keep playing the sound
  delay(100);
  digitalWrite(ISD1820_PLAY, LOW);
}
