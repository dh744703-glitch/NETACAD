#include <stdio.h>
int getValue(int paraA, float paraB)
{
    int result = 0;
    if (paraA>10)
    {
        result += 2;
    }
    else
    {
        result += 1;
    }
    if (paraB>5.5)
    {
        result += 4;
    }
    else
    {
        result += 3;
    }
    return result;
}
int getOneorTwo(int paraM)
{
    if(paraM > 5)
        return 2;
    return 1;
}
int main(void)
{
    int cincoV = getValue(1, 5.6);
    int seisV = getValue(11, 5.6);
    int sieteV = getValue(11, 5.6) + getOneorTwo(0);
    int ochoV = getValue(11, 5.6) + getOneorTwo(6);
    int nueveV = getValue(11, 5.6) + getOneorTwo(0) + getOneorTwo(6);
    printf("cinco: %d\n", cincoV);
    printf("seis: %d\n",seisV);
    printf("siete: %d\n", sieteV);
    printf("ocho: %d\n", ochoV);
    printf("nueve: %d\n", nueveV);
    return 0;
}