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


// Questions 

/*

    1. Which destructors are automatically called?
        The destructors for the objects created on stack are called automatically when the controls leaves the objects scope..

    
*/

/*

    2. Which destructor is not called, and why?

        The destructor for object2 is not called, because we need to call the destructors for the data created on heap manually, unlike variables on stack, using the delete operator. 

*/


/* 

    3. Explain memory leak in your own words.
        The memory is not freed until the destructor is called, and hence if we donot "delete" the objects stored on heap, the memory is not freed and result in more memory usage. Since, the memory is not freed and cannot be used for storing other data. This part of the memory is Lost or it can't be used. 

        This loss of memory is referred to as Memory Leak.

*/


/*

    4. Compare stack and heap memory behavior.
        a) Stack follows LIFO standard, (Last IN, First Out. Variables declared on stack die as the block reaches its end (the closing brace)
        b) Heap is a dynamic data structure that is used to store data. It allows memory allocation at run-time.

        c) Stack has a limitation, it can store 8 - 12 MB of data based on the Operating System. Whereas, heap can access the whole ram.
        d) The variables on stack die as the go out of scope, but we need to delete the variables declared on heap manually. 

*/