/*
 *  main.c
 *
 * Created: 12/03/2021 19:45:21
 *  Author: Omar
 */ 
 

#include "LED.h"
#include "LCD.h"
#include "SPI.h"

int main(void)
{
	Uint8t data=0;
	SPI_INIT();
	SPI_SLAVESELECT(0);
	LED0_Init();
	LCD_Init();
	

	/* Replace with your application code */
	while (1){
		
		
		SPI_RECEIVE(&data);
		
		if(data=='A')
		{
			LCD_Write_String((Uint8t*)"LED OFF");
			LED0_OFF();
			LCD_Clear();
			_delay_ms(10);
		}
		else if(data=='B')
		{
			LED0_ON();
			LCD_Clear();
			LCD_Write_String((Uint8t*)"LED ON");
			_delay_ms(10);
		}
	
		else{
			LED0_OFF();
			LCD_Clear();
			LCD_Write_String((Uint8t*)"Wrong_Option");
			_delay_ms(10);
		}
	}
}

