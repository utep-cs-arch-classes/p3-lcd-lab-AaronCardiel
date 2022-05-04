#include <msp430.h>
#include "libTimer.h"
#include "shapes.h" 
#include "stateMachine.h"
#include "lcdutils.h"
#include "lcddraw.h"

int second_count = 0;
int second_limit = 250;
int current_column = 20;
int current_row = 80;

void __interrupt_vec(WDT_VECTOR) WDT(){
    second_count ++;
    current_column ++;
    
    if (second_count >= second_limit){
        second_count = 0;
        current_column = 20;
        switch(state){
            case 1: 
                clearShape(COLOR_BLUE);
                break;
            case 2:
                clearShape(COLOR_RED);
                break;
            case 3:
                clearShape(COLOR_GREEN);
                break;
            case 4:
                clearShape(COLOR_BLACK);
                break;
        }
    }
    
    if(second_count % 25 == 0){
        switch(state){
            case 1:
                drawSaxophone(current_column, current_row);
                break;
            case 2:
                drawMoon(current_column, current_row);
                break;
            case 3:
                drawBunny(current_column, current_row);
                break;
            case 4:
                drawHand(current_column, current_row);
                break;
        }
    }
}
