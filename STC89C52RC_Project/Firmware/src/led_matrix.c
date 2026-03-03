#include "led_matrix.h"
#include "delay.h"

#define COL_PORT P1
#define ROW_PORT P0
__code const unsigned char font[10][3]=
{
    {0x1F,0x11,0x1F},//0
    {0x00,0x1F,0x00},//1
    {0x17,0x15,0x15},//2
    {0x15,0x15,0x1F},//3
    {0x1C,0x1F,0x04},//4
    {0x1D,0x15,0x17},//5
    {0x1F,0x05,0x07},//6
    {0x10,0x10,0x1F},//7
    {0x1F,0x15,0x1F},//8
    {0x1C,0x1C,0x1F}//9
};

void led_Setdigit(unsigned char digit)
{
    unsigned char col;
    if(digit>9)
    {
        return;
    }
    for(col=0;col <3;col++)
    {
        COL_PORT=(1<<(col *2));
        ROW_PORT=~font[digit][col]&0x1F;
        delay_ms(2);
        ROW_PORT=0xFF;
    }
}