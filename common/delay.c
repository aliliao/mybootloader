

#include "delay.h"


void delay(volatile unsigned int cnt)
{
	while (cnt--)
		;
}



