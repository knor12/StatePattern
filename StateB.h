#ifndef STATEB_H
#define STATEB_H

#include <string> 
#include "State.h"


class StateB : public State {  
  public: 
    int handle (void * arg);
    
    /*inherit constructor from base class*/
     explicit StateB(Context * context) : State(context) { };
  private: 
  
  
      
};

#endif