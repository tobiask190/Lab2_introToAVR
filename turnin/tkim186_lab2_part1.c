/*	Author: tkim186
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
	
	unsigned char PA0 = 0x00;
	unsigned char PA1 = 0x00;
	unsigned char PB0 = 0x00;

	while(1) {
	
		PA0 = PINA & 0x01;
		PA1 = (PINA >> 1) & 0x01;	

		if (!PA1) {
			PB0 = PA0;
		}
		else {
			PB0 = 0;
		} 

		PORTB = PB0;
	    	
	}
   
	return 0;
}
