/**
 * A minimal example how to use the external interrupt on ATTiny13A
 *
 * @author Igor Martens
 * @since 23.09.2018
 */

#define F_CPU 9600000UL

#include <avr/io.h>

void setup() {
}

int main(void) {
    setup();

    while(1) {         // read value from ADC
    }

    return 0;
}
