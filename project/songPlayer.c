#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"
#include "songPlayer.h"

void playCarelessWhisper(){
    buzzer_set_period(200);
}

// Plays day n nite
void playDayNNite(){
    buzzer_set_period(300);
}

// Plays la cancion
void playLaCancion(){
    buzzer_set_period(400);
}

//Plays smells Like Teen Spirit
void playSmellsLikeTeenSpirit(){
    buzzer_set_period(500);
}


void quaterNote(int note){

}

void eightNote(int note){

}

void halfNote(int note){

}

void wholeNote(int note){

}
