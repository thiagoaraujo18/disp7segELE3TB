

#include <xc.h>
#include "config.h"
#include "delay.h"


void main(void)

{
    //configura��o de entrada de saida
    TRISD = 0;
    // inicializa��o
    PORTD = 0;
  
    while (1)
    {
        //configura��o de n�meros 
        PORTD = 0x3F;
        delay(2000);
        PORTD = 0;
        
        PORTD = 0x06;
        delay(2000);
        PORTD = 0;
        
        PORTD = 0x5B;
        delay(2000);
        PORTD = 0;
        
        PORTD = 0x4F;
        delay(2000);
        PORTD = 0;
        
        PORTD = 0x66;
        delay(2000);
        PORTD = 0;
        
        PORTD = 0x6D;
        delay(2000);
        PORTD = 0;
        
        PORTD = 0x7D;
        delay(2000)
        PORTD = 0;
        
        PORTD = 0x07;
        delay(2000)
        PORTD = 0;
        
        PORTD = 0x7F;
        delay(2000)
        PORTD = 0;
        
        PORTD = 0x6F;
        delay(2000)
        PORTD = 0;
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
}

