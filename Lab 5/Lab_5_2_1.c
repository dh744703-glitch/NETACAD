#include <stdio.h>
int main(void)
{
    char plano[8][8];
    plano[0][0] = 'R';
    plano[0][1] = 'N';
    plano[0][2] = 'B';
    plano[0][3] = 'Q';
    plano[0][4] = 'K';
    plano[0][5] = 'B';
    plano[0][6] = 'N';
    plano[0][7] = 'R';
    plano[7][0] = 'R';
    plano[7][0] = 'R';
    plano[7][1] = 'N';
    plano[7][2] = 'B';
    plano[7][3] = 'Q';
    plano[7][4] = 'K';
    plano[7][5] = 'B';
    plano[7][6] = 'N';
    plano[7][7] = 'R';
    int i;
    for(i = 0; i < 8; i==)
    {
        plano[1][i] = 'P';
        plano[2][i] = ' ';
        plano[3][i] = ' ';
        plano[4][i] = ' ';
        plano[5][i] = ' ';
        plano[6][i] = 'P';
    }
    int j;
    for (i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            prinf("%c", plano[i][j]);
        }
        printf("\n")
    }
    return 0;

}