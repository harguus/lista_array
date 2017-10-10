#include <stdio.h>

#ifndef QUANTIDADE
#define QUANTIDADE 6
#endif

int main(int argc, char const *argv[]) {
  int numeros[QUANTIDADE], i, j;

  for (i = 0; i < QUANTIDADE; i++) {
    printf("Digite um número: ");
    scanf("%d", &numeros[i]);
  }

    printf("{");
  for (j = 0; j < QUANTIDADE; j++) {
    printf(" %d,", numeros[j]);
  }
    printf("}\n");

  return 0;
}
