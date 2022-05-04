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
    
//Clears area of where the shape is drawn
    if (second_count >= second_limit){
        second_count = 0;
        current_column = 20;
        switch(state){
            case 0: 
                clearShape(COLOR_BLUE);
                break;
            case 1:
                clearShape(COLOR_RED);
                break;
            case 2:
                clearShape(COLOR_GREEN);
                break;
            case 3:
                clearShape(COLOR_BLACK);
                break;
        }
    }
// Draws shape and moves shape column location
    if(second_count % 25 == 0){
        switch(state){
//             Careless Whisper
            case 0:
                drawSaxophone(current_column, current_row);
                break;
//              Day N Nite
            case 1:
                drawMoon(current_column, current_row);
                break;
//              La Cancion
            case 2:
                drawBunny(current_column, current_row);
                break;
//              Smells like teen spirit
            case 3:
                drawHand(current_column, current_row);
                break;
        }
    }
}
