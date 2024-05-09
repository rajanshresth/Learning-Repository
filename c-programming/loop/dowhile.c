// do-while loop in c

#include <stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int i = 0;
    do
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);
        i++;
    } while (i <= number);
    return 0;
}