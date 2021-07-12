#ifndef STATEB_H
#define STATEB_H

#include <string> 
#include "State.h"


class StateB : public State {  
  public: 
    int handle (Context * context, void * arg);
  private: 
      
};

#endif