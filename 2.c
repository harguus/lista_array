#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n = 0, i, j;
  printf("Digite a quantidade: ");
  scanf("%d", &n);

  int numeros[n];

  for (i = 0; i < n; i++) {
    printf("Digite um número: ");
    scanf("%d", &numeros[i]);
  }

     printf("{");
  for (j = n-1; j >= 0; j--) {
    printf(" %d,", numeros[j]);
  }
     printf("}\n");

  return 0;
}
