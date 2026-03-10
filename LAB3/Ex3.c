#include <stdio.h>

unsigned char switch_byte(unsigned char x) {
    char inverte1 = x << 4;
    char inverte2 = x >> 4;
    char junta = inverte1 | inverte2;
    return junta;
}

unsigned char rotate_left(unsigned char x, int n) {
    char empurra = x << n;
    char recolocaEmpurrados = x >> (8 - n);
    char junta =  empurra | recolocaEmpurrados;
    return junta;
}

int main() {
    unsigned char valor = 0xAB;
    printf("switch_byte(0x%X) = 0x%X\n", valor, switch_byte(valor));

    unsigned char x = 0x61; // 0110 0001
    printf("rotate_left(0x%X, 1) = 0x%X\n", x, rotate_left(x, 1));
    printf("rotate_left(0x%X, 2) = 0x%X\n", x, rotate_left(x, 2));
    printf("rotate_left(0x%X, 7) = 0x%X\n", x, rotate_left(x, 7));

    return 0;
}
