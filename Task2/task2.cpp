/* 
    Task 2: Stack vs Heap Comparison
    Create a class MemoryCheck with constructors, destructor, and a method to print the object
    address using the this pointer. Create objects on both the stack and the heap. Delete only one
    heap object.


    • Implement class MemoryCheck with constructors, destructor, and address printing.
    • Create at least one stack object and two heap objects (using new).
    • Delete only one of the heap objects and observe the results.
    Questions:

    1. Which destructors are automatically called?
    2. Which destructor is not called, and why?
    3. Explain memory leak in your own words.
    4. Compare stack and heap memory behavior.


*/

#include <iostream>
#include "MemoryCheck.h"

using namespace std;


int main(){

    // Creating an object on stack.
    MemoryCheck object1("Huzaifa");


    // Creating objects on heap.

    MemoryCheck *object2 = new MemoryCheck("Husnain");
    MemoryCheck *object3 = new MemoryCheck("Faizan");

    

    // Deleting one of the Objects on the heap..
    delete object3;         // Triggers the Destructor for object3. Frees up space..



    return 0;
}

