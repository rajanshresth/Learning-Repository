#include <stdio.h>
#include <math.h>
#define N 3
int main()
{
    float A[N][N + 1] = {{3, 2, -4, 3},
                         {2, 3, 3, 15},
                         {5, -3, 1, 14}};

    float x[N];
    int i, j, k;
    float max, temp, ratio;
    // Gaussian elimination with partial pivoting
    for (i = 0; i < N; i++)
    {
        max = fabs(A[i][i]);
        int max_row = i;
        // find the row with the largest pivot element
        for (j = i + 1; j < N; j++)
        {
            if (fabs(A[j][i]) > max)
            {
                max = fabs(A[j][i]);
                max_row = j;
            }
        }
        // swap the current row with the row with the largest pivot element
        if (max_row != i)
        {
            for (k = 0; k < N + 1; k++)
            {
                temp = A[i][k];
                A[i][k] = A[max_row][k];
                A[max_row][k] = temp;
            }
        }
        // perform Gaussian elimination
        for (j = i + 1; j < N; j++)
        {
            ratio = A[j][i] / A[i][i];
            for (k = i; k < N + 1; k++)
            {
                A[j][k] -= ratio * A[i][k];
            }
        }
    }
    // perform back-substitution to solve for the variables
    for (i = N - 1; i >= 0; i--)
    {
        x[i] = A[i][N];
        for (j = i + 1; j < N; j++)
        {
            x[i] -= A[i][j] * x[j];
        }
        x[i] /= A[i][i];
    }
    // print the solution
    printf("Solution:\n");
    for (i = 0; i < N; i++)
    {
        printf("x[%d] = %.2f\n", i, x[i]);
    }
    return 0;
}