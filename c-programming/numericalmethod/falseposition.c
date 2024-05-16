#include <stdio.h>
#include <math.h>
double f(double x)
{
    // Define the function whose root is to be found
    return pow(x, 3) - x - 1;
}
double false_position(double a, double b, double tol, int max_iter)
{
    // Implement the false position method to find the root of the function
    double fa = f(a);
    double fb = f(b);
    double c, fc;
    int iter = 0;
    printf("Iteration\t a\t\t b\t\t c\t\t f(c)\n");
    do
    {
        c = (a * fb - b * fa) / (fb - fa);
        fc = f(c);
        printf("%d\t\t %lf\t %lf\t %lf\t %lf\n", iter, a, b, c, fc);
        if (fc * fa > 0)
        {
            a = c;
            fa = fc;
        }
        else
        {
            b = c;
            fb = fc;
        }
        iter++;
    } while (fabs(fc) > tol && iter < max_iter);
    return c;
}
int main()
{
    // Example usage
    double x, y;
    printf("enter the initial guess x: \n");
    scanf("%lf", &x);
    printf("enter the initialc guess y: \n");
    scanf("%lf", &y);
    if (f(x) * f(y) < 0)
    {
        double root = false_position(x, y, 0.0001, 100);
        printf("The root is: %f\n", root);
    }
    else
    {
        printf("wrong guess try again");
    }
    return 0;
}