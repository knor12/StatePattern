#include <iostream>
#include <stdlib.h> 
#include "Context.h"

using namespace std;

int main() {    
    
    
    Context context; 
    int i = 0; 
    do
    {
        std::cout << "running \n"; 
        context.ProcessEvent((void*)"some argument");
        context.ProcessEvent((void*)"some argument 1");
        context.ProcessEvent((void*)"some argument 2");
        context.ProcessEvent((void*)"some argument 3");
        context.ProcessEvent((void*)"some argument 4");
        context.ProcessEvent((void*)"some argument 5");
        
    }while (i< 100);

}