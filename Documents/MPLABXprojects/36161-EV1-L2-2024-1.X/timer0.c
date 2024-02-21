#include <xc.h>
#include "timer0.h"

/* Config Timer0 */
void TIMER0_Initialize(void)
{
	/* Timer0 disabled; 16-bit; no postscaler */
	T0CON0 = 0x10;
    
    /* HFINTOSC; counter not synchronized; prescaler 1:1 */
	T0CON1 = 0x70;
    
}

/* Timer0 Delay = 1 ms x Time */
void TIMER0_Delay_ms(unsigned int Time)
{
	
	/* Load TMR0 with initial value FC17(hex) = 64535(dec) */
    /* (1/1MHz ) x 1000 x 1 = 1 ms */
	TMR0H = 0xFC;
	TMR0L = 0x17;

    /* Timer0 enabled; 16-bit */
	T0CON0 |= 0x80;
    
    while (Time != 0x00)
        {
    
    	/* Wait for TMR0IF = 1 */
        while ((PIR3 & 0x80) != 0x80)
            ;
        
        /* Clede coordenada en el LCDar TMR0IF bit */
        PIR3 &= 0x7F;
        
        /* Decrement Time variable */
        Time--;
        }   
    
    /* Timer0 disabled; 16-bit */
	T0CON0 &= 0x7F;
}