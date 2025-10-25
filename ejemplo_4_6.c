#include <stdio.h>
int main(void)
{
    int i;
    float numero[10] = {3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2};
    float numerogrande[10];
    float *recurso = numero;
    float *copiar = numerogrande;
    for (i = 0; i<10; i++)
    {
        *copiar = *recurso
        copiar++;
        recurso++
    }
    float *final = copiar;
    float *iniciar = numerogrande;
    float *medio = numerogrande+4;
    float *medio1 = medio+1;
    for (; medio>=inicio ; medio--, medio1++)
    {
        printf("%.1f\n", *medio);
        printf("%.1f\n", *medio1);
    }
    return 0;
}