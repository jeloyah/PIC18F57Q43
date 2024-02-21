
#include <xc.h>
#include "gpio.h"

/* PortA initialization */
void PortA_Initialize(void)
{
    /* Clear register */
    LATA = 0x00;
    
    /* Pins as digital I/O */
    ANSELA = 0x00;
    
    /* Disable Rpull-ups */
    WPUA = 0x00;
        
    /* PortA as outputs */
    TRISA = 0x00;
}

/* PortB initialization */
void PortB_Initialize(void)
{
    /* Clear register */
    LATB = 0x00;
    
    /* Pins as digital I/O */
    ANSELB = 0x00;
    
    /* Disable Rpull-ups */
    WPUB = 0x10;
        
    /* PortB as outputs */
    TRISB = 0x10;
}

/* PortC initialization */
void PortC_Initialize(void)
{
    /* Clear register */
    LATC = 0x00;
    
    /* Pins as digital I/O */
    ANSELC = 0x00;
    
    /* Disable Rpull-ups */
    WPUC = 0x00;
        
    /* PortC as outputs */
    TRISC = 0x00;
}
    
/* PortD initialization */
void PortD_Initialize(void)
{
    /* Clear register */
    LATD = 0x00;
    
    /* Pins as digital I/O */
    ANSELD = 0x00;
    
    /* Disable Rpull-ups */
    WPUD = 0x0F;
        
    /* PortD as outputs */
    TRISD = 0x0F;
}

/* PortE initialization */
void PortE_Initialize(void)
{
    /* Clear register */
    LATE = 0x00;
    
    /* Pins as digital I/O */
    ANSELE = 0x00;
    
    /* Disable Rpull-ups */
    WPUE = 0x00;
        
    /* PortE as outputs */
    TRISE = 0x00;
}    

/* PortF initialization */
void PortF_Initialize(void)
{
    /* Clear register */
    LATF = 0x00;
    
    /* Pins as digital I/O */
    ANSELF = 0x00;
    
    /* Disable Rpull-ups */
    WPUF = 0x00;
        
    /* PortF as outputs */
    TRISF = 0x00;
}
