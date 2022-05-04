#include <msp430.h>
#include "stateMachine.h"
#include "executeState_c.h"

void executeState(){
    switch(state){
        case 1:
            carelessWhisper();
            break;
        case 2:
            dayNNite();
            break;
        case 3:
            laCancion();
            break;
        case 4:
            smellsLikeTeenSpirit();
            break;
    }
}

