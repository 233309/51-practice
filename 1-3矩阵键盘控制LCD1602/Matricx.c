#include <REGX52.H>
#include"Delay.h"
unsigned char Matricx()
{
	unsigned char keynum=0;
	P2=0xff;
	P2_3=0;
	if(P2_7==0){Delay(20);while(P2_7==0);Delay(20);keynum=1;}
	if(P2_6==0){Delay(20);while(P2_6==0);Delay(20);keynum=5;}
	if(P2_5==0){Delay(20);while(P2_5==0);Delay(20);keynum=9;}
	if(P2_4==0){Delay(20);while(P2_4==0);Delay(20);keynum=13;}

	P2=0xff;
	P2_2=0;
	if(P2_7==0){Delay(20);while(P2_7==0);Delay(20);keynum=2;}
	if(P2_6==0){Delay(20);while(P2_6==0);Delay(20);keynum=6;}
	if(P2_5==0){Delay(20);while(P2_5==0);Delay(20);keynum=10;}
	if(P2_4==0){Delay(20);while(P2_4==0);Delay(20);keynum=14;}
	
	P2=0xff;
	P2_1=0;
	if(P2_7==0){Delay(20);while(P2_7==0);Delay(20);keynum=3;}
	if(P2_6==0){Delay(20);while(P2_6==0);Delay(20);keynum=7;}
	if(P2_5==0){Delay(20);while(P2_5==0);Delay(20);keynum=11;}
	if(P2_4==0){Delay(20);while(P2_4==0);Delay(20);keynum=15;}
	
	P2=0xff;
	P2_0=0;
	if(P2_7==0){Delay(20);while(P2_7==0);Delay(20);keynum=4;}
	if(P2_6==0){Delay(20);while(P2_6==0);Delay(20);keynum=8;}
	if(P2_5==0){Delay(20);while(P2_5==0);Delay(20);keynum=12;}
	if(P2_4==0){Delay(20);while(P2_4==0);Delay(20);keynum=16;}
	
	
	return keynum;
}