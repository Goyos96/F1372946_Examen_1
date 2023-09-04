#include <stdint.h>

int main()
{
    uint8_t* MCUCR = (uint8_t*) 0x55;
    uint8_t* PORTC = (uint8_t*) 0x28;
    uint8_t* DDRC  = (uint8_t*) 0x27;
    uint8_t* PINC  = (uint8_t*) 0x26;

    uint8_t* PORTB = (uint8_t*) 0x25;
    uint8_t* DDRB  = (uint8_t*) 0x24;


    *MCUCR |= (1 << 4);
    *PORTC |= (1 << 2);
    *DDRC &= ~(1 << 2);
    *PORTB&= ~(1 << 5);
    *DDRC |=  (1 << 5);

    while(1)
    {
        uint8_t variable = *PINC & 0x0000010;
        if (variable == 2)
        {
            *PORTB |= (1 << 5);
        }
        else
        {
            *PORTB&= ~(1 << 5);
        }
    }

}