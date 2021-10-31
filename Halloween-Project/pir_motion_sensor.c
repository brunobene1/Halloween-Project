#include "pir_motion_sensor.h"

void pir_sensor_setup()
{
  pinMode(PIR_SENSOR, INPUT);
}

int pir_sensor_motion_detected()
{
  int motion_detected =0;
  if(digitalRead(PIR_SENSOR) == 1)
  {
    motion_detected = 1;
    return motion_detected;
  }
  else
  {
    motion_detected = 0;
    return motion_detected;
  }
}
