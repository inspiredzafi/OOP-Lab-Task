
# Pointer Reassignment & Memory Leaks

---

## Question 1: Does a Memory Leak Occur?

Yes, a memory leak occurs. The moment pointer `b` is reassigned to point to `a`, the object `Huzaifa` becomes lost — there is no longer any pointer referencing it, so its memory can never be freed.

---

## Question 2: Which Object Becomes Unreachable?

The object `a`, named `Huzaifa`, becomes unreachable after the pointer reassignment.

---

## Question 3: Which Destructor Executes?

The destructor for object `b`, named `Faizan`, is executed.

---

## Question 4: Fix & Explanation

The fix is to `delete a` **before** reassigning the pointer `b` to `a`. This ensures the memory held by `Huzaifa` is properly freed before the pointer is redirected, preventing the memory leak.