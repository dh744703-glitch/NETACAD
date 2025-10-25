#include <stdio.h>
#include <string.h>
int main(void)
{
    int i;
    char IP[20]
    char IP1[5]
    char IP2[10]
    char IP3[20]
    int contador = 0;
    int contador1 = 0;
    int contador2 = 0;
    int contador3 = 0;
    int contadoractual = 0;
    scanf("%s", IP)
    int isError = 0;
    for (i=0; i<strlen(IP); i++)
    {
        char c = IP[i];
        if(c >= '0' && c <= '9' || c == '.')
        {
            if(c=='.')
            {
                if(contadoractual>3)
                {
                    isError = 1;
                    break;
                }
                contador++;
                if(contador>3)
                {
                    isError = 1;
                    break;
                }
                if(contador == 2)
                {
                    IP3[contador3] = c;
                    contador3++;
                }
                IP3[contador3] = c;
                contador3++;
                IP2[contador2] = c;
                contador2++;
            }
            contadoractual = 0;
        }
        else
        {
            if(contador==1)
            {
                IP3[contador3] = c;
                contador3++;
            }
            if(contador == 2)
            {
                IP3[contador3] = c;
                contador3++;
                IP2[contador2] = c;
                contador2++;
            }
            if(contador == 3)
            {
                IP3[contador3] = c;
                contador3++;
                IP2[contador2] = c;
                contador2++;
                IP1[contador1] = c;
                contador1++;
            }
            contadoractual++;
        }

    }
    else
    {
        isError = 1;
        break;
    }
    if(isError)
    puts

}