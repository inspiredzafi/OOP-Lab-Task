# Object Composition: Engine & Car Lifecycle

---

## Question 1: Which Constructor Runs First — Engine or Car?

The **Engine constructor** runs first. When an instance of `Car` is created, the compiler first constructs the data members declared inside `Car` — in this case, `Engine`. Only after all member objects are constructed does the `Car` constructor itself run to assign values to those members.

---

## Question 2: Which Destructor Runs First — Engine or Car?

The **Car destructor** runs first, followed by the **Engine destructor**. This is because `Engine` is a data member of `Car` and can only be destroyed after `Car` itself has been destroyed first.

---

## Question 3: Order Using Object Lifecycle Logic

1. The `Car` object is created.
2. The members of `Car` are declared — here, `Engine` is the only member. Its **default constructor** is called automatically upon declaration.
3. The **Car constructor** is called.
4. The **Car destructor** is called when control flow encounters the closing brace `}` of `main()`, since `Car` is the only object declared in that scope.
5. As part of destruction, `Car` begins cleaning up its data members and targets the `Engine` member.
6. The **Engine destructor** is called.
7. The program ends.

---

## Question 4: Memory Layout Diagram

The memory layout diagram is included in the attached file `memoryLayout.png`, which visually demonstrates how `Car` and `Engine` coexist in memory, with `Engine` occupying a region nested within the memory block allocated for `Car`.
