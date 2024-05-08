#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Power
    float base = 2.0;
    float exponent = 3.0;
    printf("Power of %lf raised to %lf is %lf\n", base, exponent, pow(base, exponent));

    // Logarithmic
    float value = 10.0;
    printf("Logarithm of %lf is %lf\n", value, log(value));
    float base_log = 2.0;
    printf("Logarithm of %lf with base %lf is %lf\n", value, base_log, log(value) / log(base_log));

    // Square root
    printf("Square root of %lf is %lf\n", value, sqrt(value));

    // Absolute value
    int intValue = -5;
    printf("Absolute value of %d is %d\n", intValue, abs(intValue));

    // Ceil
    float ceilValue = 4.3;
    printf("Ceil of %lf is %lf\n", ceilValue, ceil(ceilValue));

    // Floor
    float floorValue = 4.8;
    printf("Floor of %lf is %lf\n", floorValue, floor(floorValue));

    // Round
    float roundValue = 4.5;
    printf("Round of %lf is %lf\n", roundValue, round(roundValue));

    // Random number
    srand(time(0)); // Seed for the random number generator
    printf("Random number: %d\n", rand());

    return 0;
}
