// Logical operators in C
// In C, logical operators are used to combine two or more conditions. The following are the logical operators in C:
//
/*
&&	Logical AND
||	Logical OR
/*!	Logical NOT *
*/

#include <stdio.h>

// Function to check if a number is even and positive
int isEvenAndPositive(int num) {
    // Using logical AND (&&) operator to combine two conditions
    if (num % 2 == 0 && num > 0) {
        return 1; // Return true if both conditions are true
    } else {
        return 0; // Return false otherwise
    }
}

// Function to check if a number is odd or negative
int isOddOrNegative(int num) {
    // Using logical OR (||) operator to combine two conditions
    if (num % 2 != 0 || num < 0) {
        return 1; // Return true if at least one condition is true
    } else {
        return 0; // Return false otherwise
    }
}

// Function to invert a boolean value
int invert(int value) {
    // Using logical NOT (!) operator to invert the boolean value
    return !value;
}

int main() {
    int num1, num2, num3;
    printf("Enter num1 numbers: ");
    scanf("%d", &num1);
    printf("Enter num2 numbers: ");
    scanf("%d", &num2);
    printf("Enter num3 numbers: ");
    scanf("%d", &num3);

    printf("\n");
    printf("If 0 is returned, the condition is false. If 1 is returned, the condition is true.\n\n")

    // Demonstrating isEvenAndPositive function
    printf("%d is even and positive: %d\n", num1, isEvenAndPositive(num1));
    printf("%d is even and positive: %d\n", num2, isEvenAndPositive(num2));
    printf("%d is even and positive: %d\n", num3, isEvenAndPositive(num3));

    printf("\n");

    // Demonstrating isOddOrNegative function
    printf("%d is odd or negative: %d\n", num1, isOddOrNegative(num1));
    printf("%d is odd or negative: %d\n", num2, isOddOrNegative(num2));
    printf("%d is odd or negative: %d\n", num3, isOddOrNegative(num3));

    printf("\n");

    // Demonstrating invert function
    int value = 0; // Initially false
    printf("Initial value: %d, Inverted value: %d\n", value, invert(value));
    value = 1; // Now true
    printf("Initial value: %d, Inverted value: %d\n", value, invert(value));

    return 0;
}
