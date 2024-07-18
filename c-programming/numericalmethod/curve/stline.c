#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void linear_fit(double x[], double y[], int n, double *a, double *b)
{
    double sum_x = 0, sum_y = 0, sum_xy = 0, sum_xx = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_xx += x[i] * x[i];
    }
    double delta = n * sum_xx - sum_x * sum_x;
    if (delta == 0)
    {
        printf("Cannot fit a line\n");
        exit(1);
    }
    *a = (n * sum_xy - sum_x * sum_y) / delta;
    *b = (sum_y - *a * sum_x) / n;
}
int main()
{
    double x[] = {1, 2, 3, 4, 6, 8};     // enter the value of X
    double y[] = {2.4, 3, 3.6, 4, 5, 6}; // enter the value of Y
    int n;
    printf("enter the number of data points: ");
    scanf("%d", &n);
    double a, b;
    linear_fit(x, y, n, &a, &b);
    printf("a = %f, b = %f\n", a, b);
    printf("the best curve fit is y = %f + %f x", a, b);
    return 0;
}