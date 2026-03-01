# Question 1: How Many Times Does the Constructor Execute?

The constructor is called **5 times** — once for each element in the array.

---

## Question 2: How Many Times Does the Destructor Execute?

The destructor is called **5 times** — once for each instance in the array.

---

## Question 3: What Happens If `delete` Is Used Instead of `delete[]`?

The destructor only executes for the object with `id: 0` (the first one constructed), and the program terminates with an **Address Boundary Error**.

---

## Question 4: Internal Mechanism of `new[]` and `delete[]`

When an array is created using the `new[]` keyword, it allocates memory for the specified number of objects (5 in this case) and also calls the **default constructor** for each one — it doesn't just allocate raw memory.

C++ stores **metadata** about the number of objects in the array so it knows how many destructors to call when `delete[]` is invoked. When plain `delete` is used instead of `delete[]`, this metadata is ignored, because `delete` assumes there is only a single object to destroy.

When the operating system then tries to reclaim the memory, it throws an error. Here's why:

- The OS also stores its own metadata (headers) about allocated memory blocks, placed **before** the address returned to the user, so it can track how much space to reclaim later.
- When `delete[]` is called, C++ steps back from the user-facing pointer to account for the metadata offset, then passes the **correct base address** back to the OS.
- When plain `delete` is called, it does **not** perform that offset step, so it hands the OS the wrong address.
- The OS looks at its headers starting from that wrong address, reads garbage data, and throws a **Segmentation Fault** or **Address Boundary Error**.
