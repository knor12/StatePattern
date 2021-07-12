
#ifndef CONTEXT_H
#define CONTEXT_H

#include "State.h"

class Context {  
  public: 
    enum class EnumState { STATE_INIT, STATE_A , STATE_B ,  STATE_C};
    int ProcessEvent(void * );
    int SetCurrentState(EnumState); 
    Context();
    ~Context();
    
  private: 
    #define  MAX_NUM_STATES 4
    EnumState enum_current_state ;
    State * states[MAX_NUM_STATES];
    
  protected:

    
};

#endif