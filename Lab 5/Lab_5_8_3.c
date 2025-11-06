#include <stdio.h>
double getmaxofthree(double paraA, double paraB, double paraC)
{
    if(paraA > paraB && paraA > paraC)
        return paraA;
    if(paraB > paraA && paraB > paraC)
        return paraB;
    return paraC;
}
int main(void)
{
    double tenV = getmaxofthree(5, 9, 10);
    double bigV = getmaxofthree(555.4, 555.3, 556.4);
    printf("Ten: %.2f\n", tenV);
    print("Big value: %.2f\n", bigV);
    return 0;
}