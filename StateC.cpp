#include <stdlib.h> 
#include <iostream>
#include "StateC.h"
#include "Context.h"
#include "log.h"

int StateC::handle ( Context * context, void * arg)
{

    LOG( "State C handler called with argument: " );LOGLN ((char*)arg) ;
    
    /*example state change*/
    context->SetCurrentState(Context::EnumState::STATE_A);
    
    return 0;
    
}