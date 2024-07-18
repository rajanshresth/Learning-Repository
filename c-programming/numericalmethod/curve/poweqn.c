#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 4 // number of data points

int main()
{
    double x[N] = {61, 26, 7, 2.6};     // x values
    double y[N] = {350, 400, 500, 600}; // y values
    double sum_x = 0.0, sum_y = 0.0, sum_xy = 0.0, sum_xx = 0.0;
    double a, b;

    // Compute sums of logs
    for (int i = 0; i < N; i++)
    {
        sum_x += log(x[i]);
        sum_y += log(y[i]);
        sum_xy += log(x[i]) * log(y[i]);
        sum_xx += log(x[i]) * log(x[i]);
    }

    // Compute coefficients
    b = (N * sum_xy - sum_x * sum_y) / (N * sum_xx - sum_x * sum_x);
    a = exp((sum_y - b * sum_x) / N);

    // Print the result
    printf("y = %.2f * x^%.2f\n", a, b);

    return 0;
}
