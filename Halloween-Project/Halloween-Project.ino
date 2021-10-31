/**
 * \brief Halloween Project.
 * 
 * \author Bruno Benedetti <brunobenedetti45@gmail.com>
 * 
 * \version 1.0.0
 * 
 * \date 29/10/2021
 * 
 */

#include "LEDs.h"
#include "pir_motion_sensor.h"
#include "ISD1820.h"

// ----- Global Variables -----
int motion_detection; //Boolean like variable, 1 = True (motion detected) and 0 = False (no motion detected)

void setup() 
{
  leds_setup();
  pir_sensor_setup();
  ISD1820_setup();
  Serial.begin(9600);
}

void loop() 
{
  motion_detection =0; //When the execution is finished always reset the motion_detection variable
  while (motion_detection == 0)
  {
    motion_detection = pir_sensor_motion_detected(); //When motion is detected the program will continue
  }
  ISD1820_play_sound();
  leds_turn_on(6000);
}
