# Stack vs Heap: Destructors & Memory Management

---

## Question 1: Which Destructors Are Automatically Called?

The destructors for objects created on the **stack** are called automatically when control leaves the object's scope.

---

## Question 2: Which Destructor Is Not Called, and Why?

The destructor for `object2` is not called automatically. This is because objects created on the **heap** require their destructors to be called manually, unlike stack variables. To properly destroy a heap object and free its memory, the `delete` operator must be explicitly used.

---

## Question 3: Memory Leak — In Your Own Words

Memory is not freed until the destructor is called. If we do not `delete` objects stored on the heap, their memory is never released, resulting in increased memory usage. Since that memory is neither freed nor usable for storing other data, it is effectively **lost**.

This loss of memory is referred to as a **Memory Leak**.

---

## Question 4: Stack vs Heap Memory Behavior

**a)** The stack follows the **LIFO (Last In, First Out)** standard. Variables declared on the stack are destroyed automatically as soon as their enclosing block reaches its closing brace `}`.

**b)** The heap is a dynamic memory structure that allows memory allocation at **runtime**, making it more flexible than the stack.

**c)** The stack has a size limitation of roughly **8–12 MB**, depending on the operating system. The heap, on the other hand, can utilize the full available RAM.

**d)** Stack variables are destroyed automatically when they go out of scope, whereas variables declared on the heap must be **manually deleted** using the `delete` operator to avoid memory leaks.