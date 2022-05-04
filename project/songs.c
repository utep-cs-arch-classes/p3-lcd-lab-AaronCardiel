#include <msp430.h>
#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "switches.h"
#include "buzzer.h"

void main(){

    configureClocks();
    lcd_init();
    switch_init();
    buzzer_init();
    
    clearScreen(COLOR_WHITE);
    enableWDTInterrupts();
    or_sr(0x18);
}
