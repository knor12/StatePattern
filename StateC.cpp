#include <stdlib.h> 
#include <iostream>
#include "StateC.h"
#include "Context.h"
#include "log.h"

int StateC::handle ( void * arg)
{

    LOG( "State C handler called with argument: " );LOGLN ((char*)arg) ;
    
    /*example state change*/
    _context->SetCurrentState(Context::EnumState::STATE_A);
    
    return 0;
    
}