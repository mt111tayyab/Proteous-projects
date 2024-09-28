#include <reg51.h>

sbit button1 = P1^0; // Button 1
sbit button2 = P1^1; // Button 2
sbit led1 = P2^0;    // LED 1
sbit led2 = P2^1;    // LED 2

void main() {
    P2 = 0x00; // Initialize LEDs off

    while(1) {
        if(button1 == 0) { // Check if Button 1 is pressed
            led1 = 1;      // Turn on LED 1
            led2 = 0;      // Turn off LED 2
            while(button1 == 0); // Wait for button release
        } else if(button2 == 0) { // Check if Button 2 is pressed
            led2 = 1;      // Turn on LED 2
            led1 = 0;      // Turn off LED 1
            while(button2 == 0); // Wait for button release
        } else {
            led1 = 0;      // Ensure both LEDs are off
            led2 = 0;
        }
    }
}
