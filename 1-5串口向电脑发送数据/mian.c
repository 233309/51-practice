#include <REGX52.H>
#include"Delay.h"
#include"UART.h"

unsigned char Sec;
void main()
{
		UART_Init();
		while(1)
	{
		UART_SendByte(0xff);
		Delay(1);//当发送过快时由于波特率会产生误差，使用Delay可以减慢发送速度减低误差
		UART_SendByte(Sec);
		Sec++;
		Delay(1000);
	}
}