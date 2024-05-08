// Relational operators in C
// In C, relational operators are used to compare two values. The following are the relational operators in C:
// == - Equal to
/* != - Not equal to */
// > - Greater than
// < - Less than
// >= - Greater than or equal to
// <= - Less than or equal to


// Write a program that takes two integers as input and prints whether the first number is greater than, less than, or equal to the second number.

#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a == b){
        printf("The numbers are equal\n");
    } else if(a > b){
        printf("%d is greater than %d\n", a, b);
    } else if(a < b){
        printf("%d is less than %d\n", a, b);
    } else if(a>=b){
        printf("%d is greater than or equal to %d\n", a, b);
    } else if(a<=b){
        printf("%d is less than or equal to %d\n", a, b);
    }
}
