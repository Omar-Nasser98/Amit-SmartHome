/*
 * UART.h
 *
 * Created: 12/03/2021 20:41:11
 *  Author: Omar
 */ 


#ifndef UART_H_
#define UART_H_
/*Include Macros*/
#include "UART_CONFIG.h"
/*Functions prototypes*/
void UART_Init(void);
/*Transmitting*/
void UART_Tx(Uint8t data);
UART_STATUS UART_Transmit(Uint8t data);
/*Receiving*/
Uint8t UART_Rx(void);
void UART_Receive(Uint8t* data);
UART_STATUS UART_Receive_Data(Uint8t* data);
void UART_Tx_STR(Uint8t* str);
void UART_Rx_STR(Uint8t* str);
#endif /* UART_H_ */