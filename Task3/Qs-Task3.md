
# Copy Constructors, Destructors & Memory Addresses

---

## Question 1: How Many Times Does the Copy Constructor Execute?

The copy constructor executes **three times**:

- Once for `Book b4(b2)`
- Once for `Book b5 = b1`
- Once for `b3 = Book()`

---

## Question 2: When Does Each Destructor Run?

Each destructor was executed in the **reverse order** in which the objects were declared, following the LIFO (Last In, First Out) principle of the stack.

---

## Question 3: What Do Object Memory Addresses Tell You?

An object's memory address is the **physical memory address** where that object is located in memory. Each object occupies its own unique location, and the address tells you exactly where in RAM that object is stored.