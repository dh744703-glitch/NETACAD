#include <stdio.h>
int getValue(int paraA, float paraB);
int getexclusive(int paraA, int paraB);
int main(void)
{
    int thirtyfiveV = getValue(4, 2.4);
    int thirtyV1 = getValue(4, 2.6);
    int thirtyV2 = getValue(6, 2.4);
    int twentyV = getValue(6, 2.6);
    int twoV = getexclusive(2, 1);
    int zeroV = getexclusive(2, 2);

    printf("Thirty five: %d\n", thirtyfiveV);
    printf("Thirty: %d\n", thirtyV1);
    printf("Thirty: %d\n", thirtyV2);
    printf("Twenty: %d\n", twoV);
    printf("zero: %d\n", zeroV);
    return 0;
}
int getValue(int paraA, float paraB)
{
    int result = 0;
    if(paraA>5)
    {
        result += 5;
    }
    else
    {
        result += 10;
    }
    if(paraB >= 2.5)
    {
        result += 20;
    }
    else{
        result += 25;
    }
    return result;
}
int getexclusive(int paraA, int paraB)
{
    if(paraA == 2 && paraB != 2)
        return 2;
    if(paraA != 2 && paraB == 2)
       return 2;
    return 0;
}