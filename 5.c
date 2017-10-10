#include <stdio.h>

int main(int argc, char const *argv[]) {
  int numeros[10] = {1,2,3,4,5,6,7,8,9,0}, i, qtd = 0;

  for (i = 0; i < 10; i++) {
    if (numeros[i] %2 == 0) {
      qtd++;
    }
  }

  printf("%d\n", qtd);
  return 0;
}
