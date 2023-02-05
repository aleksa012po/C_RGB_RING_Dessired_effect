/*
 * init.c
 *
 * Created: 8.1.2023. 01:32:26
 *  Author: Aleksandar Bogdanovic
 */ 

#include <avr/io.h>
#include "define.h"

// Configure pin(s) for output
void init(void)
{
	DDRB |= (1 << PORT_PIN);
	PORTB &= ~(1 << PORT_PIN);
}
