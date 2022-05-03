#include <msp430.h>
#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "switches.h"

void main(){

    configureClocks();
    lcd_init();
    switches_init();
    
    enableWDTInterrupts();
    
    clearScreen(COLOR_RED);
    
    or_sr(0x10);
}
