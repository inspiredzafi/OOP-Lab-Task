
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
