#include <stdio.h>

int odd_ones(unsigned int x) {
  int verifica = 0;
  while (x) {
        verifica = verifica ^ (x & 1); // pega o último bit e faz XOR com paridade
        x = x >>1;           // desloca para a direita
    }
    return verifica;

}
int main() {
  printf("%x tem numero %s de bits\n",0x01010101,odd_ones(0x01010101) ? "impar":"par");
  printf("%x tem numero %s de bits\n",0x01030101,odd_ones(0x01030101) ? "impar":"par");
  return 0;
}