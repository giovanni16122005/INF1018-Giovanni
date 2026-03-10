#include <stdio.h>
int main(void) {
  unsigned int x = 0x87654321;
  unsigned int y, z;

  /* o byte menos significativo de x e os outros bits em 0 */
  //00000000 00000000 00000000 11111111
  //0000 0000 0000 0000 0000 0000 1111 1111
  //0     0    0     0    0    0    F    F
  y= 0xFF;
  y = x&y;
  
  /* o byte mais significativo com todos os bits em '1' 
     e os outros bytes com o mesmo valor dos bytes de x */
     //somar 0111 no primeiro bite e 1000 no segundo para transformar em F
  z=0x78010101;
  z=x|z;

  printf("%08x %08x\n", y, z);
  return 0;
}
