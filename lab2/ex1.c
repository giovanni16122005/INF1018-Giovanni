#include <stdio.h>

void dump (void *p, int n) {
    unsigned char *p1 = p;
    while (n--) {
        printf("%p - %02x\n", p1, *p1);
        p1++;
    }
}

int main(void) {

    printf("INT:\n");
    int i = 10000;
    dump(&i, sizeof(i));

    printf("\nLONG:\n");
    long l = 10000;
    dump(&l, sizeof(l));

    printf("\nSHORT:\n");
    short s = 10000;
    dump(&s, sizeof(s));

    printf("\nCHAR (caractere 'a'):\n");
    char c = 'a';
    dump(&c, sizeof(c));

    printf("\nCHAR (valor ASCII 97):\n");
    char c2 = 97;
    dump(&c2, sizeof(c2));

    printf("\nSTRING \"7509\":\n");
    char p[] = "7509";
    dump(p, sizeof(p));

    printf("\nASCII de 'A', ' ', '\\n' e '$':\n");
    char a = 'A';
    char espaco = ' ';
    char newline = '\n';
    char dolar = '$';

    dump(&a, sizeof(a));
    dump(&espaco, sizeof(espaco));
    dump(&newline, sizeof(newline));
    dump(&dolar, sizeof(dolar));

    return 0;
}
//Um int normalmente ocupa 4 bytes.
//No computador, os bytes estão em ordem little-endian.
