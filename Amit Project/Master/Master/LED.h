/*
 * LED.h
 *
 * Created: 1/3/2021 8:45:46 PM
 *  Author: Omar
 */ 
/*
Header File (.h)
1-Macros
2-User-Defined Data types
3-Global Variables if exists
4-Functions Prototypes
*/

#ifndef LED_H_
#define LED_H_

#include "DIO.h"/*Macros*/
/*Prototypes of function*/
void LED0_Init(void);
void LED0_ON(void);
void LED0_OFF(void);
void LED0_TGL(void);

#endif /* LED_H_ */