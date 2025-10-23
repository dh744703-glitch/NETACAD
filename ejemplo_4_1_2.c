#include <stdio.h>

int main(void) {
    char abecedario[26], c;
    for (c = 'A'; c <= 'Z'; c++) {
        abecedario[c - 'A'] = c;
    }
    for ( c = 'z'; c > 'a'; c--) {
        printf("%c", abecedario[c - 'A']);
    }
    printf("%c", abecedario['g' - 'a']);
    printf("%c", abecedario['r' - 'a']);
    printf("%c", abecedario['e' - 'a']);
    printf("%c", abecedario['t' - 'a']);
    printf("%c", abecedario['a' - 'a']);
    return 0;
}