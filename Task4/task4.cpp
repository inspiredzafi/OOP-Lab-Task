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
    {
        cout<< "The copy constructor was called " << endl ;
    }

    ~Student()
    {
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

    displayByRef(s1);
    cout<< "Displaying by Reference" << endl ;
    displayByValue(s1);

        return 0;
}




/* 
     Questions:
    1. Which function calls the copy constructor?

        The copy constructor is called when the function "displayByRef" is called. 

    2. Why does it happen?

    
    3. Trace the full execution order from start to finish.


*/