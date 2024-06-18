#include <REGX52.H>
#include"Timer0.h"
#include"LCD1602.h"
int num=0;
void main()
{
	
	Timer0Init();
	LCD_Init();
	while(1)
	{
		
	}
}

void Timer0_Routine() interrupt 1
{
	static unsigned int T0Count;
	TL0 = 0x18;		//设置定时初值
	TH0 = 0xFC;		//设置定时初值
	T0Count++;
	if(T0Count>=1000)
	{
		T0Count=0;
		num++;
		LCD_ShowNum(1,1,num,8);
	}
}