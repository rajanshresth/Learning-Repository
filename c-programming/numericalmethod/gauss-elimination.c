#include <stdio.h>
#define N 3
int main()
{
    float A[N][N + 1] = {{3, 4, 5, 40},
                         {1, 1, 1, 9},
                         {2, -3, 4, 13}};

    for (int k = 0; k < N; k++)
    {
        for (int i = k + 1; i < N; i++)
        {
            float f = A[i][k] / A[k][k];
            for (int j = k + 1; j <= N; j++)
            {
                A[i][j] = A[i][j] - f * A[k][j];
            }
            A[i][k] = 0;
        }
    }
    // Backward substitution
    float x[N];
    for (int i = N - 1; i >= 0; i--)
    {
        x[i] = A[i][N]; // holding the constant term after the gauss elimination.
        for (int j = i + 1; j < N; j++)
        {
            x[i] = x[i] - A[i][j] * x[j];
        }
        x[i] = x[i] / A[i][i];
    }
    // Print solution
    printf("Solution:\n");
    for (int i = 0; i < N; i++)
    {
        printf("x%d = %f\n", i, x[i]);
    }
    return 0;
}