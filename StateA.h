#ifndef STATEA_H
#define STATEA_H

#include <string> 
#include "State.h"


class StateA : public State {  
  public: 
    //StateA(){};
    int handle ( void * arg);
    
    /*inherit constructor from base class*/
     explicit StateA(Context * context) : State(context) { }; 
  private: 
      
};

#endif