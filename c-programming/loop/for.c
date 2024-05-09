// for loop with break in C

#include <stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 0; i <= number; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}