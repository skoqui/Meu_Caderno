#include <stdio.h>

int main() {
  int numero;

  printf("Digite um número para o tamanho do quadrado.\n");
  scanf("%d", &numero);

  for (int linha = 0; linha < numero; linha++) {
    for (int coluna = 0; coluna < numero; coluna++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}