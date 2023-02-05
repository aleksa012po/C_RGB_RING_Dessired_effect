/*
 * rotate.c
 *
 * Created: 8.1.2023. 01:29:50
 *  Author: Aleksandar Bogdanovic
 */ 

#include <avr/io.h>
#include "define.h"
#include "ws2811.h"

void rotate(RGB_t *array)
{
	uint8_t i;
	RGB_t temp;
	
	temp = array[LENGTH - 1];
	for (i = LENGTH - 1; i > 0; i--)
	{
		setPixel(array[i-1], i, array);
	}
	setPixel(temp, 0, array);
}