**Pointers**

In C, a pointer is a variable that stores the memory address of another variable. Instead of storing the actual value, a pointer holds the location (address) in memory where the value is stored. Here's how you declare a pointer in C:

```c
int *ptr; // Declares a pointer to an integer
```

In this declaration, `int *` specifies that `ptr` is a pointer to an integer. To assign the address of a variable to a pointer, you use the address-of operator (`&`):
```c
int x = 10;
ptr = &x; // Assigns the address of x to ptr
```

To access the value stored at the memory address pointed to by a pointer, you use the dereference operator (`*`):

```c
int y = *ptr; // Retrieves the value stored at the memory address pointed to by ptr (which is 10)
```