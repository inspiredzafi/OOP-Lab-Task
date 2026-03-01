
## Question 1: Constructor and Destructor Execution Order

**a)** The constructor is called for `Tracer t1` on **line 28**.

**b)** The constructor is called for `Tracer t2` on **line 33**, inside the specified block spanning lines 32–35.

**c)** The destructor is called for `Tracer t2` as it goes out of scope. When the control flow encounters the closing brace `}` at **line 35**, the destructor for `t2` is invoked.

**d)** The function `test()` is called at **line 40**, and the constructor is called for `Tracer husnain` on **line 23**.

**e)** The destructor for `Tracer husnain` is called when `test()` encounters its closing brace `}` at **line 24**.

**f)** The destructor for the object `Guest` is called last, since it was declared in `main()` and is destroyed when the `main` function terminates.

---

## Question 2: Why Destructors Follow LIFO Order

All variables are declared on the **stack**, and the stack follows the **Last In, First Out (LIFO)** principle. Because of this, objects declared last are the first to be popped off the stack, meaning their destructors are called first. This is why destructors execute in the reverse order of construction.

---

## Question 3: When Each Object Is Destroyed

Each object is destroyed when the program encounters the **closing brace `}`** of the block in which it was declared. At that point, the object goes out of scope and its destructor is automatically invoked.
