#include <REGX52.H>
#include"Nixie.h"
#include"Delay.h"

void multi_Nixie(unsigned char Location,signed char i )
{
	switch (Location)//A B C 依次由低到高
	{
		case 1:P0_0=0;P0_1=0;P0_2=0;break;
		case 2:P0_0=0;P0_1=0;P0_2=1;break;
		case 3:P0_0=0;P0_1=1;P0_2=0;break;
		case 4:P0_0=0;P0_1=1;P0_2=1;break;
		case 5:P0_0=1;P0_1=0;P0_2=0;break;
		case 6:P0_0=1;P0_1=0;P0_2=1;break;
		case 7:P0_0=1;P0_1=1;P0_2=0;break;
		case 8:P0_0=1;P0_1=1;P0_2=1;break;
		
	}
	P3=Nixie(i);
	Delay(1);
	P3=0x00;
		
	
	
}