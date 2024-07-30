#include <stdio.h>

// Function defining the ODE: dy/dx = f(x, y)
double f(double x, double y)
{
    return x + y;
}
// Modified Euler method implementation
void modifiedEulerMethod(double x0, double y0, double h, double xn)
{
    double x = x0;
    double y = y0;
    printf("x\t\t y\n"); // Print table headers
    while (x <= xn)
    {
        printf("%lf\t %lf\n", x, y); // Print current x and y values
        // Compute the slopes at the current and next points
        double slope1 = f(x, y);
        double slope2 = f(x + h, y + h * slope1);
        // Update the values using the Modified Euler method
        y = y + (h / 2.0) * (slope1 + slope2);
        x = x + h;
    }
}
int main()
{
    double x0 = 0.0; // Initial x value
    double y0 = 1.0; // Initial y value
    double h = 0.1;  // Step size
    double xn = 1.0; // Point at which to approximate the solution
    modifiedEulerMethod(x0, y0, h, xn);
    return 0;
}