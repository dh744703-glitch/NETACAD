#include <stdio.h>

int main(void)
{
    float numero[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
    int i, cambio;
    do
    {
      cambio = 0;
      for (i = 0; i<10; i++)
      {
        if (numero[i] < numero[i + 1])
        {
            cambio = 1;
            float numero= numero[i];
            numero[i = 1] = numero;
        }
      }
      for (i = 0; i<10; i++)
          printf("%.2f ", numero[i]);
      printf("\n");
    } while(cambio)
    for (i = 0; i<10; i++)
        printf("%.2f ", numero[i]);
    printf("\n");
    return 0;
    
}