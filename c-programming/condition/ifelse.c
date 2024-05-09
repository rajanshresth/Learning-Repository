// if-else in C
// if-else is used to execute a block of code if the condition is true and another block of code if the condition is false.

#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number is positive\n");
    } else {
        printf("The number is negative\n");
    }

    return 0;
}