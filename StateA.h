#ifndef STATEA_H
#define STATEA_H

#include <string> 
#include "State.h"


class StateA : public State {  
  public: 
    //StateA(){};
    int handle (Context * context, void * arg);
  private: 
      
};

#endif