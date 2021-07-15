
#ifndef STATE_H
#define STATE_H

#include <string> 
#include <iostream>

/*no need to include context.h here, to not cause include loops*/
class Context; 

class State {  
  public: 
  
    /*virtual function that( can be inherited by the subclasses*/ 
    virtual int handle( void * arg )=0 ; 
    /*
        {
            states transitions and state logic go inside this 
        };
    */
    
    State(Context * context)
    {
       _context = context;  
    }
    
  private: 

  
  protected:
    Context * _context;

    
};

#endif