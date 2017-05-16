/*
 * uart.cpp
 *
 *  Created on: 16.05.2017
 *      Author: tomek
 */
#include <avr/io.h>
#include "uart.h"

UART::UART()
{
	UBRR0L = 95;
	UCSR0B = (1<<RXEN0)|(1<<TXEN0);
}

void UART::WyslijZnak(char znak)
{
	while (!(UCSR0A & (1<<UDRE0)));
	UDR0 = znak;
}

void UART::WyslijString(const char *txt)
{
	while(*txt)
	{
		UART::WyslijZnak(*txt++);
	}
}


