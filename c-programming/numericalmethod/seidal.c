#include <stdio.h>
#include <math.h>
/* Arrange systems of linear quations to be solved in diagonally dominant form and form
equation for each unknown and define here
*/
/* Arranging given system of linear equations in diagonally dominant form:
10x+y-z=12
x+10y+z=28
-x+y+10z=35
*/
/* Defining function */
#define f1(x, y, z) (12 - y + z) / 10
#define f2(x, y, z) (28 - x - z) / 10
#define f3(x, y, z) (35 + x - y) / 10

int main()
{
    float x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, e1, e2, e3, e;
    int count = 1;
    printf("Enter tolerable error:\n");
    scanf("%f", &e);
    printf("\nCount\tx\ty\tz\n");
    do
    {
        /* Calculation */
        x1 = f1(x0, y0, z0);
        y1 = f2(x1, y0, z0);
        z1 = f3(x1, y1, z0);
        printf("%d\t%0.4f\t%0.4f\t%0.4f\n", count, x1, y1, z1);
        /* Error */
        e1 = fabs(x0 - x1); // fabs is absolute value..
        e2 = fabs(y0 - y1);
        e3 = fabs(z0 - z1);
        count++; // declaring variable with initial guess...
        /* Set value for next iteration */
        x0 = x1;
        y0 = y1;
        z0 = z1;
    } while (e1 > e && e2 > e && e3 > e);
    printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n", x1, y1, z1); // precision upto 3 decimal
    return 0;
}