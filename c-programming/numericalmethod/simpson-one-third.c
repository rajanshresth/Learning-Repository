#include <stdio.h>
#include <math.h>
// Function to integrate
double function(double x)
{
    return cos(x);
}
// Simpson's 1/3 rule for numerical integration
double simpsonsRule(double a, double b, int n)
{
    double h = (b - a) / n; // Step size
    double sum = function(a) + function(b);
    for (int i = 1; i < n; i++)
    {
        double x = a + i * h;
        if (i % 2 == 0)
            sum += 2 * function(x);
        else
            sum += 4 * function(x);
    }
    return (h / 3.0) * sum;
}
int main()
{
    double a = 1.0; // Lower limit of integration
    double b = 3.0; // Upper limit of integration
    int n = 4;      // Number of subintervals (must be even)
    double result = simpsonsRule(a, b, n);
    printf("Numerical integration result: %lf\n", result);
    return 0;
}