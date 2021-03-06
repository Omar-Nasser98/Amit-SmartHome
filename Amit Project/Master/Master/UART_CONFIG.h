/*
 * UART_CONFIG.h
 *
 * Created: 12/03/2021 21:19:31
 *  Author: Omar
 */ 


#ifndef UART_CONFIG_H_
#define UART_CONFIG_H_

/*Macros*/
#include "CPU_CONFIGURATION.h"
/*Get address for register for needed peripheral*/
/*
#define UBRRH (*((volatile Uint8t*)0x40))
#define UBRRL (*((volatile Uint8t*)0x29))
#define UCSRA (*((volatile Uint8t*)0x2B))
#define UCSRB (*((volatile Uint8t*)0x2A))
#define UCSRC (*((volatile Uint8t*)0x40))
#define UDR   (*((volatile Uint8t*)0x2C))
*/
/*Renaming*/
#define FRQ 160000
#define BAUDRATE 384
/*USer Defined data types*/
typedef enum
{
	UART_NOK = 0,
	UART_OK = 1
}UART_STATUS;
#endif /* UART_CONFIG_H_ */