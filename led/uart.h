/*
 * uart.h
 *
 *  Created on: 16.05.2017
 *      Author: tomek
 */

#ifndef UART_H_
#define UART_H_

class UART
{
private:
	void WyslijZnak(char znak);
public:

	UART();	// konstruktor
	void WyslijString(const char *txt);
};



#endif /* UART_H_ */
