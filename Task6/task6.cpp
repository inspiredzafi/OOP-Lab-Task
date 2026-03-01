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




/* 
        Questions:
    1. How many times does the constructor execute?
        Constructor is called 5 times, once for each element of the array.

    2. How many times does the destructor execute?
        Destructor is called 5 times, once for each instance of the array.

    3. What happens if delete is used instead of delete[]?
         Well, destructor executed for object with id: 0 (The first constructed) only, and the program ended with an "Address Boundary Error".

    4. Explain the internal mechanism of array new/delete.
        When a array is created using new keyword, it allocattes memory for the specified objects in memory (5 in this case), It doesn't just allocates the memory for the objects but calls a default constructor for them too. 

        Cpp stores some meta data about the number of destructors to be called when array is deleted. When delete is used instead of "delete[]", it ignores that meta data cause delete indicates that here is only object to destroy. When the Operating system tries to reclaim the memory, it throughs an error, because it also stores meta data about the allocated memory so that it can reclaim it later. When delete is called, it checks its headers to get the information about how many space to reclaim after the given address. And since the cpp returned the wrong address. 

        Wrong? How? The cpp stores the meta data before the address returned to user. when delete[] is called it goes back or adds the address in the pointer and then return to the OS. But simple delete Doesnt do that. So, wrong address in this sense, when os looks for its headers, since the address is wrong, it gets a garbage collection and Throws the segmentation fault or "Array Boundry Error".



*/