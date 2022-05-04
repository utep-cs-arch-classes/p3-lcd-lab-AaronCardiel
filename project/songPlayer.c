#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"
#include "songPlayer.h"

// Plays careless whisper
void playCarelessWhisper(){
    quaterNote(Cs5);
    eightNote(B4);
    quaterNote(Fs5);
    quaterNote(D5);
    quaterNote(Cs5);
    eightNote(B4);
    quaterNote(Fs5);
    halfNote(D5);
    
    quaterNote(A5);
    eightNote(G5);
    quaterNote(D5);
    quaterNote(B4);
    quaterNote(A5);
    eightNote(G5);
    halfNote(D5);
    
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
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
}

void eightNote(int note){
    buzzer_set_period(note);
    buzzer_set_period(note);
}

void halfNote(int note){
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
}

void wholeNote(int note){
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
    buzzer_set_period(note);
}
