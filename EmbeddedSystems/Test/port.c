#include <avr/io.h>
#include <avr/interrupt.h>

void port() {
    DDRB |= (1 << PB0);
    DDRD &= ~(1 << PD2);
    PORTD = (1 << PD2);
    EICRA |= (1 << ISC00);
    sei();
    EIMSK |= (1 << INT0);
}
