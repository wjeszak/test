/*
 * main.cpp
 *
 *  Created on: 16.05.2017
 *      Author: tomek
 */
#include <avr/io.h>
#include <util/delay.h>

#include "uart.h"

int main(void)
{
	DDRD = 0xFF;
	UART kom1;
	UART *p = &kom1;
	while(1)
	{
		PORTD ^= (1 << 0);
		_delay_ms(1000);
		p->WyslijString("test\r\n");
	}
}



