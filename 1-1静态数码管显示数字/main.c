#include <REGX52.H>
#include"Nixie.h"
#include"delay.h"


void main()
{
	unsigned char num;
	while(1)
	{
		
		for(num=0;num<10;num++)
		{
			Delay(800);
			P0=Nixie(num);
		}
		for(num=9;num>=1;num--)
		{
			Delay(800);
			P0=Nixie(num);
		}
		

	}
}