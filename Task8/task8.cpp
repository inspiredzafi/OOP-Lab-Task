/*
        Task 8: Pointer Reassignment & Memory Leak
    Create dynamic objects using new. Reassign one pointer to point to another object, then delete
    one pointer. Analyze what happens.
    • Create two dynamic objects: Object *a = new Object(); Object *b = new Object();.
    • Reassign: a = b; and then call delete a;.
    • Observe which destructor runs and identify any issues.
    Questions:
    1. Identify if a memory leak occurs.
    2. Which object becomes unreachable?
    3. Which destructor executes?
    4. Fix the code and explain your correction.
*/


#include <iostream>
using namespace std;

class Object{
    string name;

    public:
    Object(const string& name)
    : name(name)
    {
        cout<< "Constructor called for object: "<< name << endl ;
    }

    ~Object(){
        cout<< "Destructor called for object: "<< name << endl ;
    }
};

int main(){

    cout<< endl <<  "After fixing the code." << endl;
    Object* a = new Object("Huzaifa");

    Object* b = new Object("Faizan");

    // Memory Leak

    // To prevent that delete a first and then assingn b to a .
    

    delete a;

    a = b;

    delete a;

    return 0;
}
