/*
        Task 6: Dynamic Array of Objects (Optional)
    Create a class Device with a constructor and destructor. Allocate a dynamic array of Device
    objects using new[] and deallocate using delete[].
    • Implement class Device with constructor and destructor that print messages.
    • Allocate an array of 5 Device objects using new Device[5].
    • Deallocate using delete[] and then experiment with using just delete.
    Questions:
    1. How many times does the constructor execute?
    2. How many times does the destructor execute?
    3. What happens if delete is used instead of delete[]?
    4. Explain the internal mechanism of array new/delete.

*/

#include <iostream>
using namespace std;

class Device{
static inline int count = 0;        // Just to track the number of objects, aur ye determine krnay k liye k konsa object pehlay mara, konsa baad main mara.
    public: 
        int id ;
        
        Device(){
            id = count++;
            cout<< "The constructor for Device is called with the id: " << id << endl ;
        }

        ~Device(){
            count--;
            cout<< "The destructor for Device is called with the id: " << id << endl ;
        }



};



int main()
{
    
    Device* arr = new Device[5];        // Constructor is called 5 times, once for each instance of the array.

    cout<< endl << endl ;
    
    delete[] arr ;                  // Destructor is called 5 times, once for each instance of the array.

    // delete arr;         // Well, destructor executed for object with id: 0 (The first constructed) only, and the program ended with an "Address Boundary Error"


    arr = nullptr;
    
}