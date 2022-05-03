#include <msp430.h>
#include "switches.h"
#include "stateMachine.h"
#include "executeState_c.h"
#include "lcdutils.h"
#include "lcddraw.h"

int state;

void changeState(){
  if(switch1_down){
    state = 1;
    switch1_down = 0;
  }
  if(switch2_down){
    state = 2;
    switch2_down = 0;
  }
  if(switch3_down){
    state = 3;
    switch3_down = 0;
  }
  if(switch4_down){
    state = 4;
    switch4_down = 0;
  }
  executeState();
}


void song1(){
    clearScreen(COLOR_BLUE);
}

void song2(){
    clearScreen(COLOR_RED);
}

void song3(){
    clearScreen(COLOR_GREEN);
}

void song4(){
    clearScreen(COLOR_YELLOW);
}
