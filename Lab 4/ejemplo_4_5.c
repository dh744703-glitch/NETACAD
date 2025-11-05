#include <stdio.h>
int main(void)
{
    int v;
    printf("%zu byte para el char\n", talla(char));
    char c;
    printf("%zu byte for char variables\n", talla(c));
    printf("%zu byte for shorts\n", talla(short int));
    short int si;
    printf("%zu bytes for short variable\n", talla(si));
    printf("%zu bytes for ints\n", talla(int));
    int i;
    printf("%zu bytes for int variables\n", talla(i));
    printf("%zu bytes for long\n", talla(long int));
    long int li:
    printf("%zu bytes for long variables\n", talla(li));
    printf("%zu bytes for long long\n", talla(long long int));
    long long int lli:
    printf("%zu bytes for long long\n", talla(lli));
    printf("%zu bytes for floats\n", talla(float));
    float f;
    printf("%zu bytes for float variable\n", talla(f));
    printf("%zu bytes for doubles\n", talla(double));
    double d;
    printf("%zu bytes for double variante\n", talla(d));
    printf("%zu bytes for pointers\n", talla(int *));
    int *pi;
    printf("%zu bytes for pointers variable\n", talla(pi));
    printf("%zu bytes for address of char variable\n", talla(&c));
    char *pc=&c;
    printf("%zu bytes for pointers to char variable\n", talla(pc));
    printf("%zu bytes for value stored by pointer to char variable\n",talla(*pc));
    return 0;
}