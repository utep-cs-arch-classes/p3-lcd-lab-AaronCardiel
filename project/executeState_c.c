#include <msp430.h>
#include "stateMachine.h"
#include "executeState_c.h"

void executeState(){
    switch(state){
        case 0:
            carelessWhisper();
            break;
        case 1:
            dayNNite();
            break;
        case 2:
            laCancion();
            break;
        case 3:
            smellsLikeTeenSpirit();
            break;
    }
}

