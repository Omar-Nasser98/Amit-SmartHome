/*
 * main.c
 *
 * Created: 12/03/2021 18:41:21
 *  Author: Omar
 */ 



#include "SPI.h"
#include "LCD.h"
#include "UART.h"

int main(void)
{
	Uint8t Data_in = 0;
	SPI_INIT();
	LCD_Init();
	UART_Init();
	LCD_Write_String((Uint8t*)"Welcom");
	_delay_ms(5000);
	LCD_Clear();
	/* Replace with your application code */
	while (1)
	{
		Data_in = UART_Rx();
		if(Data_in != 0)
		{
			//LCD_Clear();
			LCD_Write_Data(Data_in);
			_delay_ms(10);
			SPI_TRANSMIT(Data_in);
			Data_in = 0;
		}
	}
}


