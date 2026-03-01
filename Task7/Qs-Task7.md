

# Static Objects: Constructor, Destructor & Behavior

---

## Question 1: How Many Times Does the Static Object's Constructor Execute?

The constructor for a static object executes **only once**, regardless of how many times the function it resides in is called.

---

## Question 2: When Does the Static Object's Destructor Execute?

The static object's destructor is called when the **program terminates**.

---

## Question 3: Why Is Static Object Behavior Different From Normal Objects?

Static members have a **lifetime that spans the entire program** and are only initialized once. In contrast, non-static (local) members have a lifetime that ends as soon as the control flow leaves the function they were declared in.

Because of this persistent lifetime, static members cna be used to **keep track of how many times a function has been called** for a particular object, or to maintain any state that needs to survive across multiple function calls or meta data. 