#include <stdio.h>
#include <math.h>

double f(double x)
{
    return exp(-x) - x;
}

double g(double x)
{
    return exp(-x);
}

int main()
{
    double x0, x, tolerance;
    int iterations;
    // Read in initial guess, tolerance, and maximum iterations
    printf("Enter initial guess x0: ");
    scanf("%lf", &x0);
    printf("Enter tolerance: ");
    scanf("%lf", &tolerance);
    printf("Enter maximum iterations: ");
    scanf("%d", &iterations);
    // Perform fixed point iteration
    for (int i = 1; i <= iterations; i++)
    {
        x = g(x0);
        printf("Iteration %d: x = %lf, f(x) = %lf\n", i, x, f(x));
        if (fabs(x - x0) < tolerance)
        {
            printf("Converged to solution x = %lf after %d iterations.\n", x, i);
            return 0;
        }
        x0 = x;
    }
    printf("Failed to converge within %d iterations.\n", iterations);
    return 0;
}