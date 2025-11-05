#include <stdio.h>
int main(void)
{
    char IP1[4];
    char IP2[4];
    char IP3[4];
    char IP4[4];
    char IP[16];
    scanf("%s", IP1);
    scanf("%s", IP2);
    scanf("%s", IP3);
    scanf("%s", IP4);
    printf(IP, "%s.%s.%s.%s", IP1, IP2, IP3, IP4);
    printf("%s\n", IP);
    return 0;
}