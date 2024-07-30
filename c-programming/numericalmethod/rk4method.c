#include <stdio.h>
// Function defining the ODE: dy/dx = f(x, y)
double f(double x, double y)
{
    return x + y;
}
// RK4 method implementation
void rk4Method(double x0, double y0, double h, double xn)
{
    double x = x0;
    double y = y0;
    printf("x\t\t y\n"); // Print table headers
    while (x <= xn)
    {
        printf("%lf\t %lf\n", x, y); // Print current x and y values
        // Compute the intermediate slopes
        double k1 = h * f(x, y);
        double k2 = h * f(x + h / 2.0, y + k1 / 2.0);

        double k3 = h * f(x + h / 2.0, y + k2 / 2.0);
        double k4 = h * f(x + h, y + k3);
        // Update the values using the RK4 method
        y = y + (k1 + 2.0 * k2 + 2.0 * k3 + k4) / 6.0;
        x = x + h;
    }
}
int main()
{
    double x0 = 0.0; // Initial x value
    double y0 = 1.0; // Initial y value
    double h = 0.1;  // Step size
    double xn = 1.0; // Point at which to approximate the solution
    rk4Method(x0, y0, h, xn);
    return 0;
}