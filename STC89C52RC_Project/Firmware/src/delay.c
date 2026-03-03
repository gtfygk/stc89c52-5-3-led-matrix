#include "delay.h"

#define FOSC 11059200UL

void delay_ms(unsigned int ms)
{
    unsigned char i,j;

    if(ms==0)return;

    while(ms--)
    {
        i=11;
        do
        {
            j=120;
            while(--j);

        }while(--i);

    }
}