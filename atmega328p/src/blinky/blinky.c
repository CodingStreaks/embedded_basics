#define F_CPU 16000000
#include <util/delay.h>
#include <avr/io.h>

int main()
{
    DDRD = 0b00000001;
    PORTD = 0b00000000;

    while(1)
    {
        _delay_ms(500);
        PORTD = 0b00000001;
        _delay_ms(500);
        PORTD = 0b00000000;
    }

    return 0;
}