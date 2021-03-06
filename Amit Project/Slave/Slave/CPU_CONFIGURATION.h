
/*
 * CPU_CONFIGURATION.h
 *
 * Created: 13/2/2021 5:54:10 PM
 *  Author: Omar
 */ 


#ifndef CPU_CONFIGURATION_H_
#define CPU_CONFIGURATION_H_

#undef F_CPU /*Remove previous definition*/
#define F_CPU 16000000/*16 MegaHz(16 Million)*/
#include <util/delay.h>
#include <avr/interrupt.h>
//#include <avr/io.h> /*All registers are Pre-Defined here*/
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO.h"

#endif /* CPU_CONFIGURATION_H_ */