/*
 * LCD.h
 *
 * Created: 20/2/2021 9:35:45 PM
 *  Author: Omar
 */ 


#ifndef LCD_H_
#define LCD_H_


/*Macros*/
#include "LCD_CONFIG.h"
/*Function Prototypes*/
void LCD_Init(void);
void LCD_Write_Command(Uint8t command);
void LCD_Write_Data(Uint8t data);
void LCD_Clear(void);
void LCD_Write_String(Uint8t * str);
void LCD_Write_Number(Uint32t number);

#endif /* LCD_H_ */