#include <stdio.h>
double power(double, int);
int main(void)
{
    double twentyfiveV = power(5.0, 2);
    double piSquaredV = power(3.14159265, 2);
    double piCubedV = power(3.14159265, 3);
    double bigpower = power(1.23, 20);
    double millionV = power(10, 6);
    printf("Thirty five: %.4f\n", twentyfiveV);
    printf("Pi squared: %.4f\n", piSquaredV);
    printf("Pi cubed: %.4f\n", piCubedV);
    printf("Not so big number: %.4f\n", bigpower);
    printf("Million: %.4f\n", millionV);
    return 0;
}
double power(double base, int exponent)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}