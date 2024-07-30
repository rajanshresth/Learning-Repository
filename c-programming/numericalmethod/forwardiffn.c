#include <stdio.h>
// Tabulated data points
double x[] = {1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6};                // x values
double y[] = {7.989, 8.403, 8.781, 9.129, 9.451, 9.750, 10.031}; // y values
// Numerical differentiation using forward difference
double forwardDifference(int index)
{
    double h = x[index + 1] - x[index];
    return (-3 * y[index] + 4 * y[index + 1] - y[index + 2]) / (2 * h);
}
int main()
{
    int index = 1; // it means derivative is need to be found at 1.1
    double result = forwardDifference(index);

    printf("Numerical differentiation result: %.4lf\n", result);
    return 0;
}