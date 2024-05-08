// Arthmetical operators in C
// In C, arthmetical operators are used to perform basic arithmetic operations. The following are the arthmetical operators in C:
// 
// Operator	Description
// +	Addition
// -	Subtraction
// *	Multiplication
// /	Division
// %	Modulus
//


// Write a program that takes two integers as input and prints the sum, difference, product, quotient, and remainder of the two numbers.
#include<stdio.h>
int main(){
    // Write a program that takes two integers as input and prints the sum, difference, product, quotient, and remainder of the two numbers.
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("product: %d \n", a * b);
    printf("quotient: %d \n", a / b);
    printf("remainder: %d \n", a % b);
}