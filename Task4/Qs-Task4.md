# Copy Constructor: Pass by Value vs Pass by Reference

---

## Question 1: Which Function Calls the Copy Constructor?

The copy constructor is called when the function `displayByValue()` is called.

---

## Question 2: Why Does It Happen?

When an object is passed to a function **by value**, the function creates an internal copy of that object for its own use. This ensures that nothing in the original variable is modified during the function's execution.

---

## Question 3: Full Execution Order — Start to Finish

1. `s1` is created with name `Huzaifa` and department `Computer Science`.

2. The function `displayByValue()` is called, which internally invokes the **copy constructor** to create a copy of the object for its internal use.

3. The name and department of the copied object are printed, and then the **destructor** is called for that internally created copy. It is named `default` intentionally to differentiate it from the original object.

4. The function `displayByRef()` is called. Since the object is passed **by reference**, no copy constructor is invoked for this call.

5. Finally, the destructor is called for the original student object `s1` with the name `Huzaifa`.