#include <stdio.h>
#include <math.h>

double function(double x)
{
    return (4 * exp(x) / (1 + pow(x, 3)));
}

double trapezoidalRule(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = (function(a) + function(b)) / 2.0;
    for (int i = 1; i < n; i++)
    {
        double x = a + i * h;
        sum += function(x);
    }
    return h * sum;
}
int main()
{
    double a = 0.0;
    double b = 2.0;
    int n = 100;
    double result = trapezoidalRule(a, b, n);
    printf("Numerical integration result: %lf\n", result);
    return 0;
}