// recrussion

#include <stdio.h>

// function to calculate the factorial of a number
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The factorial of %d is %d\n", number, factorial(number));
    return 0;
}