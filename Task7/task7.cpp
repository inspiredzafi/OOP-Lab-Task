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



/*                              **** Questions ******

    1. How many times does the static object’s constructor execute?

        The constructor for thet static object executed only once. 

    2. When does the static object’s destructor execute?

        The static objects destructor is called when 

    3. Why is static object behavior different from normal objects?
        Static declared members have the lifetime till the end of program, and is only declared once. Whereas non-static or local members have a lifetime untill the control flow leaves the function the members are declared in. static members can be used to keep track of function calls made to some particular object. 


*/
