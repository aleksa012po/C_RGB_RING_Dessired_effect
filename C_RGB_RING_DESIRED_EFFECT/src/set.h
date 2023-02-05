/*
 * set.h
 *
 * Created: 8.1.2023. 01:08:00
 *  Author: Aleksandar Bogdanovic
 */ 


#ifndef SET_H_
#define SET_H_

void setPixel(RGB_t pixel, uint8_t row, RGB_t *array);
void setPixelColor(uint8_t r, uint8_t g, uint8_t b, uint8_t row, RGB_t *array);
void setColor(uint8_t r, uint8_t g, uint8_t b, RGB_t *array);

#endif /* SET_H_ */