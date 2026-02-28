/*
        Task 4: Pass by Value vs Pass by Reference
    Create a class Student with constructors and destructor. Write two functions: one that takes a
    Student by value and one that takes a Student by reference.
    • Implement class Student with constructor, copy constructor, and destructor.
    • Write void displayByValue(Student s) and void displayByRef(Student &s).
    • Call both functions from main() and observe the output.
    Questions:
    1. Which function calls the copy constructor?
    2. Why does it happen?
    3. Trace the full execution order from start to finish.
z
*/

#include <iostream>
using namespace std;

class Student
{
    public:

    string name;
    string Department;

    Student(){
        cout<< "Default constructor was called " << endl ;
    }

    Student(string name, string dept)
        : name(name), Department(dept)
    {
        cout << "Created the Object with the name " << name << endl;
    }

    Student(Student& student)
    : name("Default"), Department("Default")
    {
        cout<< "The copy constructor was called and assigned the name: " << name << endl ;
        
    }

    ~Student()
    {
        cout<< "Destroyed the object with the name " << name << endl ;
    }
};

void displayByValue(Student student)
{
    cout << "Student Name: " << student.name << endl;

    cout << "Department: " << student.Department << endl;
}

void displayByRef(const Student &student)
{
    cout << "Student Name: " << student.name << endl;

    cout << "Department: " << student.Department << endl;
}

int main()
{

    Student s1("Huzaifa", "Computer Science");

    displayByValue(s1);
    cout<< "Displaying by Reference" << endl ;
    displayByRef(s1);

        return 0;
}




/* 
     Questions:
    1. Which function calls the copy constructor?

        The copy constructor is called when the function "displayByValue" is called. 

    2. Why does it happen?  
        When an object is passed to some function by value it creates a copy of this object for its internal use so that nothing is changed in the original variable.

    
    3. Trace the full execution order from start to finish.
        
        1. S1 is created with name <Huzaifa> and Department <Computer Science>
        2. Function displayByValue is called, which internally calls the copy constructor for its internal use in the function.
        3. The name and the department of the object is printed, and then destructor is called for the newly created object in the displayByValue function. (Named default intionally to differenciate between two obejects.)
        4. Function displayByRef is called, the object is passed by reference and hence no copy constructor is called for this call.
        5. The Student s1 with the name "Huzaifa" is destruced. Its destructor is called.
*/