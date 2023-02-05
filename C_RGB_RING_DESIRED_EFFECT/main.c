/*
 * C_RGB_RING_DESIRED_EFFECT.c
 *
 * Created: 7.1.2023. 22:04:11
 * Author : Aleksandar Bogdanovic
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include "ws2811.h"
#include "define.h"
#include "set.h"
#include "rotate.h"
#include "init.h"

// Define the output function, using pin 0 on PORT B.
DEFINE_WS2811_FN(WS2811RGB, PORTB, 0)


int main(void)
{
    init();
	RGB_t rgb[LENGTH];														// Make a place to hold the current LED pattern
	CLEAR																	// Make sure the ring color is cleared to begin
	
	// Initialize the rotation position
	int rotation = 0;
	
	while (1) {
	    // Set the LED colors based on the current rotation position
	    setPixelColor(139, 0, 0, (rotation + 4) % LENGTH, &rgb);			// Set the 5th LED to red
	    setPixelColor(0, 0, 139, (rotation + 3) % LENGTH, &rgb);			// Set the 4th LED to blue
	    setPixelColor(255, 255, 255, (rotation + 2) % LENGTH, &rgb);		// Set the 3rd LED to white
		 setPixelColor(0, 0, 0, (rotation + 1) % LENGTH, &rgb);				// Set the 1st LED to black
		 WS2811RGB(rgb, LENGTH);											// update the ring with the new pixel data
		 _delay_ms(PAUSE);
		 rotate(&rgb);														// rotate the pixel array one position to the right

		 // Update the rotation position
		 rotation = (rotation + 1 + LENGTH) % LENGTH;
	 }
	 return 0;
 }



