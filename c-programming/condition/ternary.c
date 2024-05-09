// ternary in condition 
// The ternary operator is a substitute for an if-else statement in C. It is used to execute different code based on the value of a condition.
// Condition ? expression1 if TRUE : expression2 if FALSE;

#include <stdio.h>

int main() {
    int age;
    printf("Enter a age: ");
    scanf("%d", &age);

    (age >= 18) ? printf("You are an adult\n") : printf("You are a minor\n");

    return 0;
}