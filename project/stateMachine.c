#include <msp430.h>
#include "switches.h"
#include "stateMachine.h"
#include "executeState_c.h"
#include "lcdutils.h"
#include "lcddraw.h"
#include "shapes.h"
#include "songPlayer.h"

int state;

// Sets state of program based on switches
void changeState(){
  if(switch1_down){
    state = 0;
    switch1_down = 0;
  }
  if(switch2_down){
    state = 1;
    switch2_down = 0;
  }
  if(switch3_down){
    state = 2;
    switch3_down = 0;
  }
  if(switch4_down){
    state = 3;
    switch4_down = 0;
  }
  executeState();
}

// Careless whisper state
void carelessWhisper(){
    clearScreen(COLOR_BLUE);
    drawString5x7(30, 53, "Now Playing", COLOR_RED, COLOR_BLUE);
    drawString5x7(20, 106, "Careless Whisper", COLOR_RED, COLOR_BLUE);
    playCarelessWhisper();
}
// Day N Nite state
void dayNNite(){
    clearScreen(COLOR_RED);
    drawString5x7(30, 53, "Now Playing", COLOR_BLUE, COLOR_RED);
    drawString5x7(28, 106, "Day 'N' Nite", COLOR_BLUE, COLOR_RED);
    playDayNNite();
}

// La Cancion State
void laCancion(){
    clearScreen(COLOR_GREEN);
    drawString5x7(30, 53, "Now Playing", COLOR_RED, COLOR_GREEN);
    drawString5x7(33, 106, "La Cancion", COLOR_RED, COLOR_GREEN);
    playLaCancion();
}

// Smells like teen spirit state
void smellsLikeTeenSpirit(){
    clearScreen(COLOR_BLACK);
    drawString5x7(30, 53, "Now Playing", COLOR_RED, COLOR_BLACK);
    drawString5x7(15, 106, "Smells Like Teen", COLOR_RED, COLOR_BLACK);
    drawString5x7(45, 115, "Spirit", COLOR_RED, COLOR_BLACK);
    playSmellsLikeTeenSpirit();
}
