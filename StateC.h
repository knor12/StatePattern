#ifndef STATEC_H
#define STATEC_H

#include <string> 
#include "State.h"


class StateC : public State {  
  public: 
    int handle (Context * context, void * arg);
  private: 
      
};

#endif