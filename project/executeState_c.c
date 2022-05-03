#include <msp430.h>
#include "stateMachine.h"
#include "executeState_c.h"

void executeState(){
    switch(state){
        case 1:
            song1();
            break;
        case 2:
            song2();
            break;
        case 3:
            song3();
            break;
        case 4:
            song4();
            break;
    }
}

