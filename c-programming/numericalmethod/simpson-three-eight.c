#include <stdio.h>
#include <math.h>

// Function to integrate
double function(double x)
{
    return cos(x);
}

// Simpson's 3/8 rule for numerical integration
double simpsons38Rule(double a, double b, int n)
{
    if (n % 3 != 0)
    {
        printf("Number of subintervals must be a multiple of 3 for Simpson's 3/8 rule.\n");
        return -1;
    }

    double h = (b - a) / n; // Step size
    double sum = function(a) + function(b);

    for (int i = 1; i < n; i++)
    {
        double x = a + i * h;
        if (i % 3 == 0)
            sum += 2 * function(x);
        else
            sum += 3 * function(x);
    }

    return (3.0 * h / 8.0) * sum;
}

int main()
{
    double a = 1.0; // Lower limit of integration
    double b = 3.0; // Upper limit of integration
    int n = 6;      // Number of subintervals (must be a multiple of 3)
    double result = simpsons38Rule(a, b, n);

    if (result != -1)
        printf("Numerical integration result: %lf\n", result);

    return 0;
}
