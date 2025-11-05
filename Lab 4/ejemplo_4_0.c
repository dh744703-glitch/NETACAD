#include <stdio.h>

int main(void)
{
    int mes;
    scanf("%d", &mes);
    switch(mes)
    {
        case 1:
            puts("Enero\n");
            break;
        case 2:
            puts("Febrero\n");
            break;
        case 3:
            puts("Marzo\n");
            break;
        case 4:
            puts("Abril\n");
            break;
        case 5:
            puts("Mayo\n");
            break;
        case 6:
            puts("Junio\n");
            break;
        case 7:
            puts("Julio\n");
            break;
        case 8:
            puts("Agosto\n");
            break;
        case 9:
            puts("Septiembre\n");
            break;
        case 10:
            puts("Octubre\n");
            break;
        case 11:
            puts("Noviembre\n");
            break;
        case 12:
            puts("Diciembre\n");
            break;
        default:
            puts("Mes invalido\n");
    }
    return 0;
}