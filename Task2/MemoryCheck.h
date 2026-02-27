
#include <iostream>
using namespace std;

#if !defined(MEMORYCHECK)

#define MEMORYCHECK





class MemoryCheck{
    public: 
    string name;
    
    MemoryCheck(string n): name(n)
    {
        cout<< "The constructor is called for " << name << endl ;
        
    }
    
    ~MemoryCheck(){
        cout<< "Destructor called for " << name << endl ;
        
    }
    
    void printAddress(){
        cout<< "The address of the Object is " << this << endl ;
    }
};


#endif // MEMORYCHECK