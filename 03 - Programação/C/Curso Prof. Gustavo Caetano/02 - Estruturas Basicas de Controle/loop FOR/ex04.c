/*
4 – Números Pares de 1 a n

O usuário digita um número n, e o programa imprime todos os números pares de 1
até n.

Exemplo:
Saída esperada (se o usuário digitar 10):

Numeros pares de 1 ate 10:
2 4 6 8 10

*/

#include <stdio.h>

int main() {
  int n;

  printf("Digite um numero para saber os numeros pares de 1 a ele:\n");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      printf("%d ", i);
    }
  }
  printf("\n");

  return 0;
}