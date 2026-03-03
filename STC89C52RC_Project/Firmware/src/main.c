#include "delay.h"
#include "led_matrix.h"

void main(void)
{
    while(1)
    {
        unsigned char a=9;
        for(a=9;a>=0;a--)
        {
            led_Setdigit (a);
            delay_ms(1000);
        }
    }
}
