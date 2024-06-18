#include "multi_Nixie.h"
#include <REGX52.H>
#include"Delay.h"

void main()
{
	unsigned char unit;
	while(1)
	{
		for(unit=1;unit<=9;unit++)
		{
			multi_Nixie(unit,unit);
		}
	}
	
}
	

