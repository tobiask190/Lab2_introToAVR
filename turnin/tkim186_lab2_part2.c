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
    	DDRC = 0xFF; PORTC = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
    	unsigned char tmpC = 0x00; // Temporary variable to hold the value of B
    	unsigned char tmpA = 0x00; // Temporary variable to hold the value of A
	unsigned char i = 0;
	unsigned char count = 0;
	
	while(1) {
		tmpA = PINA & 0x0F;
		count = 0;
		for (i = 0; i < 4; i++) {
			if ( (tmpA >> i) & 0x01 ) {
				count++;	
			}
		}
		PORTC = count;
		//tmpA = PINA & 0x01;
		//if (tmpA == 0x01) { // True if PA0 is 1
		  //  tmpB = (tmpB & 0xFC) | 0x01; // Sets tmpB to bbbbbb01
		//} else {
		  //  tmpB = (tmpB & 0xFC) | 0x02; // Sets tmpB to bbbbbb10
        	//}    
		///PORTB = tmpB;    
    }
    return 0;
}
