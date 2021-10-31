#ifndef ISD_1820_H
#define ISD_1820_H

#ifdef __cplusplus  //Necessary for using C and C++ code together
extern "C" {        //Necessary for using C and C++ code together
#endif              //Necessary for using C and C++ code together

#include <Arduino.h>

#define ISD1820_PLAY 13

/**
 * \brief Setup the ISD1820 play pin.
 */
void ISD1820_setup();

/**
 * \brief Play the sound recorder in the ISD1820 module
 */
void ISD1820_play_sound();


#ifdef __cplusplus    //Necessary for using C and C++ code together
}                     //Necessary for using C and C++ code together
#endif                //Necessary for using C and C++ code together

#endif /* ISD_1820_H */
