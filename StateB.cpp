#include <stdlib.h> 
#include <iostream>
#include "StateB.h"
#include "Context.h"
#include "log.h"

int StateB::handle ( void * arg)
{
    
    LOG( "State B handler called with argument: " );LOGLN ((char*)arg) ;
    
    /*example state change*/
    _context->SetCurrentState(Context::EnumState::STATE_C);
    
    return 0;
    
}