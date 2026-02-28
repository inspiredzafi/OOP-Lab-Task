/* 
    Task 3: Copy Constructor Analysis
    OOP Lab | Constructors, Destructors & Object Lifecycle
    Page 3
    Create a class Book with a default constructor, parameterized constructor, copy constructor,
    and destructor. Create multiple objects using different initialization techniques.
    • Implement class Book with all four special member functions.
    • Create objects using: default construction, parameterized construction, and copy
    construction.
    • Use different copy syntax: Book b2 = b1; and Book b3(b1);.
    Questions:
    1. How many times does the copy constructor execute?
    2. When does each destructor run?
    3. Explain the object memory addresses and what they tell you.

*/

#include <iostream>
using namespace std;

class Book{
    static inline int bookCount = 0;        // A static datamember to keep track of the number of objects created of type "Book".

    int id;
    string title;
    string desc;
    float price;


    public:

        // Master Constructor - Isi ko call krain gay har jagah say taakay increment ki logic hmein repeat na krni prhay.

        Book(int id, string title, string desc, float price) 
        : id(id), title(title), desc(desc), price(price)
        {
            cout<< "Created a book with title: " << title << endl ;
            bookCount++ ;
            
        }

        // Agr to koi parameter nhi diay, to Ye constructor call hoga, aur iski initializer list say hum Master constructor ko cll krein gay.. 

        // Default Constructor
        Book()
        : Book(bookCount, "Unknown", "No Descrition for this item", 50.00)  // Price atleast 50 rupeess hogi hi
        {

        }  


        Book(string title, string desc)
        : Book(bookCount, title, desc, 50.00)
        {
            // id = bookCount;
            // bookCount++ ;
        }


        // Copy Constructor - If not defined by the user, compiler automatically creates one.
        Book(Book& book)
        : Book(bookCount, book.title, book.desc, book.price)
        {

        }

        


        ~Book(){
            cout<< "Destructed the Book: " << title << " having the id " << id << endl ;            // Just to keep track k konsa destructor pehlay run hua, copied walay object ya original object ka.

            bookCount--;
        }




        static int getBookCount(){
            return bookCount;
        }


};

int main(){

    Book b1(0, "OOP", "TEst Book", 78.34);

    Book b2 = Book("Programming Fundamentals", "Writeen by John Doe to help you get out of the Lab-Task-1");

    Book b3 = Book();       // Callign the default constructor.

    Book b4(b2);        // Calling copy constructor

    Book b5 = b1;

    cout<< "Address of b2 is: " << &b2 << " and the address of b4 is "<< &b4 << endl ;

    cout<< "Adress of b1 is: " << &b1 << " and the address of b5 is: " << &b5 << endl;


    return 0;
}



// Questions

/*
    1. How many times the copy constructor execute?
        It did execute two times, once for Book b4(b2) and Once for Book b5 = b1


    2. When does each destructor run ? 

        Each destructor executed when the main function did end, in the reverse order the objects were declared.. 
        Objects were destroyed in this sequence. b5 

    3. Explain the object memory address and what they tell you?

        Object memory address is the Physical memory address where the object is located in the memory...



*/