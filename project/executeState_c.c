#include <msp430.h>
#include "stateMachine.h"
#include "executeState_c.h"

//Calls function for current state
void executeState(){
    switch(state){
        // careless whisper
        case 0:
            carelessWhisper();
            break;
        //day n nite
        case 1:
            dayNNite();
            break;
        //la cancion
        case 2:
            laCancion();
            break;
        //smells like teen spirit
        case 3:
            smellsLikeTeenSpirit();
            break;
    }
}

