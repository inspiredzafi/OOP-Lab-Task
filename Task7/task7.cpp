/* 
        Task 7: Static Object Behavior (Optional)
    Create a class Logger. Inside a function, declare one static Logger object and one normal
    Logger object. Call the function twice from main().
    • Implement class Logger with constructor and destructor messages.
    • Write a function with one static Logger and one local Logger.
    • Call the function twice and observe the output carefully.
    
    Questions:
    1. How many times does the static object’s constructor execute?
    2. When does the static object’s destructor execute?
    3. Why is static object behavior different from normal objects?

*/


#include <iostream>
using namespace std;

class Logger{
    public: 
        string name;        // Static or Local

        Logger(const string &name)
        : name(name)
        {
            cout<< "Constructor called for "<< name <<" Logger Object." << endl ;
        }

        ~Logger(){
            cout<< "Destructor called for the " << name << " Logger." << endl ;
        }
};

void function(){

    static Logger logger("Static");

    Logger localLogger("Local");        // Non-static or local logger.


}


int main(){

    function();
    function();

    

    return 0;
}

