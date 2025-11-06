#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int size;
    scanf("%d", &size);
    if(size>20)
    {
        puts("La matris es demasiado grande");
    }
    else
    {
        int**matris = (int**)malloc(sizeof(int*) * size);
        int i, j;
        for (i=0; i < size ; i++)
        {
            matris[i] = (int*)malloc(sizeof(int) * size);
        }
        for (i = 0; i<size; i++)
        {
            for (j = 0; j<size; j++)
            {
                matris[i][j] = (i + 1)*(j + 1);
            }
        }
        printf("%4c", ' ');
        for (j = 0; j<size; j++)
        {
            printf("%4d", j+1);
        }
        printf("\n");
        for (i = 0; i<size; i++)
        {
            printf("%4d", i+1);
            for (j = 0; j<size; j++)
            {
                printf("%4d", matris[i][j]);
            }
            printf("\n");
        }
        for(i = 0; i < size; i++)
        {
            free(matris[i]);
        }
        free(matris);
    }
    return 0;
}