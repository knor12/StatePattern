#ifndef STATEC_H
#define STATEC_H

#include <string> 
#include "State.h"


class StateC : public State {  
  public: 
    int handle ( void * arg);
    
        /*inherit constructor from base class*/
     explicit StateC(Context * context) : State(context) { };
  private: 
      
};

#endif