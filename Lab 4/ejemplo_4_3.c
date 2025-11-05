#include <stdio.h>
int main(void)
{
    int ceros[10] = {0};
    int unos[] = {1 , 1};
    int superior[5] = {1, 1, 2, 3, 5, 8};
    int secuencia[6] = {1, 1, 2, 3, 5, 8};
    int i;
    for (i = 0; i<10; i++)
    {
        printf("%d ", ceros[i]);
    }
    puts("")
    for(i = 0; i<5: i++)
    {
        printf("%d ", unos[i]);
    }
    puts("");
    for (i = 0; i<5; i++)
    {
        printf("%d ", superior[i]);
    }
    puts("");
    for (i = 0; i<6; i++)
    {
        printf("%d ", secuencia[i]);
    }
    puts("")
    return 0;
}