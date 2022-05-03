#include <msp430.h>
#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "switches.h"

void main(){

    configureClocks();
    lcd_init();
    switch_init();
    
    clearScreen(COLOR_WHITE);
    
//     switch1_down = 1;
//     switch2_down = 1;
//     switch3_down = 1;
//     switch4_down = 1;
    or_sr(0x18);
}
