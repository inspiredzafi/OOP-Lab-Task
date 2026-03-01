/*
        Task 5: Object Composition
    Create two classes: Engine and Car, where Car contains an Engine object as a member. Add
    constructors and destructors to both classes and create a Car object in main().
    • Implement class Engine with constructor and destructor.
    • Implement class Car that has an Engine member variable.
    • Create a Car object in main() and observe the construction/destruction order.
    Questions:
    
    1. Which constructor runs first — Engine or Car?
    2. Which destructor runs first — Engine or Car?
    3. Explain the order using object lifecycle logic.
    4. Draw a memory layout diagram showing how Car and Engine coexist.

*/

#include <iostream>
using namespace std;

class Engine{
    public: 
        
        Engine(){
            cout<< "The constructor for Engine is called. " << endl ;
        }

        ~Engine(){
            cout<< "The destructor for Engine is called. " << endl ;
        }



};

class Car{
    Engine engine;

    public: 
        Car(){
            cout<< "The constructor for car is called." << endl ;
        }

        ~Car(){
            cout<< "Destructor for car is called " << endl ;
        }
};

int main()
{
    Car car1;
    
}




/* 
     Questions:
    1. Which constructor runs first — Engine or Car?
        The Engine constructor runs first, when the instance of Car is made, The compiler creates the objects or data members declared in the object( car) first and then the constructor for Car is called which is used to assign values to these declared members (Engine here).
        

    2. Which destructor runs first — Engine or Car?

        The destructor for the Car runs first, and then the destructor for Engine is executed. This is because Engine is datamember of Car and is only destroyed after the car is destroyed itself first. 

    3. Explain the order using object lifecycle logic.

        a) The object car is created.
        b) Members of Car are declared, here engine is only member, and is called for its default constructor when declared. 
        c) Constructor for the Car is called. 
        d) The destructor for Car is called, as the control flow encounter the closing brace of main function, since it's the only object declared in the scope  of main function.
        e) When the destructor is called, it destroyes the data members declared in the object. Tries to clean engine data member.
        f) Destructor for the Engine is called.
        g) Program ends

    
    4. Draw a memory layout diagram showing how Car and Engine coexist.
        Checkout the Attached image, memoryLayout.png.


*/