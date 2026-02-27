
/*

Task 1: LIFO Behavior on Stack
Create a class Tracer with a default constructor and destructor that print the object name.
Create objects in main(), inside a nested block, and inside a function test().
• Implement class Tracer with constructor and destructor messages.
• Create objects in main() scope, a nested {} block, and a separate function test().
• Observe and record the order of constructor and destructor calls.

Questions:
1. Write the exact constructor and destructor execution order.
2. Explain why destructors follow LIFO (Last In, First Out) order.
3. Identify precisely when each object is destroyed.

*/

#include <iostream>
#include "Tracer.h"
using namespace std;


void test(){
    Tracer Husnain("Husnain");
}

int main(){

    Tracer t1;
    // cout<< t1.name << endl ;

    // Creating an object inside a block.
    {
        Tracer t2("Huzaifa");

    }

    test() ;        // function that creates another object named husnain.. 


    return 0;
}


// Questions
/* 
    1. Write the exact constructor and destructor execution order.
        a) The constructor is called for Tracer t1 on line 28..
        b) The constructor is called for Tracer t2 on line 33 in a specified block from line 32 - 35,
        c) The destructor is called for Tracer t2 as t2 gets out of scope of the block, as the control flow encounter the closing brace "}" at line 35, it encounters the Destructor for t2.

        d) The function test is called at line 40, and the constructor is called for Tracer husnain on the line 23..
        e) The destructor for the Tracer Husnain is called as the function test() encounters its closing brace "}" on the line 24.
        f) Destructor for the Object Guest is called since it was declared in the main function and its destroyed when the main function terminates.
        
        
*/


/*
    2. Explain why destructors follow LIFO (Last In, First Out) order.
        All the variables are declared in stack and stack follows the last in first out order (the LIFO) standard, and that's the reason the destructor for the Objects declared at the very end 
        are popped first and destructor is called for them. 


*/


/*
    3. Identify precisely when each object is destroyed.
        Each object is destroyed when encounters the closing brace of the block it was declared in. 
*/