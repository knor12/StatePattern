#include <stdlib.h> 
#include <iostream>
#include "StateA.h"
#include "Context.h"
#include "log.h"

int StateA::handle ( Context * context, void * arg)
{
    static unsigned int counter=0;
    
    /*example argument processing*/
    counter++; 
    if (counter == 2)
    {
        counter=0; 
        /*example state change*/
        context->SetCurrentState(Context::EnumState::STATE_B);
        
    }else 
    {
        /*nothing to be done here*/
    }
    
    
    LOG( "State A handler called with argument: " );LOGLN ((char*)arg) ;
    

    
    return 0;
    
}