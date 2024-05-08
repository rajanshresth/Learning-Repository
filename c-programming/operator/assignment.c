// Assignment operator in C
// In C, the assignment operator (=) is used to assign a value to a variable. The assignment operator is a binary operator that takes the value on the right and assigns it to the variable on the left. The general syntax of the assignment operator is:
// 
// variable = value;
//
// The assignment operator is used to initialize a variable, update the value of a variable, or perform arithmetic operations on a variable. The assignment operator can be combined with other operators to perform compound assignments. For example, the following are some compound assignment operators in C:
//
// Operator	Example	Equivalent
// +=	x += y	x = x + y
// -=	x -= y	x = x - y
// *=	x *= y	x = x * y
// /=	x /= y	x = x / y

#include <stdio.h>

int main() {
    // Initializing variables
    int x = 10;
    int y = 3;
    printf("Initial value of x: %d\n", x);
    printf("Initial value of y: %d\n", y);
    // += (Addition and Assignment)
    printf("Initial value of x: %d\n", x);
    x += y; // Equivalent to x = x + y;
    printf("After x += y, x is now: %d\n", x);

    // -= (Subtraction and Assignment)
    printf("\nInitial value of x: %d\n", x);
    x -= y; // Equivalent to x = x - y;
    printf("After x -= y, x is now: %d\n", x);

    // *= (Multiplication and Assignment)
    printf("\nInitial value of x: %d\n", x);
    x *= y; // Equivalent to x = x * y;
    printf("After x *= y, x is now: %d\n", x);

    // /= (Division and Assignment)
    printf("\nInitial value of x: %d\n", x);
    x /= y; // Equivalent to x = x / y;
    printf("After x /= y, x is now: %d\n", x);

    return 0;
}

