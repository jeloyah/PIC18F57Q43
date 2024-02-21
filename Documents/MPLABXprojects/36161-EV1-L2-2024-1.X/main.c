/* Enciende y apaga el LED de usuario a intervalos de 1 segundo, siempre */
/* y cuando el botón de usuario esté sin oprimir; si el botón de usuario */
/* se oprime, el LED de usuario no parpadea */


#include <xc.h>
#include "clock.h" 
#include "gpio.h"
#include "timer0.h"


void main(void) {
    
    /* Peripheral and System Initialization*/
    
    /* System Clock Initialization */
	CLOCK_Initialize();
    
    /* PortA initialization */
    PortA_Initialize();

    /* PortB initialization */
    PortB_Initialize();

    /* PortC initialization */
    PortC_Initialize();

    /* PortD initialization */
    PortD_Initialize();

    /* PortE initialization */
    PortE_Initialize();

    /* PortF initialization */
    PortF_Initialize();
    
    /* TIMER0 Initialization */
    TIMER0_Initialize();
    
    
    /* Infinite loop */
    while(1)
    {
     
        /* Is SW0 opened? */
        if (PORTB== 0x10)
        {
            /* Turn on LED0 */
            PORTFbits.RF3 = 0;
            
            /* TIMER0 Delay */
            TIMER0_Delay_ms(1000);
            
            /* Turn off LED0 */
            PORTFbits.RF3 = 1;
            
            /* TIMER0 Delay */
            TIMER0_Delay_ms(1000);
        }
        
        /* else SW0 is closed */
        else
        {
            /* Turn off LED0 */
            PORTFbits.RF3 = 1;
        }    
    } // while
    
    return;
} // main
