// explain pointer and pointer array in C language

#include <stdio.h>

// Function prototype for swap function
void swap(int *ptr1, int *ptr2);

int main() {
    int a = 5;
    int b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call the swap function with addresses of variables a and b
    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

// Function definition for swap function
void swap(int *ptr1, int *ptr2) {
    int temp;

    // Swap the values using pointers
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
