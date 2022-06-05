sbit RS =P1^0;			   // PIN Port 1 pin no 0 use as RS for LCD
sbit EN =P1^1;				 // PIN Port 1 pin no 1 use as EN for LCD 

void LCD_ini();					 // Select LCD 4 bit or 8 bit or command intilize 
void LCD_CMD(unsigned char cmd);	 // LCD Command
void LCD_str(unsigned char *str);	   // INPUT string data 
void LCD_DATA(unsigned char ch);		// PORT 1 4 bit out data 
void delay(unsigned char ms);		   // Delay


void LCD_str(unsigned char *str)
{
	while(*str)
	{
	
		LCD_DATA(*str);
		
		str++;
		delay(5);
	}
}



void LCD_ini()
{
	LCD_CMD(0x02);
	delay(5);
	LCD_CMD(0x28);
	delay(5);
	LCD_CMD(0x06);
	delay(5);
	LCD_CMD(0x0e);
	delay(5);
	LCD_CMD(0x01);
	delay(5);
	LCD_CMD(0x80);
	delay(5);
}
void LCD_CMD(unsigned char cmd)
{
	P1=cmd&0xf0;
	RS=0;
	EN=1;
	delay(2);
	EN=0;
	P1=(cmd<<4)&0xf0;
	RS=0;
	EN=1;
	delay(2);
	EN=0;

}
void LCD_DATA(unsigned char ch)
{
	P1=ch&0xf0;
	RS=1;
	EN=1;
	delay(1);
	EN=0;
	P1=(ch<<4)&0xf0;
	RS=1;
	EN=1;
	delay(1);
	EN=0;
}

void delay(unsigned char ms)
{
	unsigned char i;
	unsigned int j;
	for(i=0;i<ms;i++)
	{
		for(j=0;j<1000;j++);
	}
}

