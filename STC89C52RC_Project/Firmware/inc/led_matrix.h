#ifndef __LED_MATRIX_H__
#define __LED_MATRIX_H__

#include <8052.h>

extern const unsigned char font [10][3];

void led_Setdigit(unsigned char digit);

#endif