#include <REGX52.H>
#include"LCD1602.h"
#include"Delay.h"
#include"Matricx.h"
unsigned char keynum;
void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"KEYNUM");
	
	while(1)
	{
		keynum=Matricx();
		if(keynum)
		{
			LCD_ShowNum(2,1,keynum,2);
		}
	}
}
	
