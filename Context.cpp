#include <stdlib.h> 
#include <iostream>
#include <string> 
#include "context.h"
#include "stateA.h"
#include "stateB.h"
#include "stateC.h"


int Context::ProcessEvent(void * arg)
{
    states[(int)enum_current_state]->handle( arg);

    return 0;    
}

int Context::SetCurrentState(EnumState state)
{
    enum_current_state =  state;
    
    return 0;
}

Context::Context()
{
    /*setting the init state*/
    enum_current_state =  EnumState::STATE_INIT;
    
    /*instantiating all the states */
    states[(int)EnumState::STATE_INIT] = new StateA(this);
    states[(int)EnumState::STATE_A] = new StateA(this);
    states[(int)EnumState::STATE_B] = new StateB(this); 
    states[(int)EnumState::STATE_C] = new StateC(this); 
 
}

Context::~Context()
{
    /*de-allocating all the states*/
    delete  states[(int)EnumState::STATE_INIT]; 
    delete  states[(int)EnumState::STATE_A]; 
    delete  states[(int)EnumState::STATE_B]; 
    delete  states[(int)EnumState::STATE_C];
}