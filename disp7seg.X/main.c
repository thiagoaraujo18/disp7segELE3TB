

#include <xc.h>
#include "config.h"
#include "delay.h"
#include "display7seg.h"


void main(void)

{
  
    char cont = 0;
    disp7seg_init();
    while (1)
    {
     display7seg(cont);
     delay(1000);
     ++cont;
     if (cont >= 16)
         cont = 0;
      
    }
        
 }


