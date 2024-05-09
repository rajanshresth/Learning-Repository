// while condition in C

#include <stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int i = 0;
    while (i <= number)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
}