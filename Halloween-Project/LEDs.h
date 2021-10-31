#ifndef LEDS_H
#define LEDS_H

#ifdef __cplusplus  //Necessary for using C and C++ code together
extern "C" {        //Necessary for using C and C++ code together
#endif              //Necessary for using C and C++ code together

#include <Arduino.h>

#define LED_1 3
#define LED_2 4
#define LED_3 5
#define LED_4 6
#define LED_5 7
#define LED_6 8

/**
 * \brief Setup the LED pins.
 */
void leds_setup();

/**
 * \brief You can chose how mouch time the LEDs will remain on
 *
 * \param[in] time_on Time in milliseconds that the LEDs will remain on
 *
 */
void leds_turn_on(int time_on);


#ifdef __cplusplus    //Necessary for using C and C++ code together
}                     //Necessary for using C and C++ code together
#endif                //Necessary for using C and C++ code together

#endif /* LEDS_H */
