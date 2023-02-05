/*
 * set.c
 *
 * Created: 8.1.2023. 01:07:28
 *  Author: Aleksandar Bogdanovic
 */ 

#include <avr/io.h>
#include "ws2811.h"
#include "define.h"

void setPixel(RGB_t pixel, uint8_t row, RGB_t *array)
{
	array[row].r = pixel.r;
	array[row].g = pixel.g;
	array[row].b = pixel.b;
}

void setPixelColor(uint8_t r, uint8_t g, uint8_t b, uint8_t row, RGB_t *array)
{
	array[row].r = r;
	array[row].g = g;
	array[row].b = b;
}

void setColor(uint8_t r, uint8_t g, uint8_t b, RGB_t *array)
{
	for (uint8_t i = 0; i < LENGTH; i++)
	{
		setPixelColor(r, g, b, i, array);
	}
}