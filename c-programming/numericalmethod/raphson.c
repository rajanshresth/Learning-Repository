#include <stdio.h>
#include <math.h>

#define EPSILON 0.000001

double f(double x)
{
    return x * log10(x) - 1.2;
}

double f_prime(double x)
{
    return log10(x) + 1 / log(10);
}

double newton_raphson(double x)
{
    double x_next = x;
    double fx, fpx;
    int i = 1;

    printf("Iter\t x\t\t f(x)\n");

    while (1)
    {
        fx = f(x_next);
        fpx = f_prime(x_next);
        printf("%d\t %lf\t %lf\n", i, x_next, fx);

        if (fabs(fx) < EPSILON)
        {
            break;
        }
        x_next = x_next - fx / fpx;
        i++;
    }
    return x_next;
}

int main()
{
    double root = newton_raphson(2.0);
    printf("Root is %lf\n", root);
    return 0;
}
