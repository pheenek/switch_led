
#define F_CPU   16000000

#include <avr/io.h>

#define BUTTON_MASK 0x02

int main(){

    // set PB0 as an output
    DDRB |= 1 << PB0;
    // enable the input pullup on PB1
    PORTB |= 1 << PB1;

    while(1){
        // if the button is pressed turn off LED and vice versa
        if (!(PINB & BUTTON_MASK)) {
            PORTB |= 1 << PINB0;
        }else{
            PORTB &= ~(1 << PINB0);
        }
        
        
    }
    
}

