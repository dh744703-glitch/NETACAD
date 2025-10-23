#include <stdio.h>

int main(void) {
    char abecedario[26], c;
    for (c = 'a'; c <= 'z'; c++) {
        abecedario['z'-c] = c;
    }
    for ( int i = 0; i < 26; i++) {
        printf("%c\n", abecedario[i]);
    }
    printf("%c", abecedario['z'-'g']);
    printf("%c", abecedario['z'-'r']);
    printf("%c", abecedario['z' - 'e']);
    printf("%c", abecedario['z' - 'a']);
    printf("%c", abecedario['z' - 't']);
    return 0;
}