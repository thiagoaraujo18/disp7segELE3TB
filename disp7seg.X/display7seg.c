/*
 * File:   display7seg.c
 * Author: 20185210
 *
 * Created on 25 de Fevereiro de 2021, 16:34
 */


#include <xc.h>



void disp7seg_init (void)
{
    TRISD = 0;
    PORTD = 0;
}
