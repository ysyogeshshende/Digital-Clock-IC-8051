#include<reg51.h>

#include"LCD_str_4bit.h"
#include"keypad4x4.h"
void main()
{
unsigned char temp;
LCD_ini();

while(1)
{

while((temp=key())!=0)	
{
LCD_CMD(0X80);
LCD_DATA(temp);
LCD_CMD(0xc0);
if(temp=='+')
{
LCD_str("ADD");
}
}
}
}






