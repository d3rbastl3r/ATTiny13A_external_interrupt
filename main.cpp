/**
 * A minimal example how to use the external interrupt on ATTiny13A
 *
 * @author Igor Martens
 * @since 23.09.2018
 */

#define F_CPU 9600000UL

#include <avr/io.h>
#include <avr/interrupt.h>

ISR(INT0_vect) {
    // Do some stuff on Interrupt
}

void setup() {
    MCUCR |=
        (1<<ISC01) |    // (ISC01 = 1 and ISC00 = 1) The rising edge of INT0 generates an interrupt request.
        (1<<ISC00);     // (ISC01 = 1 and ISC00 = 1) The rising edge of INT0 generates an interrupt request.

    GIMSK |= (1<<INT0); // Enable external interrupt on PB1

    sei();              // enable all interrupts
}

int main(void) {
    setup();

    while(1) {
    }

    return 0;
}
