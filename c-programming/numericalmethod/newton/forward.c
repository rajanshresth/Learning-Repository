#include <stdio.h>
// Function to calculate factorial
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
// Function to perform Newton's Forward Interpolation
float newtonForwardInterpolation(int n, float x[], float y[], float x0)
{
    float y0 = y[0], u = (x0 - x[0]) / (x[1] - x[0]);
    float forward[n - 1][n - 1];
    // Calculating the forward difference table
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - j - 1; i++)
        {
            if (j == 0)
            {
                forward[i][j] = y[i + 1] - y[i];
            }
            else
            {
                forward[i][j] = forward[i + 1][j - 1] - forward[i][j - 1];
            }
        }
    }
    // Printing the forward difference table
    printf("Forward Difference Table:\n");
    printf("\n");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%.4f\t", forward[i][0]);
        for (int j = 1; j < n - i - 1; j++)
        {
            printf("%.4f\t", forward[i][j]);
        }
        printf("\n");
    }
    // Applying Newton's Forward Interpolation formula
    for (int j = 1; j < n; j++)
    {
        y0 += (u * forward[0][j - 1]) / factorial(j);
        u *= (x0 - x[j]) / (x[j + 1] - x[j]);
    }
    return y0;
}

int main()
{
    int n; // Number of data points
    printf("Enter the number of data points: ");
    scanf("%d", &n);
    float x[n], y[n]; // Arrays to store the data points
    // Taking input for x and y arrays
    for (int i = 0; i < n; i++)
    {
        printf("Enter x[%d] and y[%d]: ", i, i);
        scanf("%f %f", &x[i], &y[i]);
    }
    float x0; // Value of x for which we need to find y
    printf("Enter the value of x for which y is to be found: ");
    scanf("%f", &x0);
    // Calling the newtonForwardInterpolation function
    float y0 = newtonForwardInterpolation(n, x, y, x0);
    // Printing the result
    printf("The value of y at x = %.2f is %.2f\n", x0, y0);
    return 0;
}