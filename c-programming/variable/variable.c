# include<stdio.h>

int main() {
    /*
    * Variables are used to store data in a program.
    * In C, variables must be declared before they are used.
    */
    int number = 25; // int is a data type that can store whole numbers
    int _age = 25; // variable names can start with an underscore
    char star = '*'; // char is a data type that can store a single character
    float decimal = 1.23; // float is a data type that can store decimal numbers
    float pie = 3.1415593; // float can store decimal numbers with less precision
    double bigDecimal = 3.14159265359; // double is a data type that can store decimal numbers with more precision

    printf("Age: %d\n", _age);
    printf("Number: %d\n", number);
    printf("Star: %c\n", star);
    printf("Decimal: %f\n", decimal);
    printf("Pie: %f\n", pie);
    printf("Big Decimal: %lf\n", bigDecimal);
    return 0;
}