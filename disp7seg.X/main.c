

#include <xc.h>
#include "config.h"
#include "delay.h"


void main(void)

{
    //configuração de entrada de saida
    TRISD = 0;
    // inicialização
    PORTD = 0;
  
    while (1)
    {
        //configuração de números 
        
        // numero 0
        PORTD = 0x3F;
        delay(2000);
        PORTD = 0;
        // numero 1
        PORTD = 0x06;
        delay(2000);
        PORTD = 0;
        // numero 2
        PORTD = 0x5B;
        delay(2000);
        PORTD = 0;
        //numero 3
        PORTD = 0x4F;
        delay(2000);
        PORTD = 0;
        //numero 4
        PORTD = 0x66;
        delay(2000);
        PORTD = 0;
        //numero 5
        PORTD = 0x6D;
        delay(2000);
        PORTD = 0;
        //numero 6
        PORTD = 0x7D;
        delay(2000);
        PORTD = 0;
        //numero 7
        PORTD = 0x07;
        delay(2000);
        PORTD = 0;
        //numero 8
        PORTD = 0x7F;
        delay(2000);
        PORTD = 0;
        //numero 9
        PORTD = 0x6F;
        delay(2000);
        PORTD = 0;
        
        //configuração dos caracteres
        //letra A
        PORTD = 0x77;
        delay(2000);
        PORTD = 0;
        //letra B
        PORTD = 0x7C;
        delay(2000);
        PORTD = 0;
        //letra C
        PORTD = 0x39;
        delay(2000);
        PORTD = 0;
        //letra D
        PORTD = 0x5E;
        delay(2000);
        PORTD = 0;
        //letra E
        PORTD = 0x79;
        delay(2000);
        PORTD = 0;
        //letra F
        PORTD = 0x71;
        delay(2000);
        PORTD = 0;
        }
        
 }


