#ifndef PIR_MOTION_SENSOR_H
#define PIR_MOTION_SENSOR_H

#ifdef __cplusplus  //Necessary for using C and C++ code together
extern "C" {        //Necessary for using C and C++ code together
#endif              //Necessary for using C and C++ code together

#include <Arduino.h>

#define PIR_SENSOR 2

/**
 * \brief Setup the pir sensor pin.
 */
void pir_sensor_setup();

/**
 * \brief Returns an integer = 1 if the sensor detects something
 */
int pir_sensor_motion_detected();


#ifdef __cplusplus    //Necessary for using C and C++ code together
}                     //Necessary for using C and C++ code together
#endif                //Necessary for using C and C++ code together

#endif /* PIR_MOTION_SENSOR_H */
