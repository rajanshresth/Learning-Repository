// input and output in c
// In C, input and output are performed using standard input and output functions. The standard input function is scanf() and the standard output function is printf(). These functions are defined in the stdio.h header file.
#include<stdio.h>
int main(){
    // I/O in C
    // Write a program that takes an integer as input and prints it to the console.
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("You entered: %d\n", number);

    // Write a program that takes floating-point number as input and prints it to the console.
    float f;
    printf("Enter a floating-point number: ");
    scanf("%f", &f);
    printf("You entered: %f\n", f);

    // Write a program that takes a character as input and prints it to the console.
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("You entered: %c\n", c);
    

    return 0;
}